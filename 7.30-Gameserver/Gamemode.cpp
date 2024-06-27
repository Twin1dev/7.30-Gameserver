#include "Game.h"
#include "GameUtils.h"

namespace Gamemode
{
	void SetupHooks()
	{
		LOG_F(INFO, "Setting up Gamemode hooks.");

		auto DefaultGameMode = StaticFindObject<AFortGameModeAthena>("/Script/FortniteGame.Default__FortGameModeAthena");
		if (DefaultGameMode == nullptr)
		{
			THROW_FATAL_ERROR("Failed to get default AFortGameModeAthena.");
			return;
		}

		HOOK_VIRTUAL_FUNCTION(DefaultGameMode->Vft, VFTIndex_ReadyToStartMatch, Hooks::hGamemode::Hook_ReadyToStartMatch, &Hooks::hGamemode::Org_ReadyToStartMatch);
		HOOK_VIRTUAL_FUNCTION(DefaultGameMode->Vft, VFTIndex_SpawnDefaultPawnFor, Hooks::hGamemode::Hook_SpawnDefaultPawnFor, NULL);
		HOOK_VIRTUAL_FUNCTION(DefaultGameMode->Vft, VFTIndex_HandleStartingNewPlayer, Hooks::hGamemode::Hook_HandleStartingNewPlayer, &Hooks::hGamemode::Org_HandleStartingNewPlayer);
	
		LOG_F(INFO, "Finished setting up Gamemode hooks.");
	}

	void ShowFoundation(ABuildingFoundation* BuildingFoundation)
	{
		if (BuildingFoundation == nullptr)
		{
			LOG_F(ERROR, "Failed to show foundation!");
			return;
		}

		LOG_F(INFO, std::format("Showing Foundation with Name: {}", BuildingFoundation->GetName()).c_str());

		BuildingFoundation->DynamicFoundationType = EDynamicFoundationType::Static;
		BuildingFoundation->bServerStreamedInLevel = true;
		BuildingFoundation->OnRep_ServerStreamedInLevel();

		BuildingFoundation->SetDynamicFoundationEnabled(true);
		BuildingFoundation->ForceNetUpdate();
		BuildingFoundation->FlushNetDormancy();
		BuildingFoundation->OnLevelShown();
		BuildingFoundation->OnLevelStreamedIn();
	}
	void ShowAllFoundations()
	{
		TArray<AActor*> AllBuildingFoundations;
		UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(
			UWorld::GetWorld(),
			ABuildingFoundation::StaticClass(),
			&AllBuildingFoundations);

		for (int i = 0; i < AllBuildingFoundations.Num(); ++i)
		{
			AActor* BuildingActor = AllBuildingFoundations[i];
			if (BuildingActor == nullptr)
			{
				LOG_F(ERROR, "Failed to find Building Foundation!");
				continue;
			}

			ABuildingFoundation* BuildingFoundation = static_cast<ABuildingFoundation*>(BuildingActor);
			std::string BuildingFoundationName = BuildingFoundation->GetName();

			// Check if the foundation matches list of blocked foundations.
			//
			bool bBlockFoundation = false;
			for (const std::string& BlockedFoundation : { "SLAB_1", "SLAB_3", "SLAB_BLANK", "PleasentParkDefault" })
			{
				if (BuildingFoundationName == BlockedFoundation)
				{
					bBlockFoundation = true;
					break;
				}
			}

			// Should block the foundation.
			//
			if (bBlockFoundation
				|| BuildingFoundation == nullptr
				|| BuildingFoundation->DynamicFoundationType != EDynamicFoundationType::StartDisabled)
			{
				continue;
			}

			Gamemode::ShowFoundation(BuildingFoundation);

			// Not sure if this code is relevant, but I don't
			// fully understand it so I will just leave it.
			//
			if (GetGameMode()->AIDirector == nullptr)
			{
				GetGameMode()->AIDirector = SpawnActor<AFortAIDirector>({});
			}
			else
			{
				GetGameMode()->AIDirector->Activate();
			}
		}
	}
	void Init(AFortGameModeAthena* GameMode)
	{
		GameMode->WarmupRequiredPlayerCount = 1;

		UFortPlaylistAthena* Playlist = StaticFindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Deimos/Playlist_Deimos_Solo_Winter.Playlist_Deimos_Solo_Winter");

		GetGameState()->CurrentPlaylistInfo.BasePlaylist = Playlist;
		GetGameState()->CurrentPlaylistInfo.OverridePlaylist = Playlist;
		GetGameState()->CurrentPlaylistInfo.PlaylistReplicationKey++;
		GetGameState()->CurrentPlaylistInfo.MarkArrayDirty();

		GetGameState()->OnRep_CurrentPlaylistInfo();

		UWorld::GetWorld()->NetDriver = Net::CreateNetDriver(UFortEngine::GetEngine(), GetWorld(), UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameNetDriver"));

		if (GetWorld()->NetDriver)
		{
			GetWorld()->NetDriver->World = GetWorld();
			GetWorld()->NetDriver->NetDriverName = UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameNetDriver");

			FString Err;
			FURL URL = FURL();
			URL.Port = ServerPort;

			Net::InitListen(GetWorld()->NetDriver, GetWorld(), URL, true, Err);
			Net::SetWorld(GetWorld()->NetDriver, GetWorld());

			Net::ServerReplicateActors = decltype(Net::ServerReplicateActors)(GetWorld()->NetDriver->ReplicationDriver->Vft[VFTIndex_ServerReplicateActors]);

			GameMode->GameSession->MaxPlayers = Playlist->MaxPlayers;
			GetGameState()->AirCraftBehavior = Playlist->AirCraftBehavior;
			GetGameState()->bIsLargeTeamGame = Playlist->bIsLargeTeamGame;
			GetGameState()->bIsTournamentMatch = Playlist->bIsTournament;

			GetWorld()->LevelCollections[0].NetDriver = GetWorld()->NetDriver;
			GetWorld()->LevelCollections[1].NetDriver = GetWorld()->NetDriver;

			if ((GetWorld()->NetDriver->MaxInternetClientRate < GetWorld()->NetDriver->MaxClientRate) && (GetWorld()->NetDriver->MaxInternetClientRate > 2500))
			{
				GetWorld()->NetDriver->MaxClientRate = GetWorld()->NetDriver->MaxInternetClientRate;
			}

			LOG_F(INFO, "Listening on Port %d!", ServerPort);
			SetConsoleTitleA(std::format("7.30 Gameserver | Listening on Port {}", ServerPort).c_str());
		}

		if (GetGameState()->CurrentPlaylistInfo.BasePlaylist->AdditionalLevels.Num() > 0)
		{
			for (int i = 0; i < GetGameState()->CurrentPlaylistInfo.BasePlaylist->AdditionalLevels.Num(); i++)
			{
				auto AdditionalLevel = GetGameState()->CurrentPlaylistInfo.BasePlaylist->AdditionalLevels[i];

				ULevelStreamingDynamic::GetDefaultObj()->LoadLevelInstanceBySoftObjectPtr(UWorld::GetWorld(), AdditionalLevel, {}, {}, nullptr);

				GetGameState()->AdditionalPlaylistLevelsStreamed.Add(AdditionalLevel.ObjectID.AssetPathName);

				LOG_F(INFO, std::format("Loading level {}", AdditionalLevel.ObjectID.AssetPathName.ToString()).c_str());
			}
		}

		GetGameState()->OnRep_AdditionalPlaylistLevelsStreamed();
		GetGameState()->OnFinishedStreamingAdditionalPlaylistLevel();

		for (int i = 0; i < UObject::GObjects->Num(); i++)
		{
			UObject* Object = UObject::GObjects->GetByIndex(i);

			if (Object == nullptr || Object->IsA(ABuildingFoundation::StaticClass()) == false)
				continue;

			std::string Path = UKismetSystemLibrary::GetDefaultObj()->GetPathName(Object).ToString();
			for (const std::string& WorldName : { "/Temp/Game/Athena/Maps/POI/Athena_POI_CommunityPark_003_77acf920", "/Temp/Game/Athena/Maps/POI/Athena_POI_CommunityPark_003_M_5c711338" })
			{
				if (Path.contains(WorldName))
				{
					Gamemode::ShowFoundation(static_cast<ABuildingFoundation*>(Object));
					continue;
				}
			}
		}

		GetGameMode()->bWorldIsReady = true;
	}
}

namespace Hooks::hGamemode
{
	bool Hook_ReadyToStartMatch(AFortGameModeAthena* GameMode)
	{
		static bool bShownFoundations = false;
		if (bShownFoundations == false)
		{
			bShownFoundations = true;
			Gamemode::ShowAllFoundations();
		}

		TArray<AActor*> WarmupActors;
		UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(
			UWorld::GetWorld(),
			AFortPlayerStartWarmup::StaticClass(),
			&WarmupActors);

		int WarmupSpots = WarmupActors.Num();
		WarmupActors.Free();
		if (WarmupSpots == 0)
		{
			return false;
		}

		static bool bInit = false;
		if (bInit == false)
		{
			bInit = true;
			Gamemode::Init(GameMode);
		}

		static bool bSetMapInfo = false;
		if (bSetMapInfo == false && GetGameState()->MapInfo)
		{
			bSetMapInfo = true;

			if (UClass* SupplyDropClass = StaticLoadObject<UClass>("/Game/Athena/SupplyDrops/AthenaSupplyDrop_Holiday.AthenaSupplyDrop_Holiday_C"))
			{
				GetGameState()->MapInfo->SupplyDropInfoList[0]->SupplyDropClass = SupplyDropClass;
			}
		}

		return Hooks::hGamemode::Org_ReadyToStartMatch(GameMode);
	}

	void Hook_HandleStartingNewPlayer(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* NewPlayer)
	{
		static bool bFirstPlayer = false;
		static bool bEnableVendingMachines = false;

		auto PlayerState = Cast<AFortPlayerStateAthena>(NewPlayer);

		if (!bFirstPlayer)
		{
			bFirstPlayer = true;

			GameUtils::Snow::SetSnow();

			GetGameState()->DefaultBattleBus = StaticLoadObject<UAthenaBattleBusItemDefinition>("/Game/Athena/Items/Cosmetics/BattleBuses/BBID_WinterBus.BBID_WinterBus");

			for (size_t i = 0; i < GetGameMode()->BattleBusCosmetics.Num(); i++)
			{
				GetGameMode()->BattleBusCosmetics[i] = GetGameState()->DefaultBattleBus;
			}

			// yes i know this is automatic but if we do this we can override the timer sooo

			float AutoBusStartSeconds = 120;
			float Duration = AutoBusStartSeconds;
			float EarlyDuration = Duration;
			float TimeSeconds = UGameplayStatics::GetDefaultObj()->GetTimeSeconds(UWorld::GetWorld());

			GetGameState()->WarmupCountdownEndTime = TimeSeconds + Duration;
			GameMode->WarmupCountdownDuration = Duration;

			GetGameState()->WarmupCountdownStartTime = TimeSeconds;
			GameMode->WarmupEarlyCountdownDuration = EarlyDuration;

			if (bEnableVendingMachines)
			{
				// FillVendingMachines();
			}
			else
			{
				auto VendingMachineClass = StaticFindObject<UClass>("/Game/Athena/Items/Gameplay/VendingMachine/B_Athena_VendingMachine.B_Athena_VendingMachine_C");

				TArray<AActor*> AllVendingMachines;
				UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(UWorld::GetWorld(), VendingMachineClass, &AllVendingMachines);

				for (int i = 0; i < AllVendingMachines.Num(); i++)
				{
					auto VendingMachine = (ABuildingItemCollectorActor*)AllVendingMachines[i];

					if (!VendingMachine)
						continue;

					VendingMachine->K2_DestroyActor();
				}

				AllVendingMachines.Free();
			}
		}

		NewPlayer->GetQuestManager(ESubGame::Athena)->bBlockStWQuestCompletion = true;

		if (!NewPlayer->MatchReport)
			NewPlayer->MatchReport = (UAthenaPlayerMatchReport*)UGameplayStatics::GetDefaultObj()->SpawnObject(UAthenaPlayerMatchReport::StaticClass(), NewPlayer);

		NewPlayer->MatchReport->bHasMatchStats = true;
		NewPlayer->MatchReport->bHasTeamStats = true;
		NewPlayer->MatchReport->bHasRewards = true;

		return Hooks::hGamemode::Org_HandleStartingNewPlayer(GameMode, NewPlayer);
	}

	APawn* Hook_SpawnDefaultPawnFor(AGameModeBase* GameMode, AController* NewPlayer, AActor* StartSpot)
	{
		auto Transform = StartSpot->GetTransform();

		static bool bFirstPlayer = false;

		if (!bFirstPlayer)
		{
			bFirstPlayer = true;
			GameUtils::Snow::SetSnow();
		}

		auto NewPawn = GameMode->SpawnDefaultPawnAtTransform(NewPlayer, Transform);

		for (int i = 0; i < GetGameMode()->StartingItems.Num(); i++)
		{
			auto NewItem = GetGameMode()->StartingItems[i];

			if (!NewItem.Item)
				continue;

			Inventory::GivePCItem((AFortPlayerController*)NewPlayer, NewItem.Item, NewItem.Count);
		}

		Inventory::Update((AFortPlayerController*)NewPlayer);

		Abilities::ApplySetToASC(((AFortPlayerState*)NewPlayer->PlayerState)->AbilitySystemComponent);

		return NewPawn;
	}
}
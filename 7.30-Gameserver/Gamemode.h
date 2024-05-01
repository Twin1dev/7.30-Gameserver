#pragma once


namespace Gamemode
{
	bool (*ReadyToStartMatch)(AFortGameModeAthena*);
	bool ReadyToStartMatchHook(AFortGameModeAthena* GameMode)
	{
		auto ShowFoundation = [](ABuildingFoundation* BuildingFoundation) -> void
			{
				if (!BuildingFoundation)
				{
					LOG("Failed to show foundation!");
					return;
				}

				LOG(std::format("Showing Foundation with Name: {}", BuildingFoundation->GetName()));

				BuildingFoundation->DynamicFoundationType = EDynamicFoundationType::Static;
				BuildingFoundation->bServerStreamedInLevel = true;
				BuildingFoundation->OnRep_ServerStreamedInLevel();

				BuildingFoundation->SetDynamicFoundationEnabled(true);
				BuildingFoundation->ForceNetUpdate();
				BuildingFoundation->FlushNetDormancy();
				BuildingFoundation->OnLevelShown();
				BuildingFoundation->OnLevelStreamedIn();
			};

		static bool bShownFoundations = false;

		if (!bShownFoundations)
		{
			bShownFoundations = true;
			TArray<AActor*> AllBuildingFoundations;
			UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(UWorld::GetWorld(), ABuildingFoundation::StaticClass(), &AllBuildingFoundations);

			for (int i = 0; i < AllBuildingFoundations.Num(); ++i)
			{
				auto BuildingActor = AllBuildingFoundations[i];

				if (!BuildingActor)
				{
					LOG("Failed to find Building Foundation!");
					continue;
				}

				auto BuildingFoundation = (ABuildingFoundation*)BuildingActor;

				static std::vector<std::string> FoundationsToBlock{ "SLAB_1", "SLAB_3", "SLAB_BLANK", "PleasentParkDefault" };
				
				bool bBlockFoundation = false;

				for (const std::string& FoundationName : FoundationsToBlock)
				{
					if (BuildingFoundation->GetName() == FoundationName)
						bBlockFoundation = true;
				}

				if (!BuildingFoundation || BuildingFoundation->DynamicFoundationType != EDynamicFoundationType::StartDisabled || bBlockFoundation)
					continue;
				
				ShowFoundation(BuildingFoundation);
			}
		}

		TArray<AActor*> WarmupActors;
		UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(UWorld::GetWorld(), AFortPlayerStartWarmup::StaticClass(), &WarmupActors);

		int WarmupSpots = WarmupActors.Num();

		WarmupActors.Free();

		if (WarmupSpots == 0)
		{
			return false;
		}

		static bool bInit = false;

		if (!bInit)
		{
			bInit = true;

			GameMode->WarmupRequiredPlayerCount = 1;

			UFortPlaylistAthena* Playlist = StaticFindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Deimos/Playlist_Deimos_Solo_Winter.Playlist_Deimos_Solo_Winter");

			GetGameState()->CurrentPlaylistInfo.BasePlaylist = Playlist;
			GetGameState()->CurrentPlaylistInfo.OverridePlaylist = Playlist;
			GetGameState()->CurrentPlaylistInfo.PlaylistReplicationKey++;
			GetGameState()->CurrentPlaylistInfo.MarkArrayDirty();

			GetGameState()->OnRep_CurrentPlaylistInfo();

			CreateNetDriver = decltype(CreateNetDriver)(MemoryUtils::SigScan("48 89 5C 24 10 57 48 83 EC ? 48 8B 81 D0 0B 00 00"));
			SetWorld = decltype(SetWorld)(BaseAddress() + 0x29cccc0);
			InitListen = decltype(InitListen)(BaseAddress() + 0x458c90);

			GetWorld()->NetDriver = CreateNetDriver(UFortEngine::GetEngine(), GetWorld(), UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameNetDriver"));

			if (GetWorld()->NetDriver)
			{
				GetWorld()->NetDriver->World = GetWorld();
				GetWorld()->NetDriver->NetDriverName = UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameNetDriver");

				FString Err;
				auto URL = FURL();
				URL.Port = 7777;

				InitListen(GetWorld()->NetDriver, GetWorld(), URL, true, Err);
				SetWorld(GetWorld()->NetDriver, GetWorld());

				ServerReplicateActors = decltype(ServerReplicateActors)(GetWorld()->NetDriver->ReplicationDriver->Vft[0x56]);

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
				
				LOG("Listening on Port 7777!");
				SetConsoleTitleA("7.30 Gameserver | Listening on Port 7777");
			}

			if (GetGameState()->CurrentPlaylistInfo.BasePlaylist->AdditionalLevels.Num() > 0)
			{
				for (int i = 0; i < GetGameState()->CurrentPlaylistInfo.BasePlaylist->AdditionalLevels.Num(); i++)
				{
					auto AdditionalLevel = GetGameState()->CurrentPlaylistInfo.BasePlaylist->AdditionalLevels[i];

					ULevelStreamingDynamic::GetDefaultObj()->LoadLevelInstanceBySoftObjectPtr(UWorld::GetWorld(), AdditionalLevel, {}, {}, nullptr);

					GetGameState()->AdditionalPlaylistLevelsStreamed.Add(AdditionalLevel.ObjectID.AssetPathName);

					LOG(std::format("Loading level {}", AdditionalLevel.ObjectID.AssetPathName.ToString()));
				}
			}

			GetGameState()->OnRep_AdditionalPlaylistLevelsStreamed();
			GetGameState()->OnFinishedStreamingAdditionalPlaylistLevel();

			std::vector<std::string> WorldsToStream { "/Temp/Game/Athena/Maps/POI/Athena_POI_CommunityPark_003_77acf920", "/Temp/Game/Athena/Maps/POI/Athena_POI_CommunityPark_003_M_5c711338" };

			for (int i = 0; i < UObject::GObjects->Num(); i++)
			{
				auto Object = UObject::GObjects->GetByIndex(i);

				if (!Object || !Object->IsA(ABuildingFoundation::StaticClass()))
					continue;

				auto Path = UKismetSystemLibrary::GetDefaultObj()->GetPathName(Object).ToString();

				for (const std::string& WorldName : WorldsToStream)
				{
					if (Path.contains(WorldName))
					{
						ShowFoundation((ABuildingFoundation*)Object);
						continue;
					}
				}
			}
			
			GetGameMode()->bWorldIsReady = true;
		}

		static bool bSetMapInfo = false;

		if (GetGameState()->MapInfo)
		{
			if (!bSetMapInfo)
			{
				bSetMapInfo = true;

				if (auto SupplyDropClass = StaticLoadObject<UClass>("/Game/Athena/SupplyDrops/AthenaSupplyDrop_Holiday.AthenaSupplyDrop_Holiday_C"))
					GetGameState()->MapInfo->SupplyDropInfoList[0]->SupplyDropClass = SupplyDropClass;
			}
		}

		return ReadyToStartMatch(GameMode);
	}
	
	APawn* SpawnDefaultPawnForHook(AGameModeBase* GameMode, AController* NewPlayer, AActor* StartSpot)
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

	static void (*HandleStartingNewPlayer)(AFortGameModeAthena*, AFortPlayerControllerAthena*);
	void HandleStartingNewPlayerHook(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* NewPlayer)
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

		return HandleStartingNewPlayer(GameMode, NewPlayer);
	}


	void HookAll()
	{
		auto GameModeDefault = StaticFindObject<AFortGameModeAthena>("/Script/FortniteGame.Default__FortGameModeAthena");

		LOG("Hooking gamemode");

		VirtualHook(GameModeDefault->Vft, 251, ReadyToStartMatchHook, (PVOID*)&ReadyToStartMatch);
		VirtualHook(GameModeDefault->Vft, 194, SpawnDefaultPawnForHook);
		VirtualHook(GameModeDefault->Vft, 200, HandleStartingNewPlayerHook, (PVOID*)&HandleStartingNewPlayer);
	}
}
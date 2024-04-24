#pragma once


namespace Gamemode
{
	bool (*ReadyToStartMatch)(AFortGameModeAthena*);
	bool ReadyToStartMatchHook(AFortGameModeAthena* GameMode)
	{
		TArray<AActor*> WarmupActors;
		UGameplayStatics::GetAllActorsOfClass(UWorld::GetWorld(), AFortPlayerStartWarmup::StaticClass(), &WarmupActors);

		int WarmupSpots = WarmupActors.Num();

		WarmupActors.Clear();

		if (WarmupSpots == 0)
		{
			return false;
		}

		static bool bInit = false;

		if (!bInit)
		{
			bInit = true;

			GameMode->WarmupRequiredPlayerCount = 1;

			UFortPlaylistAthena* Playlist = StaticFindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo");

			GetGameState()->CurrentPlaylistInfo.BasePlaylist = Playlist;
			GetGameState()->CurrentPlaylistInfo.OverridePlaylist = Playlist;
			GetGameState()->CurrentPlaylistInfo.PlaylistReplicationKey++;
			GetGameState()->CurrentPlaylistInfo.MarkArrayDirty();

			GetGameState()->OnRep_CurrentPlaylistInfo();

			CreateNetDriver = decltype(CreateNetDriver)(MemoryUtils::SigScan("48 89 5C 24 10 57 48 83 EC ? 48 8B 81 D0 0B 00 00"));
			SetWorld = decltype(SetWorld)(BaseAddress() + 0x29cccc0);
			InitListen = decltype(InitListen)(BaseAddress() + 0x458c90);

			UWorld::GetWorld()->NetDriver = CreateNetDriver(UFortEngine::GetEngine(), UWorld::GetWorld(), UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameNetDriver"));

			if (UWorld::GetWorld()->NetDriver)
			{
				UWorld::GetWorld()->NetDriver->World = UWorld::GetWorld();
				UWorld::GetWorld()->NetDriver->NetDriverName = UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameNetDriver");

				FString Err;
				auto URL = FURL();
				URL.Port = 7777;

				InitListen(UWorld::GetWorld()->NetDriver, UWorld::GetWorld(), URL, true, Err);
				SetWorld(UWorld::GetWorld()->NetDriver, UWorld::GetWorld());

				ServerReplicateActors = decltype(ServerReplicateActors)(UWorld::GetWorld()->NetDriver->ReplicationDriver->VTable[0x56]);

				GameMode->GameSession->MaxPlayers = Playlist->MaxPlayers;
				GetGameState()->AirCraftBehavior = Playlist->AirCraftBehavior;
				GetGameState()->bIsLargeTeamGame = Playlist->bIsLargeTeamGame;

				UWorld::GetWorld()->LevelCollections[0].NetDriver = UWorld::GetWorld()->NetDriver;
				UWorld::GetWorld()->LevelCollections[1].NetDriver = UWorld::GetWorld()->NetDriver;

				if ((UWorld::GetWorld()->NetDriver->MaxInternetClientRate < UWorld::GetWorld()->NetDriver->MaxClientRate) && (UWorld::GetWorld()->NetDriver->MaxInternetClientRate > 2500))
				{
					UWorld::GetWorld()->NetDriver->MaxClientRate = UWorld::GetWorld()->NetDriver->MaxInternetClientRate;
				}

				for (size_t i = 0; i < GetGameState()->CurrentPlaylistInfo.BasePlaylist->AdditionalLevels.Num(); i++)
				{
					GetGameState()->AdditionalPlaylistLevelsStreamed.Add(GetGameState()->CurrentPlaylistInfo.BasePlaylist->AdditionalLevels[i].ObjectID.AssetPathName);

					bool Success = false;
					ULevelStreamingDynamic::GetDefaultObj()->LoadLevelInstanceBySoftObjectPtr(UWorld::GetWorld(), GetGameState()->CurrentPlaylistInfo.BasePlaylist->AdditionalLevels[i], {}, {}, &Success);
				}

				GetGameState()->MapInfo->SupplyDropInfoList[0]->SupplyDropClass = StaticLoadObject<UClass>("/Game/Athena/SupplyDrops/AthenaSupplyDrop_Holiday.AthenaSupplyDrop_Holiday_C");

				GetGameState()->OnRep_AdditionalPlaylistLevelsStreamed();
				
				LOG("Listening on Port 7777!");
				SetConsoleTitleA("7.30 Gameserver | Listening on port 7777");
			}

			GetGameMode()->bWorldIsReady = true;
		}

		return ReadyToStartMatch(GameMode);
	}
	
	APawn* SpawnDefaultPawnForHook(AGameModeBase* GameMode, AController* NewPlayer, AActor* StartSpot)
	{
		auto Transform = StartSpot->GetTransform();

		auto NewPawn = GameMode->SpawnDefaultPawnAtTransform(NewPlayer, Transform);

		return NewPawn;
	}

	void HookAll()
	{
		auto GameModeDefault = StaticFindObject<AFortGameModeAthena>("/Script/FortniteGame.Default__FortGameModeAthena");

		LOG("Hooking gamemode");

		VirtualHook(GameModeDefault->VTable, 251, ReadyToStartMatchHook, (PVOID*)&ReadyToStartMatch);
		VirtualHook(GameModeDefault->VTable, 194, SpawnDefaultPawnForHook);
	}
}
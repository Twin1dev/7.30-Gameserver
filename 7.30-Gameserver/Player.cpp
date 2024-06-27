#include "Game.h"
#include "loguru.hpp"

namespace Player
{
	inline void (*OnRep_ZiplineState)(AFortPlayerPawn* Pawn);
	inline void* (*ApplyCharacterCustomization)(AFortPlayerState* PlayerState, AFortPawn* Pawn);
	inline void (*RemoveFromAlivePlayers)(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* PlayerController, APlayerState* PlayerState, APawn* FinisherPawn, UFortWeaponItemDefinition* FinishingWeapon, EDeathCause DeathCause, char);

	void SetupOffsets()
	{
		OnRep_ZiplineState = decltype(OnRep_ZiplineState)(Memory::GetBaseAddress() + Offset_OnRep_ZiplineState);
		ApplyCharacterCustomization = decltype(ApplyCharacterCustomization)(Memory::GetBaseAddress() + Offset_ApplyCharacterCustomization);
		RemoveFromAlivePlayers = decltype(RemoveFromAlivePlayers)(Memory::GetBaseAddress() + Offset_RemoveFromAlivePlayers);
	}
	void SetupHooks()
	{
		LOG_F(INFO, "Setting up Player hooks.");

		auto DefaultPC = AFortPlayerControllerAthena::GetDefaultObj();
		if (DefaultPC == nullptr)
		{
			THROW_FATAL_ERROR("Failed to get default AFortPlayerControllerAthena.");
			return;
		}

		HOOK_VIRTUAL_FUNCTION(DefaultPC->Vft, VFTIndex_ServerLoadingScreenDropped, Hooks::hPlayer::Hook_ServerLoadingScreenDropped, &Hooks::hPlayer::Org_ServerLoadingScreenDropped);
		HOOK_VIRTUAL_FUNCTION(DefaultPC->Vft, VFTIndex_ServerAcknowlegePossession, Hooks::hPlayer::Hook_ServerAcknowlegePossession, NULL);
		HOOK_VIRTUAL_FUNCTION(DefaultPC->Vft, VFTIndex_ServerExecuteInventoryItem, Hooks::hPlayer::Hook_ServerExecuteInventoryItem, NULL);

		HOOK_EXEC_FUNCTION(StaticFindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerAttemptInteract"), Hooks::hPlayer::Hook_ServerAttemptInteract, &Hooks::hPlayer::Org_ServerAttemptInteract);

		CREATE_HOOK(Offset_ClientOnPawnDied, Hooks::hPlayer::Hook_ClientOnPawnDied, &Hooks::hPlayer::Org_ClientOnPawnDied);
		CREATE_HOOK(Offset_ServerSendZiplineState, Hooks::hPlayer::Hook_ServerSendZiplineState, NULL);

		LOG_F(INFO, "Set up Player hooks.");
	}
}

namespace Hooks::hPlayer
{
	void Hook_ServerLoadingScreenDropped(AFortPlayerControllerAthena* Controller)
	{
		auto Pawn = (AFortPlayerPawn*)Controller->Pawn;
		auto PlayerState = (AFortPlayerStateAthena*)Controller->PlayerState;

		if (!Pawn || GetGameState()->GamePhase == EAthenaGamePhase::Aircraft)
			return Org_ServerLoadingScreenDropped(Controller);

		Player::ApplyCharacterCustomization((AFortPlayerState*)Controller->PlayerState, Pawn);

		auto PickaxeDefinition = Inventory::GivePCItem(Controller, ((AFortPlayerControllerAthena*)Controller)->CustomizationLoadout.Pickaxe->WeaponDefinition, 1);
		Inventory::Update(Controller);

		if (auto Pickaxe = Cast<UFortWeaponItemDefinition>(PickaxeDefinition))
		{
			auto Instance = Inventory::Finding::FindItemInstanceByGUID(Controller, PickaxeDefinition->ItemEntry.ItemGuid);

			Pawn->EquipWeaponDefinition(Pickaxe, Instance->ItemEntry.ItemGuid);
		}

		/*static bool bFirstPlayer = false;

		if (!bFirstPlayer)
		{
			bFirstPlayer = true;

			GameUtils::Snow::SetSnow();
		}*/

		return Org_ServerLoadingScreenDropped(Controller);
	}
	void Hook_ServerAttemptInteract(UObject* Context, FFrame* Stack, void* Ret)
	{
		auto Params = (Params::AFortPlayerController_ServerAttemptInteract_Params*)Stack->Locals;
		auto Controller = Cast<AFortPlayerControllerAthena>(Context);
		auto Pawn = Cast<AFortPlayerPawnAthena>(Controller->Pawn);
		auto PlayerState = Cast<AFortPlayerStateAthena>(Controller->PlayerState);

		if (!Params->ReceivingActor)
			return;

		if (Params->ReceivingActor->IsA(ABuildingContainer::StaticClass()))
		{
			auto BuildingContainer = (ABuildingContainer*)Params->ReceivingActor;
			auto Name = BuildingContainer->SearchLootTierGroup;

			// TODO: put this in picklootdrops because this looks beyond sped

			auto Treasure = UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"Loot_Treasure");
			auto Ammo = UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"Loot_Ammo");

			if (Name == Treasure)
				Name = UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"Loot_AthenaTreasure");

			if (Name == Ammo)
				Name = UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"Loot_AthenaTreasure");

			auto LootDrops = Looting::PickLootDrops(Name);

			FVector LocationToSpawnLoot = Params->ReceivingActor->K2_GetActorLocation() + Params->ReceivingActor->GetActorRightVector() * 70.0f + FVector{ 0,0,50 };

			for (auto& LootDrop : LootDrops)
			{
				SpawnPickup(LootDrop.ItemDefinition, LocationToSpawnLoot, LootDrop.Count/* Cast<UFortWeaponRangedItemDefinition>(LootDrop.ItemDefinition) ? GetClipSize((UFortWeaponRangedItemDefinition*)LootDrop.ItemDefinition) : 0*/);
			}

			BuildingContainer->bAlreadySearched = true;
			BuildingContainer->SearchBounceData.SearchAnimationCount++;
			BuildingContainer->BounceContainer();
			BuildingContainer->OnRep_bAlreadySearched();

			BuildingContainer->ForceNetUpdate(); // literally does nothing unless i call

			//Quests::HandleEvent(Controller, EFortQuestObjectiveStatEvent::Interact, EFortQuestObjectiveItemEvent::Max_None, Pawn, Params->ReceivingActor);
		}

		if (auto Vehicle = Cast<AFortAthenaVehicle>(Params->ReceivingActor))
		{
			auto GetVehicleWeaponDefinition = [](AFortAthenaVehicle* Vehicle, AFortPlayerPawn* Pawn) -> UFortWeaponItemDefinition*
				{
					static auto TurretWeaponItemDefinition = StaticFindObject<UFortWeaponItemDefinition>("/Game/Athena/Items/Traps/MountedTurret/MountedTurret_Weapon.MountedTurret_Weapon");
					static auto FerretWeaponItemDefinition = StaticFindObject<UFortWeaponItemDefinition>("/Game/Athena/Items/Weapons/Ferret_Weapon.Ferret_Weapon");

					UFortWeaponItemDefinition* VehicleWeapon = nullptr;

					auto SeatIdx = Vehicle->FindSeatIndex(Pawn);
					auto VehicleName = Vehicle->GetName();

					VehicleWeapon = (VehicleName.contains("Ferret") && SeatIdx == 0) ? FerretWeaponItemDefinition : TurretWeaponItemDefinition;

					if (VehicleWeapon)
						return VehicleWeapon;

					/*
					int GetWhatever(auto thing)
					return thing->num;

					*/
				};

			auto Weapon = GetVehicleWeaponDefinition(Vehicle, Pawn);
		}

		return Org_ServerAttemptInteract(Context, Stack, Ret);
	}
	void Hook_ClientOnPawnDied(AFortPlayerControllerAthena* DeadController, FFortPlayerDeathReport DeathReport)
	{
		auto DeadPawn = Cast<AFortPlayerPawnAthena>(DeadController->Pawn);
		auto DeadPlayerState = Cast<AFortPlayerStateAthena>(DeadController->PlayerState);
		auto KillerPawn = Cast<AFortPlayerPawnAthena>(DeathReport.KillerPawn);
		auto KillerPlayerState = Cast<AFortPlayerStateAthena>(DeathReport.KillerPlayerState);

		if (!DeadPawn || DeadController || DeadPlayerState)
			return;

		FDeathInfo DeathInfo;
		DeathInfo.bDBNO = DeadPawn->bWasDBNOOnDeath;
		DeathInfo.DeathCause = DeadPlayerState->ToDeathCause(DeathReport.Tags, DeathInfo.bDBNO);
		DeathInfo.bInitialized = true;
		DeathInfo.DeathLocation = DeadPawn->K2_GetActorLocation();
		DeathInfo.Distance = DeathInfo.DeathCause == EDeathCause::FallDamage ? DeadPawn->LastFallDistance : (KillerPawn ? KillerPawn->GetDistanceTo(DeadPawn) : 0); // idk why i do this, got this shit from forge like 8 months ago and for some reason i always add it
		DeathInfo.FinisherOrDowner = KillerPlayerState;

		DeadPlayerState->DeathInfo = DeathInfo;
		DeadPlayerState->OnRep_DeathInfo();

		if (KillerPlayerState && (KillerPlayerState != DeadPlayerState))
		{
			KillerPlayerState->KillScore++;
			KillerPlayerState->TeamKillScore++;

			KillerPlayerState->ClientReportKill(DeadPlayerState);
			KillerPlayerState->ClientReportTeamKill(KillerPlayerState->TeamKillScore); // i have no idea of TeamSkillScore is equal to kills but for now i'll do it

			LOG_F(INFO, std::string("TeamKillScore: " + std::to_string(KillerPlayerState->TeamKillScore)).c_str());

			KillerPlayerState->OnRep_TeamKillScore();
			KillerPlayerState->OnRep_Kills();
		}

		if (KillerPawn && (KillerPawn != DeadPawn))
		{
			if (KillerPawn->GetHealth() < KillerPawn->GetMaxHealth())
				KillerPawn->SetHealth(KillerPawn->GetHealth() + (KillerPawn->GetMaxHealth() - KillerPawn->GetHealth()));

			if (KillerPawn->GetHealth() == KillerPawn->GetMaxHealth())
				KillerPawn->SetShield(KillerPawn->GetShield() + 50);

			auto AbilitySystemComponent = KillerPlayerState->AbilitySystemComponent;

			AbilitySystemComponent->NetMulticast_InvokeGameplayCueAdded(FGameplayTag(UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameplayCue.Shield.PotionConsumed")), FPredictionKey(), AbilitySystemComponent->MakeEffectContext());
			AbilitySystemComponent->NetMulticast_InvokeGameplayCueExecuted(FGameplayTag(UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameplayCue.Shield.PotionConsumed")), FPredictionKey(), AbilitySystemComponent->MakeEffectContext());
		}

		// pretty sure you only do this when the whole team is dead, so

		if (DeadPlayerState->IsSquadDead())
		{
			DeadPlayerState->Place = GetGameState()->TeamsLeft;
			DeadPlayerState->OnRep_Place();

			DeadController->MatchReport->TeamStats.Place = DeadPlayerState->Place;
			DeadController->MatchReport->TeamStats.TotalPlayers = GetGameState()->TotalPlayers;
		}

		for (int i = 0; i < 20; i++) // test
		{
			int Stat = 69;
			Stat++;

			DeadController->MatchReport->MatchStats.Stats[i] = Stat;
		}

		DeadController->MatchReport->bHasMatchStats = true;
		DeadController->MatchReport->bHasTeamStats = true;
		DeadController->MatchReport->bHasRewards = true;
		DeadController->RecordMatchStats();
		DeadController->RecordTeamStats();

		DeadController->ClientSendMatchStatsForPlayer(DeadController->MatchReport->MatchStats);
		DeadController->ClientSendTeamStatsForPlayer(DeadController->MatchReport->TeamStats);
		DeadController->ClientSendEndBattleRoyaleMatchForPlayer(true, DeadController->MatchReport->EndOfMatchResults);

		if (KillerPlayerState->Place == 1)
		{
			//loop thru squad members (im lazy)


			GetGameState()->WinningPlayerState = KillerPlayerState;
			GetGameState()->WinningTeam = KillerPlayerState->PlayerTeam->Index; // check this twin plerase
			GetGameState()->OnRep_WinningPlayerState();
			GetGameState()->OnRep_WinningTeam();
		}

		UFortWeaponItemDefinition* KillerWeaponDefinition = nullptr;

		if (auto ProjectileBase = Cast<AFortProjectileBase>(DeathReport.DamageCauser))
			KillerWeaponDefinition = Cast<AFortWeapon>(ProjectileBase->GetOwner())->WeaponData;

		if (auto Weapon = Cast<AFortWeapon>(DeathReport.DamageCauser))
			KillerWeaponDefinition = Weapon->WeaponData;

		Player::RemoveFromAlivePlayers(GetGameMode(), DeadController, (KillerPlayerState == DeadPlayerState ? nullptr : KillerPlayerState), KillerPawn, KillerWeaponDefinition ? KillerWeaponDefinition : nullptr, DeathInfo.DeathCause, 0);
		return Org_ClientOnPawnDied(DeadController, DeathReport);
	}

	void Hook_ServerAcknowlegePossession(APlayerController* Controller, APawn* Pawn)
	{
		Controller->AcknowledgedPawn = Pawn;

		Player::ApplyCharacterCustomization((AFortPlayerState*)Controller->PlayerState, (AFortPawn*)Pawn);

		Pawn->ForceNetUpdate();
		Controller->PlayerState->ForceNetUpdate();
		Controller->ForceNetUpdate();
	}
	void Hook_ServerExecuteInventoryItem(AFortPlayerControllerAthena* Controller, FGuid ItemGuid)
	{
		if (!Controller || Controller->IsInAircraft())
			return;

		auto Instance = Inventory::Finding::FindItemInstanceByGUID(Controller, ItemGuid);
		auto ItemDef = Instance->ItemEntry.ItemDefinition;

		if (!ItemDef)
			return;

		auto Pawn = Cast<AFortPlayerPawn>(Controller->Pawn);

		if (!Pawn)
			return;

		if (auto Weapon = Cast<UFortWeaponItemDefinition>(ItemDef))
		{
			Pawn->EquipWeaponDefinition(Weapon, Instance->ItemEntry.ItemGuid);
		}
	}
	void Hook_ServerSendZiplineState(AFortPlayerPawn* Pawn, FZiplinePawnState InZiplineState)
	{
		if (InZiplineState.AuthoritativeValue > Pawn->ZiplineState.AuthoritativeValue)
		{
			Pawn->ZiplineState = InZiplineState;

			if (!Pawn->ZiplineState.bIsZiplining)
			{
				if (Pawn->ZiplineState.bJumped)
				{
					float ZiplineJumpDampening = -0.5f;
					float ZiplineJumpStrength = 1500.f;

					auto CharacterMovement = Pawn->CharacterMovement;
					auto Velocity = CharacterMovement->Velocity;

					FVector LaunchVelocity = { -750, -750, ZiplineJumpStrength };

					if (ZiplineJumpDampening * Velocity.X >= -750.f)
					{
						LaunchVelocity.X = fminf(ZiplineJumpDampening * Velocity.X, 750);
					}
					if (ZiplineJumpDampening * Velocity.Y >= -750.f)
					{
						LaunchVelocity.Y = fminf(ZiplineJumpDampening * Velocity.Y, 750);
					}

					Pawn->LaunchCharacter(LaunchVelocity, false, false);
				}
			}
		}

		Player::OnRep_ZiplineState(Pawn);
	}
}
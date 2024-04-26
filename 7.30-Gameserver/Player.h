#pragma once

namespace Player
{
	// Use AFortPlayerControllerAthena for most Functions since they made most important stuff in that class

	void ServerAcknowlegePossessionHook(APlayerController* Controller, APawn* Pawn)
	{
		Controller->AcknowledgedPawn = Pawn;

		static void* (*ApplyCharacterCustomization)(AFortPlayerState * PlayerState, AFortPawn * Pawn) = decltype(ApplyCharacterCustomization)(BaseAddress() + 0x146b740);

		ApplyCharacterCustomization((AFortPlayerState*)Controller->PlayerState, (AFortPawn*)Pawn);

		Pawn->ForceNetUpdate();
		Controller->PlayerState->ForceNetUpdate();
		Controller->ForceNetUpdate();
	}

	void (*ServerLoadingScreenDropped)(AFortPlayerControllerAthena*);
	void ServerLoadingScreenDroppedHook(AFortPlayerControllerAthena* Controller)
	{
		auto Pawn = (AFortPlayerPawn*)Controller->Pawn;
		auto PlayerState = (AFortPlayerState*)Controller->PlayerState;

		if (!Pawn || GetGameState()->GamePhase == EAthenaGamePhase::Aircraft)
			return ServerLoadingScreenDropped(Controller);

		static void* (*ApplyCharacterCustomization)(AFortPlayerState * PlayerState, AFortPawn * Pawn) = decltype(ApplyCharacterCustomization)(BaseAddress() + 0x146b740);

		ApplyCharacterCustomization((AFortPlayerState*)Controller->PlayerState, Pawn);

		Pawn->ForceNetUpdate();
		PlayerState->ForceNetUpdate();
		Controller->ForceNetUpdate();

		Inventory::GivePCItem(Controller, ((AFortPlayerControllerAthena*)Controller)->CustomizationLoadout.Pickaxe->WeaponDefinition, 1);
		Inventory::Update(Controller);

		static bool bFirstPlayer = false;

		if (!bFirstPlayer)
		{
			bFirstPlayer = true;

			GameUtils::Snow::SetSnow();
		}

		Controller->GetQuestManager(ESubGame::Athena)->bBlockStWQuestCompletion = true;

		if (!Controller->MatchReport)
			Controller->MatchReport = (UAthenaPlayerMatchReport*)UGameplayStatics::GetDefaultObj()->SpawnObject(UAthenaPlayerMatchReport::StaticClass(), Controller);

		Controller->MatchReport->bHasMatchStats = true;
		Controller->MatchReport->bHasTeamStats = true;
		Controller->MatchReport->bHasRewards = true;

		return ServerLoadingScreenDropped(Controller);
	}

	void ServerExecuteInventoryItemHook(AFortPlayerControllerAthena* Controller, FGuid ItemGuid)
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

	void HookAll()
	{
		auto PlayerControllerDefault = AFortPlayerControllerAthena::GetDefaultObj();

		VirtualHook(PlayerControllerDefault->Vft, 597, ServerLoadingScreenDroppedHook, (PVOID*)&ServerLoadingScreenDropped);
		VirtualHook(PlayerControllerDefault->Vft, 261, ServerAcknowlegePossessionHook);
		VirtualHook(PlayerControllerDefault->Vft, 500, ServerExecuteInventoryItemHook);
	}
}
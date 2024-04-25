#pragma once

namespace Player
{
	void ServerAcknowlegePossessionHook(APlayerController* Controller, APawn* Pawn)
	{
		Controller->AcknowledgedPawn = Pawn;

		static void* (*ApplyCharacterCustomization)(AFortPlayerState * PlayerState, AFortPawn * Pawn) = decltype(ApplyCharacterCustomization)(BaseAddress() + 0x146b740);

		ApplyCharacterCustomization((AFortPlayerState*)Controller->PlayerState, (AFortPawn*)Pawn);

		Pawn->ForceNetUpdate();
		Controller->PlayerState->ForceNetUpdate();
		Controller->ForceNetUpdate();
	}

	void (*ServerLoadingScreenDropped)(AFortPlayerController*);
	void ServerLoadingScreenDroppedHook(AFortPlayerController* Controller)
	{
		auto Pawn = (AFortPlayerPawn*)Controller->Pawn;

		if (!Pawn || GetGameState()->GamePhase == EAthenaGamePhase::Aircraft)
			return ServerLoadingScreenDropped(Controller);

		static void* (*ApplyCharacterCustomization)(AFortPlayerState* PlayerState, AFortPawn* Pawn) = decltype(ApplyCharacterCustomization)(BaseAddress() + 0x146b740);
		
		ApplyCharacterCustomization((AFortPlayerState*)Controller->PlayerState, Pawn);

		Pawn->ForceNetUpdate();
		Controller->PlayerState->ForceNetUpdate();
		Controller->ForceNetUpdate();

		Inventory::GivePCItem(Controller, ((AFortPlayerControllerAthena*)Controller)->CustomizationLoadout.Pickaxe->WeaponDefinition, 1);
		Inventory::Update(Controller);

		return ServerLoadingScreenDropped(Controller);
	}

	void HookAll()
	{
		auto PlayerControllerDefault = AFortPlayerControllerAthena::GetDefaultObj();

		VirtualHook(PlayerControllerDefault->Vft, 597, ServerLoadingScreenDroppedHook, (PVOID*)&ServerLoadingScreenDropped);
		VirtualHook(PlayerControllerDefault->Vft, 261, ServerAcknowlegePossessionHook);

	}
}
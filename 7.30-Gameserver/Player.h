#pragma once

namespace Player
{
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

		return ServerLoadingScreenDropped(Controller);
	}

	void HookAll()
	{
		auto PlayerControllerDefault = AFortPlayerControllerAthena::GetDefaultObj();

		VirtualHook(PlayerControllerDefault->VTable, 597, ServerLoadingScreenDroppedHook, (PVOID*)&ServerLoadingScreenDropped);
	}
}
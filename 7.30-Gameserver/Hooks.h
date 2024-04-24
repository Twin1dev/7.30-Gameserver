#pragma once

namespace Hooks
{
	static inline void (*KickPlayer)(AGameSession*, AController*);
	static void KickPlayerHook(AGameSession*, AController*) { return; }

	void StartServer()
	{
		CREATEHOOK(BaseAddress() + 0x2cbfc20, GetNetModeWorld, nullptr);

		CREATEHOOK(BaseAddress() + 0x28b0d20, KickPlayerHook, &KickPlayer);

		*(bool*)(BaseAddress() + 0x5a14019) = false; // GIsClient

		UFortEngine::GetEngine()->GameInstance->LocalPlayers.Remove(0);

		UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::GetWorld(), L"open Athena_Terrain", nullptr);

		MemoryUtils::NullFunction(BaseAddress() + 0x1014cc0); // changegamesession
		MemoryUtils::NullFunction(BaseAddress() + 0x1414610);
		MemoryUtils::NullFunction(BaseAddress() + 0x1014cc0);

		Player::HookAll();
		Gamemode::HookAll();
		Abilities::HookAll();

		CREATEHOOK(BaseAddress() + 0x29ce460, TickFlushHook, &TickFlush);

		MH_EnableHook(MH_ALL_HOOKS);
	}
}
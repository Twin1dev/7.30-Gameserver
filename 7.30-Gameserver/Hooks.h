#pragma once

namespace Hooks
{
	static inline void (*KickPlayer)(AGameSession*, AController*);
	static void KickPlayerHook(AGameSession*, AController*) { return; }

	void StartServer()
	{
		CREATEHOOK(BaseAddress() + 0x2cbfc20, GetNetModeWorld, nullptr);

		CREATEHOOK(BaseAddress() + 0xa59280, DispatchRequestHook, &DispatchRequest);

		CREATEHOOK(BaseAddress() + 0x28b0d20, KickPlayerHook, &KickPlayer);

		*(bool*)(BaseAddress() + 0x5a14019) = false; // GIsClient

		UFortEngine::GetEngine()->GameInstance->LocalPlayers.Remove(0);

		UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::GetWorld(), L"open Athena_Terrain", nullptr);

		MemoryUtils::NullFunction(BaseAddress() + 0x1014cc0); // changegamesession
		MemoryUtils::NullFunction(MemoryUtils::SigScan("48 89 5C 24 ? 57 48 83 EC 30 48 8B 41 28 48 8B DA 48 8B F9 48 85 C0 74 34 48 8B 4B 08 48 8D")); // widget class

		Player::HookAll();
		Gamemode::HookAll();
		Abilities::HookAll();

		CREATEHOOK(BaseAddress() + 0x29ce460, TickFlushHook, &TickFlush);

		MH_EnableHook(MH_ALL_HOOKS);
	}
}
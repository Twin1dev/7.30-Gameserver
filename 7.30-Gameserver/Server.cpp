#include "Server.h"
#include "Game.h"

namespace Server
{
	void SetupBytePatches()
	{
		LOG_F(INFO, "Patching bytes.");

		if (false == Memory::BytePatch(reinterpret_cast<PVOID>(Memory::GetBaseAddress() + Offset_GIsClient), 0))
		{
			THROW_FATAL_ERROR("Failed to patch GIsClient.");
			return;
		}

		if (false == Memory::MakeFuncRetn(reinterpret_cast<PVOID>(Memory::GetBaseAddress() + Offset_ChangeGameSession)))
		{
			THROW_FATAL_ERROR("Failed to patch ChangeGameSession.");
			return;
		}

		uintptr_t WidgetClass = Memory::SigScan(Sig_WidgetClass);
		if (false == Memory::MakeFuncRetn(reinterpret_cast<PVOID>(WidgetClass)))
		{
			THROW_FATAL_ERROR("Failed to patch WidgetClass.");
			return;
		}

		LOG_F(INFO, "Patched bytes.");
	}
	void SetupOffsets()
	{
		LOG_F(INFO, "Setting up offsets.");

		StaticFindObject_ = decltype(StaticFindObject_)(Memory::GetBaseAddress() + Offset_StaticFindObject);
		StaticLoadObject_ = decltype(StaticLoadObject_)(Memory::GetBaseAddress() + Offset_StaticLoadObject);

		Net::SetupOffsets();
		Player::SetupOffsets();
		Abilities::SetupOffsets();

		LOG_F(INFO, "Set up offsets.");
	}
	void SetupHooks()
	{
		LOG_F(INFO, "Setting up hooks.");

		CREATE_HOOK(Offset_KickPlayer, Hooks::KickPlayerHook, NULL);

		Net::SetupHooks();
		Player::SetupHooks();
		Gamemode::SetupHooks();
		Abilities::SetupHooks();

		LOG_F(INFO, "Set up hooks.");
	}

	void StartServer()
	{
		LOG_F(INFO, "Starting server.");
		LOG_F(INFO, "Base address: 0x%p", Memory::GetBaseAddress());

		SetupOffsets();
		SetupHooks();
		SetupBytePatches();

		MH_EnableHook(MH_ALL_HOOKS);

		static_cast<UFortEngine*>(UFortEngine::GetEngine())->GameInstance->LocalPlayers.Remove(0);
		UKismetSystemLibrary::GetDefaultObj()->ExecuteConsoleCommand(UWorld::GetWorld(), L"open Athena_Terrain", nullptr);

		LOG_F(INFO, "Started server.");
	}
}
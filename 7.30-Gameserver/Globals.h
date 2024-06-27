#pragma once
#include <cstdio>

constexpr int ServerPort = 7777;

constexpr int VFTIndex_ServerLoadingScreenDropped = 597;
constexpr int VFTIndex_ServerAcknowlegePossession = 261;
constexpr int VFTIndex_ServerExecuteInventoryItem = 500;
constexpr int VFTIndex_ReadyToStartMatch = 251;
constexpr int VFTIndex_SpawnDefaultPawnFor = 194; // name likely unfinished
constexpr int VFTIndex_HandleStartingNewPlayer = 200;
constexpr int VFTIndex_InternalServerTryActivateAbility = 244;
constexpr int VFTIndex_ServerReplicateActors = 86;

constexpr uintptr_t Offset_GIsClient = 0x5a14019;

constexpr uintptr_t Offset_StaticFindObject = 0x1b37670;
constexpr uintptr_t Offset_StaticLoadObject = 0x1b387d0;
constexpr uintptr_t Offset_GetNetModeWorld = 0x2cbfc20;
constexpr uintptr_t Offset_DispatchRequest = 0xa59280;
constexpr uintptr_t Offset_KickPlayer = 0x28b0d20;
constexpr uintptr_t Offset_ChangeGameSession = 0x1014cc0;
constexpr uintptr_t Offset_TickFlush = 0x29ce460;
constexpr uintptr_t Offset_ClientOnPawnDied = 0x17aad60;
constexpr uintptr_t Offset_ServerSendZiplineState = 0x13b8660;
constexpr uintptr_t Offset_SpecConstructor = 0x6b59e0;
constexpr uintptr_t Offset_GiveAbility = 0x68ed10;
constexpr uintptr_t Offset_InternalTryActivateAbility = 0x6905a0;
constexpr uintptr_t Offset_SetWorld = 0x29cccc0;
constexpr uintptr_t Offset_InitListen = 0x458c90;
constexpr uintptr_t Offset_OnRep_ZiplineState = 0x13b8660;
constexpr uintptr_t Offset_ApplyCharacterCustomization = 0x146b740;
constexpr uintptr_t Offset_RemoveFromAlivePlayers = 0xd2a5c0;

constexpr const char* Sig_WidgetClass = "48 89 5C 24 ? 57 48 83 EC 30 48 8B 41 28 48 8B DA 48 8B F9 48 85 C0 74 34 48 8B 4B 08 48 8D";
constexpr const char* Sig_CreateNetDriver = "48 89 5C 24 10 57 48 83 EC ? 48 8B 81 D0 0B 00 00";
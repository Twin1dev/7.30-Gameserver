#include "Game.h"
#include "GameUtils.h"

namespace Net
{
    void SetupOffsets()
    {
        CreateNetDriver = decltype(CreateNetDriver)(Memory::SigScan(Sig_CreateNetDriver));
        if (CreateNetDriver == nullptr)
        {
            THROW_FATAL_ERROR("Failed to find CreateNetDriver.");
            return;
        }

        SetWorld = decltype(SetWorld)(Memory::GetBaseAddress() + Offset_SetWorld);
        InitListen = decltype(InitListen)(Memory::GetBaseAddress() + Offset_InitListen);
    }

    void SetupHooks()
    {
        LOG_F(INFO, "Setting up Net hooks.");

        CREATE_HOOK(Offset_GetNetModeWorld, Hooks::hNet::Hook_GetNetModeWorld, NULL);
        CREATE_HOOK(Offset_DispatchRequest, Hooks::hNet::Hook_DispatchRequest, &Hooks::hNet::Org_DispatchRequest);
        CREATE_HOOK(Offset_TickFlush, Hooks::hNet::Hook_TickFlush, &Hooks::hNet::Org_TickFlush);

        LOG_F(INFO, "Set up Net hooks.");
    }
}

namespace Hooks::hNet
{
    __int64 Hook_DispatchRequest(__int64 a1, __int64* a2, int a3)
    {
        *(int*)(__int64(a2) + 0x28) = 3; // sets McpIsDedicatedServer

        // 3 as a3 sets enabled, if we returned original a3, it would just set us as sparkle specialist lol
        return Org_DispatchRequest(a1, a2, 3);
    }

    void Hook_TickFlush(UNetDriver* NetDriver)
    {
        if (auto ReplicationDriver = NetDriver->ReplicationDriver)
        {
            Net::ServerReplicateActors(ReplicationDriver);
        }

        if (GetAsyncKeyState(VK_F5) & 1)
        {
            GameUtils::Snow::SetSnow();
        }

        if (GetAsyncKeyState(VK_F6) & 1)
        {
            GameUtils::Siphon::ApplySiphonEffectToEveryone();
        }

        if (GetAsyncKeyState(VK_F7) & 1)
        {
            UKismetSystemLibrary::GetDefaultObj()->ExecuteConsoleCommand(UWorld::GetWorld(), L"startaircraft", nullptr);
        }

        return Org_TickFlush(NetDriver);
    }

    ENetMode Hook_GetNetModeWorld()
    {
        return ENetMode::NM_DedicatedServer;
    }
}
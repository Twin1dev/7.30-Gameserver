#pragma once
#include "SDK/SDK.hpp"
using namespace SDK;

enum ENetMode
{
    NM_Standalone,
    NM_DedicatedServer,
    NM_ListenServer,
    NM_Client,
    NM_MAX,
};

namespace Net
{
    inline UNetDriver* (*CreateNetDriver)(UEngine* Engine, UWorld* InWorld, FName NetDriverDefinition);
    inline bool (*InitListen)(UNetDriver* Driver, void* InNotify, FURL& LocalURL, bool bReuseAddressAndPort, FString& Error);
    inline void* (*SetWorld)(UNetDriver* NetDriver, UWorld* World);
    inline void (*ServerReplicateActors)(UReplicationDriver* ReplicationDriver); // Set in Hook_ReadyToStartMatch.

    void SetupOffsets();
    void SetupHooks();
}
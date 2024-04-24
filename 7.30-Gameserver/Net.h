#pragma once

enum ENetMode
{
    NM_Standalone,
    NM_DedicatedServer,
    NM_ListenServer,
    NM_Client,
    NM_MAX,
};

ENetMode GetNetModeWorld()
{
    return ENetMode::NM_DedicatedServer;
}

ENetMode GetNetModeActor()
{
    return ENetMode::NM_DedicatedServer;
}

inline UNetDriver* (*CreateNetDriver)(UEngine* Engine, UWorld* InWorld, FName NetDriverDefinition);
inline bool (*InitListen)(UNetDriver* Driver, void* InNotify, FURL& LocalURL, bool bReuseAddressAndPort, FString& Error);
inline void* (*SetWorld)(UNetDriver* NetDriver, UWorld* World);
inline void (*ServerReplicateActors)(UReplicationDriver* ReplicationDriver);

static __int64 (*DispatchRequest)(__int64, __int64*, int);

static __int64 DispatchRequestHook(__int64 a1, __int64* a2, int a3)
{
    *(int*)(__int64(a2) + 0x28) = 3; // sets McpIsDedicatedServer

    // 3 as a3 sets enabled, if we returned original a3, it would just set us as sparkle specialist lol
    return DispatchRequest(a1, a2, 3);
}

void (*TickFlush)(UNetDriver*);
void TickFlushHook(UNetDriver* NetDriver)
{
    if (auto ReplicationDriver = NetDriver->ReplicationDriver)
        ServerReplicateActors(ReplicationDriver);

    return TickFlush(NetDriver);
}
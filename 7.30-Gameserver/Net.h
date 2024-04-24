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

void (*TickFlush)(UNetDriver*);
void TickFlushHook(UNetDriver* NetDriver)
{
    if (auto ReplicationDriver = NetDriver->ReplicationDriver)
        ServerReplicateActors(ReplicationDriver);

    return TickFlush(NetDriver);
}
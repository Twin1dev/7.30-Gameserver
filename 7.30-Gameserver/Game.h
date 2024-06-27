#pragma once
#include <vector>

#include "loguru.hpp"

#include "Globals.h"
#include "Memory.h"
#include "ErrorManager.h"

#include "Hooks.h"
#include "HookManager.h"

#include "CustomSDK.hpp"
using namespace SDK;

namespace Abilities
{
	void ApplySetToASC(UAbilitySystemComponent* ASC);

	void SetupOffsets();
	void SetupHooks();
}

namespace Gamemode
{
	void SetupHooks();
}

namespace Inventory
{
	namespace Finding
	{
		FFortItemEntry* FindItemEntryByGUID(AFortPlayerController* PC, FGuid ItemGuid);
		UFortWorldItem* FindItemInstanceByGUID(AFortPlayerController* PC, FGuid Guid);
	}

	void Update(AFortPlayerController* PC, bool bMark = true);
	UFortWorldItem* GivePCItem(AFortPlayerController* PC, UFortItemDefinition* ItemDef, int Count, int LoadedAmmo = 0);
}

namespace Looting
{
	std::vector<FFortItemEntry> PickLootDrops(FName LootTierGroup, int ReturnAmount = 0);
}

namespace Net
{
	inline UNetDriver* (*CreateNetDriver)(UEngine* Engine, UWorld* InWorld, FName NetDriverDefinition);
	inline bool (*InitListen)(UNetDriver* Driver, void* InNotify, FURL& LocalURL, bool bReuseAddressAndPort, FString& Error);
	inline void* (*SetWorld)(UNetDriver* NetDriver, UWorld* World);
	inline void (*ServerReplicateActors)(UReplicationDriver* ReplicationDriver); // Set in Hook_ReadyToStartMatch.

	void SetupOffsets();
	void SetupHooks();
}

namespace Player
{
	void SetupOffsets();
	void SetupHooks();
}
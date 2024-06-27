#pragma once

#include "SDK/SDK.hpp"
using namespace SDK;

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
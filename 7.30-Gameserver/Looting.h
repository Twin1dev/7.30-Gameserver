#pragma once
#include <vector>

#include "SDK/SDK.hpp"
using namespace SDK;

namespace Looting
{
	std::vector<FFortItemEntry> PickLootDrops(FName LootTierGroup, int ReturnAmount = 0);
}
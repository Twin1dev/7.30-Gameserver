#pragma once
#include "HookManager.h"

#include "loguru.hpp"

#include "Inventory.h"
#include "Looting.h"

#include "CustomSDK.hpp"
using namespace SDK;

namespace Player
{
	void SetupOffsets();
	void SetupHooks();
}
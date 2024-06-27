#pragma once
#include <Windows.h>
#include <MinHook.h>

#include <format>

#include "Hooks.h"

#include "Memory.h"
#include "ErrorManager.h"

#include "SDK/SDK.hpp"
using namespace SDK;

namespace HookManager
{
	bool HookVirtualFunction(void** VFT, int Index, void* HookAddress, void** OriginalAddress = nullptr);
	bool HookExecFunction(UFunction* Function, void* HookAddress, void** OriginalAddress = nullptr);
}

#define CREATE_HOOK(Offset, Hook, Original) \
    do { \
        MH_STATUS Status = MH_CreateHook(reinterpret_cast<LPVOID>(Memory::GetBaseAddress() + Offset), Hook, reinterpret_cast<LPVOID*>(Original)); \
        if (Status != MH_OK) { \
            THROW_FATAL_ERROR(std::format("Failed to hook {}. MH_STATUS: {}", #Hook, (int)Status).c_str()); \
        } \
    } while(0)
#define HOOK_VIRTUAL_FUNCTION(VFT, Index, Hook, Original) \
    do { \
        if (false == HookManager::HookVirtualFunction(VFT, Index, Hook, reinterpret_cast<void**>(Original))) { \
            THROW_FATAL_ERROR(std::format("Failed to hook virtual function, {}.", #Hook).c_str()); \
        } \
    } while(0)
#define HOOK_EXEC_FUNCTION(Func, Hook, Original) \
    do { \
        if (false == HookManager::HookExecFunction(Func, Hook, reinterpret_cast<void**>(Original))) { \
            THROW_FATAL_ERROR(std::format("Failed to hook exec function, {}.", #Hook).c_str()); \
        } \
    } while(0)
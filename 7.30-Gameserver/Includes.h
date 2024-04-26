#pragma once

#include <Windows.h>
#include <string>
#include <vector>
#include <cstdio>
#pragma comment(lib,"minhook/minhook.lib")
#include "minhook/MinHook.h"


#define CREATEHOOK(Address, Hook, Og) \
MH_CreateHook((void*)(Address), Hook, (void**)(Og));

static void VirtualHook(void** vft, int idx, void* newfunc, void** OG = nullptr)
{
	if (OG)
		*OG = vft[idx];

	DWORD dwProt;
	VirtualProtect(&vft[idx], 8, PAGE_EXECUTE_READWRITE, &dwProt);
	vft[idx] = newfunc;
	DWORD dwTemp;
	VirtualProtect(&vft[idx], 8, dwProt, &dwTemp);
}

// Uncomment out once added SDK!
#include "SDK/SDK.hpp"
using namespace SDK;

static void HookExec(UFunction* Function, void* Hook, void** OG = nullptr)
{
	auto& Exec = Function->GetFunc();

	if (OG)
		*OG = Exec;

	Exec = Hook;
}
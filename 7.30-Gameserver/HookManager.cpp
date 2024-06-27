#include "HookManager.h"

namespace HookManager
{
    bool HookVirtualFunction(void** VFT, int Index, void* HookAddress, void** OriginalAddress)
    {
		DWORD OldProtect;
		if (false == VirtualProtect(&VFT[Index], sizeof(void*), PAGE_EXECUTE_READWRITE, &OldProtect))
			return false;

		if (OriginalAddress)
		{
			*OriginalAddress = VFT[Index];
		}
		VFT[Index] = HookAddress;

		VirtualProtect(&VFT[Index], sizeof(void*), OldProtect, &OldProtect);
		return true;
    }
	bool HookExecFunction(UFunction* Function, void* HookAddress, void** OriginalAddress)
	{
		auto& ExecFunction = Function->GetFunc();
		if (ExecFunction == nullptr)
		{
			return false;
		}

		if (OriginalAddress)
		{
			*OriginalAddress = ExecFunction;
		}
		ExecFunction = HookAddress;
		return true;
	}
}
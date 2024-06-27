#pragma once
#include <Windows.h>
#include <stdint.h>

namespace Memory
{
	uintptr_t SigScan(const char* Signature, bool bRelative = false, uint32_t Offset = 0);

	bool MakeFuncRetn(PVOID FuncAddress);
	bool BytePatch(PVOID Address, uint8_t Byte);

	bool IsBadReadPtr(void* p);

	uintptr_t GetBaseAddress();
}
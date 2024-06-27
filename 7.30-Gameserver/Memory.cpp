#include "Memory.h"
#include <vector>

namespace Memory
{
	uintptr_t SigScan(const char* Signature, bool bRelative, uint32_t Offset)
	{
		uint8_t* BaseAddress = reinterpret_cast<uint8_t*>(GetModuleHandle(NULL));
		static auto PatternToByte = [](const char* pattern)
			{
				auto bytes = std::vector<int>{};
				const auto start = const_cast<char*>(pattern);
				const auto end = const_cast<char*>(pattern) + strlen(pattern);

				for (auto current = start; current < end; ++current)
				{
					if (*current == '?')
					{
						++current;
						if (*current == '?') ++current;
						bytes.push_back(-1);
					}
					else { bytes.push_back(strtoul(current, &current, 16)); }
				}
				return bytes;
			};

		const auto DosHeader = reinterpret_cast<PIMAGE_DOS_HEADER>(BaseAddress);
		const auto NtHeaders = reinterpret_cast<PIMAGE_NT_HEADERS>(BaseAddress + DosHeader->e_lfanew);

		const auto SizeOfImage = NtHeaders->OptionalHeader.SizeOfImage;
		auto PatternBytes = PatternToByte(Signature);
		const auto ScanBytes = BaseAddress;

		const auto s = PatternBytes.size();
		const auto d = PatternBytes.data();

		for (auto i = 0ul; i < SizeOfImage - s; ++i)
		{
			bool Found = true;
			for (auto j = 0ul; j < s; ++j)
			{
				if (ScanBytes[i + j] != d[j] && d[j] != -1)
				{
					Found = false;
					break;
				}
			}

			if (Found)
			{
				uintptr_t Address = reinterpret_cast<uintptr_t>(&ScanBytes[i]);
				if (bRelative)
				{
					Address = ((Address + Offset + 4) + *reinterpret_cast<int32_t*>(Address + Offset));
					return Address;
				}

				return Address;
			}
		}

		return 0;
	}

	bool MakeFuncRetn(PVOID FuncAddress)
	{
		DWORD OldProtect;
		if (false == VirtualProtect(FuncAddress, sizeof(uint8_t), PAGE_EXECUTE_READWRITE, &OldProtect))
			return false;

		constexpr uint8_t retn = 0xC3;
		*(uint8_t*)FuncAddress = retn;

		VirtualProtect(FuncAddress, sizeof(uint8_t), OldProtect, &OldProtect);
		return true;
	}
	bool BytePatch(PVOID Address, uint8_t Byte)
	{
		DWORD OldProtect;
		if (false == VirtualProtect(Address, sizeof(uint8_t), PAGE_EXECUTE_READWRITE, &OldProtect))
			return false;

		*(uint8_t*)Address = Byte;

		VirtualProtect(Address, sizeof(uint8_t), OldProtect, &OldProtect);
		return true;
	}

	bool IsBadReadPtr(void* p)
	{
		MEMORY_BASIC_INFORMATION mbi = { 0 };
		if (::VirtualQuery(p, &mbi, sizeof(mbi)))
		{
			constexpr DWORD Mask = (PAGE_READONLY | PAGE_READWRITE | PAGE_WRITECOPY | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY);
			bool b = !(mbi.Protect & Mask);

			// check the page is not a guard page
			if (mbi.Protect & (PAGE_GUARD | PAGE_NOACCESS))
				b = true;

			return b;
		}

		return true;
	}

	uintptr_t GetBaseAddress()
	{
		static uintptr_t BaseAddress = 0;
		if (BaseAddress == 0)
		{
			BaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandle(0));
		}

		return BaseAddress;
	}
}
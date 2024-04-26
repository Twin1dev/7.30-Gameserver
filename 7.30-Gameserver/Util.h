#pragma once

namespace MemoryUtils {
	uintptr_t SigScan(const char* signature, bool bRelative = false, uint32_t offset = 0) {
		uintptr_t base_address = reinterpret_cast<uintptr_t>(GetModuleHandle(NULL));
		static auto patternToByte = [](const char* pattern)
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

		const auto dosHeader = (PIMAGE_DOS_HEADER)base_address;
		const auto ntHeaders = (PIMAGE_NT_HEADERS)((std::uint8_t*)base_address + dosHeader->e_lfanew);

		const auto sizeOfImage = ntHeaders->OptionalHeader.SizeOfImage;
		auto patternBytes = patternToByte(signature);
		const auto scanBytes = reinterpret_cast<std::uint8_t*>(base_address);

		const auto s = patternBytes.size();
		const auto d = patternBytes.data();

		for (auto i = 0ul; i < sizeOfImage - s; ++i)
		{
			bool found = true;
			for (auto j = 0ul; j < s; ++j)
			{
				if (scanBytes[i + j] != d[j] && d[j] != -1)
				{
					found = false;
					break;
				}
			}
			if (found)
			{
				uintptr_t address = reinterpret_cast<uintptr_t>(&scanBytes[i]);
				if (bRelative)
				{
					address = ((address + offset + 4) + *(int32_t*)(address + offset));
					return address;
				}
				return address;
			}
		}
		return 0;
	}

	void NullFunction(uintptr_t Func)
	{
		DWORD dwProt;
		VirtualProtect((PVOID)Func, 1, PAGE_EXECUTE_READWRITE, &dwProt);

		*(uint8_t*)Func = 0xC3; // 0xC3 is ret instruction

		DWORD dwTemp;
		VirtualProtect((PVOID)Func, 1, dwProt, &dwProt);
	}

	void BytePatch(uintptr_t Func, int Byte)
	{
		DWORD dwProt;
		VirtualProtect((PVOID)Func, 1, PAGE_EXECUTE_READWRITE, &dwProt);

		*(uint8_t*)Func = Byte;

		DWORD dwTemp;
		VirtualProtect((PVOID)Func, 1, dwProt, &dwProt);
	}

	inline bool IsBadReadPtr(void* p)
	{
		MEMORY_BASIC_INFORMATION mbi = { 0 };
		if (::VirtualQuery(p, &mbi, sizeof(mbi)))
		{
			DWORD mask = (PAGE_READONLY | PAGE_READWRITE | PAGE_WRITECOPY | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY);
			bool b = !(mbi.Protect & mask);
			// check the page is not a guard page
			if (mbi.Protect & (PAGE_GUARD | PAGE_NOACCESS)) b = true;

			return b;
		}
		return true;
	}

}


static void LOG(std::string message)
{
	std::cout << "LogGameserver: " << message << "\n";
}


namespace GameUtils
{
	// this is needed!
	class Snow
	{
	private:
		static UObject* GetSnowSetup()
		{
			auto Class = StaticFindObject<UClass>("/Game/Athena/Environments/Landscape/Blueprints/BP_SnowSetup.BP_SnowSetup_C");

			TArray<AActor*> Actors;
			UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(UWorld::GetWorld(), Class, &Actors);

			return Actors[0];
		}
	public:
		static void SetSnow()
		{
			if (auto SnowSetup = GetSnowSetup())
			{
				auto SetSnow = StaticFindObject<UFunction>("/Game/Athena/Environments/Landscape/Blueprints/BP_SnowSetup.BP_SnowSetup_C.SetSnow");

				if (SetSnow)
				{
					LOG("SetSnow called");

					float ToRound = UKismetMathLibrary::GetDefaultObj()->RandomFloatInRange(0.7f, 1.0f) * 10;

					float Params = UKismetMathLibrary::GetDefaultObj()->Round(ToRound) / 10;

					LOG(std::format("SnowLevel: {}", Params));

					SnowSetup->ProcessEvent(SetSnow, &Params);
				}
			}
			else
			{
				LOG("No SnowSetup!");
			}
		}
	};
}

static __forceinline uintptr_t BaseAddress()
{
	static uintptr_t BaseAddr = 0;

	if (BaseAddr == 0) BaseAddr = reinterpret_cast<uintptr_t>(GetModuleHandle(0));

	return BaseAddr;
}

/// <summary>
/// Gets the Worlds GameMode
/// </summary>
/// <returns>Worlds GameMode casted to AFortGameModeAthena</returns>
inline AFortGameModeAthena* GetGameMode()
{
	return reinterpret_cast<AFortGameModeAthena*>(UWorld::GetWorld()->AuthorityGameMode);
}

/// <summary>
/// Gets the Worlds GameState
/// </summary>
/// <returns>Worlds GameState casted to AFortGameStateAthena</returns>
inline AFortGameStateAthena* GetGameState()
{
	return reinterpret_cast<AFortGameStateAthena*>(UWorld::GetWorld()->GameState);
}

template <typename T>
__forceinline T* Cast(UObject* Object)
{
	if (Object && Object->IsA(T::StaticClass()))
	{
		return (T*)Object;
	}

	return nullptr;
}

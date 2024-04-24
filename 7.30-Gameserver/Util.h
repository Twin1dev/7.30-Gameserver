#pragma once

namespace MemoryUtils {
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

static __forceinline uintptr_t BaseAddress()
{
	static uintptr_t BaseAddr = 0;

	if (BaseAddr == 0) BaseAddr = reinterpret_cast<uintptr_t>(GetModuleHandle(0));

	return BaseAddr;
}

static void LOG(std::string message)
{
	std::cout << "LogGameserver: " << message << "\n";
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

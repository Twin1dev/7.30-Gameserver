#pragma once
#include <format>

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


template <class T>
T* SpawnActor(FVector Location, FRotator Rotation = FRotator{ 0, 0, 0 }, UClass* Class = T::StaticClass(), FVector Scale3D = { 1,1,1 })
{
	FQuat Quat{};
	FTransform Transform{};

	auto DEG_TO_RAD = 3.14159 / 180;
	auto DIVIDE_BY_2 = DEG_TO_RAD / 2;

	auto SP = sin(Rotation.Pitch * DIVIDE_BY_2);
	auto CP = cos(Rotation.Pitch * DIVIDE_BY_2);

	auto SY = sin(Rotation.Yaw * DIVIDE_BY_2);
	auto CY = cos(Rotation.Yaw * DIVIDE_BY_2);

	auto SR = sin(Rotation.Roll * DIVIDE_BY_2);
	auto CR = cos(Rotation.Roll * DIVIDE_BY_2);

	Quat.X = CR * SP * SY - SR * CP * CY;
	Quat.Y = -CR * SP * CY - SR * CP * SY;
	Quat.Z = CR * CP * SY - SR * SP * CY;
	Quat.W = CR * CP * CY + SR * SP * SY;

	Transform.Rotation = Quat;
	Transform.Scale3D = Scale3D;
	Transform.Translation = Location;

	auto Actor = UGameplayStatics::GetDefaultObj()->BeginSpawningActorFromClass(UWorld::GetWorld(), Class, Transform, false, nullptr);
	if (Actor)
		UGameplayStatics::GetDefaultObj()->FinishSpawningActor(Actor, Transform);
	return (T*)Actor;
}


template<typename... Args>
static inline void LOG(const std::string& message, Args... args) {
	std::string formattedMessage = std::vformat(message, std::make_format_args(args...));
	std::cout << "LogGameserver: ";
	std::cout << formattedMessage << std::endl;
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

inline UWorld* GetWorld()
{
	return UWorld::GetWorld();
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

inline void sinCos(float* ScalarSin, float* ScalarCos, float Value)
{
	float quotient = (0.31830988618f * 0.5f) * Value;

	if (Value >= 0.0f)
	{
		quotient = (float)((int)(quotient + 0.5f));
	}
	else
	{
		quotient = (float)((int)(quotient - 0.5f));
	}

	float y = Value - (2.0f * 3.1415926535897932f) * quotient;
	float sign;

	if (y > 1.57079632679f)
	{
		y = 3.1415926535897932f - y;
		sign = -1.0f;
	}
	else if (y < -1.57079632679f)
	{
		y = -3.1415926535897932f - y;
		sign = -1.0f;
	}
	else
	{
		sign = +1.0f;
	}

	float y2 = y * y;
	*ScalarSin = (((((-2.3889859e-08f * y2 + 2.7525562e-06f) * y2 - 0.00019840874f) * y2 + 0.0083333310f) * y2 - 0.16666667f) * y2 + 1.0f) * y;

	float p = ((((-2.6051615e-07f * y2 + 2.4760495e-05f) * y2 - 0.0013888378f) * y2 + 0.041666638f) * y2 - 0.5f) * y2 + 1.0f;
	*ScalarCos = sign * p;
}

inline FQuat FRotToQuat(FRotator Rot)
{
	const float DEG_TO_RAD = 3.1415926535897932f / (180.f);
	const float DIVIDE_BY_2 = DEG_TO_RAD / 2.f;
	float SP, SY, SR;
	float CP, CY, CR;

	sinCos(&SP, &CP, Rot.Pitch * DIVIDE_BY_2);
	sinCos(&SY, &CY, Rot.Yaw * DIVIDE_BY_2);
	sinCos(&SR, &CR, Rot.Roll * DIVIDE_BY_2);

	FQuat RotationQuat;
	RotationQuat.X = CR * SP * SY - SR * CP * CY;
	RotationQuat.Y = -CR * SP * CY - SR * CP * SY;
	RotationQuat.Z = CR * CP * SY - SR * SP * CY;
	RotationQuat.W = CR * CP * CY + SR * SP * SY;

	return RotationQuat;
}

static inline AFortPickupAthena* SpawnPickup(UFortItemDefinition* ItemDef, FVector Location, int Count, EFortPickupSourceTypeFlag PickupSource = EFortPickupSourceTypeFlag::Other, EFortPickupSpawnSource SpawnSource = EFortPickupSpawnSource::Unset, int LoadedAmmo = -1, AFortPawn* Pawn = nullptr)
{
	auto PlayerState = Pawn ? Cast<AFortPlayerState>(Pawn->PlayerState) : nullptr;

	if (auto Pickup = SpawnActor<AFortPickupAthena>(Location))
	{
		Pickup->PrimaryPickupItemEntry.Count = Count;
		Pickup->PrimaryPickupItemEntry.ItemDefinition = ItemDef;
		Pickup->PrimaryPickupItemEntry.LoadedAmmo = LoadedAmmo;

		Pickup->OptionalOwnerID = Pawn ? PlayerState->WorldPlayerId : -1;
		Pickup->PawnWhoDroppedPickup = Pawn;

		bool bToss = true;

		if (bToss && (PickupSource == EFortPickupSourceTypeFlag::Other || PickupSource == EFortPickupSourceTypeFlag::EFortPickupSourceTypeFlag_MAX))
		{
			PickupSource = EFortPickupSourceTypeFlag::Tossed;
		}

		Pickup->TossPickup(Location, Pawn, ItemDef->MaxStackSize, bToss, PickupSource, SpawnSource);

		if (PickupSource == EFortPickupSourceTypeFlag::Container)
		{
			Pickup->bTossedFromContainer = true;
			Pickup->OnRep_TossedFromContainer();
		} 

		return Pickup;
	}

	return nullptr;
}


namespace GameUtils
{
	class Siphon
	{
	public:
		static void ApplySiphonEffectToEveryone()
		{
			for (int i = 0; i < UWorld::GetWorld()->NetDriver->ClientConnections.Num(); i++)
			{
				auto PlayerState = (AFortPlayerState*)UWorld::GetWorld()->NetDriver->ClientConnections[i]->PlayerController->PlayerState;

				auto AbilitySystemComponent = PlayerState->AbilitySystemComponent;

				auto Handle = AbilitySystemComponent->MakeEffectContext();
				AbilitySystemComponent->NetMulticast_InvokeGameplayCueAdded(FGameplayTag(UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameplayCue.Shield.PotionConsumed")), FPredictionKey(), Handle);
				AbilitySystemComponent->NetMulticast_InvokeGameplayCueExecuted(FGameplayTag(UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameplayCue.Shield.PotionConsumed")), FPredictionKey(), Handle);
			}
		}
	};

	class Pickup
	{
	public:
	    
	};

	// this is needed!
	class Snow
	{
	private:
		static UObject* GetSnowSetup()
		{
			static UObject* Actor = nullptr;
			static bool bFirstFind = true;

			if (bFirstFind)
			{
				bFirstFind = false;

				static auto Class = StaticFindObject<UClass>("/Game/Athena/Environments/Landscape/Blueprints/BP_SnowSetup.BP_SnowSetup_C");

				TArray<AActor*> Actors;
				UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(UWorld::GetWorld(), Class, &Actors);

				if (!Actors.IsValid() || !Actors[0])
					return nullptr;

				Actor = Actors[0];
			}

			return Actor;
		}
	public:
		static void SetSnow()
		{
			if (auto SnowSetup = GetSnowSetup())
			{
				static auto SetSnow = StaticFindObject<UFunction>("/Game/Athena/Environments/Landscape/Blueprints/BP_SnowSetup.BP_SnowSetup_C.SetSnow");

				if (SetSnow)
				{
					LOG("SetSnow called");

					float ToRound = UKismetMathLibrary::GetDefaultObj()->RandomFloatInRange(0.2f, 1.0f);

					float Params = (round(ToRound * 10) / 10) + 0.05;

					LOG("SnowLevel: {}", Params);

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

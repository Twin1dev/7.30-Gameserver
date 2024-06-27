#pragma once
#include "SDK/SDK.hpp"

namespace SDK
{
	struct FFrame
	{
		char Padding[0x10];
		UFunction* Node;
		UObject* Object;
		uint8* Code;
		uint8* Locals;
	};

	inline UObject* (*StaticFindObject_)(UClass* Class, UObject* Package, const wchar_t* OrigInName, bool ExactClass);
	inline UObject* (*StaticLoadObject_)(UClass* Class, UObject* InOuter, const TCHAR* Name, const TCHAR* Filename, uint32_t LoadFlags, UObject* Sandbox, bool bAllowObjectReconciliation);
	
	template <typename T>
	inline T* StaticFindObject(std::string ObjectPath, UClass* Class = UObject::StaticClass())
	{
		return (T*)StaticFindObject_(Class, nullptr, std::wstring(ObjectPath.begin(), ObjectPath.end()).c_str(), false);
	}

	template <typename T>
	inline T* StaticLoadObject(std::string Path, UClass* InClass = T::StaticClass(), UObject* Outer = nullptr)
	{
		return (T*)StaticLoadObject_(InClass, Outer, std::wstring(Path.begin(), Path.end()).c_str(), nullptr, 0, nullptr, false);
	}

	inline AFortGameModeAthena* GetGameMode()
	{
		return reinterpret_cast<AFortGameModeAthena*>(UWorld::GetWorld()->AuthorityGameMode);
	}
	inline AFortGameStateAthena* GetGameState()
	{
		return reinterpret_cast<AFortGameStateAthena*>(UWorld::GetWorld()->GameState);
	}
	inline UWorld* GetWorld()
	{
		return UWorld::GetWorld();
	}

	template <typename T>
	inline T* Cast(UObject* Object)
	{
		if (Object && Object->IsA(T::StaticClass()))
		{
			return static_cast<T*>(Object);
		}

		return nullptr;
	}

	template <class T>
	inline T* SpawnActor(FVector Location, FRotator Rotation = FRotator{ 0, 0, 0 }, UClass* Class = T::StaticClass(), FVector Scale3D = { 1,1,1 })
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
		{
			UGameplayStatics::GetDefaultObj()->FinishSpawningActor(Actor, Transform);
		}

		return reinterpret_cast<T*>(Actor);
	}

	inline AFortPickupAthena* SpawnPickup(UFortItemDefinition* ItemDef, FVector Location, int Count, EFortPickupSourceTypeFlag PickupSource = EFortPickupSourceTypeFlag::Other, EFortPickupSpawnSource SpawnSource = EFortPickupSpawnSource::Unset, int LoadedAmmo = -1, AFortPawn* Pawn = nullptr)
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
}
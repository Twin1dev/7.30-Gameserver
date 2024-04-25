#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinigameStat_TargetDummyDamage.MinigameStat_TargetDummyDamage_C
// (None)

class UClass* UMinigameStat_TargetDummyDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinigameStat_TargetDummyDamage_C");

	return Clss;
}


// MinigameStat_TargetDummyDamage_C MinigameStat_TargetDummyDamage.Default__MinigameStat_TargetDummyDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinigameStat_TargetDummyDamage_C* UMinigameStat_TargetDummyDamage_C::GetDefaultObj()
{
	static class UMinigameStat_TargetDummyDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinigameStat_TargetDummyDamage_C*>(UMinigameStat_TargetDummyDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}



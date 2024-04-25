#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinigameStat_CapturePlate.MinigameStat_CapturePlate_C
// (None)

class UClass* UMinigameStat_CapturePlate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinigameStat_CapturePlate_C");

	return Clss;
}


// MinigameStat_CapturePlate_C MinigameStat_CapturePlate.Default__MinigameStat_CapturePlate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinigameStat_CapturePlate_C* UMinigameStat_CapturePlate_C::GetDefaultObj()
{
	static class UMinigameStat_CapturePlate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinigameStat_CapturePlate_C*>(UMinigameStat_CapturePlate_C::StaticClass()->DefaultObject);

	return Default;
}

}



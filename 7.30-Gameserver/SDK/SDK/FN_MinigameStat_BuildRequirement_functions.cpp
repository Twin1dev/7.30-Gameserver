#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinigameStat_BuildRequirement.MinigameStat_BuildRequirement_C
// (None)

class UClass* UMinigameStat_BuildRequirement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinigameStat_BuildRequirement_C");

	return Clss;
}


// MinigameStat_BuildRequirement_C MinigameStat_BuildRequirement.Default__MinigameStat_BuildRequirement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinigameStat_BuildRequirement_C* UMinigameStat_BuildRequirement_C::GetDefaultObj()
{
	static class UMinigameStat_BuildRequirement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinigameStat_BuildRequirement_C*>(UMinigameStat_BuildRequirement_C::StaticClass()->DefaultObject);

	return Default;
}

}



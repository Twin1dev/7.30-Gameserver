#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_DamageMultiplier_Melee.GET_DamageMultiplier_Melee_C
// (None)

class UClass* UGET_DamageMultiplier_Melee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_DamageMultiplier_Melee_C");

	return Clss;
}


// GET_DamageMultiplier_Melee_C GET_DamageMultiplier_Melee.Default__GET_DamageMultiplier_Melee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_DamageMultiplier_Melee_C* UGET_DamageMultiplier_Melee_C::GetDefaultObj()
{
	static class UGET_DamageMultiplier_Melee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_DamageMultiplier_Melee_C*>(UGET_DamageMultiplier_Melee_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_DamageMultiplier_Weapon.GET_DamageMultiplier_Weapon_C
// (None)

class UClass* UGET_DamageMultiplier_Weapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_DamageMultiplier_Weapon_C");

	return Clss;
}


// GET_DamageMultiplier_Weapon_C GET_DamageMultiplier_Weapon.Default__GET_DamageMultiplier_Weapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_DamageMultiplier_Weapon_C* UGET_DamageMultiplier_Weapon_C::GetDefaultObj()
{
	static class UGET_DamageMultiplier_Weapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_DamageMultiplier_Weapon_C*>(UGET_DamageMultiplier_Weapon_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Perk_PhaseCannon_Damage.GC_Perk_PhaseCannon_Damage_C
// (None)

class UClass* UGC_Perk_PhaseCannon_Damage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Perk_PhaseCannon_Damage_C");

	return Clss;
}


// GC_Perk_PhaseCannon_Damage_C GC_Perk_PhaseCannon_Damage.Default__GC_Perk_PhaseCannon_Damage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Perk_PhaseCannon_Damage_C* UGC_Perk_PhaseCannon_Damage_C::GetDefaultObj()
{
	static class UGC_Perk_PhaseCannon_Damage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Perk_PhaseCannon_Damage_C*>(UGC_Perk_PhaseCannon_Damage_C::StaticClass()->DefaultObject);

	return Default;
}

}



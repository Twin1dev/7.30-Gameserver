#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNS_Cart_InstantHealFX.GCNS_Cart_InstantHealFX_C
// (None)

class UClass* UGCNS_Cart_InstantHealFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNS_Cart_InstantHealFX_C");

	return Clss;
}


// GCNS_Cart_InstantHealFX_C GCNS_Cart_InstantHealFX.Default__GCNS_Cart_InstantHealFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCNS_Cart_InstantHealFX_C* UGCNS_Cart_InstantHealFX_C::GetDefaultObj()
{
	static class UGCNS_Cart_InstantHealFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCNS_Cart_InstantHealFX_C*>(UGCNS_Cart_InstantHealFX_C::StaticClass()->DefaultObject);

	return Default;
}

}



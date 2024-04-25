#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNS_Alteration_OnHit_EnergyNova.GCNS_Alteration_OnHit_EnergyNova_C
// (None)

class UClass* UGCNS_Alteration_OnHit_EnergyNova_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNS_Alteration_OnHit_EnergyNova_C");

	return Clss;
}


// GCNS_Alteration_OnHit_EnergyNova_C GCNS_Alteration_OnHit_EnergyNova.Default__GCNS_Alteration_OnHit_EnergyNova_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCNS_Alteration_OnHit_EnergyNova_C* UGCNS_Alteration_OnHit_EnergyNova_C::GetDefaultObj()
{
	static class UGCNS_Alteration_OnHit_EnergyNova_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCNS_Alteration_OnHit_EnergyNova_C*>(UGCNS_Alteration_OnHit_EnergyNova_C::StaticClass()->DefaultObject);

	return Default;
}

}



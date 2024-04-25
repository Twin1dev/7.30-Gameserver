#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Perk_Outlander_AntiMaterialCharge_Active.GC_Perk_Outlander_AntiMaterialCharge_Active_C
// (Actor)

class UClass* AGC_Perk_Outlander_AntiMaterialCharge_Active_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Perk_Outlander_AntiMaterialCharge_Active_C");

	return Clss;
}


// GC_Perk_Outlander_AntiMaterialCharge_Active_C GC_Perk_Outlander_AntiMaterialCharge_Active.Default__GC_Perk_Outlander_AntiMaterialCharge_Active_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_Perk_Outlander_AntiMaterialCharge_Active_C* AGC_Perk_Outlander_AntiMaterialCharge_Active_C::GetDefaultObj()
{
	static class AGC_Perk_Outlander_AntiMaterialCharge_Active_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_Perk_Outlander_AntiMaterialCharge_Active_C*>(AGC_Perk_Outlander_AntiMaterialCharge_Active_C::StaticClass()->DefaultObject);

	return Default;
}

}



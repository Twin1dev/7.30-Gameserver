#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Perk_Outlander_AntiMaterialCharge_EnvDamage.GC_Perk_Outlander_AntiMaterialCharge_EnvDamage_C
// (None)

class UClass* UGC_Perk_Outlander_AntiMaterialCharge_EnvDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Perk_Outlander_AntiMaterialCharge_EnvDamage_C");

	return Clss;
}


// GC_Perk_Outlander_AntiMaterialCharge_EnvDamage_C GC_Perk_Outlander_AntiMaterialCharge_EnvDamage.Default__GC_Perk_Outlander_AntiMaterialCharge_EnvDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Perk_Outlander_AntiMaterialCharge_EnvDamage_C* UGC_Perk_Outlander_AntiMaterialCharge_EnvDamage_C::GetDefaultObj()
{
	static class UGC_Perk_Outlander_AntiMaterialCharge_EnvDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Perk_Outlander_AntiMaterialCharge_EnvDamage_C*>(UGC_Perk_Outlander_AntiMaterialCharge_EnvDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}



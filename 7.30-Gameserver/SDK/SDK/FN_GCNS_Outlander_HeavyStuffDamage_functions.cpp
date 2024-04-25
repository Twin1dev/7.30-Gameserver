#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNS_Outlander_HeavyStuffDamage.GCNS_Outlander_HeavyStuffDamage_C
// (None)

class UClass* UGCNS_Outlander_HeavyStuffDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNS_Outlander_HeavyStuffDamage_C");

	return Clss;
}


// GCNS_Outlander_HeavyStuffDamage_C GCNS_Outlander_HeavyStuffDamage.Default__GCNS_Outlander_HeavyStuffDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCNS_Outlander_HeavyStuffDamage_C* UGCNS_Outlander_HeavyStuffDamage_C::GetDefaultObj()
{
	static class UGCNS_Outlander_HeavyStuffDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCNS_Outlander_HeavyStuffDamage_C*>(UGCNS_Outlander_HeavyStuffDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}



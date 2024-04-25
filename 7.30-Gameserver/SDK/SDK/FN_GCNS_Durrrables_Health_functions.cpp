#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNS_Durrrables_Health.GCNS_Durrrables_Health_C
// (None)

class UClass* UGCNS_Durrrables_Health_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNS_Durrrables_Health_C");

	return Clss;
}


// GCNS_Durrrables_Health_C GCNS_Durrrables_Health.Default__GCNS_Durrrables_Health_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCNS_Durrrables_Health_C* UGCNS_Durrrables_Health_C::GetDefaultObj()
{
	static class UGCNS_Durrrables_Health_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCNS_Durrrables_Health_C*>(UGCNS_Durrrables_Health_C::StaticClass()->DefaultObject);

	return Default;
}

}



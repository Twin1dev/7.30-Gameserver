#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNS_GM_KnockbackAOE.GCNS_GM_KnockbackAOE_C
// (None)

class UClass* UGCNS_GM_KnockbackAOE_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNS_GM_KnockbackAOE_C");

	return Clss;
}


// GCNS_GM_KnockbackAOE_C GCNS_GM_KnockbackAOE.Default__GCNS_GM_KnockbackAOE_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCNS_GM_KnockbackAOE_C* UGCNS_GM_KnockbackAOE_C::GetDefaultObj()
{
	static class UGCNS_GM_KnockbackAOE_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCNS_GM_KnockbackAOE_C*>(UGCNS_GM_KnockbackAOE_C::StaticClass()->DefaultObject);

	return Default;
}

}



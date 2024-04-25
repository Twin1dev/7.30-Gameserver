#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNS_GM_OnDeathAlliedHeal.GCNS_GM_OnDeathAlliedHeal_C
// (None)

class UClass* UGCNS_GM_OnDeathAlliedHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNS_GM_OnDeathAlliedHeal_C");

	return Clss;
}


// GCNS_GM_OnDeathAlliedHeal_C GCNS_GM_OnDeathAlliedHeal.Default__GCNS_GM_OnDeathAlliedHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCNS_GM_OnDeathAlliedHeal_C* UGCNS_GM_OnDeathAlliedHeal_C::GetDefaultObj()
{
	static class UGCNS_GM_OnDeathAlliedHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCNS_GM_OnDeathAlliedHeal_C*>(UGCNS_GM_OnDeathAlliedHeal_C::StaticClass()->DefaultObject);

	return Default;
}

}



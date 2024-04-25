#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNS_GM_OnDeathExplosionFriendly.GCNS_GM_OnDeathExplosionFriendly_C
// (None)

class UClass* UGCNS_GM_OnDeathExplosionFriendly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNS_GM_OnDeathExplosionFriendly_C");

	return Clss;
}


// GCNS_GM_OnDeathExplosionFriendly_C GCNS_GM_OnDeathExplosionFriendly.Default__GCNS_GM_OnDeathExplosionFriendly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCNS_GM_OnDeathExplosionFriendly_C* UGCNS_GM_OnDeathExplosionFriendly_C::GetDefaultObj()
{
	static class UGCNS_GM_OnDeathExplosionFriendly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCNS_GM_OnDeathExplosionFriendly_C*>(UGCNS_GM_OnDeathExplosionFriendly_C::StaticClass()->DefaultObject);

	return Default;
}

}



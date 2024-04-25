#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNS_GM_OnDeath_SpeedUpFriends.GCNS_GM_OnDeath_SpeedUpFriends_C
// (None)

class UClass* UGCNS_GM_OnDeath_SpeedUpFriends_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNS_GM_OnDeath_SpeedUpFriends_C");

	return Clss;
}


// GCNS_GM_OnDeath_SpeedUpFriends_C GCNS_GM_OnDeath_SpeedUpFriends.Default__GCNS_GM_OnDeath_SpeedUpFriends_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCNS_GM_OnDeath_SpeedUpFriends_C* UGCNS_GM_OnDeath_SpeedUpFriends_C::GetDefaultObj()
{
	static class UGCNS_GM_OnDeath_SpeedUpFriends_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCNS_GM_OnDeath_SpeedUpFriends_C*>(UGCNS_GM_OnDeath_SpeedUpFriends_C::StaticClass()->DefaultObject);

	return Default;
}

}



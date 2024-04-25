#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNS_AssassinationDischarge.GCNS_AssassinationDischarge_C
// (None)

class UClass* UGCNS_AssassinationDischarge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNS_AssassinationDischarge_C");

	return Clss;
}


// GCNS_AssassinationDischarge_C GCNS_AssassinationDischarge.Default__GCNS_AssassinationDischarge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCNS_AssassinationDischarge_C* UGCNS_AssassinationDischarge_C::GetDefaultObj()
{
	static class UGCNS_AssassinationDischarge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCNS_AssassinationDischarge_C*>(UGCNS_AssassinationDischarge_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNS_KunaiStorm_Impact.GCNS_KunaiStorm_Impact_C
// (None)

class UClass* UGCNS_KunaiStorm_Impact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNS_KunaiStorm_Impact_C");

	return Clss;
}


// GCNS_KunaiStorm_Impact_C GCNS_KunaiStorm_Impact.Default__GCNS_KunaiStorm_Impact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCNS_KunaiStorm_Impact_C* UGCNS_KunaiStorm_Impact_C::GetDefaultObj()
{
	static class UGCNS_KunaiStorm_Impact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCNS_KunaiStorm_Impact_C*>(UGCNS_KunaiStorm_Impact_C::StaticClass()->DefaultObject);

	return Default;
}

}



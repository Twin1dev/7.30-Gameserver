#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNS_Constructor_KineticOverload.GCNS_Constructor_KineticOverload_C
// (None)

class UClass* UGCNS_Constructor_KineticOverload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNS_Constructor_KineticOverload_C");

	return Clss;
}


// GCNS_Constructor_KineticOverload_C GCNS_Constructor_KineticOverload.Default__GCNS_Constructor_KineticOverload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCNS_Constructor_KineticOverload_C* UGCNS_Constructor_KineticOverload_C::GetDefaultObj()
{
	static class UGCNS_Constructor_KineticOverload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCNS_Constructor_KineticOverload_C*>(UGCNS_Constructor_KineticOverload_C::StaticClass()->DefaultObject);

	return Default;
}

}



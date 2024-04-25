#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNS_TestAntiMaterial.GCNS_TestAntiMaterial_C
// (None)

class UClass* UGCNS_TestAntiMaterial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNS_TestAntiMaterial_C");

	return Clss;
}


// GCNS_TestAntiMaterial_C GCNS_TestAntiMaterial.Default__GCNS_TestAntiMaterial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCNS_TestAntiMaterial_C* UGCNS_TestAntiMaterial_C::GetDefaultObj()
{
	static class UGCNS_TestAntiMaterial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCNS_TestAntiMaterial_C*>(UGCNS_TestAntiMaterial_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCL_BlingGlow.GCL_BlingGlow_C
// (Actor)

class UClass* AGCL_BlingGlow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCL_BlingGlow_C");

	return Clss;
}


// GCL_BlingGlow_C GCL_BlingGlow.Default__GCL_BlingGlow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCL_BlingGlow_C* AGCL_BlingGlow_C::GetDefaultObj()
{
	static class AGCL_BlingGlow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCL_BlingGlow_C*>(AGCL_BlingGlow_C::StaticClass()->DefaultObject);

	return Default;
}

}



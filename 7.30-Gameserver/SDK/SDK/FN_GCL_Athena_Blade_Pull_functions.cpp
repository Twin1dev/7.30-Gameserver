#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCL_Athena_Blade_Pull.GCL_Athena_Blade_Pull_C
// (Actor)

class UClass* AGCL_Athena_Blade_Pull_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCL_Athena_Blade_Pull_C");

	return Clss;
}


// GCL_Athena_Blade_Pull_C GCL_Athena_Blade_Pull.Default__GCL_Athena_Blade_Pull_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCL_Athena_Blade_Pull_C* AGCL_Athena_Blade_Pull_C::GetDefaultObj()
{
	static class AGCL_Athena_Blade_Pull_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCL_Athena_Blade_Pull_C*>(AGCL_Athena_Blade_Pull_C::StaticClass()->DefaultObject);

	return Default;
}

}



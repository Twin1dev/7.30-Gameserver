#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCL_Athena_Blade_LeapAttack_Launch.GCL_Athena_Blade_LeapAttack_Launch_C
// (None)

class UClass* UGCL_Athena_Blade_LeapAttack_Launch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCL_Athena_Blade_LeapAttack_Launch_C");

	return Clss;
}


// GCL_Athena_Blade_LeapAttack_Launch_C GCL_Athena_Blade_LeapAttack_Launch.Default__GCL_Athena_Blade_LeapAttack_Launch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCL_Athena_Blade_LeapAttack_Launch_C* UGCL_Athena_Blade_LeapAttack_Launch_C::GetDefaultObj()
{
	static class UGCL_Athena_Blade_LeapAttack_Launch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCL_Athena_Blade_LeapAttack_Launch_C*>(UGCL_Athena_Blade_LeapAttack_Launch_C::StaticClass()->DefaultObject);

	return Default;
}

}



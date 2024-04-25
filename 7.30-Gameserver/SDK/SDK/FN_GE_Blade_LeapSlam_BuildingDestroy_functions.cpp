#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Blade_LeapSlam_BuildingDestroy.GE_Blade_LeapSlam_BuildingDestroy_C
// (None)

class UClass* UGE_Blade_LeapSlam_BuildingDestroy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Blade_LeapSlam_BuildingDestroy_C");

	return Clss;
}


// GE_Blade_LeapSlam_BuildingDestroy_C GE_Blade_LeapSlam_BuildingDestroy.Default__GE_Blade_LeapSlam_BuildingDestroy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Blade_LeapSlam_BuildingDestroy_C* UGE_Blade_LeapSlam_BuildingDestroy_C::GetDefaultObj()
{
	static class UGE_Blade_LeapSlam_BuildingDestroy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Blade_LeapSlam_BuildingDestroy_C*>(UGE_Blade_LeapSlam_BuildingDestroy_C::StaticClass()->DefaultObject);

	return Default;
}

}



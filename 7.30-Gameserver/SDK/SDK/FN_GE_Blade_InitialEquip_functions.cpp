#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Blade_InitialEquip.GE_Blade_InitialEquip_C
// (None)

class UClass* UGE_Blade_InitialEquip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Blade_InitialEquip_C");

	return Clss;
}


// GE_Blade_InitialEquip_C GE_Blade_InitialEquip.Default__GE_Blade_InitialEquip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Blade_InitialEquip_C* UGE_Blade_InitialEquip_C::GetDefaultObj()
{
	static class UGE_Blade_InitialEquip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Blade_InitialEquip_C*>(UGE_Blade_InitialEquip_C::StaticClass()->DefaultObject);

	return Default;
}

}



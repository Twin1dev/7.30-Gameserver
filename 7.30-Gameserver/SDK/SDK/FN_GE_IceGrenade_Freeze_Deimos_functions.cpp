#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_IceGrenade_Freeze_Deimos.GE_IceGrenade_Freeze_Deimos_C
// (None)

class UClass* UGE_IceGrenade_Freeze_Deimos_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_IceGrenade_Freeze_Deimos_C");

	return Clss;
}


// GE_IceGrenade_Freeze_Deimos_C GE_IceGrenade_Freeze_Deimos.Default__GE_IceGrenade_Freeze_Deimos_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_IceGrenade_Freeze_Deimos_C* UGE_IceGrenade_Freeze_Deimos_C::GetDefaultObj()
{
	static class UGE_IceGrenade_Freeze_Deimos_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_IceGrenade_Freeze_Deimos_C*>(UGE_IceGrenade_Freeze_Deimos_C::StaticClass()->DefaultObject);

	return Default;
}

}



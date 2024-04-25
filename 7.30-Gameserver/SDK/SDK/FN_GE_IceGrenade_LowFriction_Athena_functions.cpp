#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_IceGrenade_LowFriction_Athena.GE_IceGrenade_LowFriction_Athena_C
// (None)

class UClass* UGE_IceGrenade_LowFriction_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_IceGrenade_LowFriction_Athena_C");

	return Clss;
}


// GE_IceGrenade_LowFriction_Athena_C GE_IceGrenade_LowFriction_Athena.Default__GE_IceGrenade_LowFriction_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_IceGrenade_LowFriction_Athena_C* UGE_IceGrenade_LowFriction_Athena_C::GetDefaultObj()
{
	static class UGE_IceGrenade_LowFriction_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_IceGrenade_LowFriction_Athena_C*>(UGE_IceGrenade_LowFriction_Athena_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DroneCrash_CameraShake.DroneCrash_CameraShake_C
// (None)

class UClass* UDroneCrash_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DroneCrash_CameraShake_C");

	return Clss;
}


// DroneCrash_CameraShake_C DroneCrash_CameraShake.Default__DroneCrash_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDroneCrash_CameraShake_C* UDroneCrash_CameraShake_C::GetDefaultObj()
{
	static class UDroneCrash_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDroneCrash_CameraShake_C*>(UDroneCrash_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}



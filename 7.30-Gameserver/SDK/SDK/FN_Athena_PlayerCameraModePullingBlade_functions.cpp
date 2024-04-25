#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModePullingBlade.Athena_PlayerCameraModePullingBlade_C
// (None)

class UClass* UAthena_PlayerCameraModePullingBlade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModePullingBlade_C");

	return Clss;
}


// Athena_PlayerCameraModePullingBlade_C Athena_PlayerCameraModePullingBlade.Default__Athena_PlayerCameraModePullingBlade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModePullingBlade_C* UAthena_PlayerCameraModePullingBlade_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModePullingBlade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModePullingBlade_C*>(UAthena_PlayerCameraModePullingBlade_C::StaticClass()->DefaultObject);

	return Default;
}

}



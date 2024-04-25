#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModePullingBlade2nd.Athena_PlayerCameraModePullingBlade2nd_C
// (None)

class UClass* UAthena_PlayerCameraModePullingBlade2nd_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModePullingBlade2nd_C");

	return Clss;
}


// Athena_PlayerCameraModePullingBlade2nd_C Athena_PlayerCameraModePullingBlade2nd.Default__Athena_PlayerCameraModePullingBlade2nd_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModePullingBlade2nd_C* UAthena_PlayerCameraModePullingBlade2nd_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModePullingBlade2nd_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModePullingBlade2nd_C*>(UAthena_PlayerCameraModePullingBlade2nd_C::StaticClass()->DefaultObject);

	return Default;
}

}



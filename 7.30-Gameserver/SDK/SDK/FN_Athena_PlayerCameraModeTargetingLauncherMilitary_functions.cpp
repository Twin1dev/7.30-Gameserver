#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingLauncherMilitary.Athena_PlayerCameraModeTargetingLauncherMilitary_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingLauncherMilitary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingLauncherMilitary_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingLauncherMilitary_C Athena_PlayerCameraModeTargetingLauncherMilitary.Default__Athena_PlayerCameraModeTargetingLauncherMilitary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingLauncherMilitary_C* UAthena_PlayerCameraModeTargetingLauncherMilitary_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingLauncherMilitary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingLauncherMilitary_C*>(UAthena_PlayerCameraModeTargetingLauncherMilitary_C::StaticClass()->DefaultObject);

	return Default;
}

}



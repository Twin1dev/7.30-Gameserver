#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeLauncherMilitary.Athena_PlayerCameraModeLauncherMilitary_C
// (None)

class UClass* UAthena_PlayerCameraModeLauncherMilitary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeLauncherMilitary_C");

	return Clss;
}


// Athena_PlayerCameraModeLauncherMilitary_C Athena_PlayerCameraModeLauncherMilitary.Default__Athena_PlayerCameraModeLauncherMilitary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeLauncherMilitary_C* UAthena_PlayerCameraModeLauncherMilitary_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeLauncherMilitary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeLauncherMilitary_C*>(UAthena_PlayerCameraModeLauncherMilitary_C::StaticClass()->DefaultObject);

	return Default;
}

}



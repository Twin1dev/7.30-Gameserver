#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeBlade_Dive.Athena_PlayerCameraModeBlade_Dive_C
// (None)

class UClass* UAthena_PlayerCameraModeBlade_Dive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeBlade_Dive_C");

	return Clss;
}


// Athena_PlayerCameraModeBlade_Dive_C Athena_PlayerCameraModeBlade_Dive.Default__Athena_PlayerCameraModeBlade_Dive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeBlade_Dive_C* UAthena_PlayerCameraModeBlade_Dive_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeBlade_Dive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeBlade_Dive_C*>(UAthena_PlayerCameraModeBlade_Dive_C::StaticClass()->DefaultObject);

	return Default;
}

}



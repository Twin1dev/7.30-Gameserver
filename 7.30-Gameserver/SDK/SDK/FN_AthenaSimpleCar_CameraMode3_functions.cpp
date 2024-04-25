#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AthenaSimpleCar_CameraMode3.AthenaSimpleCar_CameraMode3_C
// (None)

class UClass* UAthenaSimpleCar_CameraMode3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaSimpleCar_CameraMode3_C");

	return Clss;
}


// AthenaSimpleCar_CameraMode3_C AthenaSimpleCar_CameraMode3.Default__AthenaSimpleCar_CameraMode3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaSimpleCar_CameraMode3_C* UAthenaSimpleCar_CameraMode3_C::GetDefaultObj()
{
	static class UAthenaSimpleCar_CameraMode3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaSimpleCar_CameraMode3_C*>(UAthenaSimpleCar_CameraMode3_C::StaticClass()->DefaultObject);

	return Default;
}

}



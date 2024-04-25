#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Speed_CameraShakePerlin.Speed_CameraShakePerlin_C
// (None)

class UClass* USpeed_CameraShakePerlin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Speed_CameraShakePerlin_C");

	return Clss;
}


// Speed_CameraShakePerlin_C Speed_CameraShakePerlin.Default__Speed_CameraShakePerlin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpeed_CameraShakePerlin_C* USpeed_CameraShakePerlin_C::GetDefaultObj()
{
	static class USpeed_CameraShakePerlin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpeed_CameraShakePerlin_C*>(USpeed_CameraShakePerlin_C::StaticClass()->DefaultObject);

	return Default;
}

}



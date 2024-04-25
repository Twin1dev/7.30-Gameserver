#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_s8Leadup1_CameraShake_01.B_s8Leadup1_CameraShake_01_C
// (None)

class UClass* UB_s8Leadup1_CameraShake_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_s8Leadup1_CameraShake_01_C");

	return Clss;
}


// B_s8Leadup1_CameraShake_01_C B_s8Leadup1_CameraShake_01.Default__B_s8Leadup1_CameraShake_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_s8Leadup1_CameraShake_01_C* UB_s8Leadup1_CameraShake_01_C::GetDefaultObj()
{
	static class UB_s8Leadup1_CameraShake_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_s8Leadup1_CameraShake_01_C*>(UB_s8Leadup1_CameraShake_01_C::StaticClass()->DefaultObject);

	return Default;
}

}



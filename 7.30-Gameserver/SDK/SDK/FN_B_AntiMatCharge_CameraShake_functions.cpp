#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_AntiMatCharge_CameraShake.B_AntiMatCharge_CameraShake_C
// (None)

class UClass* UB_AntiMatCharge_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_AntiMatCharge_CameraShake_C");

	return Clss;
}


// B_AntiMatCharge_CameraShake_C B_AntiMatCharge_CameraShake.Default__B_AntiMatCharge_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_AntiMatCharge_CameraShake_C* UB_AntiMatCharge_CameraShake_C::GetDefaultObj()
{
	static class UB_AntiMatCharge_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_AntiMatCharge_CameraShake_C*>(UB_AntiMatCharge_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}



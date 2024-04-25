#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_AntiMaterialCharge_FullyCharged.CameraShake_AntiMaterialCharge_FullyCharged_C
// (None)

class UClass* UCameraShake_AntiMaterialCharge_FullyCharged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_AntiMaterialCharge_FullyCharged_C");

	return Clss;
}


// CameraShake_AntiMaterialCharge_FullyCharged_C CameraShake_AntiMaterialCharge_FullyCharged.Default__CameraShake_AntiMaterialCharge_FullyCharged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_AntiMaterialCharge_FullyCharged_C* UCameraShake_AntiMaterialCharge_FullyCharged_C::GetDefaultObj()
{
	static class UCameraShake_AntiMaterialCharge_FullyCharged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_AntiMaterialCharge_FullyCharged_C*>(UCameraShake_AntiMaterialCharge_FullyCharged_C::StaticClass()->DefaultObject);

	return Default;
}

}



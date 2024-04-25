#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_HitImpact_ATV.CameraShake_HitImpact_ATV_C
// (None)

class UClass* UCameraShake_HitImpact_ATV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_HitImpact_ATV_C");

	return Clss;
}


// CameraShake_HitImpact_ATV_C CameraShake_HitImpact_ATV.Default__CameraShake_HitImpact_ATV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_HitImpact_ATV_C* UCameraShake_HitImpact_ATV_C::GetDefaultObj()
{
	static class UCameraShake_HitImpact_ATV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_HitImpact_ATV_C*>(UCameraShake_HitImpact_ATV_C::StaticClass()->DefaultObject);

	return Default;
}

}



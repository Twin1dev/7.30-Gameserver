#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CameraShake_PortalWarp_Fast.BP_CameraShake_PortalWarp_Fast_C
// (None)

class UClass* UBP_CameraShake_PortalWarp_Fast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CameraShake_PortalWarp_Fast_C");

	return Clss;
}


// BP_CameraShake_PortalWarp_Fast_C BP_CameraShake_PortalWarp_Fast.Default__BP_CameraShake_PortalWarp_Fast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CameraShake_PortalWarp_Fast_C* UBP_CameraShake_PortalWarp_Fast_C::GetDefaultObj()
{
	static class UBP_CameraShake_PortalWarp_Fast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CameraShake_PortalWarp_Fast_C*>(UBP_CameraShake_PortalWarp_Fast_C::StaticClass()->DefaultObject);

	return Default;
}

}



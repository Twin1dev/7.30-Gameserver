#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VehicleObject.VehicleObject_C
// (None)

class UClass* UVehicleObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleObject_C");

	return Clss;
}


// VehicleObject_C VehicleObject.Default__VehicleObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVehicleObject_C* UVehicleObject_C::GetDefaultObj()
{
	static class UVehicleObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleObject_C*>(UVehicleObject_C::StaticClass()->DefaultObject);

	return Default;
}

}



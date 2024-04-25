#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VehicleConfigsFerret.VehicleConfigsFerret_C
// (None)

class UClass* UVehicleConfigsFerret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleConfigsFerret_C");

	return Clss;
}


// VehicleConfigsFerret_C VehicleConfigsFerret.Default__VehicleConfigsFerret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVehicleConfigsFerret_C* UVehicleConfigsFerret_C::GetDefaultObj()
{
	static class UVehicleConfigsFerret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleConfigsFerret_C*>(UVehicleConfigsFerret_C::StaticClass()->DefaultObject);

	return Default;
}

}



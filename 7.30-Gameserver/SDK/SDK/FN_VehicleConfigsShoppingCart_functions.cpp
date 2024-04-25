#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VehicleConfigsShoppingCart.VehicleConfigsShoppingCart_C
// (None)

class UClass* UVehicleConfigsShoppingCart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleConfigsShoppingCart_C");

	return Clss;
}


// VehicleConfigsShoppingCart_C VehicleConfigsShoppingCart.Default__VehicleConfigsShoppingCart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVehicleConfigsShoppingCart_C* UVehicleConfigsShoppingCart_C::GetDefaultObj()
{
	static class UVehicleConfigsShoppingCart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleConfigsShoppingCart_C*>(UVehicleConfigsShoppingCart_C::StaticClass()->DefaultObject);

	return Default;
}

}



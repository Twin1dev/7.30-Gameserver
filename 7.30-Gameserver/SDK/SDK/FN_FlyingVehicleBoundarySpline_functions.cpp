#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FlyingVehicleBoundarySpline.FlyingVehicleBoundarySpline_C
// (Actor)

class UClass* AFlyingVehicleBoundarySpline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlyingVehicleBoundarySpline_C");

	return Clss;
}


// FlyingVehicleBoundarySpline_C FlyingVehicleBoundarySpline.Default__FlyingVehicleBoundarySpline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFlyingVehicleBoundarySpline_C* AFlyingVehicleBoundarySpline_C::GetDefaultObj()
{
	static class AFlyingVehicleBoundarySpline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFlyingVehicleBoundarySpline_C*>(AFlyingVehicleBoundarySpline_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FlyingVehicleBoundarySpline.FlyingVehicleBoundarySpline_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFlyingVehicleBoundarySpline_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlyingVehicleBoundarySpline_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}



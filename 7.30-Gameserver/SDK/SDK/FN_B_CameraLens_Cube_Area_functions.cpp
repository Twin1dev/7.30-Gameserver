#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_CameraLens_Cube_Area.B_CameraLens_Cube_Area_C
// (Actor)

class UClass* AB_CameraLens_Cube_Area_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_CameraLens_Cube_Area_C");

	return Clss;
}


// B_CameraLens_Cube_Area_C B_CameraLens_Cube_Area.Default__B_CameraLens_Cube_Area_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_CameraLens_Cube_Area_C* AB_CameraLens_Cube_Area_C::GetDefaultObj()
{
	static class AB_CameraLens_Cube_Area_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_CameraLens_Cube_Area_C*>(AB_CameraLens_Cube_Area_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_CameraLens_Cube_Area.B_CameraLens_Cube_Area_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CameraLens_Cube_Area_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraLens_Cube_Area_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraLens_Cube_Area.B_CameraLens_Cube_Area_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_CameraLens_Cube_Area_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraLens_Cube_Area_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraLens_Cube_Area.B_CameraLens_Cube_Area_C.ExecuteUbergraph_B_CameraLens_Cube_Area
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CameraLens_Cube_Area_C::ExecuteUbergraph_B_CameraLens_Cube_Area(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraLens_Cube_Area_C", "ExecuteUbergraph_B_CameraLens_Cube_Area");

	Params::AB_CameraLens_Cube_Area_C_ExecuteUbergraph_B_CameraLens_Cube_Area_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_CameraRainDrops_02.B_CameraRainDrops_02_C
// (Actor)

class UClass* AB_CameraRainDrops_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_CameraRainDrops_02_C");

	return Clss;
}


// B_CameraRainDrops_02_C B_CameraRainDrops_02.Default__B_CameraRainDrops_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_CameraRainDrops_02_C* AB_CameraRainDrops_02_C::GetDefaultObj()
{
	static class AB_CameraRainDrops_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_CameraRainDrops_02_C*>(AB_CameraRainDrops_02_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_CameraRainDrops_02.B_CameraRainDrops_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CameraRainDrops_02_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraRainDrops_02_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraRainDrops_02.B_CameraRainDrops_02_C.Alpha__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_CameraRainDrops_02_C::Alpha__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraRainDrops_02_C", "Alpha__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraRainDrops_02.B_CameraRainDrops_02_C.Alpha__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_CameraRainDrops_02_C::Alpha__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraRainDrops_02_C", "Alpha__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraRainDrops_02.B_CameraRainDrops_02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_CameraRainDrops_02_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraRainDrops_02_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraRainDrops_02.B_CameraRainDrops_02_C.ExecuteUbergraph_B_CameraRainDrops_02
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRenderingDetailMode_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CameraRainDrops_02_C::ExecuteUbergraph_B_CameraRainDrops_02(int32 EntryPoint, int32 CallFunc_GetRenderingDetailMode_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraRainDrops_02_C", "ExecuteUbergraph_B_CameraRainDrops_02");

	Params::AB_CameraRainDrops_02_C_ExecuteUbergraph_B_CameraRainDrops_02_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRenderingDetailMode_ReturnValue = CallFunc_GetRenderingDetailMode_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



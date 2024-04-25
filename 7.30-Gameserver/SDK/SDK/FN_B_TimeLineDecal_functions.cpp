#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_TimeLineDecal.B_TimeLineDecal_C
// (Actor)

class UClass* AB_TimeLineDecal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_TimeLineDecal_C");

	return Clss;
}


// B_TimeLineDecal_C B_TimeLineDecal.Default__B_TimeLineDecal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_TimeLineDecal_C* AB_TimeLineDecal_C::GetDefaultObj()
{
	static class AB_TimeLineDecal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_TimeLineDecal_C*>(AB_TimeLineDecal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_TimeLineDecal.B_TimeLineDecal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_TimeLineDecal_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_TimeLineDecal_C", "UserConstructionScript");

	Params::AB_TimeLineDecal_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TimeLineDecal.B_TimeLineDecal_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_TimeLineDecal_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_TimeLineDecal_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_TimeLineDecal.B_TimeLineDecal_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_TimeLineDecal_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_TimeLineDecal_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_TimeLineDecal.B_TimeLineDecal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_TimeLineDecal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_TimeLineDecal_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_TimeLineDecal.B_TimeLineDecal_C.ExecuteUbergraph_B_TimeLineDecal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_TimeLineDecal_C::ExecuteUbergraph_B_TimeLineDecal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_TimeLineDecal_C", "ExecuteUbergraph_B_TimeLineDecal");

	Params::AB_TimeLineDecal_C_ExecuteUbergraph_B_TimeLineDecal_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



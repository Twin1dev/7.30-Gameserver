#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaSeasonBPTrackerSimpleWidget.AthenaSeasonBPTrackerSimpleWidget_C
// (None)

class UClass* UAthenaSeasonBPTrackerSimpleWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaSeasonBPTrackerSimpleWidget_C");

	return Clss;
}


// AthenaSeasonBPTrackerSimpleWidget_C AthenaSeasonBPTrackerSimpleWidget.Default__AthenaSeasonBPTrackerSimpleWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaSeasonBPTrackerSimpleWidget_C* UAthenaSeasonBPTrackerSimpleWidget_C::GetDefaultObj()
{
	static class UAthenaSeasonBPTrackerSimpleWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaSeasonBPTrackerSimpleWidget_C*>(UAthenaSeasonBPTrackerSimpleWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaSeasonBPTrackerSimpleWidget.AthenaSeasonBPTrackerSimpleWidget_C.OnAccountInfoChanged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo      Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAthenaSeasonBPTrackerSimpleWidget_C::OnAccountInfoChanged(struct FFortPublicAccountInfo& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonBPTrackerSimpleWidget_C", "OnAccountInfoChanged");

	Params::UAthenaSeasonBPTrackerSimpleWidget_C_OnAccountInfoChanged_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonBPTrackerSimpleWidget.AthenaSeasonBPTrackerSimpleWidget_C.ExecuteUbergraph_AthenaSeasonBPTrackerSimpleWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPublicAccountInfo      K2Node_Event_Result                                              (ConstParm, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonBPTrackerSimpleWidget_C::ExecuteUbergraph_AthenaSeasonBPTrackerSimpleWidget(int32 EntryPoint, const struct FFortPublicAccountInfo& K2Node_Event_Result, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonBPTrackerSimpleWidget_C", "ExecuteUbergraph_AthenaSeasonBPTrackerSimpleWidget");

	Params::UAthenaSeasonBPTrackerSimpleWidget_C_ExecuteUbergraph_AthenaSeasonBPTrackerSimpleWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Result = K2Node_Event_Result;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue1 = CallFunc_GreaterEqual_IntInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}



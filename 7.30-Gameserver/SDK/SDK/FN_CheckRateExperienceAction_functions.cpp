#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CheckRateExperienceAction.CheckRateExperienceAction_C
// (Actor)

class UClass* ACheckRateExperienceAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheckRateExperienceAction_C");

	return Clss;
}


// CheckRateExperienceAction_C CheckRateExperienceAction.Default__CheckRateExperienceAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACheckRateExperienceAction_C* ACheckRateExperienceAction_C::GetDefaultObj()
{
	static class ACheckRateExperienceAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACheckRateExperienceAction_C*>(ACheckRateExperienceAction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheckRateExperienceAction.CheckRateExperienceAction_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACheckRateExperienceAction_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckRateExperienceAction_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheckRateExperienceAction.CheckRateExperienceAction_C.HandleClientEvent_FinishedModalQueue
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ACheckRateExperienceAction_C::HandleClientEvent_FinishedModalQueue(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckRateExperienceAction_C", "HandleClientEvent_FinishedModalQueue");

	Params::ACheckRateExperienceAction_C_HandleClientEvent_FinishedModalQueue_Params Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckRateExperienceAction.CheckRateExperienceAction_C.Execute
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams   Params                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ACheckRateExperienceAction_C::Execute(struct FFortScriptedActionParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckRateExperienceAction_C", "Execute");

	Params::ACheckRateExperienceAction_C_Execute_Params Parms{};

	Parms.Params = Params;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckRateExperienceAction.CheckRateExperienceAction_C.ExecuteUbergraph_CheckRateExperienceAction
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortScriptedActionParams   K2Node_Event_Params                                              (ConstParm, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventSource                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent                             (ConstParm, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFeedback_RateExperience_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFeedbackTitle_ReturnValue                            (None)
// bool                               CallFunc_ShouldShowRateWidget_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPendingLogout_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckRateExperienceAction_C::ExecuteUbergraph_CheckRateExperienceAction(int32 EntryPoint, const struct FFortScriptedActionParams& K2Node_Event_Params, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFeedback_RateExperience_C* CallFunc_Create_ReturnValue, class FText CallFunc_GetFeedbackTitle_ReturnValue, bool CallFunc_ShouldShowRateWidget_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsPendingLogout_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckRateExperienceAction_C", "ExecuteUbergraph_CheckRateExperienceAction");

	Params::ACheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Params = K2Node_Event_Params;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_HandleClientEvent_EventSource = K2Node_HandleClientEvent_EventSource;
	Parms.K2Node_HandleClientEvent_EventFocus = K2Node_HandleClientEvent_EventFocus;
	Parms.K2Node_HandleClientEvent_ClientEvent = K2Node_HandleClientEvent_ClientEvent;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetFeedbackTitle_ReturnValue = CallFunc_GetFeedbackTitle_ReturnValue;
	Parms.CallFunc_ShouldShowRateWidget_ReturnValue = CallFunc_ShouldShowRateWidget_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_IsPendingLogout_ReturnValue = CallFunc_IsPendingLogout_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C
// (None)

class UClass* UChallengeBundleLockedReasonDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeBundleLockedReasonDisplay_C");

	return Clss;
}


// ChallengeBundleLockedReasonDisplay_C ChallengeBundleLockedReasonDisplay.Default__ChallengeBundleLockedReasonDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeBundleLockedReasonDisplay_C* UChallengeBundleLockedReasonDisplay_C::GetDefaultObj()
{
	static class UChallengeBundleLockedReasonDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeBundleLockedReasonDisplay_C*>(UChallengeBundleLockedReasonDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.GetTimeSpanValue
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTimespan                   Result                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeBundleLockedReasonDisplay_C::GetTimeSpanValue(struct FTimespan* Result, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, const struct FTimespan& CallFunc_GetValue_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeBundleLockedReasonDisplay_C", "GetTimeSpanValue");

	Params::UChallengeBundleLockedReasonDisplay_C_GetTimeSpanValue_Params Parms{};

	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.HandleTick
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeBundleLockedReasonDisplay_C::HandleTick(class UObject* Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeBundleLockedReasonDisplay_C", "HandleTick");

	Params::UChallengeBundleLockedReasonDisplay_C_HandleTick_Params Parms{};

	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.SetTimespanSource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IFortTimespanDataSource>Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeBundleLockedReasonDisplay_C::SetTimespanSource(TScriptInterface<class IFortTimespanDataSource> Value, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue1, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue2, bool CallFunc_IsValid_ReturnValue1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue3, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeBundleLockedReasonDisplay_C", "SetTimespanSource");

	Params::UChallengeBundleLockedReasonDisplay_C_SetTimespanSource_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue1 = CallFunc_Conv_InterfaceToObject_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue2 = CallFunc_Conv_InterfaceToObject_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue3 = CallFunc_Conv_InterfaceToObject_ReturnValue3;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.UpdateLockReasonDisplay
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_GetTimespanValue_Result                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FormatLockedReason_ReturnValue                          (None)
// class FText                        CallFunc_FormatLockedReason_ReturnValue1                         (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_TextToUpper_ReturnValue1                                (None)

void UChallengeBundleLockedReasonDisplay_C::UpdateLockReasonDisplay(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FTimespan& CallFunc_GetTimespanValue_Result, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_FormatLockedReason_ReturnValue, class FText CallFunc_FormatLockedReason_ReturnValue1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeBundleLockedReasonDisplay_C", "UpdateLockReasonDisplay");

	Params::UChallengeBundleLockedReasonDisplay_C_UpdateLockReasonDisplay_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetTimespanValue_Result = CallFunc_GetTimespanValue_Result;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FormatLockedReason_ReturnValue = CallFunc_FormatLockedReason_ReturnValue;
	Parms.CallFunc_FormatLockedReason_ReturnValue1 = CallFunc_FormatLockedReason_ReturnValue1;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue1 = CallFunc_TextToUpper_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.SetLockReason
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortChallengeBundleInfoLockedReasonInValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UChallengeBundleLockedReasonDisplay_C::SetLockReason(const struct FFortChallengeBundleInfoLockedReason& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeBundleLockedReasonDisplay_C", "SetLockReason");

	Params::UChallengeBundleLockedReasonDisplay_C_SetLockReason_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UChallengeBundleLockedReasonDisplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeBundleLockedReasonDisplay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.ExecuteUbergraph_ChallengeBundleLockedReasonDisplay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeBundleLockedReasonDisplay_C::ExecuteUbergraph_ChallengeBundleLockedReasonDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeBundleLockedReasonDisplay_C", "ExecuteUbergraph_ChallengeBundleLockedReasonDisplay");

	Params::UChallengeBundleLockedReasonDisplay_C_ExecuteUbergraph_ChallengeBundleLockedReasonDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



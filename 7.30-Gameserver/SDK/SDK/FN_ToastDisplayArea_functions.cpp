#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ToastDisplayArea.ToastDisplayArea_C
// (None)

class UClass* UToastDisplayArea_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToastDisplayArea_C");

	return Clss;
}


// ToastDisplayArea_C ToastDisplayArea.Default__ToastDisplayArea_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UToastDisplayArea_C* UToastDisplayArea_C::GetDefaultObj()
{
	static class UToastDisplayArea_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UToastDisplayArea_C*>(UToastDisplayArea_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ToastDisplayArea.ToastDisplayArea_C.AttemptDisplayNextToast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINotification*         CallFunc_GetNextNotification_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastDisplayArea_C::AttemptDisplayNextToast(bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortUINotification* CallFunc_GetNextNotification_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToastDisplayArea_C", "AttemptDisplayNextToast");

	Params::UToastDisplayArea_C_AttemptDisplayNextToast_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetNextNotification_ReturnValue = CallFunc_GetNextNotification_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastDisplayArea.ToastDisplayArea_C.RegisterToastHandler
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINotificationQueue*    CallFunc_GetUINotificationQueue_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastDisplayArea_C::RegisterToastHandler(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UFortUINotificationQueue* CallFunc_GetUINotificationQueue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToastDisplayArea_C", "RegisterToastHandler");

	Params::UToastDisplayArea_C_RegisterToastHandler_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUINotificationQueue_ReturnValue = CallFunc_GetUINotificationQueue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastDisplayArea.ToastDisplayArea_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UToastDisplayArea_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToastDisplayArea_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToastDisplayArea.ToastDisplayArea_C.HandleNewToastAvailable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastDisplayArea_C::HandleNewToastAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToastDisplayArea_C", "HandleNewToastAvailable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToastDisplayArea.ToastDisplayArea_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UToastDisplayArea_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToastDisplayArea_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToastDisplayArea.ToastDisplayArea_C.BndEvt__PowerToastWidget_K2Node_ComponentBoundEvent_8_OnFinishedToast__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UToastDisplayArea_C::BndEvt__PowerToastWidget_K2Node_ComponentBoundEvent_8_OnFinishedToast__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToastDisplayArea_C", "BndEvt__PowerToastWidget_K2Node_ComponentBoundEvent_8_OnFinishedToast__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToastDisplayArea.ToastDisplayArea_C.BndEvt__ToastWidget_New_K2Node_ComponentBoundEvent_9_OnFinishedToast__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UToastDisplayArea_C::BndEvt__ToastWidget_New_K2Node_ComponentBoundEvent_9_OnFinishedToast__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToastDisplayArea_C", "BndEvt__ToastWidget_New_K2Node_ComponentBoundEvent_9_OnFinishedToast__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToastDisplayArea.ToastDisplayArea_C.BndEvt__ToastWidget_MinorError_K2Node_ComponentBoundEvent_3_OnFinishedToast__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UToastDisplayArea_C::BndEvt__ToastWidget_MinorError_K2Node_ComponentBoundEvent_3_OnFinishedToast__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToastDisplayArea_C", "BndEvt__ToastWidget_MinorError_K2Node_ComponentBoundEvent_3_OnFinishedToast__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToastDisplayArea.ToastDisplayArea_C.ExecuteUbergraph_ToastDisplayArea
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastDisplayArea_C::ExecuteUbergraph_ToastDisplayArea(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToastDisplayArea_C", "ExecuteUbergraph_ToastDisplayArea");

	Params::UToastDisplayArea_C_ExecuteUbergraph_ToastDisplayArea_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



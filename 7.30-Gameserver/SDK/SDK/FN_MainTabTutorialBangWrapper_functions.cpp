#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C
// (None)

class UClass* UMainTabTutorialBangWrapper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainTabTutorialBangWrapper_C");

	return Clss;
}


// MainTabTutorialBangWrapper_C MainTabTutorialBangWrapper.Default__MainTabTutorialBangWrapper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainTabTutorialBangWrapper_C* UMainTabTutorialBangWrapper_C::GetDefaultObj()
{
	static class UMainTabTutorialBangWrapper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainTabTutorialBangWrapper_C*>(UMainTabTutorialBangWrapper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.SetShouldSuppressBang
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldSuppressBang                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabTutorialBangWrapper_C::SetShouldSuppressBang(bool ShouldSuppressBang, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "SetShouldSuppressBang");

	Params::UMainTabTutorialBangWrapper_C_SetShouldSuppressBang_Params Parms{};

	Parms.ShouldSuppressBang = ShouldSuppressBang;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.SetUIFeatureRevealData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortUIFeature          UIFeature                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        RevealText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainTabTutorialBangWrapper_C::SetUIFeatureRevealData(enum class EFortUIFeature UIFeature, class FText RevealText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "SetUIFeatureRevealData");

	Params::UMainTabTutorialBangWrapper_C_SetUIFeatureRevealData_Params Parms{};

	Parms.UIFeature = UIFeature;
	Parms.RevealText = RevealText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.Adjust Bang Image Translation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Translation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabTutorialBangWrapper_C::Adjust_Bang_Image_Translation(const struct FVector2D& Translation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "Adjust Bang Image Translation");

	Params::UMainTabTutorialBangWrapper_C_Adjust_Bang_Image_Translation_Params Parms{};

	Parms.Translation = Translation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.Update Bang Icon Version
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InCount                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabTutorialBangWrapper_C::Update_Bang_Icon_Version(int32 InCount, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable, int32 Temp_int_Variable2, int32 Temp_int_Variable3, bool Temp_bool_Variable1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "Update Bang Icon Version");

	Params::UMainTabTutorialBangWrapper_C_Update_Bang_Icon_Version_Params Parms{};

	Parms.InCount = InCount;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.SetTutorialBorderStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      BorderStyle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabTutorialBangWrapper_C::SetTutorialBorderStyle(class UClass* BorderStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "SetTutorialBorderStyle");

	Params::UMainTabTutorialBangWrapper_C_SetTutorialBorderStyle_Params Parms{};

	Parms.BorderStyle = BorderStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.OnBangStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabTutorialBangWrapper_C::OnBangStateChanged(bool bEnabled, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "OnBangStateChanged");

	Params::UMainTabTutorialBangWrapper_C_OnBangStateChanged_Params Parms{};

	Parms.bEnabled = bEnabled;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.OnStopCallout
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMainTabTutorialBangWrapper_C::OnStopCallout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "OnStopCallout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.OnStartCallout
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TutorialObjectiveName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETutorialType           TutorialType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabTutorialBangWrapper_C::OnStartCallout(class FName TutorialObjectiveName, enum class ETutorialType TutorialType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "OnStartCallout");

	Params::UMainTabTutorialBangWrapper_C_OnStartCallout_Params Parms{};

	Parms.TutorialObjectiveName = TutorialObjectiveName;
	Parms.TutorialType = TutorialType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabTutorialBangWrapper_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "PreConstruct");

	Params::UMainTabTutorialBangWrapper_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.Tab Reveal Message Closed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainTabTutorialBangWrapper_C::Tab_Reveal_Message_Closed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "Tab Reveal Message Closed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.ExecuteUbergraph_MainTabTutorialBangWrapper
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEnabled                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Count                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_TutorialObjectiveName                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETutorialType           K2Node_Event_TutorialType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTabRevealMeassage_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UMainTabTutorialBangWrapper_C::ExecuteUbergraph_MainTabTutorialBangWrapper(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool K2Node_Event_bEnabled, int32 K2Node_Event_Count, class FName K2Node_Event_TutorialObjectiveName, enum class ETutorialType K2Node_Event_TutorialType, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_IntToText_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_BooleanAND_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UTabRevealMeassage_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "ExecuteUbergraph_MainTabTutorialBangWrapper");

	Params::UMainTabTutorialBangWrapper_C_ExecuteUbergraph_MainTabTutorialBangWrapper_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Event_bEnabled = K2Node_Event_bEnabled;
	Parms.K2Node_Event_Count = K2Node_Event_Count;
	Parms.K2Node_Event_TutorialObjectiveName = K2Node_Event_TutorialObjectiveName;
	Parms.K2Node_Event_TutorialType = K2Node_Event_TutorialType;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.StopTabCallout__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainTabTutorialBangWrapper_C::StopTabCallout__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "StopTabCallout__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.TabDialogClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainTabTutorialBangWrapper_C::TabDialogClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "TabDialogClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.TabAdded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainTabTutorialBangWrapper_C::TabAdded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "TabAdded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}



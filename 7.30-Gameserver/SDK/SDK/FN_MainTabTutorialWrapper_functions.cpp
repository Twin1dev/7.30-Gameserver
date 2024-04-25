#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MainTabTutorialWrapper.MainTabTutorialWrapper_C
// (None)

class UClass* UMainTabTutorialWrapper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainTabTutorialWrapper_C");

	return Clss;
}


// MainTabTutorialWrapper_C MainTabTutorialWrapper.Default__MainTabTutorialWrapper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainTabTutorialWrapper_C* UMainTabTutorialWrapper_C::GetDefaultObj()
{
	static class UMainTabTutorialWrapper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainTabTutorialWrapper_C*>(UMainTabTutorialWrapper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.SetParentButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               ParentButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabTutorialWrapper_C::SetParentButton(class UCommonButton* ParentButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialWrapper_C", "SetParentButton");

	Params::UMainTabTutorialWrapper_C_SetParentButton_Params Parms{};

	Parms.ParentButton = ParentButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.GetTutorialCalloutData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUITutorialData         TutorialData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortToastDisplayInfo       FortToastDisplayInfo                                             (Parm, OutParm)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Array_Get_Item1                                         (HasGetValueTypeHash)
// struct FFortToastDisplayInfo       K2Node_MakeStruct_FortToastDisplayInfo                           (None)

void UMainTabTutorialWrapper_C::GetTutorialCalloutData(const struct FFortUITutorialData& TutorialData, struct FFortToastDisplayInfo* FortToastDisplayInfo, class FText CallFunc_Array_Get_Item, TSoftObjectPtr<class UTexture2D> CallFunc_Array_Get_Item1, const struct FFortToastDisplayInfo& K2Node_MakeStruct_FortToastDisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialWrapper_C", "GetTutorialCalloutData");

	Params::UMainTabTutorialWrapper_C_GetTutorialCalloutData_Params Parms{};

	Parms.TutorialData = TutorialData;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.K2Node_MakeStruct_FortToastDisplayInfo = K2Node_MakeStruct_FortToastDisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (FortToastDisplayInfo != nullptr)
		*FortToastDisplayInfo = std::move(Parms.FortToastDisplayInfo);

}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.HasValidData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUITutorialData         FortUITutorialData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabTutorialWrapper_C::HasValidData(struct FFortUITutorialData& FortUITutorialData, bool* Result, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialWrapper_C", "HasValidData");

	Params::UMainTabTutorialWrapper_C_HasValidData_Params Parms{};

	Parms.FortUITutorialData = FortUITutorialData;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.HandleTutorialCallout
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TutorialObjectiveName                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETutorialType           TutorialType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUITutorialData         TutorialData                                                     (Edit, BlueprintVisible)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTutorialContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortUITutorialData         CallFunc_GetTutorialData_OutTutorialData                         (None)
// bool                               CallFunc_GetTutorialData_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasValidData_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortToastDisplayInfo       CallFunc_GetTutorialCalloutData_FortToastDisplayInfo             (None)

void UMainTabTutorialWrapper_C::HandleTutorialCallout(class FName& TutorialObjectiveName, enum class ETutorialType TutorialType, const struct FFortUITutorialData& TutorialData, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetSelected_ReturnValue, class UFortTutorialContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFortUITutorialData& CallFunc_GetTutorialData_OutTutorialData, bool CallFunc_GetTutorialData_ReturnValue, bool CallFunc_HasValidData_Result, const struct FFortToastDisplayInfo& CallFunc_GetTutorialCalloutData_FortToastDisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialWrapper_C", "HandleTutorialCallout");

	Params::UMainTabTutorialWrapper_C_HandleTutorialCallout_Params Parms{};

	Parms.TutorialObjectiveName = TutorialObjectiveName;
	Parms.TutorialType = TutorialType;
	Parms.TutorialData = TutorialData;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTutorialData_OutTutorialData = CallFunc_GetTutorialData_OutTutorialData;
	Parms.CallFunc_GetTutorialData_ReturnValue = CallFunc_GetTutorialData_ReturnValue;
	Parms.CallFunc_HasValidData_Result = CallFunc_HasValidData_Result;
	Parms.CallFunc_GetTutorialCalloutData_FortToastDisplayInfo = CallFunc_GetTutorialCalloutData_FortToastDisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.CheckFinishTutorialWrapper
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortTutorialContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTutorialCalloutVisible_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabTutorialWrapper_C::CheckFinishTutorialWrapper(class UFortTutorialContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsTutorialCalloutVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialWrapper_C", "CheckFinishTutorialWrapper");

	Params::UMainTabTutorialWrapper_C_CheckFinishTutorialWrapper_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsTutorialCalloutVisible_ReturnValue = CallFunc_IsTutorialCalloutVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnBangStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabTutorialWrapper_C::OnBangStateChanged(bool bEnabled, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialWrapper_C", "OnBangStateChanged");

	Params::UMainTabTutorialWrapper_C_OnBangStateChanged_Params Parms{};

	Parms.bEnabled = bEnabled;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnStopCallout
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMainTabTutorialWrapper_C::OnStopCallout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialWrapper_C", "OnStopCallout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnStartCallout
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TutorialObjectiveName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETutorialType           TutorialType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabTutorialWrapper_C::OnStartCallout(class FName TutorialObjectiveName, enum class ETutorialType TutorialType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialWrapper_C", "OnStartCallout");

	Params::UMainTabTutorialWrapper_C_OnStartCallout_Params Parms{};

	Parms.TutorialObjectiveName = TutorialObjectiveName;
	Parms.TutorialType = TutorialType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.Tab Reveal Message Closed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainTabTutorialWrapper_C::Tab_Reveal_Message_Closed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialWrapper_C", "Tab Reveal Message Closed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.ExecuteUbergraph_MainTabTutorialWrapper
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEnabled                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Count                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_TutorialObjectiveName                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETutorialType           K2Node_Event_TutorialType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabTutorialWrapper_C::ExecuteUbergraph_MainTabTutorialWrapper(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool K2Node_Event_bEnabled, int32 K2Node_Event_Count, class FName K2Node_Event_TutorialObjectiveName, enum class ETutorialType K2Node_Event_TutorialType, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabTutorialWrapper_C", "ExecuteUbergraph_MainTabTutorialWrapper");

	Params::UMainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Event_bEnabled = K2Node_Event_bEnabled;
	Parms.K2Node_Event_Count = K2Node_Event_Count;
	Parms.K2Node_Event_TutorialObjectiveName = K2Node_Event_TutorialObjectiveName;
	Parms.K2Node_Event_TutorialType = K2Node_Event_TutorialType;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}



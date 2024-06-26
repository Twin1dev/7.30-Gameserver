#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CreativeServerOptions.CreativeServerOptions_C
// (None)

class UClass* UCreativeServerOptions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeServerOptions_C");

	return Clss;
}


// CreativeServerOptions_C CreativeServerOptions.Default__CreativeServerOptions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreativeServerOptions_C* UCreativeServerOptions_C::GetDefaultObj()
{
	static class UCreativeServerOptions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeServerOptions_C*>(UCreativeServerOptions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CreativeServerOptions.CreativeServerOptions_C.OnCreativeServerListRefreshed
// (Event, Public, BlueprintEvent)
// Parameters:

void UCreativeServerOptions_C::OnCreativeServerListRefreshed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeServerOptions_C", "OnCreativeServerListRefreshed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeServerOptions.CreativeServerOptions_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_2_OnFortSwipeEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCreativeServerOptions_C::BndEvt__SwipePanel_K2Node_ComponentBoundEvent_2_OnFortSwipeEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeServerOptions_C", "BndEvt__SwipePanel_K2Node_ComponentBoundEvent_2_OnFortSwipeEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeServerOptions.CreativeServerOptions_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_3_OnFortSwipeEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCreativeServerOptions_C::BndEvt__SwipePanel_K2Node_ComponentBoundEvent_3_OnFortSwipeEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeServerOptions_C", "BndEvt__SwipePanel_K2Node_ComponentBoundEvent_3_OnFortSwipeEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeServerOptions.CreativeServerOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCreativeServerOptions_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeServerOptions_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeServerOptions.CreativeServerOptions_C.BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeServerOptions_C::BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeServerOptions_C", "BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	Params::UCreativeServerOptions_C_BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeServerOptions.CreativeServerOptions_C.BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeServerOptions_C::BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeServerOptions_C", "BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::UCreativeServerOptions_C_BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeServerOptions.CreativeServerOptions_C.EventIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreativeServerOptions_C::EventIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeServerOptions_C", "EventIntro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeServerOptions.CreativeServerOptions_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativeServerOptions_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeServerOptions_C", "PreConstruct");

	Params::UCreativeServerOptions_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeServerOptions.CreativeServerOptions_C.ExecuteUbergraph_CreativeServerOptions
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector4                    CallFunc_GetSafeZonePadding_SafePadding                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSafeZonePadding_SafePaddingScale                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_GetSafeZonePadding_SpillOverPadding                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativeServerOptions_C::ExecuteUbergraph_CreativeServerOptions(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable1, const struct FVector4& CallFunc_GetSafeZonePadding_SafePadding, const struct FVector2D& CallFunc_GetSafeZonePadding_SafePaddingScale, const struct FVector4& CallFunc_GetSafeZonePadding_SpillOverPadding, bool Temp_bool_Variable2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, float Temp_float_Variable, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_Variable3, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue1, float K2Node_Select1_Default, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue4, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsMobileGame_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float Temp_float_Variable1, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue2, float K2Node_Select3_Default, float CallFunc_Subtract_FloatFloat_ReturnValue3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue4, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeServerOptions_C", "ExecuteUbergraph_CreativeServerOptions");

	Params::UCreativeServerOptions_C_ExecuteUbergraph_CreativeServerOptions_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_GetSafeZonePadding_SafePadding = CallFunc_GetSafeZonePadding_SafePadding;
	Parms.CallFunc_GetSafeZonePadding_SafePaddingScale = CallFunc_GetSafeZonePadding_SafePaddingScale;
	Parms.CallFunc_GetSafeZonePadding_SpillOverPadding = CallFunc_GetSafeZonePadding_SpillOverPadding;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue4 = CallFunc_Multiply_FloatFloat_ReturnValue4;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_PauseAnimation_ReturnValue = CallFunc_PauseAnimation_ReturnValue;
	Parms.CallFunc_GetStartTime_ReturnValue = CallFunc_GetStartTime_ReturnValue;
	Parms.CallFunc_PauseAnimation_ReturnValue1 = CallFunc_PauseAnimation_ReturnValue1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1 = CallFunc_Subtract_FloatFloat_ReturnValue1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue3 = CallFunc_Subtract_FloatFloat_ReturnValue3;
	Parms.CallFunc_PlayAnimation_ReturnValue1 = CallFunc_PlayAnimation_ReturnValue1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue4 = CallFunc_Subtract_FloatFloat_ReturnValue4;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeServerOptions.CreativeServerOptions_C.OnSelectedServerChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortCreativeServerInfo*     ServerInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeServerOptions_C::OnSelectedServerChanged__DelegateSignature(class UFortCreativeServerInfo* ServerInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeServerOptions_C", "OnSelectedServerChanged__DelegateSignature");

	Params::UCreativeServerOptions_C_OnSelectedServerChanged__DelegateSignature_Params Parms{};

	Parms.ServerInfo = ServerInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ShowdownEventTileInfo.ShowdownEventTileInfo_C
// (None)

class UClass* UShowdownEventTileInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShowdownEventTileInfo_C");

	return Clss;
}


// ShowdownEventTileInfo_C ShowdownEventTileInfo.Default__ShowdownEventTileInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShowdownEventTileInfo_C* UShowdownEventTileInfo_C::GetDefaultObj()
{
	static class UShowdownEventTileInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShowdownEventTileInfo_C*>(UShowdownEventTileInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UShowdownEventTileInfo_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTileInfo_C", "RefreshDataBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventAnimFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               In                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShowdownEventTileInfo_C::EventAnimFocus(bool In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTileInfo_C", "EventAnimFocus");

	Params::UShowdownEventTileInfo_C_EventAnimFocus_Params Parms{};

	Parms.In = In;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventStyleSocket
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShowdownEventTileInfo_C::EventStyleSocket()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTileInfo_C", "EventStyleSocket");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventAnimHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               In                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShowdownEventTileInfo_C::EventAnimHover(bool In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTileInfo_C", "EventAnimHover");

	Params::UShowdownEventTileInfo_C_EventAnimHover_Params Parms{};

	Parms.In = In;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UShowdownEventTileInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTileInfo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShowdownEventTileInfo_C::EventColorize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTileInfo_C", "EventColorize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.ExecuteUbergraph_ShowdownEventTileInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetEventEndTime_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        CallFunc_GetEventDateAsText_ReturnValue                          (None)
// class FText                        Temp_text_Variable1                                              (None)
// class FText                        Temp_text_Variable2                                              (None)
// enum class EFortShowdownEventState Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable3                                              (None)
// class FText                        Temp_text_Variable4                                              (None)
// class FText                        Temp_text_Variable5                                              (None)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable6                                              (None)
// class FText                        Temp_text_Variable7                                              (None)
// class FText                        Temp_text_Variable8                                              (None)
// class FText                        Temp_text_Variable9                                              (None)
// class FText                        Temp_text_Variable10                                             (None)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable11                                             (None)
// enum class EFortShowdownEventState Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortShowdownEventState CallFunc_GetEventState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select2_Default                                           (None)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortShowdownEventState Temp_byte_Variable13                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable12                                             (None)
// class FText                        Temp_text_Variable13                                             (None)
// class FText                        Temp_text_Variable14                                             (None)
// bool                               K2Node_CustomEvent_In1                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable15                                             (None)
// class FText                        Temp_text_Variable16                                             (None)
// class UWidgetAnimation*            K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select7_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select8_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable17                                             (None)
// float                              CallFunc_PauseAnimation_ReturnValue8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select9_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEventId_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// enum class EFortShowdownPinState   CallFunc_GetEventPinState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortShowdownEventState Temp_byte_Variable14                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue13                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue14                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue15                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_In                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable18                                             (None)
// struct FDateTime                   CallFunc_GetEventBeginTime_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentEventScore_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEventDateAsText_ReturnValue1                         (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// int32                              CallFunc_GetBestEventScore_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             (None)
// class FText                        K2Node_Select10_Default                                          (None)
// class FText                        Temp_text_Variable19                                             (None)
// float                              CallFunc_RGBToHSV_H                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_S                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_V                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_A                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_H1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_S1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_V1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_A1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_HSVToRGB_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_HSVToRGB_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable20                                             (None)
// float                              CallFunc_Add_FloatFloat_ReturnValue9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable21                                             (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// class FText                        Temp_text_Variable22                                             (None)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo1                                 (HasGetValueTypeHash)
// class FText                        Temp_text_Variable23                                             (None)
// class FText                        Temp_text_Variable24                                             (None)
// class FText                        Temp_text_Variable25                                             (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable26                                             (None)
// enum class EFortShowdownEventState Temp_byte_Variable15                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select11_Default                                          (None)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo2                                 (HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo3                                 (HasGetValueTypeHash)
// float                              Temp_float_Variable6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select13_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue12                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select14_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue13                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select15_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue14                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select16_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue15                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortShowdownEventState CallFunc_GetEventState_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select17_Default                                          (None)

void UShowdownEventTileInfo_C::ExecuteUbergraph_ShowdownEventTileInfo(int32 EntryPoint, const struct FDateTime& CallFunc_GetEventEndTime_ReturnValue, class FText Temp_text_Variable, class FText CallFunc_GetEventDateAsText_ReturnValue, class FText Temp_text_Variable1, class FText Temp_text_Variable2, enum class EFortShowdownEventState Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable1, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, float Temp_float_Variable2, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class FText Temp_text_Variable10, bool Temp_bool_Variable2, class FText Temp_text_Variable11, enum class EFortShowdownEventState Temp_byte_Variable3, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable3, float Temp_float_Variable3, bool Temp_bool_Variable4, float Temp_float_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, enum class ESlateVisibility Temp_byte_Variable4, float K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility Temp_byte_Variable10, bool Temp_bool_Variable7, enum class ESlateVisibility Temp_byte_Variable11, enum class EFortShowdownEventState CallFunc_GetEventState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue1, enum class ESlateVisibility K2Node_Select1_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, class FText K2Node_Select2_Default, bool CallFunc_BooleanOR_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable12, enum class EFortShowdownEventState Temp_byte_Variable13, enum class ESlateVisibility K2Node_Select3_Default, class FText Temp_text_Variable12, class FText Temp_text_Variable13, class FText Temp_text_Variable14, bool K2Node_CustomEvent_In1, int32 K2Node_Select4_Default, class FText Temp_text_Variable15, class FText Temp_text_Variable16, class UWidgetAnimation* K2Node_Select5_Default, float CallFunc_GetStartTime_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetStartTime_ReturnValue1, float CallFunc_GetEndTime_ReturnValue1, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_PauseAnimation_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_PauseAnimation_ReturnValue2, float K2Node_Select6_Default, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_PauseAnimation_ReturnValue3, float K2Node_Select7_Default, float CallFunc_Add_FloatFloat_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UWidgetAnimation* K2Node_Select8_Default, float CallFunc_PauseAnimation_ReturnValue4, float CallFunc_GetStartTime_ReturnValue2, float CallFunc_PauseAnimation_ReturnValue5, bool CallFunc_LessEqual_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_GetEndTime_ReturnValue2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue4, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_PauseAnimation_ReturnValue6, float CallFunc_GetStartTime_ReturnValue3, float CallFunc_PauseAnimation_ReturnValue7, bool CallFunc_LessEqual_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_GetEndTime_ReturnValue3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue5, float CallFunc_Subtract_FloatFloat_ReturnValue3, class FText Temp_text_Variable17, float CallFunc_PauseAnimation_ReturnValue8, float CallFunc_GetStartTime_ReturnValue4, float CallFunc_PauseAnimation_ReturnValue9, bool CallFunc_LessEqual_FloatFloat_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue6, float CallFunc_GetEndTime_ReturnValue4, float CallFunc_PauseAnimation_ReturnValue10, float CallFunc_Subtract_FloatFloat_ReturnValue4, float CallFunc_GetStartTime_ReturnValue5, float K2Node_Select9_Default, bool CallFunc_LessEqual_FloatFloat_ReturnValue5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue7, float CallFunc_PauseAnimation_ReturnValue11, float CallFunc_GetEndTime_ReturnValue5, float CallFunc_Add_FloatFloat_ReturnValue5, float CallFunc_Subtract_FloatFloat_ReturnValue5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue8, const class FString& CallFunc_GetEventId_ReturnValue, enum class EFortShowdownPinState CallFunc_GetEventPinState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue5, enum class EFortShowdownEventState Temp_byte_Variable14, float CallFunc_PauseAnimation_ReturnValue12, float CallFunc_GetStartTime_ReturnValue6, float CallFunc_PauseAnimation_ReturnValue13, bool CallFunc_LessEqual_FloatFloat_ReturnValue6, float CallFunc_Add_FloatFloat_ReturnValue6, float CallFunc_GetEndTime_ReturnValue6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue9, float CallFunc_Subtract_FloatFloat_ReturnValue6, float CallFunc_PauseAnimation_ReturnValue14, float CallFunc_GetStartTime_ReturnValue7, float CallFunc_PauseAnimation_ReturnValue15, bool CallFunc_LessEqual_FloatFloat_ReturnValue7, float CallFunc_Add_FloatFloat_ReturnValue7, float CallFunc_GetEndTime_ReturnValue7, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue10, float CallFunc_Subtract_FloatFloat_ReturnValue7, bool K2Node_CustomEvent_In, class FText Temp_text_Variable18, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue, int32 CallFunc_GetCurrentEventScore_ReturnValue, class FText CallFunc_GetEventDateAsText_ReturnValue1, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetBestEventScore_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, class FText K2Node_Select10_Default, class FText Temp_text_Variable19, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, float CallFunc_RGBToHSV_H1, float CallFunc_RGBToHSV_S1, float CallFunc_RGBToHSV_V1, float CallFunc_RGBToHSV_A1, float CallFunc_Add_FloatFloat_ReturnValue8, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue1, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, class FText Temp_text_Variable20, float CallFunc_Add_FloatFloat_ReturnValue9, float CallFunc_Add_FloatFloat_ReturnValue10, float CallFunc_Add_FloatFloat_ReturnValue11, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, class FText Temp_text_Variable21, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class FText Temp_text_Variable22, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo1, class FText Temp_text_Variable23, class FText Temp_text_Variable24, class FText Temp_text_Variable25, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue1, class FText Temp_text_Variable26, enum class EFortShowdownEventState Temp_byte_Variable15, float Temp_float_Variable5, class FText K2Node_Select11_Default, bool Temp_bool_Variable8, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue1, float K2Node_Select12_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue11, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo3, float Temp_float_Variable6, bool Temp_bool_Variable9, float K2Node_Select13_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue12, float Temp_float_Variable7, bool Temp_bool_Variable10, float Temp_float_Variable8, float K2Node_Select14_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue13, bool Temp_bool_Variable11, float Temp_float_Variable9, float K2Node_Select15_Default, bool Temp_bool_Variable12, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue14, float K2Node_Select16_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue15, enum class EFortShowdownEventState CallFunc_GetEventState_ReturnValue1, class FText K2Node_Select17_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTileInfo_C", "ExecuteUbergraph_ShowdownEventTileInfo");

	Params::UShowdownEventTileInfo_C_ExecuteUbergraph_ShowdownEventTileInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEventEndTime_ReturnValue = CallFunc_GetEventEndTime_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetEventDateAsText_ReturnValue = CallFunc_GetEventDateAsText_ReturnValue;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.Temp_text_Variable10 = Temp_text_Variable10;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_text_Variable11 = Temp_text_Variable11;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_float_Variable4 = Temp_float_Variable4;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.Temp_byte_Variable10 = Temp_byte_Variable10;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_byte_Variable11 = Temp_byte_Variable11;
	Parms.CallFunc_GetEventState_ReturnValue = CallFunc_GetEventState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue4 = CallFunc_EqualEqual_ByteByte_ReturnValue4;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable13 = Temp_byte_Variable13;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_text_Variable13 = Temp_text_Variable13;
	Parms.Temp_text_Variable14 = Temp_text_Variable14;
	Parms.K2Node_CustomEvent_In1 = K2Node_CustomEvent_In1;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.Temp_text_Variable15 = Temp_text_Variable15;
	Parms.Temp_text_Variable16 = Temp_text_Variable16;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.CallFunc_GetStartTime_ReturnValue = CallFunc_GetStartTime_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_GetStartTime_ReturnValue1 = CallFunc_GetStartTime_ReturnValue1;
	Parms.CallFunc_GetEndTime_ReturnValue1 = CallFunc_GetEndTime_ReturnValue1;
	Parms.CallFunc_PauseAnimation_ReturnValue = CallFunc_PauseAnimation_ReturnValue;
	Parms.CallFunc_PauseAnimation_ReturnValue1 = CallFunc_PauseAnimation_ReturnValue1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_PauseAnimation_ReturnValue2 = CallFunc_PauseAnimation_ReturnValue2;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue1 = CallFunc_LessEqual_FloatFloat_ReturnValue1;
	Parms.CallFunc_PlayAnimation_ReturnValue1 = CallFunc_PlayAnimation_ReturnValue1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1 = CallFunc_Subtract_FloatFloat_ReturnValue1;
	Parms.CallFunc_PauseAnimation_ReturnValue3 = CallFunc_PauseAnimation_ReturnValue3;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.CallFunc_PlayAnimation_ReturnValue2 = CallFunc_PlayAnimation_ReturnValue2;
	Parms.CallFunc_PlayAnimation_ReturnValue3 = CallFunc_PlayAnimation_ReturnValue3;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;
	Parms.CallFunc_PauseAnimation_ReturnValue4 = CallFunc_PauseAnimation_ReturnValue4;
	Parms.CallFunc_GetStartTime_ReturnValue2 = CallFunc_GetStartTime_ReturnValue2;
	Parms.CallFunc_PauseAnimation_ReturnValue5 = CallFunc_PauseAnimation_ReturnValue5;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue2 = CallFunc_LessEqual_FloatFloat_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_GetEndTime_ReturnValue2 = CallFunc_GetEndTime_ReturnValue2;
	Parms.CallFunc_PlayAnimation_ReturnValue4 = CallFunc_PlayAnimation_ReturnValue4;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.CallFunc_PauseAnimation_ReturnValue6 = CallFunc_PauseAnimation_ReturnValue6;
	Parms.CallFunc_GetStartTime_ReturnValue3 = CallFunc_GetStartTime_ReturnValue3;
	Parms.CallFunc_PauseAnimation_ReturnValue7 = CallFunc_PauseAnimation_ReturnValue7;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue3 = CallFunc_LessEqual_FloatFloat_ReturnValue3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue3 = CallFunc_Add_FloatFloat_ReturnValue3;
	Parms.CallFunc_GetEndTime_ReturnValue3 = CallFunc_GetEndTime_ReturnValue3;
	Parms.CallFunc_PlayAnimation_ReturnValue5 = CallFunc_PlayAnimation_ReturnValue5;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue3 = CallFunc_Subtract_FloatFloat_ReturnValue3;
	Parms.Temp_text_Variable17 = Temp_text_Variable17;
	Parms.CallFunc_PauseAnimation_ReturnValue8 = CallFunc_PauseAnimation_ReturnValue8;
	Parms.CallFunc_GetStartTime_ReturnValue4 = CallFunc_GetStartTime_ReturnValue4;
	Parms.CallFunc_PauseAnimation_ReturnValue9 = CallFunc_PauseAnimation_ReturnValue9;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue4 = CallFunc_LessEqual_FloatFloat_ReturnValue4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue4 = CallFunc_Add_FloatFloat_ReturnValue4;
	Parms.CallFunc_PlayAnimation_ReturnValue6 = CallFunc_PlayAnimation_ReturnValue6;
	Parms.CallFunc_GetEndTime_ReturnValue4 = CallFunc_GetEndTime_ReturnValue4;
	Parms.CallFunc_PauseAnimation_ReturnValue10 = CallFunc_PauseAnimation_ReturnValue10;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue4 = CallFunc_Subtract_FloatFloat_ReturnValue4;
	Parms.CallFunc_GetStartTime_ReturnValue5 = CallFunc_GetStartTime_ReturnValue5;
	Parms.K2Node_Select9_Default = K2Node_Select9_Default;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue5 = CallFunc_LessEqual_FloatFloat_ReturnValue5;
	Parms.CallFunc_PlayAnimation_ReturnValue7 = CallFunc_PlayAnimation_ReturnValue7;
	Parms.CallFunc_PauseAnimation_ReturnValue11 = CallFunc_PauseAnimation_ReturnValue11;
	Parms.CallFunc_GetEndTime_ReturnValue5 = CallFunc_GetEndTime_ReturnValue5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue5 = CallFunc_Add_FloatFloat_ReturnValue5;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue5 = CallFunc_Subtract_FloatFloat_ReturnValue5;
	Parms.CallFunc_PlayAnimation_ReturnValue8 = CallFunc_PlayAnimation_ReturnValue8;
	Parms.CallFunc_GetEventId_ReturnValue = CallFunc_GetEventId_ReturnValue;
	Parms.CallFunc_GetEventPinState_ReturnValue = CallFunc_GetEventPinState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue5 = CallFunc_EqualEqual_ByteByte_ReturnValue5;
	Parms.Temp_byte_Variable14 = Temp_byte_Variable14;
	Parms.CallFunc_PauseAnimation_ReturnValue12 = CallFunc_PauseAnimation_ReturnValue12;
	Parms.CallFunc_GetStartTime_ReturnValue6 = CallFunc_GetStartTime_ReturnValue6;
	Parms.CallFunc_PauseAnimation_ReturnValue13 = CallFunc_PauseAnimation_ReturnValue13;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue6 = CallFunc_LessEqual_FloatFloat_ReturnValue6;
	Parms.CallFunc_Add_FloatFloat_ReturnValue6 = CallFunc_Add_FloatFloat_ReturnValue6;
	Parms.CallFunc_GetEndTime_ReturnValue6 = CallFunc_GetEndTime_ReturnValue6;
	Parms.CallFunc_PlayAnimation_ReturnValue9 = CallFunc_PlayAnimation_ReturnValue9;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue6 = CallFunc_Subtract_FloatFloat_ReturnValue6;
	Parms.CallFunc_PauseAnimation_ReturnValue14 = CallFunc_PauseAnimation_ReturnValue14;
	Parms.CallFunc_GetStartTime_ReturnValue7 = CallFunc_GetStartTime_ReturnValue7;
	Parms.CallFunc_PauseAnimation_ReturnValue15 = CallFunc_PauseAnimation_ReturnValue15;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue7 = CallFunc_LessEqual_FloatFloat_ReturnValue7;
	Parms.CallFunc_Add_FloatFloat_ReturnValue7 = CallFunc_Add_FloatFloat_ReturnValue7;
	Parms.CallFunc_GetEndTime_ReturnValue7 = CallFunc_GetEndTime_ReturnValue7;
	Parms.CallFunc_PlayAnimation_ReturnValue10 = CallFunc_PlayAnimation_ReturnValue10;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue7 = CallFunc_Subtract_FloatFloat_ReturnValue7;
	Parms.K2Node_CustomEvent_In = K2Node_CustomEvent_In;
	Parms.Temp_text_Variable18 = Temp_text_Variable18;
	Parms.CallFunc_GetEventBeginTime_ReturnValue = CallFunc_GetEventBeginTime_ReturnValue;
	Parms.CallFunc_GetCurrentEventScore_ReturnValue = CallFunc_GetCurrentEventScore_ReturnValue;
	Parms.CallFunc_GetEventDateAsText_ReturnValue1 = CallFunc_GetEventDateAsText_ReturnValue1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetBestEventScore_ReturnValue = CallFunc_GetBestEventScore_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;
	Parms.K2Node_Select10_Default = K2Node_Select10_Default;
	Parms.Temp_text_Variable19 = Temp_text_Variable19;
	Parms.CallFunc_RGBToHSV_H = CallFunc_RGBToHSV_H;
	Parms.CallFunc_RGBToHSV_S = CallFunc_RGBToHSV_S;
	Parms.CallFunc_RGBToHSV_V = CallFunc_RGBToHSV_V;
	Parms.CallFunc_RGBToHSV_A = CallFunc_RGBToHSV_A;
	Parms.CallFunc_RGBToHSV_H1 = CallFunc_RGBToHSV_H1;
	Parms.CallFunc_RGBToHSV_S1 = CallFunc_RGBToHSV_S1;
	Parms.CallFunc_RGBToHSV_V1 = CallFunc_RGBToHSV_V1;
	Parms.CallFunc_RGBToHSV_A1 = CallFunc_RGBToHSV_A1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue8 = CallFunc_Add_FloatFloat_ReturnValue8;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_HSVToRGB_ReturnValue = CallFunc_HSVToRGB_ReturnValue;
	Parms.CallFunc_HSVToRGB_ReturnValue1 = CallFunc_HSVToRGB_ReturnValue1;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.Temp_text_Variable20 = Temp_text_Variable20;
	Parms.CallFunc_Add_FloatFloat_ReturnValue9 = CallFunc_Add_FloatFloat_ReturnValue9;
	Parms.CallFunc_Add_FloatFloat_ReturnValue10 = CallFunc_Add_FloatFloat_ReturnValue10;
	Parms.CallFunc_Add_FloatFloat_ReturnValue11 = CallFunc_Add_FloatFloat_ReturnValue11;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.Temp_text_Variable21 = Temp_text_Variable21;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.Temp_text_Variable22 = Temp_text_Variable22;
	Parms.K2Node_MakeStruct_SlateFontInfo1 = K2Node_MakeStruct_SlateFontInfo1;
	Parms.Temp_text_Variable23 = Temp_text_Variable23;
	Parms.Temp_text_Variable24 = Temp_text_Variable24;
	Parms.Temp_text_Variable25 = Temp_text_Variable25;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue1 = CallFunc_GetDynamicMaterial_ReturnValue1;
	Parms.Temp_text_Variable26 = Temp_text_Variable26;
	Parms.Temp_byte_Variable15 = Temp_byte_Variable15;
	Parms.Temp_float_Variable5 = Temp_float_Variable5;
	Parms.K2Node_Select11_Default = K2Node_Select11_Default;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue1 = CallFunc_GetDynamicFontMaterial_ReturnValue1;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue11 = CallFunc_PlayAnimation_ReturnValue11;
	Parms.K2Node_MakeStruct_SlateFontInfo2 = K2Node_MakeStruct_SlateFontInfo2;
	Parms.K2Node_MakeStruct_SlateFontInfo3 = K2Node_MakeStruct_SlateFontInfo3;
	Parms.Temp_float_Variable6 = Temp_float_Variable6;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.K2Node_Select13_Default = K2Node_Select13_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue12 = CallFunc_PlayAnimation_ReturnValue12;
	Parms.Temp_float_Variable7 = Temp_float_Variable7;
	Parms.Temp_bool_Variable10 = Temp_bool_Variable10;
	Parms.Temp_float_Variable8 = Temp_float_Variable8;
	Parms.K2Node_Select14_Default = K2Node_Select14_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue13 = CallFunc_PlayAnimation_ReturnValue13;
	Parms.Temp_bool_Variable11 = Temp_bool_Variable11;
	Parms.Temp_float_Variable9 = Temp_float_Variable9;
	Parms.K2Node_Select15_Default = K2Node_Select15_Default;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.CallFunc_PlayAnimation_ReturnValue14 = CallFunc_PlayAnimation_ReturnValue14;
	Parms.K2Node_Select16_Default = K2Node_Select16_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue15 = CallFunc_PlayAnimation_ReturnValue15;
	Parms.CallFunc_GetEventState_ReturnValue1 = CallFunc_GetEventState_ReturnValue1;
	Parms.K2Node_Select17_Default = K2Node_Select17_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.SetDisplayInfo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  DisplayInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UShowdownEventTileInfo_C::SetDisplayInfo__DelegateSignature(const struct FFortTournamentDisplayInfo& DisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTileInfo_C", "SetDisplayInfo__DelegateSignature");

	Params::UShowdownEventTileInfo_C_SetDisplayInfo__DelegateSignature_Params Parms{};

	Parms.DisplayInfo = DisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.SetEventState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortShowdownEventState EventState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownEventTileInfo_C::SetEventState__DelegateSignature(enum class EFortShowdownEventState EventState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTileInfo_C", "SetEventState__DelegateSignature");

	Params::UShowdownEventTileInfo_C_SetEventState__DelegateSignature_Params Parms{};

	Parms.EventState = EventState;

	UObject::ProcessEvent(Func, &Parms);

}

}



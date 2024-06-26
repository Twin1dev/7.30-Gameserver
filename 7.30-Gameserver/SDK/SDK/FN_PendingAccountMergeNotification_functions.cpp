#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PendingAccountMergeNotification.PendingAccountMergeNotification_C
// (None)

class UClass* UPendingAccountMergeNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PendingAccountMergeNotification_C");

	return Clss;
}


// PendingAccountMergeNotification_C PendingAccountMergeNotification.Default__PendingAccountMergeNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPendingAccountMergeNotification_C* UPendingAccountMergeNotification_C::GetDefaultObj()
{
	static class UPendingAccountMergeNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPendingAccountMergeNotification_C*>(UPendingAccountMergeNotification_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPendingAccountMergeNotification_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PendingAccountMergeNotification_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPendingAccountMergeNotification_C::Hovered(bool IsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PendingAccountMergeNotification_C", "Hovered");

	Params::UPendingAccountMergeNotification_C_Hovered_Params Parms{};

	Parms.IsHovered = IsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPendingAccountMergeNotification_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PendingAccountMergeNotification_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPendingAccountMergeNotification_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PendingAccountMergeNotification_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPendingAccountMergeNotification_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PendingAccountMergeNotification_C", "BP_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPendingAccountMergeNotification_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PendingAccountMergeNotification_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.OnInputChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPendingAccountMergeNotification_C::OnInputChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PendingAccountMergeNotification_C", "OnInputChanged");

	Params::UPendingAccountMergeNotification_C_OnInputChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.ExecuteUbergraph_PendingAccountMergeNotification
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_IsPendingAccountTransfer_EstimatedCompletionMax         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPendingAccountTransfer_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable1                                              (None)
// class FText                        Temp_text_Variable2                                              (None)
// class FText                        Temp_text_Variable3                                              (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETextJustify            Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextJustify            Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_Subtract_DateTimeDateTime_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTimespanAsText_ReturnValue                           (None)
// bool                               K2Node_CustomEvent_IsHovered                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        K2Node_Select1_Default                                           (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextJustify            K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPendingAccountMergeNotification_C::ExecuteUbergraph_PendingAccountMergeNotification(int32 EntryPoint, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, const struct FDateTime& CallFunc_IsPendingAccountTransfer_EstimatedCompletionMax, bool CallFunc_IsPendingAccountTransfer_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UCommonInputSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCommonInputSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue1, class UCommonInputSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue2, enum class ECommonInputType Temp_byte_Variable, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable1, enum class ETextJustify Temp_byte_Variable3, enum class ETextJustify Temp_byte_Variable4, bool Temp_bool_Variable2, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, const struct FDateTime& CallFunc_Now_ReturnValue, enum class ESlateVisibility Temp_byte_Variable5, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, class FText CallFunc_GetTimespanAsText_ReturnValue, bool K2Node_CustomEvent_IsHovered, const struct FLinearColor& K2Node_Select_Default, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, enum class ESlateVisibility Temp_byte_Variable6, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText K2Node_Select1_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class ESlateVisibility K2Node_Select2_Default, enum class ETextJustify K2Node_Select3_Default, bool Temp_bool_Variable3, enum class ESlateVisibility K2Node_Select4_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PendingAccountMergeNotification_C", "ExecuteUbergraph_PendingAccountMergeNotification");

	Params::UPendingAccountMergeNotification_C_ExecuteUbergraph_PendingAccountMergeNotification_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_IsPendingAccountTransfer_EstimatedCompletionMax = CallFunc_IsPendingAccountTransfer_EstimatedCompletionMax;
	Parms.CallFunc_IsPendingAccountTransfer_ReturnValue = CallFunc_IsPendingAccountTransfer_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue1 = CallFunc_GetGameInstanceSubsystem_ReturnValue1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue2 = CallFunc_GetGameInstanceSubsystem_ReturnValue2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.CallFunc_Subtract_DateTimeDateTime_ReturnValue = CallFunc_Subtract_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_GetTimespanAsText_ReturnValue = CallFunc_GetTimespanAsText_ReturnValue;
	Parms.K2Node_CustomEvent_IsHovered = K2Node_CustomEvent_IsHovered;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}



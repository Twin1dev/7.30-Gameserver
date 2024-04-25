#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C
// (None)

class UClass* UCreativeMinigameGameKnobsModal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeMinigameGameKnobsModal_C");

	return Clss;
}


// CreativeMinigameGameKnobsModal_C CreativeMinigameGameKnobsModal.Default__CreativeMinigameGameKnobsModal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreativeMinigameGameKnobsModal_C* UCreativeMinigameGameKnobsModal_C::GetDefaultObj()
{
	static class UCreativeMinigameGameKnobsModal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeMinigameGameKnobsModal_C*>(UCreativeMinigameGameKnobsModal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.Player in Read Only Volume?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bInReadOnlyVolume                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_PlayerController_C*  K2Node_DynamicCast_AsAthena_Player_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerInReadOnlyVolume_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativeMinigameGameKnobsModal_C::Player_in_Read_Only_Volume_(bool* bInReadOnlyVolume, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPlayerInReadOnlyVolume_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeMinigameGameKnobsModal_C", "Player in Read Only Volume?");

	Params::UCreativeMinigameGameKnobsModal_C_Player_in_Read_Only_Volume__Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Player_Controller = K2Node_DynamicCast_AsAthena_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsPlayerInReadOnlyVolume_ReturnValue = CallFunc_IsPlayerInReadOnlyVolume_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bInReadOnlyVolume != nullptr)
		*bInReadOnlyVolume = Parms.bInReadOnlyVolume;

}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Player_in_Read_Only_Volume__bInReadOnlyVolume           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UCreativeMinigameGameKnobsModal_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Player_in_Read_Only_Volume__bInReadOnlyVolume, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeMinigameGameKnobsModal_C", "OnFocusReceived");

	Params::UCreativeMinigameGameKnobsModal_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Player_in_Read_Only_Volume__bInReadOnlyVolume = CallFunc_Player_in_Read_Only_Volume__bInReadOnlyVolume;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FVector2D                   CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   CallFunc_GetCachedGeometry_ReturnValue                           (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUnderLocation_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UCreativeMinigameGameKnobsModal_C::OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, bool CallFunc_IsUnderLocation_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeMinigameGameKnobsModal_C", "OnTouchStarted");

	Params::UCreativeMinigameGameKnobsModal_C_OnTouchStarted_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;
	Parms.CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue = CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue;
	Parms.CallFunc_GetCachedGeometry_ReturnValue = CallFunc_GetCachedGeometry_ReturnValue;
	Parms.CallFunc_IsUnderLocation_ReturnValue = CallFunc_IsUnderLocation_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCreativeMinigameGameKnobsModal_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeMinigameGameKnobsModal_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativeMinigameGameKnobsModal_C::OnInputModeChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeMinigameGameKnobsModal_C", "OnInputModeChanged");

	Params::UCreativeMinigameGameKnobsModal_C_OnInputModeChanged_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreativeMinigameGameKnobsModal_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeMinigameGameKnobsModal_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeMinigameGameKnobsModal_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeMinigameGameKnobsModal_C", "BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UCreativeMinigameGameKnobsModal_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.HandleCancelClicked
// (Event, Public, BlueprintEvent)
// Parameters:

void UCreativeMinigameGameKnobsModal_C::HandleCancelClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeMinigameGameKnobsModal_C", "HandleCancelClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnMinigameSettingsMachineSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreativeMinigameGameKnobsModal_C::OnMinigameSettingsMachineSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeMinigameGameKnobsModal_C", "OnMinigameSettingsMachineSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeMinigameGameKnobsModal_C::BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeMinigameGameKnobsModal_C", "BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::UCreativeMinigameGameKnobsModal_C_BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCreativeMinigameGameKnobsModal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeMinigameGameKnobsModal_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.AnimateIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreativeMinigameGameKnobsModal_C::AnimateIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeMinigameGameKnobsModal_C", "AnimateIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnInit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreativeMinigameGameKnobsModal_C::OnInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeMinigameGameKnobsModal_C", "OnInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnMinigameStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortMinigameState      MinigameState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeMinigameGameKnobsModal_C::OnMinigameStateChanged(enum class EFortMinigameState MinigameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeMinigameGameKnobsModal_C", "OnMinigameStateChanged");

	Params::UCreativeMinigameGameKnobsModal_C_OnMinigameStateChanged_Params Parms{};

	Parms.MinigameState = MinigameState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_4_StartButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCreativeMinigameGameKnobsModal_C::BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_4_StartButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeMinigameGameKnobsModal_C", "BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_4_StartButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_5_EndButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCreativeMinigameGameKnobsModal_C::BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_5_EndButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeMinigameGameKnobsModal_C", "BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_5_EndButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.UpdateStartEndButtons
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreativeMinigameGameKnobsModal_C::UpdateStartEndButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeMinigameGameKnobsModal_C", "UpdateStartEndButtons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.HandleNoOptionsLoaded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreativeMinigameGameKnobsModal_C::HandleNoOptionsLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeMinigameGameKnobsModal_C", "HandleNoOptionsLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.ExecuteUbergraph_CreativeMinigameGameKnobsModal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMinigameSettingsMachine_C*  K2Node_DynamicCast_AsMinigame_Settings_Machine                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMinigameSettingsMachine_C*  K2Node_DynamicCast_AsMinigame_Settings_Machine1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUserWidget*>         CallFunc_GetDisplayedEntryWidgets_ReturnValue                    (ConstParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaMatchmakingSpinnerButton_C*K2Node_DynamicCast_AsAthena_Matchmaking_Spinner_Button           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortMinigameState      K2Node_CustomEvent_MinigameState                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMinigameSettingsMachine_C*  K2Node_DynamicCast_AsMinigame_Settings_Machine2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ZeroConstructor, ReferenceParm)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Player_in_Read_Only_Volume__bInReadOnlyVolume           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Player_in_Read_Only_Volume__bInReadOnlyVolume1          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Player_in_Read_Only_Volume__bInReadOnlyVolume2          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeMinigameGameKnobsModal_C::ExecuteUbergraph_CreativeMinigameGameKnobsModal(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_bUsingGamepad, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button1, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsMobileGame_ReturnValue, class AMinigameSettingsMachine_C* K2Node_DynamicCast_AsMinigame_Settings_Machine, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class AMinigameSettingsMachine_C* K2Node_DynamicCast_AsMinigame_Settings_Machine1, bool K2Node_DynamicCast_bSuccess1, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_Array_Get_Item, class UAthenaMatchmakingSpinnerButton_C* K2Node_DynamicCast_AsAthena_Matchmaking_Spinner_Button, bool K2Node_DynamicCast_bSuccess2, enum class EFortMinigameState K2Node_CustomEvent_MinigameState, class AMinigameSettingsMachine_C* K2Node_DynamicCast_AsMinigame_Settings_Machine2, bool K2Node_DynamicCast_bSuccess3, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, class AFortPlayerController* CallFunc_Array_Get_Item1, bool CallFunc_IsValid_ReturnValue1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess4, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_Player_in_Read_Only_Volume__bInReadOnlyVolume, bool CallFunc_Player_in_Read_Only_Volume__bInReadOnlyVolume1, bool CallFunc_Player_in_Read_Only_Volume__bInReadOnlyVolume2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeMinigameGameKnobsModal_C", "ExecuteUbergraph_CreativeMinigameGameKnobsModal");

	Params::UCreativeMinigameGameKnobsModal_C_ExecuteUbergraph_CreativeMinigameGameKnobsModal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue1 = CallFunc_PlayAnimation_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_DynamicCast_AsMinigame_Settings_Machine = K2Node_DynamicCast_AsMinigame_Settings_Machine;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsMinigame_Settings_Machine1 = K2Node_DynamicCast_AsMinigame_Settings_Machine1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetDisplayedEntryWidgets_ReturnValue = CallFunc_GetDisplayedEntryWidgets_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsAthena_Matchmaking_Spinner_Button = K2Node_DynamicCast_AsAthena_Matchmaking_Spinner_Button;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_CustomEvent_MinigameState = K2Node_CustomEvent_MinigameState;
	Parms.K2Node_DynamicCast_AsMinigame_Settings_Machine2 = K2Node_DynamicCast_AsMinigame_Settings_Machine2;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_Player_in_Read_Only_Volume__bInReadOnlyVolume = CallFunc_Player_in_Read_Only_Volume__bInReadOnlyVolume;
	Parms.CallFunc_Player_in_Read_Only_Volume__bInReadOnlyVolume1 = CallFunc_Player_in_Read_Only_Volume__bInReadOnlyVolume1;
	Parms.CallFunc_Player_in_Read_Only_Volume__bInReadOnlyVolume2 = CallFunc_Player_in_Read_Only_Volume__bInReadOnlyVolume2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreativeMinigameGameKnobsModal_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeMinigameGameKnobsModal_C", "OnClose__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}



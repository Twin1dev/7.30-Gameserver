#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x4D8 - 0x460)
// WidgetBlueprintGeneratedClass CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C
class UCreativeMinigameGameKnobsModal_C : public UFortMatchmakingKnobsModal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x460(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Out;                                               // 0x468(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      In;                                                // 0x470(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                ConfirmSelectionShine;                             // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMinigameButtons_C*                    MinigameButtons;                                   // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         ModalContent;                                      // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ModalOverlay;                                      // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      OptionDisplayName;                                 // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_0;                                  // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                        DebugOptions;                                      // 0x4A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UObject*>                       ListItems;                                         // 0x4B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                  OnClose;                                           // 0x4C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UCreativeMinigameGameKnobsModal_C* GetDefaultObj();

	void Player_in_Read_Only_Volume_(bool* bInReadOnlyVolume, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPlayerInReadOnlyVolume_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Player_in_Read_Only_Volume__bInReadOnlyVolume, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, bool CallFunc_IsUnderLocation_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnActivated();
	void OnInputModeChanged(bool bUsingGamepad);
	void Close();
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleCancelClicked();
	void OnMinigameSettingsMachineSet();
	void BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void AnimateIn();
	void OnInit();
	void OnMinigameStateChanged(enum class EFortMinigameState MinigameState);
	void BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_4_StartButtonClicked__DelegateSignature();
	void BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_5_EndButtonClicked__DelegateSignature();
	void UpdateStartEndButtons();
	void HandleNoOptionsLoaded();
	void ExecuteUbergraph_CreativeMinigameGameKnobsModal(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_bUsingGamepad, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button1, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsMobileGame_ReturnValue, class AMinigameSettingsMachine_C* K2Node_DynamicCast_AsMinigame_Settings_Machine, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class AMinigameSettingsMachine_C* K2Node_DynamicCast_AsMinigame_Settings_Machine1, bool K2Node_DynamicCast_bSuccess1, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_Array_Get_Item, class UAthenaMatchmakingSpinnerButton_C* K2Node_DynamicCast_AsAthena_Matchmaking_Spinner_Button, bool K2Node_DynamicCast_bSuccess2, enum class EFortMinigameState K2Node_CustomEvent_MinigameState, class AMinigameSettingsMachine_C* K2Node_DynamicCast_AsMinigame_Settings_Machine2, bool K2Node_DynamicCast_bSuccess3, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, class AFortPlayerController* CallFunc_Array_Get_Item1, bool CallFunc_IsValid_ReturnValue1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess4, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_Player_in_Read_Only_Volume__bInReadOnlyVolume, bool CallFunc_Player_in_Read_Only_Volume__bInReadOnlyVolume1, bool CallFunc_Player_in_Read_Only_Volume__bInReadOnlyVolume2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue);
	void OnClose__DelegateSignature();
};

}



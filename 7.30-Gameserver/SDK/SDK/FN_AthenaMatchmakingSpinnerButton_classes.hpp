#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0xC10 - 0xB98)
// WidgetBlueprintGeneratedClass AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C
class UAthenaMatchmakingSpinnerButton_C : public UFortMatchmakingKnobsSpinnerButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      In;                                                // 0xBA0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Right;                                             // 0xBA8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Left;                                              // 0xBB0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Fill;                                       // 0xBB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleCommonButton_C*                 LeftButton;                                        // 0xBC0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              LeftButtonSize;                                    // 0xBC8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleCommonButton_C*                 RightButton;                                       // 0xBD0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              RightButtonSize;                                   // 0xBD8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SaveSpinner;                                       // 0xBE0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                        A;                                                 // 0xBE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                        A_0;                                               // 0xBF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         DebugOnMobileOrPC;                                 // 0xC08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsGamepad;                                         // 0xC09(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51BF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Mobile_Size_Override;                              // 0xC0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaMatchmakingSpinnerButton_C* GetDefaultObj();

	void Set_Button_Sizes(bool CallFunc_IsMobileGame_ReturnValue);
	void BP_OnDoubleClicked();
	void BP_OnClicked();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void InputModeChanged(bool Gamepad);
	void BndEvt__SimpleCommonButton_1_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void CustomEvent(bool bUsingGamepad);
	void InputUpdated(enum class ECommonInputType bNewInputType);
	void AfterleftisDone();
	void AfterRightIsDone();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ClearHoverState();
	void AnimateIn(int32 Index);
	void OnLoadingStateChanged(bool bCurrentlyLoading);
	void ExecuteUbergraph_AthenaMatchmakingSpinnerButton(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_GamePad, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bUsingGamepad, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue1, class UClass* Temp_class_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class UClass* Temp_class_Variable1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue3, bool Temp_bool_Variable1, class UClass* K2Node_Select_Default, int32 K2Node_CustomEvent_Index, float CallFunc_Multiply_IntFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue4, bool K2Node_Event_bCurrentlyLoading, enum class ESlateVisibility K2Node_Select1_Default);
};

}



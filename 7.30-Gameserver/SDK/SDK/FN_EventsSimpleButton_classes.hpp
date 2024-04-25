#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0xBF0 - 0xB28)
// WidgetBlueprintGeneratedClass EventsSimpleButton.EventsSimpleButton_C
class UEventsSimpleButton_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Pressed;                                           // 0xB30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hover;                                             // 0xB38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      CenterButtonTextWidget;                            // 0xB40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ButtonTop;                                   // 0xB48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Shadow;                                      // 0xB50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_ButtonBG;                                  // 0xB58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ToUpper;                                           // 0xB60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         XL;                                                // 0xB61(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5714[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ButtonNameText;                                    // 0xB68(0x18)(Edit, BlueprintVisible)
	TMap<class FString, struct FLinearColor>     Color;                                             // 0xB80(0x50)(Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                          GamepadButtonTextColor;                            // 0xBD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DefaultTextColor;                                  // 0xBE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEventsSimpleButton_C* GetDefaultObj();

	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, float Temp_float_Variable, bool Temp_bool_Variable, const struct FEventReply& CallFunc_Unhandled_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, float Temp_float_Variable, bool Temp_bool_Variable, const struct FEventReply& CallFunc_Unhandled_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1);
	void Construct();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnClicked();
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void PreConstruct(bool IsDesignTime);
	void InputTypeChanged(bool bUsingGamepad);
	void ExecuteUbergraph_EventsSimpleButton(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable1, const class FString& Temp_string_Variable2, const class FString& Temp_string_Variable3, const class FString& Temp_string_Variable4, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetStartTime_ReturnValue1, float CallFunc_GetEndTime_ReturnValue1, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_PauseAnimation_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_PauseAnimation_ReturnValue2, float CallFunc_PauseAnimation_ReturnValue3, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue1, bool K2Node_ComponentBoundEvent_bUsingGamepad, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, class FText CallFunc_TextToUpper_ReturnValue, const class FString& Temp_string_Variable5, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_bUsingGamepad, const class FString& Temp_string_Variable6, enum class ESlateVisibility Temp_byte_Variable2, const struct FLinearColor& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FLinearColor& CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, const struct FLinearColor& CallFunc_Map_Find_Value2, bool CallFunc_Map_Find_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable3, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, bool CallFunc_LessEqual_FloatFloat_ReturnValue2, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& CallFunc_Map_Find_Value3, bool CallFunc_Map_Find_ReturnValue3, const struct FLinearColor& CallFunc_Map_Find_Value4, bool CallFunc_Map_Find_ReturnValue4, const struct FLinearColor& CallFunc_Map_Find_Value5, bool CallFunc_Map_Find_ReturnValue5, const struct FLinearColor& CallFunc_Map_Find_Value6, bool CallFunc_Map_Find_ReturnValue6, bool Temp_bool_Variable3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable4, bool CallFunc_IsUsingGamepad_ReturnValue, class FText K2Node_Select1_Default, enum class ESlateVisibility K2Node_Select2_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue1, float Temp_float_Variable, bool Temp_bool_Variable5, const struct FLinearColor& K2Node_Select3_Default, float K2Node_Select4_Default, float Temp_float_Variable1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue3, float K2Node_Select5_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue4);
};

}



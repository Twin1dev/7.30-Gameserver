#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x91 (0x631 - 0x5A0)
// WidgetBlueprintGeneratedClass ShowdownPin.ShowdownPin_C
class UShowdownPin_C : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover;                                             // 0x5A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Focus;                                             // 0x5B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Reveal;                                            // 0x5B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_NoPinPts;                          // 0x5C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_PinPts;                            // 0x5C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_PinShadow;                                   // 0x5D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              NoPinContent;                                      // 0x5D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      NoPinIcon;                                         // 0x5E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               NoPinScoreText;                                    // 0x5E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      NoPinShadow;                                       // 0x5F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              PinContent;                                        // 0x5F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PinIcon;                                           // 0x600(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 PinInfoSwitcher;                                   // 0x608(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PinScoreText;                                      // 0x610(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_PointValuesProgress;                   // 0x618(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxPointValues;                            // 0x620(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bRepresentsTournamentBestPin;                      // 0x628(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         DEVShowPin;                                        // 0x629(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HidePoints;                                        // 0x62A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C60[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DEVPinScore;                                       // 0x62C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ColorSilhouette;                                   // 0x630(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UShowdownPin_C* GetDefaultObj();

	void Refresh(enum class EFortShowdownPinState PinState, enum class EFortShowdownEventState Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable2, int32 Temp_int_Variable3, int32 Temp_int_Variable4, int32 Temp_int_Variable5, int32 Temp_int_Variable6, enum class EFortShowdownEventState Temp_byte_Variable1, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, bool Temp_bool_Variable, bool Temp_bool_Variable1, enum class EFortShowdownPinState Temp_byte_Variable2, bool Temp_bool_Variable2, enum class EFortShowdownPinState Temp_byte_Variable3, int32 CallFunc_GetBestEventScore_ReturnValue, int32 CallFunc_GetCurrentEventScore_ReturnValue, enum class EFortShowdownEventState CallFunc_GetEventState_ReturnValue, enum class EFortShowdownEventState CallFunc_GetEventState_ReturnValue1, int32 K2Node_Select_Default, int32 CallFunc_GetBestEventScore_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetCurrentEventScore_ReturnValue1, class FText CallFunc_Conv_IntToText_ReturnValue1, class FText K2Node_Select1_Default, int32 CallFunc_GetTournamentBestScore_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float K2Node_Select2_Default, class FText CallFunc_Conv_IntToText_ReturnValue2, int32 CallFunc_FTrunc_ReturnValue, class FText K2Node_Select3_Default, class UTextBlock* K2Node_Select4_Default, class UWidget* K2Node_Select5_Default, enum class EFortShowdownPinState CallFunc_GetEventPinState_ReturnValue, enum class EFortShowdownPinState CallFunc_GetTournamentBestPinState_ReturnValue, enum class EFortShowdownPinState K2Node_Select6_Default);
	void RefreshDataBP();
	void PreConstruct(bool IsDesignTime);
	void EventSetTier(int32 Score);
	void EventFixPts(int32 Points);
	void EventColorize();
	void EventRevealAnim();
	void ExecuteUbergraph_ShowdownPin(int32 EntryPoint, int32 CallFunc_GetTournamentPinUnlockScore_ReturnValue, bool Temp_bool_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, int32 Temp_int_Variable, bool Temp_bool_Variable1, int32 Temp_int_Variable1, bool Temp_bool_Variable2, int32 Temp_int_Variable2, int32 Temp_int_Variable3, bool Temp_bool_Variable3, float Temp_float_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable1, class UMaterialInterface* Temp_object_Variable2, class UMaterialInterface* Temp_object_Variable3, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_Score, float CallFunc_Conv_IntToFloat_ReturnValue1, int32 Temp_int_Variable4, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_Less_FloatFloat_ReturnValue1, bool CallFunc_Less_FloatFloat_ReturnValue2, int32 K2Node_Select1_Default, int32 K2Node_Select2_Default, class UMaterialInterface* K2Node_Select3_Default, int32 K2Node_CustomEvent_Points, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_Format_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue1, bool Temp_bool_Variable4, enum class ESlateVisibility K2Node_Select4_Default, int32 Temp_int_Variable5, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, int32 Temp_int_Variable6, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select5_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, bool Temp_bool_Variable5, int32 K2Node_Select6_Default);
};

}



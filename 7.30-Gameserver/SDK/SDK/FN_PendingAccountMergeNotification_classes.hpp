#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xB58 - 0xB28)
// WidgetBlueprintGeneratedClass PendingAccountMergeNotification.PendingAccountMergeNotification_C
class UPendingAccountMergeNotification_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover;                                             // 0xB30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_1;                                          // 0xB38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   CommonActionWidget_48;                             // 0xB40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_42;                                      // 0xB48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_45;                                      // 0xB50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPendingAccountMergeNotification_C* GetDefaultObj();

	void Construct();
	void Hovered(bool IsHovered);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnClicked();
	void Destruct();
	void OnInputChanged(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_PendingAccountMergeNotification(int32 EntryPoint, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, const struct FDateTime& CallFunc_IsPendingAccountTransfer_EstimatedCompletionMax, bool CallFunc_IsPendingAccountTransfer_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UCommonInputSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCommonInputSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue1, class UCommonInputSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue2, enum class ECommonInputType Temp_byte_Variable, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable1, enum class ETextJustify Temp_byte_Variable3, enum class ETextJustify Temp_byte_Variable4, bool Temp_bool_Variable2, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, const struct FDateTime& CallFunc_Now_ReturnValue, enum class ESlateVisibility Temp_byte_Variable5, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, class FText CallFunc_GetTimespanAsText_ReturnValue, bool K2Node_CustomEvent_IsHovered, const struct FLinearColor& K2Node_Select_Default, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, enum class ESlateVisibility Temp_byte_Variable6, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText K2Node_Select1_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class ESlateVisibility K2Node_Select2_Default, enum class ETextJustify K2Node_Select3_Default, bool Temp_bool_Variable3, enum class ESlateVisibility K2Node_Select4_Default);
};

}



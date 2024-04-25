#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x2C8 - 0x258)
// WidgetBlueprintGeneratedClass AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C
class UAlterationOptionsIngredientsListEntry_C : public UFortItemQuantityListEntryBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortItemIcon*                         ItemIcon;                                          // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NeedText;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      QuantityText;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                           NotHaveColor;                                      // 0x278(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           HaveColor;                                         // 0x2A0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAlterationOptionsIngredientsListEntry_C* GetDefaultObj();

	int32 GetHaveQuantity(class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetTotalItemQuantityByDefinition_ReturnValue);
	void SetIngredientCount(int32 NeedQuantity, int32 HaveQuantity, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue1, int32 CallFunc_GetHaveQuantity_ReturnValue, const struct FSlateColor& K2Node_Select_Default);
	void GetIconBrush(class UFortItemDefinition* ItemDefinition, struct FSlateBrush* Brush, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue);
	void Construct();
	void HandleDifferentItemOrQuantitySetBP(bool IsBeingReset);
	void ExecuteUbergraph_AlterationOptionsIngredientsListEntry(int32 EntryPoint, bool K2Node_Event_IsBeingReset, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue1, class FText CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_GetSingleLineDescription_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
};

}



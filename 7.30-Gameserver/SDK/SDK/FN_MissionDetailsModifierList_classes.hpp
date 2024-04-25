#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x260 - 0x230)
// WidgetBlueprintGeneratedClass MissionDetailsModifierList.MissionDetailsModifierList_C
class UMissionDetailsModifierList_C : public UCommonUserWidget
{
public:
	class UCommonBorder*                         BorderExtra;                                       // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextMore;                                          // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBoxModifiers;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              WrapBoxModifiers;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFortGameplayModifierItemDefinition*> DebugMods;                                         // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UMissionDetailsModifierList_C* GetDefaultObj();

	void CreateDebugModifiers(TArray<class UFortGameplayModifierItemDefinition*>* Modifiers, class UFortGameplayModifierItemDefinition* DebugMod8, class UFortGameplayModifierItemDefinition* DebugMod7, class UFortGameplayModifierItemDefinition* DebugMod6, class UFortGameplayModifierItemDefinition* DebugMod5, class UFortGameplayModifierItemDefinition* DebugMod4, class UFortGameplayModifierItemDefinition* DebugMod3, class UFortGameplayModifierItemDefinition* DebugMod2, class UFortGameplayModifierItemDefinition* DebugMod1, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UFortGameplayModifierItemDefinition* K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void PopulateModifiers(bool UseTrunctatedList, class UClass* NameTextStyle, class UClass* DescriptionTextStyle, bool ShowMinusDescriptions, TArray<class UFortGameplayModifierItemDefinition*>& ModifierItems, bool UseSmallIcons, int32 CurrIndex, class UMissionDetailsModifierRow_C* CurrRow, int32 DisplayMoreThreshold, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable, class UFortGameplayModifierItemDefinition* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue3, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, const struct FSlateBrush& CallFunc_GetSmallPreviewImageBrush_ReturnValue, class UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, int32 CallFunc_Array_Length_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue4, bool CallFunc_Less_IntInt_ReturnValue1, class UFortGameplayModifierItemDefinition* CallFunc_Array_Get_Item1, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue1, int32 CallFunc_GetChildrenCount_ReturnValue, const struct FSlateBrush& CallFunc_GetSmallPreviewImageBrush_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue, class UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue1, class FText CallFunc_GetShortDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Variable1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UMissionDetailsModifierRow_C* K2Node_DynamicCast_AsMission_Details_Modifier_Row, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue5, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue1, class UMissionDetailsModifierRow_C* K2Node_DynamicCast_AsMission_Details_Modifier_Row1, bool K2Node_DynamicCast_bSuccess1, int32 Temp_int_Variable2, float Temp_float_Variable, int32 CallFunc_GetChildrenCount_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue1, int32 Temp_int_Variable3, bool CallFunc_LessEqual_IntInt_ReturnValue2, int32 Temp_int_Variable4, float Temp_float_Variable1, float K2Node_Select_Default, int32 Temp_int_Variable5, const struct FMargin& K2Node_MakeStruct_Margin);
};

}



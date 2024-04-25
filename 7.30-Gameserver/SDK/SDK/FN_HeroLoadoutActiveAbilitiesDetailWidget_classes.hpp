#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4D (0x2C5 - 0x278)
// WidgetBlueprintGeneratedClass HeroLoadoutActiveAbilitiesDetailWidget.HeroLoadoutActiveAbilitiesDetailWidget_C
class UHeroLoadoutActiveAbilitiesDetailWidget_C : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        ColumnContainer;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorderHeading;                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalLayoutBox;                               // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       LayoutSwitcher;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              RootBox;                                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RowContainer;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxHorizontalLayout;                           // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalLayoutBox;                                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EHeroLoadoutActiveAbilitiesDetailLayoutStyle LayoutStyle;                                       // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShouldShowAbilityDescriptions;                     // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsHeroLoadOutMinusTooltip;                         // 0x2C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         ShowDescription;                                   // 0x2C3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         UseVerboseDescription;                             // 0x2C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UHeroLoadoutActiveAbilitiesDetailWidget_C* GetDefaultObj();

	void UpdateFromItem(int32 Index, int32 AbilityCount, const struct FMargin& K2Node_MakeStruct_Margin, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin1, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHeroLoadoutActiveAbilityDetailColumn_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UHeroLoadoutActiveAbilityDetailRow_C* CallFunc_Create_ReturnValue1, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess1, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, class UFortHeroType* CallFunc_GetHeroTypeBP_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue1, TArray<class UFortAbilityKit*>& CallFunc_GetAbilityKitsForActiveAbilityPerks_ReturnValue, class UFortAbilityKit* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1);
	void HandlePostDifferentItemToDetailSet();
	void HandleItemToDetailChangedBP();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_HeroLoadoutActiveAbilitiesDetailWidget(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHeroLoadoutActiveAbilityDetailRow_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable1, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_IsHeroLoadoutSystemEnabled_ReturnValue, enum class EHeroLoadoutActiveAbilitiesDetailLayoutStyle Temp_byte_Variable2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UHeroLoadoutActiveAbilityDetailColumn_C* CallFunc_Create_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable3, class UPanelSlot* CallFunc_AddChild_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable4, class UWidget* K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, enum class ESlateVisibility K2Node_Select2_Default);
};

}



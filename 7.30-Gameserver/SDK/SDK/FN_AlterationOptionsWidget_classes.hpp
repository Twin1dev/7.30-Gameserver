#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x358 - 0x2D8)
// WidgetBlueprintGeneratedClass AlterationOptionsWidget.AlterationOptionsWidget_C
class UAlterationOptionsWidget_C : public UFortAlterationOptionsBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAlterationOption_C*                   AlterationOption;                                  // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAlterationOption_C*                   AlterationOption_0;                                // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAlterationOption_C*                   AlterationOption_1;                                // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAlterationOption_C*                   AlterationOption_2;                                // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_1;                                 // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NoAlterationsText;                                 // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       OptionsSwitcher;                                   // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          OptionsVbox;                                       // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         ReplacementsBorder;                                // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ReplacementsVBox;                                  // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox;                                         // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Upgrades;                                          // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         UpgradesBorder;                                    // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          UpgradesVBox;                                      // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemWindow_C*                         ItemInfoWindow;                                    // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAlterationOptionsWidget_C* GetDefaultObj();

	void UnbindChildren(class UPanelWidget* Panel, int32 CallFunc_GetChildrenCount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UCommonButton* K2Node_DynamicCast_AsCommon_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void ClearAndUnbindOptions(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UVerticalBox*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UVerticalBox* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void SetScrollWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	bool ShouldShowNoOptions(bool CallFunc_IsValidAlterationSlot_ReturnValue, bool CallFunc_DoAnyAlterationsExist_OptionsExist, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void DoAnyAlterationsExist(bool* OptionsExist, bool CallFunc_DoAlterationOptionsExist_ReturnValue, bool CallFunc_DoAlterationOptionsExist_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue);
	void AddAlterationOptionWidget(enum class EFortAlterationOptionType OptionType, class UFortAlterationOption* OptionWidget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortAlterationOptionType Temp_byte_Variable, class UVerticalBox* K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void ClearOptionsAndInitialize(bool bIntroAlteration, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool CallFunc_ShouldShowNoOptions_ReturnValue, class UWidget* K2Node_Select_Default, class UWidget* K2Node_Select1_Default, bool CallFunc_DoAlterationOptionsExist_ReturnValue, bool CallFunc_DoAlterationOptionsExist_ReturnValue1, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility K2Node_Select3_Default, enum class ESlateVisibility K2Node_Select4_Default, enum class ESlateVisibility K2Node_Select5_Default);
	void OnItemChanged(bool bIntroAlterations);
	void OnGenerateOption(enum class EFortAlterationOptionType OptionType, class UFortAlterationOption* OptionWidget);
	void Destruct();
	void OnOptionSelected(class UCommonButton* SelectedOption, bool Selected);
	void ExecuteUbergraph_AlterationOptionsWidget(int32 EntryPoint, bool K2Node_Event_bIntroAlterations, enum class EFortAlterationOptionType K2Node_Event_OptionType, class UFortAlterationOption* K2Node_Event_OptionWidget, class UCommonButton* K2Node_CustomEvent_SelectedOption, bool K2Node_CustomEvent_Selected);
};

}



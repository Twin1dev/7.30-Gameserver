#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x370 - 0x338)
// WidgetBlueprintGeneratedClass ItemInspectUpgradePopupMenu.ItemInspectUpgradePopupMenu_C
class UItemInspectUpgradePopupMenu_C : public UFortPopupMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                     ButonLevelUp;                                      // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonPerks;                                       // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonRarity;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonViewEvolution;                               // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CancelButton;                                      // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainButtonVerticalBox;                             // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UItemInspectUpgradePopupMenu_C* GetDefaultObj();

	void InitalizeButtonNavigation(int32 ButtonIndex, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue1, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void SetupUpgradeRarityVisiblity(enum class ESlateVisibility Visibility);
	void SetupEvolultionVisibility(enum class ESlateVisibility Visibility);
	void SetupPerkModVisibility(enum class ESlateVisibility Visibility);
	void SetLevelUpVisibility(enum class ESlateVisibility Visibility);
	void BndEvt__ButonLevelUp_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonViewEvolution_K2Node_ComponentBoundEvent_48_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonPerks_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnDeactivated();
	void OnActivated();
	void BndEvt__ButtonRarity_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_ItemInspectUpgradePopupMenu(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UItemInspectScreen_C* K2Node_DynamicCast_AsItem_Inspect_Screen, bool K2Node_DynamicCast_bSuccess, class UItemInspectScreen_C* K2Node_DynamicCast_AsItem_Inspect_Screen1, bool K2Node_DynamicCast_bSuccess1, class UItemInspectScreen_C* K2Node_DynamicCast_AsItem_Inspect_Screen2, bool K2Node_DynamicCast_bSuccess2, class UItemInspectScreen_C* K2Node_DynamicCast_AsItem_Inspect_Screen3, bool K2Node_DynamicCast_bSuccess3, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UItemInspectScreen_C* K2Node_DynamicCast_AsItem_Inspect_Screen4, bool K2Node_DynamicCast_bSuccess4);
};

}



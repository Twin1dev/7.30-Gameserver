#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6E (0x3D6 - 0x368)
// WidgetBlueprintGeneratedClass HorizontalTabList.HorizontalTabList_C
class UHorizontalTabList_C : public UFortTabListWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                ImageGamepadKeyPrompt;                             // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageHorizRule;                                    // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   NextTabAction;                                     // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              NextTabActionWrapper;                              // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Container;                                 // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   PreviousTabAction;                                 // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PreviousTabActionWrapper;                          // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        TabButtonBox;                                      // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                               TabButtonPadding;                                  // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	class UClass*                                ButtonStyle;                                       // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UseButtonStyle;                                    // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         ShowGamePadInputPrompt;                            // 0x3C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         ShowRail;                                          // 0x3CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_B8[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinTabWidth;                                       // 0x3CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewVar_0;                                          // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceTabLabelsCollapsed;                           // 0x3D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         ForceTabIconsCollapsed;                            // 0x3D5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UHorizontalTabList_C* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment FillVertically, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue);
	void UpdateGamepadKeyVisibility(int32 NumVisibleTabs, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, int32 CallFunc_GetVisibleTabCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default);
	class UCommonButton* Get_Tab_From_Id(class FName TabNameID, class UCommonButton* CallFunc_GetTabButtonByID_ReturnValue);
	void ChangeInputBindings(const struct FDataTableRowHandle& NextBinding, const struct FDataTableRowHandle& PreviousBinding);
	void Construct();
	void Handle_OnInputMethodChanged(bool bUsingGamepad);
	void PreConstruct(bool IsDesignTime);
	void Previous_Visibility();
	void CustomEvent_0(class FName TabId);
	void HandleTabCreated(class FName TabNameID, class UCommonButton* TabButton);
	void HandleTabRemoved(class FName TabNameID, class UCommonButton* TabButton);
	void ExecuteUbergraph_HorizontalTabList(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, bool K2Node_CustomEvent_bUsingGamepad, enum class ESlateVisibility Temp_byte_Variable2, bool K2Node_Event_IsDesignTime, int32 CallFunc_GetTabCount_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_GetTabCount_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select_Default, class FName K2Node_CustomEvent_TabId, class FText CallFunc_GetEmptyText_ReturnValue, bool Temp_bool_Variable1, class FName K2Node_Event_TabNameID1, class UCommonButton* K2Node_Event_TabButton1, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility K2Node_Select1_Default, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button1, bool K2Node_DynamicCast_bSuccess1, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select2_Default, class UCommonUISubsystem* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class FName K2Node_Event_TabNameID, class UCommonButton* K2Node_Event_TabButton);
};

}



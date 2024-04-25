#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x240 - 0x230)
// WidgetBlueprintGeneratedClass ItemInspectRefundDetailsPanel.ItemInspectRefundDetailsPanel_C
class UItemInspectRefundDetailsPanel_C : public UCommonUserWidget
{
public:
	class UItemInspectRefundItemQuantityList_C*  ResourceList;                                      // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_0;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UItemInspectRefundDetailsPanel_C* GetDefaultObj();

	void SetScrollWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void SetItemToRefund(class UFortAccountItem* ItemToRefund, TArray<struct FFortItemQuantityPair>& CallFunc_GetRefundResults_ReturnValue);
};

}



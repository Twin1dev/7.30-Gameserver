#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9D (0x3D5 - 0x338)
// WidgetBlueprintGeneratedClass ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C
class UExpeditionSquadSlotPopupMenu_C : public UFortSquadSlotSelectorPopupMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeOut_;                                          // 0x340(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeIn;                                            // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     CancelButton;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     EditSlotButton;                                    // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     InspectButton;                                     // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainButtonVerticalBox;                             // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  CollectionBookItemSlotId;                          // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanSlotItemInCollectionBook;                       // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C45[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CollectionBookConfirmationDialogTitle;             // 0x380(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  CollectionBookConfirmationDialogMessage;           // 0x398(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   SlotItemInCollectionBookAction;                    // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   BackAction;                                        // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FFortDialogExternalLatentActionHandle CollectionBookLatentDialogHandle;                  // 0x3D0(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	enum class ExpeditionSquadSlotPopupMenuButtons SelectedButton;                                    // 0x3D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UExpeditionSquadSlotPopupMenu_C* GetDefaultObj();

	void GetItemInSlot(class UFortItem** Item, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UFortSquadSlotSelectorButton* CallFunc_GetHostButton_ReturnValue, class UFortItem* CallFunc_GetItemInSquadSlotBP_ReturnValue);
	void OnActivated();
	void BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnBeginOutro();
	void OnBeginIntro();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnDeactivated();
	void HandlePostDifferentContextProviderSet();
	void Initialize();
	void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0();
	void ExecuteUbergraph_ExpeditionSquadSlotPopupMenu(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_SwitchEnum_CmpSuccess, class UFortSquadSlotSelectorButton* CallFunc_GetHostButton_ReturnValue, class UFortItem* CallFunc_GetItemInSlot_Item, bool CallFunc_IsValid_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1, class UFortItem* CallFunc_GetItemInSlot_Item1, class UWidget* CallFunc_GetChildAt_ReturnValue);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x430 - 0x3A8)
// WidgetBlueprintGeneratedClass AthenaChallengesTab.AthenaChallengesTab_C
class UAthenaChallengesTab_C : public UAthenaChallengeBundleScheduleScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               BackgroundButton;                                  // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderBackground;                                  // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTreeView*                       ChallangeTreeView;                                 // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       OutOfSeasonSwitcher;                               // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_1;                                        // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_ChallengeContainer;                       // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         SafeZoneCB;                                        // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Challenges;                                // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFortChallengeBundleScheduleDefinition*> UnlockableBundles;                                 // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UFortChallengeBundleScheduleItem*> ActiveBundles;                                     // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         DoInitialSelection;                                // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DEVisInGame;                                       // 0x421(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_582B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortTimerTimespanDataSource*          TimerTimespanSource;                               // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaChallengesTab_C* GetDefaultObj();

	void GetAthenaEventTime(struct FTimespan* Result, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FTimespan& CallFunc_GetTimeSinceAthenaSeasonStart_ReturnValue);
	void ConstructTimespanSource(class UFortTimerTimespanDataSource** NewObject, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortTimerTimespanDataSource* CallFunc_SpawnObject_ReturnValue);
	void SetupChallengeBundleInfo(class UChallengeBundlePage_C* InChallengeBundlePageWidget, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UCommonUISubsystem* CallFunc_GetContext_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsMobileGame_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4);
	void SetupFrontendInfo(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsInZone_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue);
	void InitializeInput(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue);
	void OnBack(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	void SetBackground(bool IsInGame, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class EHorizontalAlignment Temp_byte_Variable2, enum class EHorizontalAlignment Temp_byte_Variable3, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, float Temp_float_Variable, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class EHorizontalAlignment K2Node_Select1_Default, float Temp_float_Variable1, enum class ESlateVisibility K2Node_Select2_Default, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin1, const struct FMargin& K2Node_Select3_Default, class UBorderSlot* CallFunc_SlotAsBorderSlot_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin2, const struct FMargin& K2Node_MakeStruct_Margin3, bool Temp_bool_Variable5, const struct FMargin& K2Node_Select4_Default, float K2Node_Select5_Default);
	void SelectFirstBundle(class UObject* CallFunc_GetItemAt_ReturnValue, class UFortChallengeBundleCategoryInfo* K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info, bool K2Node_DynamicCast_bSuccess, TArray<class UFortChallengeBundleInfo*>& CallFunc_GetChallengeBundleInfos_ReturnValue, class UFortChallengeBundleInfo* CallFunc_Array_Get_Item);
	TArray<class UObject*> TreeViewGetChildrenForCategory(class UObject* Item, class UFortChallengeBundleCategoryInfo* K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info, bool K2Node_DynamicCast_bSuccess, TArray<class UFortChallengeBundleInfo*>& CallFunc_GetChallengeBundleInfos_ReturnValue);
	void SetupViewedItemData(class UFortItem* Item);
	void UpdateChallengeViews(bool CallFunc_IsActivated_ReturnValue, TArray<class UFortChallengeBundleCategoryInfo*>& CallFunc_GetChallengeCategoryInfos_OutCategoryInfos);
	void HandleChallengesChanged();
	void BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_40_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
	void Construct();
	void OnActivated();
	void OnDeactivated();
	void BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void OnChallengesChanged();
	void OnRefreshNavigation();
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_AthenaChallengesTab(int32 EntryPoint, bool CallFunc_OnBack_PassThrough, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UAthenaChallengeTreeEntry_C* K2Node_DynamicCast_AsAthena_Challenge_Tree_Entry, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IFortTimespanDataSource> CallFunc_SetTimespanSource_Value_CastInput, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetCurrentSeasonNumber_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UFortChallengeBundleInfo* K2Node_DynamicCast_AsFort_Challenge_Bundle_Info, bool K2Node_DynamicCast_bSuccess1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UChallengeBundlePage_C* CallFunc_Create_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable1, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, class UFortTimerTimespanDataSource* CallFunc_ConstructTimespanSource_NewObject, bool CallFunc_IsMobileGame_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}



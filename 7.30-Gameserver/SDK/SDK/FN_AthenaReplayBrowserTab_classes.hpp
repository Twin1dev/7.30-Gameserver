#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x3F8 - 0x3B8)
// WidgetBlueprintGeneratedClass AthenaReplayBrowserTab.AthenaReplayBrowserTab_C
class UAthenaReplayBrowserTab_C : public UAthenaReplayBrowserScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ULeaderboardThrobber_C*                LoadingThrobber;                                   // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         LowerBarBorder;                                    // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     OpenReplayFolder;                                  // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaReplayBrowserRenameDialog_C*    RenameDialog;                                      // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonListView*                       ReplayListView;                                    // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaReplayBrowserRowProxyInstance*  SelectedRowProxy;                                  // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          LoadingTimerHandle;                                // 0x3F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaReplayBrowserTab_C* GetDefaultObj();

	void OnBackActionExecuted(bool* bPassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void OnRenameActionExecuted(bool* bPassThrough, class UCommonUISubsystem* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool CallFunc_AreAnyActionsOutstanding_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue);
	void OnDeleteActionExecuted(bool* bPassThrough, bool CallFunc_AreAnyActionsOutstanding_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnPlayActionExecuted(bool* bPassThrough, bool CallFunc_AreAnyActionsOutstanding_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void StartAthenaLobbyMusic(TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void RefreshReplayFolderState(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_DoesSupportReplayFolder_IsSupported, enum class ESlateVisibility K2Node_Select_Default);
	void DoesSupportReplayFolder(bool* IsSupported, bool CallFunc_DoesReplayFolderExist_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue1, bool CallFunc_EqualEqual_StriStri_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue);
	void OnShowLoadingThrobber();
	void OnActionStateChanged(bool ActionInProgress, bool CallFunc_IsVisible_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void SetupInputActionHandlers(enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable2, enum class EInputActionState Temp_byte_Variable3, bool Temp_bool_Variable1, enum class EInputActionState Temp_byte_Variable4, enum class EInputActionState Temp_byte_Variable5, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, enum class EInputActionState K2Node_Select_Default, enum class EInputActionState K2Node_Select1_Default, bool Temp_bool_Variable2, enum class EInputActionState K2Node_Select2_Default);
	void CloseRenameDialog(class UCommonUISubsystem* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnConfirmRename(class FText NewName, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HideInputActions();
	void FocusList(class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void SelectReplay(class UObject* ReplayInfoObject, class UAthenaReplayBrowserRowProxyInstance* K2Node_DynamicCast_AsAthena_Replay_Browser_Row_Proxy_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void DialogResult_12ECDF8D47346477E6D96B927F5223CE(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_580DD63848C06A1FCA8D9DABDAF6FF77(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_E89869AF460753E34CA097BC86722E95(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_00986FB1494FF7EA41F1769EAFB70E83(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_961693C14B8B2A8E26E2AFB69251D5F8(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_79A680104EAA90FF10D265808FD512BC(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_F681A46A43F230E95DCC3F994D03E83C(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_5C8831094A522B13254093A66254221F(enum class EFortDialogResult Result, class FName ResultName);
	void OnRowsUpdated();
	void OnActivated();
	void DeleteReplay(class UAthenaReplayBrowserRowProxyInstance* RowProxy);
	void BndEvt__CommonListView_0_K2Node_ComponentBoundEvent_2_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void Construct();
	void PlayReplay(class UAthenaReplayBrowserRowProxyInstance* RowProxy);
	void OnInputModeChanged(bool bUsingGamepad);
	void BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void OnDeleteFailed(class FText& Reason);
	void OnRenameFailed(class FText& Reason);
	void OnSaveFailed(class FText& Reason);
	void BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected);
	void OnPlayFailed(class FText& Reason);
	void BndEvt__OpenReplayFolder_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActionStarted();
	void OnActionFinished();
	void ShowDeleteInvalidDialog(class FText& Title, class FText& MESSAGE);
	void ExecuteUbergraph_AthenaReplayBrowserTab(int32 EntryPoint, enum class EFortDialogResult K2Node_CustomEvent_Result5, class FName K2Node_CustomEvent_ResultName5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, enum class EFortDialogResult K2Node_CustomEvent_Result4, class FName K2Node_CustomEvent_ResultName4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class FName Temp_name_Variable1, enum class EFortDialogResult Temp_byte_Variable1, enum class EFortDialogResult K2Node_CustomEvent_Result3, class FName K2Node_CustomEvent_ResultName3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class FName Temp_name_Variable2, enum class EFortDialogResult Temp_byte_Variable2, enum class EFortDialogResult K2Node_CustomEvent_Result2, class FName K2Node_CustomEvent_ResultName2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class FName Temp_name_Variable3, enum class EFortDialogResult Temp_byte_Variable3, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName1, class FName Temp_name_Variable4, enum class EFortDialogResult Temp_byte_Variable4, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable5, enum class EFortDialogResult Temp_byte_Variable5, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName Temp_name_Variable6, bool CallFunc_IsValid_ReturnValue1, class UAthenaReplayBrowserRowProxyInstance* K2Node_Event_RowProxy1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, class FText CallFunc_Conv_StringToText_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item2, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1, bool CallFunc_IsValid_ReturnValue4, class UAthenaReplayBrowserRowProxyInstance* K2Node_Event_RowProxy, bool K2Node_Event_bUsingGamepad, bool CallFunc_IsValid_ReturnValue5, class UObject* K2Node_ComponentBoundEvent_Item1, bool CallFunc_BooleanNOR_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue1, enum class EFortDialogResult K2Node_CustomEvent_Result7, class FName K2Node_CustomEvent_ResultName7, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2, bool CallFunc_IsValid_ReturnValue6, enum class EFortDialogResult Temp_byte_Variable6, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, class FText K2Node_Event_Reason3, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool CallFunc_IsValid_ReturnValue7, class FText K2Node_Event_Reason2, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue4, class FText K2Node_Event_Reason1, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue5, bool CallFunc_IsValid_ReturnValue8, bool CallFunc_IsValid_ReturnValue9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class FName Temp_name_Variable7, class FText K2Node_Event_Reason, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue6, bool CallFunc_IsValid_ReturnValue10, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_AreAnyActionsOutstanding_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result6, class FName K2Node_CustomEvent_ResultName6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, class FText K2Node_Event_Title, class FText K2Node_Event_Message, const class FString& CallFunc_Conv_TextToString_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, bool CallFunc_IsActivated_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue2, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue7, bool CallFunc_IsValid_ReturnValue11, bool CallFunc_AreAnyActionsOutstanding_ReturnValue1, bool CallFunc_AreAnyActionsOutstanding_ReturnValue2, bool CallFunc_AreAnyActionsOutstanding_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsShowingModalsConfirmationsErrors_ReturnValue, enum class EFortDialogResult Temp_byte_Variable7, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue4);
};

}



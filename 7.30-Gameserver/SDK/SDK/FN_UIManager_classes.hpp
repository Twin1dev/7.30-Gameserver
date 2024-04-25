#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x4A8 - 0x3C8)
// WidgetBlueprintGeneratedClass UIManager.UIManager_C
class UUIManager_C : public UFortUIManagerWidget_NUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                            Confirmation_Layer;                                // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            ControllerDisconnectedLayer;                       // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            Error_Layer;                                       // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            Modal_Layer;                                       // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestTalkingHeadWidget_C*             QuestTalkingHeadWidget;                            // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            State_Content_Layer;                               // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            TalkingHeadLayer;                                  // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UToastDisplayArea_C*                   ToastDisplayArea;                                  // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            ToastDisplayLayer;                                 // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            Tutorial_Layer;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTutorialOverlay_C*                    TutorialOverlay;                                   // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatablePanel*               CurrentModalWidget;                                // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UCommonActivatablePanel*>       ModalQueue;                                        // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFortDialogDescription_NUI>    ConfirmationQueue;                                 // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	class UConfirmationWindow_C*                 ConfirmationWindow;                                // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UErrorWindow_C*                        ErrorWindow;                                       // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWebPurchase_C*                        WebPurchaseWindow;                                 // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressModalWidget_C*                ControllerDisconnectedModal;                       // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bClosingConfirmation;                              // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bClosingErrorDialog;                               // 0x471(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bShouldTriggerCameraModeOnClose;                   // 0x472(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B73[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  QuitTitle;                                         // 0x478(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  QuitMessage;                                       // 0x490(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUIManager_C* GetDefaultObj();

	bool HasActiveModalWidget(bool CallFunc_IsValid_ReturnValue);
	bool IsShowingModalsConfirmationsErrors(int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, int32 CallFunc_GetChildrenCount_ReturnValue2, int32 CallFunc_GetChildrenCount_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2);
	void SafeTriggerCursorMode(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInCursorMode_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SafeTriggerCameraMode(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ClearConfirmationLayer(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void RemoveModalPanel(class UCommonActivatablePanel* Panel, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void PopModalPanel(class UCommonActivatablePanel* ActivatablePanel, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HandleStateContentUpdated(class UFortUIStateWidget_NUI* NewStateWidget, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void HandleControllerConnectionChanged(bool bConnected, class UCommonUISubsystem* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void OnEndLatentWaitForConfirmationDialog(struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle, const struct FFortDialogExternalLatentActionHandle& CallFunc_GetLatentActionWaitHandle_LatentActionHandle, bool CallFunc_EqualEqual_FFortDialogWaitingForLatentActionHandle_ReturnValue, bool CallFunc_IsLatentActionHandleValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	bool IsConsole(const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue);
	void DismissWebPurchase();
	void DisplayWebPurchase(class UWidget* WebWidget, const class FString& OfferId, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_IsConsole_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void HandleDeactivatedErrorWindow(class UCommonActivatablePanel* DeactivatedPanel, bool CallFunc_IsStateContentChildShowing_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void ShowErrorInErrorWindow(const struct FFortErrorInfo& ErrorInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_HasChild_ReturnValue);
	void HandleDeactivatedPanelModalLayer(class UCommonActivatablePanel* DeactivatedPanel, bool CallFunc_IsValid_ReturnValue);
	void AddActivatablePanelToModalLayer(class UCommonActivatablePanel* ActivatablePanel, class UCommonUISubsystem* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void Initialize(class FText Temp_text_Variable, bool Temp_bool_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, const class FString& CallFunc_GetPlatformName_ReturnValue, class FText Temp_text_Variable3, bool CallFunc_EqualEqual_StrStr_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText K2Node_Select_Default, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UWebPurchase_C* CallFunc_Create_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, bool Temp_bool_Variable1, class UErrorWindow_C* CallFunc_Create_ReturnValue2, class FText K2Node_Select1_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, class UConfirmationWindow_C* CallFunc_Create_ReturnValue3, bool CallFunc_HasAnyChildren_ReturnValue);
	void QueueConfirmation(const struct FFortDialogDescription_NUI& ConfirmationDescription, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsStateContentChildShowing_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void ShowNextConfirmation(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonUISubsystem* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FFortDialogDescription_NUI& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void HandleDeactivatedPanelConfirmationLayer(class UCommonActivatablePanel* DeactivatedPanel, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void HandleModalContentCleared();
	bool IsStateContentChildShowing(int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
	void ShowNextModalWidget(class UCommonActivatablePanel* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void QueueModalPanel(class UCommonActivatablePanel* ActivatablePanel, bool CallFunc_IsStateContentChildShowing_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void PopCurrentModal();
	void ClearLayers(class UFortMcpContext* CallFunc_GetContext_ReturnValue);
	void DialogResult_5E02A44647A3EA099FA7CEB9FA976CBB(enum class EFortDialogResult Result, class FName ResultName);
	void DisplayStateContent(bool bDisplay);
	void OnStateStarted();
	void Destruct();
	void DisplayErrorDialog(struct FFortErrorInfo& Info);
	void OnShowConfirmation_NUI(struct FFortDialogDescription_NUI& Description);
	void KillConfirmation();
	void UpdateStateWidgetContent(class UFortUIStateWidget_NUI* StateWidget);
	void QueueActivatablePanelIntoModalLayer(class UCommonActivatablePanel* Panel);
	void OnStateEnded();
	void PopActivatablePanelInModalLayer(class UCommonActivatablePanel* Panel);
	void CloseConfirmationWindow();
	void CloseErrorWindow();
	void Construct();
	void OnGameWindowCloseButtonClicked();
	void ExecuteUbergraph_UIManager(int32 EntryPoint, bool Temp_bool_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue, bool K2Node_Event_bDisplay, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue, const struct FFortErrorInfo& K2Node_Event_Info, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FFortDialogDescription_NUI& K2Node_Event_Description, class UFortUIStateWidget_NUI* K2Node_Event_StateWidget, class UCommonActivatablePanel* K2Node_Event_Panel1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UCommonActivatablePanel* K2Node_Event_Panel, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue1, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_IsGamepadAttached_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default);
};

}



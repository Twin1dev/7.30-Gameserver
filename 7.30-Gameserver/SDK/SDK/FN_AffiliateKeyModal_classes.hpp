#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x89 (0x3E1 - 0x358)
// WidgetBlueprintGeneratedClass AffiliateKeyModal.AffiliateKeyModal_C
class UAffiliateKeyModal_C : public UFortAffilateModal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Shake;                                             // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     CloseButton;                                       // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_0;                                 // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ConnectionError;                                   // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Description;                                       // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   EditTextActionWidget;                              // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      EntryError;                                        // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ErrorPart2;                                        // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     LaunchWebsite;                                     // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MainIcon;                                          // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                McpWaitingSpinner;                                 // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Found;                                             // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C20[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FoundItem;                                         // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         ConnectionTimeout;                                 // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAffiliateKeyModal_C* GetDefaultObj();

	void OnNavUpToAffiliateKey(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue);
	void OnNavDownFromAffiliateKey(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue);
	void OnActivated();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnSet(bool bSuccess);
	void BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnCheckComplete(bool bSuccess, bool bWasValidAffiliateName, const class FString& AffilateNameChecked);
	void ExecuteUbergraph_AffiliateKeyModal(int32 EntryPoint, class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_GetAffiliateName_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, const class FString& CallFunc_GetAffiliateName_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, TArray<class FString>& CallFunc_GetValidAffiliateNames_ReturnValue, bool K2Node_CustomEvent_bSuccess1, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, const class FString& CallFunc_GetAffiliateName_ReturnValue2, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetOverrideAffiliateDescriptionText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue2, class FText CallFunc_GetOverrideAffiliateErrorText_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_TextIsEmpty_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortMcpContext* CallFunc_GetContext_ReturnValue4, class FText CallFunc_GetText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, class FText CallFunc_GetText_ReturnValue1, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_CanLaunchURL_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue5, int32 CallFunc_Len_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_GetText_ReturnValue2, const class FString& CallFunc_Conv_TextToString_ReturnValue1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue6, enum class ESlateVisibility Temp_byte_Variable3, class FText CallFunc_GetText_ReturnValue3, const class FString& CallFunc_Conv_TextToString_ReturnValue2, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool Temp_bool_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class ESlateVisibility K2Node_Select1_Default, class FText CallFunc_GetText_ReturnValue4, const class FString& CallFunc_Conv_TextToString_ReturnValue3, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue7, bool K2Node_CustomEvent_bSuccess, bool K2Node_CustomEvent_bWasValidAffiliateName, const class FString& K2Node_CustomEvent_AffilateNameChecked, class FText CallFunc_GetText_ReturnValue5, const class FString& CallFunc_Conv_TextToString_ReturnValue4, bool CallFunc_EqualEqual_StrStr_ReturnValue1, class FText CallFunc_GetText_ReturnValue6, const class FString& CallFunc_Conv_TextToString_ReturnValue5, bool CallFunc_EqualEqual_StrStr_ReturnValue2);
};

}



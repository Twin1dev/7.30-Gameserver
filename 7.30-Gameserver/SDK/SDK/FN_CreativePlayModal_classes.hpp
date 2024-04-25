#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x3B9 - 0x360)
// WidgetBlueprintGeneratedClass CreativePlayModal.CreativePlayModal_C
class UCreativePlayModal_C : public UFortCreativePlayOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FriendsAdded;                                      // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     AddFriendsButton;                                  // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              AddFriendsContent;                                 // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      AddFriendsText;                                    // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCreativeLobbyAdSpace_C*               CreativeLobbyAdSpace;                              // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     IslandCodeButton;                                  // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              IslandCodeContent;                                 // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      StartIslandText;                                   // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         NewVar_0;                                          // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCreativePlayModal_C* GetDefaultObj();

	void SetStartIsland(class FText StartIslandName, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_TextIsEmpty_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText Temp_text_Variable, class FText K2Node_Select_Default);
	void HandleSocialImportClosed(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void InitializeAddFriends(class FText PlatformName, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_ShouldShowImportPlatformFriendsOption_ReturnValue, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class ESlateVisibility K2Node_Select_Default, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue1);
	void NullActionHandler(bool* bPassThrough);
	void BndEvt__CreativeOptionsServers_K2Node_ComponentBoundEvent_0_OnSelectedServerChanged__DelegateSignature(class UFortCreativeServerInfo* ServerInfo);
	void Construct();
	void OnActivated();
	void OnDeactivated();
	void OnBeginOutro();
	void InputTypeChanged(bool bUsingGamepad);
	void InitFromObject(class UObject* InitObject);
	void BndEvt__AddFriendsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IslandCodeButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void CreativeIslandCodeConfirmedEvent(class UFortCreativeIslandLink* IslandLink);
	void ExecuteUbergraph_CreativePlayModal(int32 EntryPoint, class UFortCreativeIslandLink* K2Node_CustomEvent_IslandLink, bool Temp_bool_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, float Temp_float_Variable, class UCreativeIslandLinkScreen_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable3, bool Temp_bool_Variable4, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UClass* Temp_class_Variable, bool CallFunc_IsCreativeModeAccessLimited_ReturnValue, class UFortCreativeServerInfo* K2Node_ComponentBoundEvent_ServerInfo, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_Select_Default, class UCreativeServerOptions_C* K2Node_DynamicCast_AsCreative_Server_Options, bool K2Node_DynamicCast_bSuccess, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select1_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, class UClass* Temp_class_Variable1, bool K2Node_CustomEvent_bUsingGamepad, bool Temp_bool_Variable5, class UObject* K2Node_Event_InitObject, class UFortAthenaMatchmakingWidget* K2Node_DynamicCast_AsFort_Athena_Matchmaking_Widget, bool K2Node_DynamicCast_bSuccess1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, int32 CallFunc_GetSelectedButtonIndex_ReturnValue, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, class UCommonUISubsystem* CallFunc_GetContext_ReturnValue, class UCreativeServerOptionsTile_C* K2Node_DynamicCast_AsCreative_Server_Options_Tile, bool K2Node_DynamicCast_bSuccess2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsUsingGamepad_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UClass* K2Node_Select2_Default, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, enum class ESlateVisibility K2Node_Select3_Default);
};

}



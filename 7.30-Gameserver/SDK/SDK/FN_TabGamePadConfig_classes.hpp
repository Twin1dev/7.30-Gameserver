#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x370 - 0x2A8)
// WidgetBlueprintGeneratedClass TabGamePadConfig.TabGamePadConfig_C
class UTabGamePadConfig_C : public UFortGamepadInputOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URotatorSelector_C*                    CustomInputTemplateConfigs;                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    GamepadConfig;                                     // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGamepadMappingInfo_C*                 GamepadMappingInfo;                                // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    GamepadPlatformConfig;                             // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Gamepad_Platform;                          // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_GamepadMappingInfo;                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_InputList;                             // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsCombatMode;                                      // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        InputPresets;                                      // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        PlatformMappingIndex;                              // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PresetMappingIndex;                                // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  EnableGamepadInputOverlay;                         // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        CustomInputTemplatePresetIndex;                    // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentInputNum;                                   // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  GamepadMappingInfoChanged;                         // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTexture2D*                            T_PS4_Unbound;                                     // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            T_Xb1_Unbound;                                     // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          InputPresetNames_NoCustom;                         // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                  ShowResetToDefaultMessage;                         // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         PendingInputEnabledValue;                          // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOptionsMenuInputOneKeyDisplayOnly_C*  DisplayObject;                                     // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTabGamePadConfig_C* GetDefaultObj();

	void SetupDisplayObject(int32 InputIndex, class UOptionsMenuInputOneKeyDisplayOnly_C** ReturnObject, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UObject* CallFunc_Array_Get_Item, class UFortOptionsMenuInputData* K2Node_DynamicCast_AsFort_Options_Menu_Input_Data, bool K2Node_DynamicCast_bSuccess);
	class UWidget* InputCommonListViewNav(enum class EUINavigation Navigation, enum class EUINavigation Temp_byte_Variable, class UWidget* Temp_object_Variable, class UWidget* Temp_object_Variable1, class UWidget* Temp_object_Variable2, class UWidget* Temp_object_Variable3, class UWidget* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
	class UWidget* CustomInputTemplateConfigsNav(enum class EUINavigation Navigation, class UWidget* ReturnWidget_Local, class UWidget* Temp_object_Variable, class UWidget* Temp_object_Variable1, class UWidget* Temp_object_Variable2, enum class EUINavigation Temp_byte_Variable, class UWidget* Temp_object_Variable3, class UWidget* Temp_object_Variable4, class UWidget* Temp_object_Variable5, class UWidget* Temp_object_Variable6, class UWidget* Temp_object_Variable7, enum class EUINavigation Temp_byte_Variable1, class UObject* CallFunc_GetItemAt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UWidget* K2Node_Select_Default, class UWidget* K2Node_Select1_Default, bool CallFunc_IsConsole_ReturnValue);
	class UWidget* GamepadPlatformConfigNav(enum class EUINavigation Navigation, class UWidget* ReturnWidget_Local, bool Temp_bool_Variable, enum class EUINavigation Temp_byte_Variable, class UWidget* Temp_object_Variable, class UWidget* Temp_object_Variable1, class UWidget* Temp_object_Variable2, class UWidget* Temp_object_Variable3, bool CallFunc_IsCustomConfig_ReturnValue, bool CallFunc_IsConsole_ReturnValue, class UWidget* K2Node_Select_Default, class UWidget* K2Node_Select1_Default);
	bool IsConsole(bool CallFunc_IsErebus_ReturnValue, bool CallFunc_IsXboxPlatform_ReturnValue, bool CallFunc_IsPS4Platform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1);
	class UWidget* GamepadConfigNav(enum class EUINavigation Navigation, class UWidget* ReturnWidget_Local, class UWidget* Temp_object_Variable, bool Temp_bool_Variable, class UWidget* Temp_object_Variable1, enum class EUINavigation Temp_byte_Variable, class UWidget* Temp_object_Variable2, class UWidget* Temp_object_Variable3, class UWidget* Temp_object_Variable4, class UWidget* Temp_object_Variable5, enum class EUINavigation Temp_byte_Variable1, class UWidget* Temp_object_Variable6, class UWidget* Temp_object_Variable7, class UWidget* Temp_object_Variable8, class UWidget* Temp_object_Variable9, bool Temp_bool_Variable1, bool Temp_bool_Variable2, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, bool CallFunc_IsCustomConfig_ReturnValue, bool CallFunc_IsCustomConfig_ReturnValue1, class UWidget* K2Node_Select_Default, class UWidget* K2Node_Select1_Default, class UWidget* K2Node_Select2_Default, bool CallFunc_IsConsole_ReturnValue, class UWidget* K2Node_Select3_Default, class UWidget* K2Node_Select4_Default);
	void GetCurrentPlatformIndex(int32* Platform_Index, bool Temp_bool_Variable, int32 Temp_int_Variable, bool Temp_bool_Variable1, int32 Temp_int_Variable1, int32 Temp_int_Variable2, bool CallFunc_IsErebus_ReturnValue, const class FString& CallFunc_GetControllerPlatform_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select1_Default);
	bool IsCustomConfig(int32 PresetIndex, bool CallFunc_IsCustomGamepadConfig_ReturnValue);
	void SetInputEnabled(bool Enable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_Array_Get_Item, class UWidget* CallFunc_GetListWidget_ReturnValue, class UOptionsMenuInputOneKey_C* K2Node_DynamicCast_AsOptions_Menu_Input_One_Key, bool K2Node_DynamicCast_bSuccess);
	void OverlayKeyPressed(const struct FKey& NewKey, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue);
	void HandleGamepadMappingInfoChange(bool CallFunc_IsCustomConfig_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue);
	void Handle_Mode_Toggled(bool CallFunc_Not_PreBool_ReturnValue);
	void Update_Data(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue, int32 CallFunc_GetCurrentPlatformIndex_Platform_Index, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, const class FString& CallFunc_GetCurrentCustomInputTemplatePresetName_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue1);
	void Initialize_Data(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class FString>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames, TArray<class FText>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames, class FText Temp_text_Variable, class FText Temp_text_Variable1, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, class FText K2Node_Select_Default, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, enum class ESubGame CallFunc_GetSubGame_ReturnValue1, TArray<class FString>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames1, TArray<class FText>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames1, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_AddUnique_ReturnValue, const class FString& CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue);
	void DialogResult_78BE0188450C0D75A0C9159AB760C3B8(enum class EFortDialogResult Result, class FName ResultName);
	void CenterOnTab();
	void Gamepad_Config_Changed(int32 Selected_Index);
	void UpdateOptionsTab();
	void GamepadPlatformConfigChanged(int32 Selected_Index);
	void Configuration_Changed(int32 Selected_Index);
	void Construct();
	void ClearAndConstructKeybindList();
	void BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_130_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void InputClicked_Bind(int32 Number_in_List, bool Is_Primary_Button);
	void HandleGamePadToggleMode();
	void UnbindClicked_Bind(int32 Number_in_List, class UOptionsMenuInputOneKey_C* Widget);
	void BndEvt__CustomInputTemplateConfigs_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void DoResetToDefault();
	void DoNotResetToDefault();
	void TrySetInputEnabled();
	void HandleChangeBinding(const struct FKey& NewKey);
	void ExecuteUbergraph_TabGamePadConfig(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UOptionsMenuInputOneKeyDisplayOnly_C* CallFunc_Create_ReturnValue, int32 K2Node_CustomEvent_Selected_Index2, const class FString& CallFunc_Array_Get_Item, int32 K2Node_CustomEvent_Selected_Index1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_CustomEvent_Selected_Index, enum class ECommonGamepadType Temp_byte_Variable1, class UUserWidget* K2Node_ComponentBoundEvent_Widget, int32 K2Node_CustomEvent_Number_In_List1, bool K2Node_CustomEvent_Is_Primary_Button, class UOptionsMenuInputOneKey_C* K2Node_DynamicCast_AsOptions_Menu_Input_One_Key, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_MakeLiteralText_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class ECommonGamepadType Temp_byte_Variable2, int32 K2Node_CustomEvent_Number_in_List, class UOptionsMenuInputOneKey_C* K2Node_CustomEvent_Widget, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, int32 K2Node_ComponentBoundEvent_Selected_Index, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue1, const class FString& CallFunc_Array_Get_Item1, bool CallFunc_IsRefreshPending_ReturnValue, const class FString& Temp_string_Variable, bool CallFunc_HasCustomGamepadBindingChanges_ReturnValue, const struct FKey& K2Node_MakeStruct_Key, bool CallFunc_IsConsole_ReturnValue, const struct FKey& K2Node_CustomEvent_NewKey, const class FString& Temp_string_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, const struct FFortActionBeingUnbound& CallFunc_GetActionBeingUnbound_ReturnValue, bool Temp_bool_Variable1, class UOptionsMenuInputOneKeyDisplayOnly_C* CallFunc_SetupDisplayObject_ReturnObject, bool CallFunc_NotEqual_NameName_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UObject* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_GetListWidget_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UOptionsMenuInputOneKey_C* K2Node_DynamicCast_AsOptions_Menu_Input_One_Key1, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ECommonGamepadType K2Node_Select_Default, const class FString& K2Node_Select1_Default);
	void ShowResetToDefaultMessage__DelegateSignature();
	void GamepadMappingInfoChanged__DelegateSignature();
	void EnableGamepadInputOverlay__DelegateSignature(bool AcceptInput, class FText OverlayText);
};

}



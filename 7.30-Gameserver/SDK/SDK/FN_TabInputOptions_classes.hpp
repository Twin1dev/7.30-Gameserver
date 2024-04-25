#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x300 - 0x2A8)
// WidgetBlueprintGeneratedClass TabInputOptions.TabInputOptions_C
class UTabInputOptions_C : public UFortInputOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         OverlayBorder;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Currently_Selected_Input;                          // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Currently_Primary;                              // 0x2BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  Enable_Overlay;                                    // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  Disable_Overlay;                                   // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Using_Gamepad;                                     // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  Gamepad_Changed;                                   // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UOptionsMenuInputDisplayOnly_C*        DisplayObject;                                     // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTabInputOptions_C* GetDefaultObj();

	void SetupDisplayOption(int32 InputIndex, class UOptionsMenuInputDisplayOnly_C** ReturnObject, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UObject* CallFunc_Array_Get_Item, class UFortOptionsMenuInputData* K2Node_DynamicCast_AsFort_Options_Menu_Input_Data, bool K2Node_DynamicCast_bSuccess);
	void Set_Input_Enabled(bool Enabled, int32 Temp_int_Variable, class UObject* CallFunc_GetItemAt_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue, class UWidget* CallFunc_GetListWidget_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UOptionsMenuInput_C* K2Node_DynamicCast_AsOptions_Menu_Input, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue);
	void Overlay_Key_Pressed(const struct FKey& NewKey, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue1, bool CallFunc_EqualEqual_KeyKey_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1);
	void DialogResult_018CEC524FAF598D4D7A358441037217(enum class EFortDialogResult Result, class FName ResultName);
	void CenterOnTab();
	void BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void HandleUsingGamepadChanged(enum class ECommonInputType NewInputType);
	void UnbindClicked(int32 Number_in_List, class UOptionsMenuInput_C* Widget);
	void ClearAndConstructKeybindList();
	void Input_Clicked(int32 Number_in_List, bool Is_Primary_Button);
	void UpdateOptionsTab();
	void Construct();
	void HandleChangeBinding(const struct FKey& NewKey);
	void ExecuteUbergraph_TabInputOptions(int32 EntryPoint, class FName Temp_name_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class EFortDialogResult Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UOptionsMenuInputDisplayOnly_C* CallFunc_Create_ReturnValue, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UObject* CallFunc_GetItemAt_ReturnValue, class UOptionsMenuInput_C* K2Node_DynamicCast_AsOptions_Menu_Input, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetListWidget_ReturnValue, class UOptionsMenuInput_C* K2Node_DynamicCast_AsOptions_Menu_Input1, bool K2Node_DynamicCast_bSuccess1, enum class ECommonInputType K2Node_Event_NewInputType, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, bool CallFunc_Not_PreBool_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue2, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, int32 K2Node_CustomEvent_Number_In_List1, class UOptionsMenuInput_C* K2Node_CustomEvent_Widget, const struct FKey& K2Node_MakeStruct_Key, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class ESlateVisibility Temp_byte_Variable1, int32 K2Node_CustomEvent_Number_in_List, bool K2Node_CustomEvent_Is_Primary_Button, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, const struct FKey& K2Node_CustomEvent_NewKey, enum class ESlateVisibility Temp_byte_Variable3, const struct FFortActionBeingUnbound& CallFunc_GetActionBeingUnbound_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UOptionsMenuInputDisplayOnly_C* CallFunc_SetupDisplayOption_ReturnObject, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable1, enum class ESlateVisibility K2Node_Select1_Default);
	void Gamepad_Changed__DelegateSignature(bool Gamepad_Enabled);
	void Disable_Overlay__DelegateSignature();
	void Enable_Overlay__DelegateSignature(bool Accept_Input, class FText Overlay_Text);
};

}



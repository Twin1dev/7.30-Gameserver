#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x308 - 0x280)
// WidgetBlueprintGeneratedClass TabVideoOptions.TabVideoOptions_C
class UTabVideoOptions_C : public UFortVideoOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      TooltipDisplay;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  Enable_Overlay;                                    // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  Disable_Overlay;                                   // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortOptionsMenuSetting*               DisplayResolutionSetting;                          // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class ESettingType, class UFortOptionsMenuSetting*> ForceUpdateSettings;                               // 0x2B8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UTabVideoOptions_C* GetDefaultObj();

	void Update_Qualities(const TArray<class FText>& NewLocalVar_0, class UFortSettingsContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_GetMaxQualityLevel_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, enum class ESettingType Temp_byte_Variable, class UFortOptionsMenuSetting* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UOptionsMenuRowSelector_C* K2Node_DynamicCast_AsOptions_Menu_Row_Selector, bool K2Node_DynamicCast_bSuccess);
	void Construct();
	void UpdateOptionsTab();
	void CenterOnTab();
	void OnGameUserSettingsUINeedsUpdate();
	void Destruct();
	void BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void Window_Mode_Changed(bool IsWindowedFullscreen);
	void Quality_Changed();
	void Setting_Value_Changed();
	void ExecuteUbergraph_TabVideoOptions(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue1, class UUserWidget* K2Node_ComponentBoundEvent_Widget1, class UObject* K2Node_ComponentBoundEvent_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UFortOptionsMenuSetting* K2Node_DynamicCast_AsFort_Options_Menu_Setting, bool K2Node_DynamicCast_bSuccess, class UFortOptionsMenuSetting* K2Node_DynamicCast_AsFort_Options_Menu_Setting1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UOptionsMenuSetting_C* K2Node_DynamicCast_AsOptions_Menu_Setting, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_CustomEvent_IsWindowedFullscreen, class UOptionsMenuRotator_C* K2Node_DynamicCast_AsOptions_Menu_Rotator, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class ESlateVisibility Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class UFortSettingsContext* CallFunc_GetContext_ReturnValue, TArray<class UFortOptionsMenuSetting*>& CallFunc_Map_Values_Values, class UFortOptionsMenuSetting* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3);
	void Disable_Overlay__DelegateSignature();
	void Enable_Overlay__DelegateSignature(bool Accept_Input);
};

}



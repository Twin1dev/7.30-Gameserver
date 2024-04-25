#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GamepadMappingInfo_v3.GamepadMappingInfo_v3_C
// (None)

class UClass* UGamepadMappingInfo_v3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GamepadMappingInfo_v3_C");

	return Clss;
}


// GamepadMappingInfo_v3_C GamepadMappingInfo_v3.Default__GamepadMappingInfo_v3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGamepadMappingInfo_v3_C* UGamepadMappingInfo_v3_C::GetDefaultObj()
{
	static class UGamepadMappingInfo_v3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGamepadMappingInfo_v3_C*>(UGamepadMappingInfo_v3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Set Controller Image
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetControllerImage_Texture                              (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAssetNull_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadMappingInfo_v3_C::Set_Controller_Image(TSoftObjectPtr<class UTexture2D> CallFunc_GetControllerImage_Texture, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "Set Controller Image");

	Params::UGamepadMappingInfo_v3_C_Set_Controller_Image_Params Parms{};

	Parms.CallFunc_GetControllerImage_Texture = CallFunc_GetControllerImage_Texture;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsAssetNull_ReturnValue = CallFunc_IsAssetNull_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D1 = K2Node_DynamicCast_AsTexture_2D1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GamepadMappingInfoNavLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadMappingInfo_v3_C::GamepadMappingInfoNavLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "GamepadMappingInfoNavLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowEditModeTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadMappingInfo_v3_C::ShowEditModeTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "ShowEditModeTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideEditModeTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SelectTabByID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetActiveTab_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadMappingInfo_v3_C::HideEditModeTab(bool CallFunc_SelectTabByID_ReturnValue, class FName CallFunc_GetActiveTab_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "HideEditModeTab");

	Params::UGamepadMappingInfo_v3_C_HideEditModeTab_Params Parms{};

	Parms.CallFunc_SelectTabByID_ReturnValue = CallFunc_SelectTabByID_ReturnValue;
	Parms.CallFunc_GetActiveTab_ReturnValue = CallFunc_GetActiveTab_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.On_Image_LightBox_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UGamepadMappingInfo_v3_C::On_Image_LightBox_MouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "On_Image_LightBox_MouseButtonDown_0");

	Params::UGamepadMappingInfo_v3_C_On_Image_LightBox_MouseButtonDown_0_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetCustomButtonDataForKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        ActionName                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DescText                                                         (Parm, OutParm)
// enum class EFortInputActionGroup   InputActionGroup_Local                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DescText_Local                                                   (Edit, BlueprintVisible)
// class FName                        ActionName_Local                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PresetName_Local                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Key_Local                                                        (Edit, BlueprintVisible, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCustomGamepadInputPresetName_ReturnValue             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetScreenLabel_ReturnValue                              (None)
// class FName                        CallFunc_GetActionForKey_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetActionForKey_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetActionForKey_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::GetCustomButtonDataForKey(const struct FKey& Key, class FName* ActionName, class FText* DescText, enum class EFortInputActionGroup InputActionGroup_Local, class FText DescText_Local, class FName ActionName_Local, class FName PresetName_Local, const struct FKey& Key_Local, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetCustomGamepadInputPresetName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_EqualEqual_NameName_ReturnValue, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class FText CallFunc_GetScreenLabel_ReturnValue, class FName CallFunc_GetActionForKey_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, class FName CallFunc_GetActionForKey_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, class FName CallFunc_GetActionForKey_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "GetCustomButtonDataForKey");

	Params::UGamepadMappingInfo_v3_C_GetCustomButtonDataForKey_Params Parms{};

	Parms.Key = Key;
	Parms.InputActionGroup_Local = InputActionGroup_Local;
	Parms.DescText_Local = DescText_Local;
	Parms.ActionName_Local = ActionName_Local;
	Parms.PresetName_Local = PresetName_Local;
	Parms.Key_Local = Key_Local;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCustomGamepadInputPresetName_ReturnValue = CallFunc_GetCustomGamepadInputPresetName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue = CallFunc_GetFortInputDataForBlueprint_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetScreenLabel_ReturnValue = CallFunc_GetScreenLabel_ReturnValue;
	Parms.CallFunc_GetActionForKey_ReturnValue = CallFunc_GetActionForKey_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue1 = CallFunc_EqualEqual_NameName_ReturnValue1;
	Parms.CallFunc_GetActionForKey_ReturnValue1 = CallFunc_GetActionForKey_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetActionForKey_ReturnValue2 = CallFunc_GetActionForKey_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionName != nullptr)
		*ActionName = Parms.ActionName;

	if (DescText != nullptr)
		*DescText = Parms.DescText;

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetTextForMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortInputActionGroup   Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadMappingInfo_v3_C::SetTextForMode(enum class EFortInputActionGroup Selection, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "SetTextForMode");

	Params::UGamepadMappingInfo_v3_C_SetTextForMode_Params Parms{};

	Parms.Selection = Selection;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetButtonTextLabelsFromTextArray
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadMappingInfo_v3_C::SetButtonTextLabelsFromTextArray(TArray<class FText>& Array, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UCommonTextBlock* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "SetButtonTextLabelsFromTextArray");

	Params::UGamepadMappingInfo_v3_C_SetButtonTextLabelsFromTextArray_Params Parms{};

	Parms.Array = Array;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTW_BuilderProBuild
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                ButtonTextLabels                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable1                                              (ConstParm)
// class FText                        Temp_text_Variable2                                              (ConstParm)
// class FText                        Temp_text_Variable3                                              (ConstParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetBuildingEditResetLabel_ReturnValue                   (None)
// class FText                        CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue         (None)
// int32                              CallFunc_Array_Add_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLookLabel_ReturnValue                                (None)
// class FText                        CallFunc_GetJumpLabel_ReturnValue                                (None)
// int32                              CallFunc_Array_Add_ReturnValue7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue               (None)
// class FText                        CallFunc_GetSwitchQuickbarLabel_ReturnValue                      (None)
// int32                              CallFunc_Array_Add_ReturnValue9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue7               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGamepadTrapPickerHoldLabel_ReturnValue               (None)
// class FText                        CallFunc_GetInteractTapHoldLabel_ReturnValue                     (None)
// int32                              CallFunc_Array_Add_ReturnValue11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue8               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue9               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGamepadTrapSelectAndPlaceLabel_ReturnValue           (None)
// class FText                        CallFunc_GetHarvestWeaponLabel_ReturnValue                       (None)
// int32                              CallFunc_Array_Add_ReturnValue13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue10              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue11              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGamepadFloorSelectAndPlaceLabel_ReturnValue          (None)
// class FText                        CallFunc_GetGamepadWallSelectAndPlaceLabel_ReturnValue           (None)
// int32                              CallFunc_Array_Add_ReturnValue15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue12              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue13              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGameMenuLabel_ReturnValue                            (None)
// class FText                        CallFunc_GetToggleFullScreenMapLabel_ReturnValue                 (None)
// int32                              CallFunc_Array_Add_ReturnValue17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue14              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue15              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue   (None)
// class FText                        CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue1  (None)
// int32                              CallFunc_Array_Add_ReturnValue19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue16              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue17              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetToggleInventoryLabel_ReturnValue                     (None)
// class FText                        CallFunc_GetToggleInventoryLabel_ReturnValue1                    (None)
// int32                              CallFunc_Array_Add_ReturnValue21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue18              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue19              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmoteOrQuickChatLabel_ReturnValue                    (None)
// class FText                        CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1                   (None)
// int32                              CallFunc_Array_Add_ReturnValue23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue20              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue21              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAutoSprintLabel_ReturnValue                          (None)
// class FText                        CallFunc_GetAutoSprintLabel_ReturnValue1                         (None)
// int32                              CallFunc_Array_Add_ReturnValue25                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue26                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue22              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue23              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSprintLabel_ReturnValue                              (None)
// class FText                        CallFunc_GetSprintLabel_ReturnValue1                             (None)
// int32                              CallFunc_Array_Add_ReturnValue27                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue28                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue24              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue25              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMoveLabel_ReturnValue                                (None)
// class FText                        CallFunc_GetMoveLabel_ReturnValue1                               (None)
// int32                              CallFunc_Array_Add_ReturnValue29                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue30                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue26              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue27              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGamepadRoofSelectAndPlaceLabel_ReturnValue           (None)
// class FText                        CallFunc_GetGamepadStairSelectAndPlaceLabel_ReturnValue          (None)
// int32                              CallFunc_Array_Add_ReturnValue31                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue32                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable4                                              (ConstParm)
// class FText                        Temp_text_Variable5                                              (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue33                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue34                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable6                                              (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue35                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::InitializeListOfButtonTextForSTW_BuilderProBuild(TArray<class FText>& ButtonTextLabels, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText CallFunc_MakeLiteralText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue4, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue1, class FText CallFunc_GetBuildingEditResetLabel_ReturnValue, class FText CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue5, int32 CallFunc_Array_Add_ReturnValue6, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue2, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue3, class FText CallFunc_GetLookLabel_ReturnValue, class FText CallFunc_GetJumpLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue7, int32 CallFunc_Array_Add_ReturnValue8, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue4, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue5, class FText CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue, class FText CallFunc_GetSwitchQuickbarLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue9, int32 CallFunc_Array_Add_ReturnValue10, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue6, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue7, class FText CallFunc_GetGamepadTrapPickerHoldLabel_ReturnValue, class FText CallFunc_GetInteractTapHoldLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue11, int32 CallFunc_Array_Add_ReturnValue12, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue8, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue9, class FText CallFunc_GetGamepadTrapSelectAndPlaceLabel_ReturnValue, class FText CallFunc_GetHarvestWeaponLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue13, int32 CallFunc_Array_Add_ReturnValue14, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue10, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue11, class FText CallFunc_GetGamepadFloorSelectAndPlaceLabel_ReturnValue, class FText CallFunc_GetGamepadWallSelectAndPlaceLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue15, int32 CallFunc_Array_Add_ReturnValue16, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue12, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue13, class FText CallFunc_GetGameMenuLabel_ReturnValue, class FText CallFunc_GetToggleFullScreenMapLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue17, int32 CallFunc_Array_Add_ReturnValue18, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue14, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue15, class FText CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue, class FText CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue19, int32 CallFunc_Array_Add_ReturnValue20, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue16, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue17, class FText CallFunc_GetToggleInventoryLabel_ReturnValue, class FText CallFunc_GetToggleInventoryLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue21, int32 CallFunc_Array_Add_ReturnValue22, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue18, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue19, class FText CallFunc_GetEmoteOrQuickChatLabel_ReturnValue, class FText CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue23, int32 CallFunc_Array_Add_ReturnValue24, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue20, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue21, class FText CallFunc_GetAutoSprintLabel_ReturnValue, class FText CallFunc_GetAutoSprintLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue25, int32 CallFunc_Array_Add_ReturnValue26, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue22, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue23, class FText CallFunc_GetSprintLabel_ReturnValue, class FText CallFunc_GetSprintLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue27, int32 CallFunc_Array_Add_ReturnValue28, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue24, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue25, class FText CallFunc_GetMoveLabel_ReturnValue, class FText CallFunc_GetMoveLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue29, int32 CallFunc_Array_Add_ReturnValue30, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue26, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue27, class FText CallFunc_GetGamepadRoofSelectAndPlaceLabel_ReturnValue, class FText CallFunc_GetGamepadStairSelectAndPlaceLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue31, int32 CallFunc_Array_Add_ReturnValue32, class FText Temp_text_Variable4, class FText Temp_text_Variable5, int32 CallFunc_Array_Add_ReturnValue33, int32 CallFunc_Array_Add_ReturnValue34, class FText Temp_text_Variable6, int32 CallFunc_Array_Add_ReturnValue35)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "InitializeListOfButtonTextForSTW_BuilderProBuild");

	Params::UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTW_BuilderProBuild_Params Parms{};

	Parms.ButtonTextLabels = ButtonTextLabels;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue3 = CallFunc_Array_Add_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue4 = CallFunc_Array_Add_ReturnValue4;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue = CallFunc_GetFortInputDataForBlueprint_ReturnValue;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue1 = CallFunc_GetFortInputDataForBlueprint_ReturnValue1;
	Parms.CallFunc_GetBuildingEditResetLabel_ReturnValue = CallFunc_GetBuildingEditResetLabel_ReturnValue;
	Parms.CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue = CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue5 = CallFunc_Array_Add_ReturnValue5;
	Parms.CallFunc_Array_Add_ReturnValue6 = CallFunc_Array_Add_ReturnValue6;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue2 = CallFunc_GetFortInputDataForBlueprint_ReturnValue2;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue3 = CallFunc_GetFortInputDataForBlueprint_ReturnValue3;
	Parms.CallFunc_GetLookLabel_ReturnValue = CallFunc_GetLookLabel_ReturnValue;
	Parms.CallFunc_GetJumpLabel_ReturnValue = CallFunc_GetJumpLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue7 = CallFunc_Array_Add_ReturnValue7;
	Parms.CallFunc_Array_Add_ReturnValue8 = CallFunc_Array_Add_ReturnValue8;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue4 = CallFunc_GetFortInputDataForBlueprint_ReturnValue4;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue5 = CallFunc_GetFortInputDataForBlueprint_ReturnValue5;
	Parms.CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue = CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue;
	Parms.CallFunc_GetSwitchQuickbarLabel_ReturnValue = CallFunc_GetSwitchQuickbarLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue9 = CallFunc_Array_Add_ReturnValue9;
	Parms.CallFunc_Array_Add_ReturnValue10 = CallFunc_Array_Add_ReturnValue10;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue6 = CallFunc_GetFortInputDataForBlueprint_ReturnValue6;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue7 = CallFunc_GetFortInputDataForBlueprint_ReturnValue7;
	Parms.CallFunc_GetGamepadTrapPickerHoldLabel_ReturnValue = CallFunc_GetGamepadTrapPickerHoldLabel_ReturnValue;
	Parms.CallFunc_GetInteractTapHoldLabel_ReturnValue = CallFunc_GetInteractTapHoldLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue11 = CallFunc_Array_Add_ReturnValue11;
	Parms.CallFunc_Array_Add_ReturnValue12 = CallFunc_Array_Add_ReturnValue12;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue8 = CallFunc_GetFortInputDataForBlueprint_ReturnValue8;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue9 = CallFunc_GetFortInputDataForBlueprint_ReturnValue9;
	Parms.CallFunc_GetGamepadTrapSelectAndPlaceLabel_ReturnValue = CallFunc_GetGamepadTrapSelectAndPlaceLabel_ReturnValue;
	Parms.CallFunc_GetHarvestWeaponLabel_ReturnValue = CallFunc_GetHarvestWeaponLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue13 = CallFunc_Array_Add_ReturnValue13;
	Parms.CallFunc_Array_Add_ReturnValue14 = CallFunc_Array_Add_ReturnValue14;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue10 = CallFunc_GetFortInputDataForBlueprint_ReturnValue10;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue11 = CallFunc_GetFortInputDataForBlueprint_ReturnValue11;
	Parms.CallFunc_GetGamepadFloorSelectAndPlaceLabel_ReturnValue = CallFunc_GetGamepadFloorSelectAndPlaceLabel_ReturnValue;
	Parms.CallFunc_GetGamepadWallSelectAndPlaceLabel_ReturnValue = CallFunc_GetGamepadWallSelectAndPlaceLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue15 = CallFunc_Array_Add_ReturnValue15;
	Parms.CallFunc_Array_Add_ReturnValue16 = CallFunc_Array_Add_ReturnValue16;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue12 = CallFunc_GetFortInputDataForBlueprint_ReturnValue12;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue13 = CallFunc_GetFortInputDataForBlueprint_ReturnValue13;
	Parms.CallFunc_GetGameMenuLabel_ReturnValue = CallFunc_GetGameMenuLabel_ReturnValue;
	Parms.CallFunc_GetToggleFullScreenMapLabel_ReturnValue = CallFunc_GetToggleFullScreenMapLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue17 = CallFunc_Array_Add_ReturnValue17;
	Parms.CallFunc_Array_Add_ReturnValue18 = CallFunc_Array_Add_ReturnValue18;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue14 = CallFunc_GetFortInputDataForBlueprint_ReturnValue14;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue15 = CallFunc_GetFortInputDataForBlueprint_ReturnValue15;
	Parms.CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue = CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue;
	Parms.CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue1 = CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue19 = CallFunc_Array_Add_ReturnValue19;
	Parms.CallFunc_Array_Add_ReturnValue20 = CallFunc_Array_Add_ReturnValue20;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue16 = CallFunc_GetFortInputDataForBlueprint_ReturnValue16;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue17 = CallFunc_GetFortInputDataForBlueprint_ReturnValue17;
	Parms.CallFunc_GetToggleInventoryLabel_ReturnValue = CallFunc_GetToggleInventoryLabel_ReturnValue;
	Parms.CallFunc_GetToggleInventoryLabel_ReturnValue1 = CallFunc_GetToggleInventoryLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue21 = CallFunc_Array_Add_ReturnValue21;
	Parms.CallFunc_Array_Add_ReturnValue22 = CallFunc_Array_Add_ReturnValue22;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue18 = CallFunc_GetFortInputDataForBlueprint_ReturnValue18;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue19 = CallFunc_GetFortInputDataForBlueprint_ReturnValue19;
	Parms.CallFunc_GetEmoteOrQuickChatLabel_ReturnValue = CallFunc_GetEmoteOrQuickChatLabel_ReturnValue;
	Parms.CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1 = CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue23 = CallFunc_Array_Add_ReturnValue23;
	Parms.CallFunc_Array_Add_ReturnValue24 = CallFunc_Array_Add_ReturnValue24;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue20 = CallFunc_GetFortInputDataForBlueprint_ReturnValue20;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue21 = CallFunc_GetFortInputDataForBlueprint_ReturnValue21;
	Parms.CallFunc_GetAutoSprintLabel_ReturnValue = CallFunc_GetAutoSprintLabel_ReturnValue;
	Parms.CallFunc_GetAutoSprintLabel_ReturnValue1 = CallFunc_GetAutoSprintLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue25 = CallFunc_Array_Add_ReturnValue25;
	Parms.CallFunc_Array_Add_ReturnValue26 = CallFunc_Array_Add_ReturnValue26;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue22 = CallFunc_GetFortInputDataForBlueprint_ReturnValue22;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue23 = CallFunc_GetFortInputDataForBlueprint_ReturnValue23;
	Parms.CallFunc_GetSprintLabel_ReturnValue = CallFunc_GetSprintLabel_ReturnValue;
	Parms.CallFunc_GetSprintLabel_ReturnValue1 = CallFunc_GetSprintLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue27 = CallFunc_Array_Add_ReturnValue27;
	Parms.CallFunc_Array_Add_ReturnValue28 = CallFunc_Array_Add_ReturnValue28;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue24 = CallFunc_GetFortInputDataForBlueprint_ReturnValue24;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue25 = CallFunc_GetFortInputDataForBlueprint_ReturnValue25;
	Parms.CallFunc_GetMoveLabel_ReturnValue = CallFunc_GetMoveLabel_ReturnValue;
	Parms.CallFunc_GetMoveLabel_ReturnValue1 = CallFunc_GetMoveLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue29 = CallFunc_Array_Add_ReturnValue29;
	Parms.CallFunc_Array_Add_ReturnValue30 = CallFunc_Array_Add_ReturnValue30;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue26 = CallFunc_GetFortInputDataForBlueprint_ReturnValue26;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue27 = CallFunc_GetFortInputDataForBlueprint_ReturnValue27;
	Parms.CallFunc_GetGamepadRoofSelectAndPlaceLabel_ReturnValue = CallFunc_GetGamepadRoofSelectAndPlaceLabel_ReturnValue;
	Parms.CallFunc_GetGamepadStairSelectAndPlaceLabel_ReturnValue = CallFunc_GetGamepadStairSelectAndPlaceLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue31 = CallFunc_Array_Add_ReturnValue31;
	Parms.CallFunc_Array_Add_ReturnValue32 = CallFunc_Array_Add_ReturnValue32;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.CallFunc_Array_Add_ReturnValue33 = CallFunc_Array_Add_ReturnValue33;
	Parms.CallFunc_Array_Add_ReturnValue34 = CallFunc_Array_Add_ReturnValue34;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.CallFunc_Array_Add_ReturnValue35 = CallFunc_Array_Add_ReturnValue35;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetControllerImage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   Texture                                                          (Parm, OutParm, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::GetControllerImage(TSoftObjectPtr<class UTexture2D>* Texture, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "GetControllerImage");

	Params::UGamepadMappingInfo_v3_C_GetControllerImage_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ClearAllComboTextLines
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)

void UGamepadMappingInfo_v3_C::ClearAllComboTextLines(class FText CallFunc_MakeLiteralText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "ClearAllComboTextLines");

	Params::UGamepadMappingInfo_v3_C_ClearAllComboTextLines_Params Parms{};

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTWCombatProCombat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                ButtonTextLabels                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAbility2Label_ReturnValue                            (None)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAbility1Label_ReturnValue                            (None)
// class FText                        CallFunc_GetAbility3Label_ReturnValue                            (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetRepairImproveSpotEnemyLabel_ReturnValue              (None)
// class FText                        CallFunc_GetLookLabel_ReturnValue                                (None)
// int32                              CallFunc_Array_Add_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetJumpLabel_ReturnValue                                (None)
// class FText                        CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue               (None)
// int32                              CallFunc_Array_Add_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue7               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue8               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDeployHoverboardLabel_ReturnValue                    (None)
// class FText                        CallFunc_GetSwitchQuickbarLabel_ReturnValue                      (None)
// int32                              CallFunc_Array_Add_ReturnValue7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue9               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue10              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCraftAmmoHoldLabel_ReturnValue                       (None)
// class FText                        CallFunc_GetInteractTapHoldLabel_ReturnValue                     (None)
// int32                              CallFunc_Array_Add_ReturnValue9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue11              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue12              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetReloadTapLabel_ReturnValue                           (None)
// class FText                        CallFunc_GetHarvestWeaponLabel_ReturnValue                       (None)
// int32                              CallFunc_Array_Add_ReturnValue11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue13              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue14              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetNextWeaponTapLabel_ReturnValue                       (None)
// class FText                        CallFunc_GetAttackConfirmLabel_ReturnValue                       (None)
// int32                              CallFunc_Array_Add_ReturnValue13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue15              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue16              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGameMenuLabel_ReturnValue                            (None)
// class FText                        CallFunc_GetToggleFullScreenMapLabel_ReturnValue                 (None)
// int32                              CallFunc_Array_Add_ReturnValue15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue17              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue18              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGadget2Label_ReturnValue                             (None)
// class FText                        CallFunc_GetGadget2Label_ReturnValue1                            (None)
// int32                              CallFunc_Array_Add_ReturnValue17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue19              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue20              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGadget1Label_ReturnValue                             (None)
// class FText                        CallFunc_GetGadget1Label_ReturnValue1                            (None)
// int32                              CallFunc_Array_Add_ReturnValue19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue21              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue22              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetToggleInventoryLabel_ReturnValue                     (None)
// class FText                        CallFunc_GetToggleInventoryLabel_ReturnValue1                    (None)
// int32                              CallFunc_Array_Add_ReturnValue21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue23              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue24              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmoteOrQuickChatLabel_ReturnValue                    (None)
// class FText                        CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1                   (None)
// int32                              CallFunc_Array_Add_ReturnValue23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue25              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue26              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAutoSprintLabel_ReturnValue                          (None)
// class FText                        CallFunc_GetAutoSprintLabel_ReturnValue1                         (None)
// int32                              CallFunc_Array_Add_ReturnValue25                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue26                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue27              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue28              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSprintLabel_ReturnValue                              (None)
// class FText                        CallFunc_GetSprintLabel_ReturnValue1                             (None)
// int32                              CallFunc_Array_Add_ReturnValue27                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue28                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue29              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue30              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMoveLabel_ReturnValue                                (None)
// class FText                        CallFunc_GetMoveLabel_ReturnValue1                               (None)
// int32                              CallFunc_Array_Add_ReturnValue29                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue30                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue31              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue32              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPreviousWeaponTapLabel_ReturnValue                   (None)
// class FText                        CallFunc_GetAimDownSightsHeavyMeleeLabel_ReturnValue             (None)
// int32                              CallFunc_Array_Add_ReturnValue31                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue32                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        Temp_text_Variable                                               (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue33                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue34                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable1                                              (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue35                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::InitializeListOfButtonTextForSTWCombatProCombat(TArray<class FText>& ButtonTextLabels, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue, class FText CallFunc_GetAbility2Label_ReturnValue, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue1, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue2, class FText CallFunc_GetAbility1Label_ReturnValue, class FText CallFunc_GetAbility3Label_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue2, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue3, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue4, class FText CallFunc_GetRepairImproveSpotEnemyLabel_ReturnValue, class FText CallFunc_GetLookLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue4, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue5, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue6, class FText CallFunc_GetJumpLabel_ReturnValue, class FText CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue5, int32 CallFunc_Array_Add_ReturnValue6, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue7, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue8, class FText CallFunc_GetDeployHoverboardLabel_ReturnValue, class FText CallFunc_GetSwitchQuickbarLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue7, int32 CallFunc_Array_Add_ReturnValue8, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue9, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue10, class FText CallFunc_GetCraftAmmoHoldLabel_ReturnValue, class FText CallFunc_GetInteractTapHoldLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue9, int32 CallFunc_Array_Add_ReturnValue10, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue11, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue12, class FText CallFunc_GetReloadTapLabel_ReturnValue, class FText CallFunc_GetHarvestWeaponLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue11, int32 CallFunc_Array_Add_ReturnValue12, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue13, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue14, class FText CallFunc_GetNextWeaponTapLabel_ReturnValue, class FText CallFunc_GetAttackConfirmLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue13, int32 CallFunc_Array_Add_ReturnValue14, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue15, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue16, class FText CallFunc_GetGameMenuLabel_ReturnValue, class FText CallFunc_GetToggleFullScreenMapLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue15, int32 CallFunc_Array_Add_ReturnValue16, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue17, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue18, class FText CallFunc_GetGadget2Label_ReturnValue, class FText CallFunc_GetGadget2Label_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue17, int32 CallFunc_Array_Add_ReturnValue18, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue19, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue20, class FText CallFunc_GetGadget1Label_ReturnValue, class FText CallFunc_GetGadget1Label_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue19, int32 CallFunc_Array_Add_ReturnValue20, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue21, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue22, class FText CallFunc_GetToggleInventoryLabel_ReturnValue, class FText CallFunc_GetToggleInventoryLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue21, int32 CallFunc_Array_Add_ReturnValue22, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue23, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue24, class FText CallFunc_GetEmoteOrQuickChatLabel_ReturnValue, class FText CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue23, int32 CallFunc_Array_Add_ReturnValue24, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue25, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue26, class FText CallFunc_GetAutoSprintLabel_ReturnValue, class FText CallFunc_GetAutoSprintLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue25, int32 CallFunc_Array_Add_ReturnValue26, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue27, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue28, class FText CallFunc_GetSprintLabel_ReturnValue, class FText CallFunc_GetSprintLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue27, int32 CallFunc_Array_Add_ReturnValue28, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue29, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue30, class FText CallFunc_GetMoveLabel_ReturnValue, class FText CallFunc_GetMoveLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue29, int32 CallFunc_Array_Add_ReturnValue30, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue31, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue32, class FText CallFunc_GetPreviousWeaponTapLabel_ReturnValue, class FText CallFunc_GetAimDownSightsHeavyMeleeLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue31, int32 CallFunc_Array_Add_ReturnValue32, class FText CallFunc_MakeLiteralText_ReturnValue, class FText Temp_text_Variable, int32 CallFunc_Array_Add_ReturnValue33, int32 CallFunc_Array_Add_ReturnValue34, class FText Temp_text_Variable1, int32 CallFunc_Array_Add_ReturnValue35)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "InitializeListOfButtonTextForSTWCombatProCombat");

	Params::UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTWCombatProCombat_Params Parms{};

	Parms.ButtonTextLabels = ButtonTextLabels;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue = CallFunc_GetFortInputDataForBlueprint_ReturnValue;
	Parms.CallFunc_GetAbility2Label_ReturnValue = CallFunc_GetAbility2Label_ReturnValue;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue1 = CallFunc_GetFortInputDataForBlueprint_ReturnValue1;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue2 = CallFunc_GetFortInputDataForBlueprint_ReturnValue2;
	Parms.CallFunc_GetAbility1Label_ReturnValue = CallFunc_GetAbility1Label_ReturnValue;
	Parms.CallFunc_GetAbility3Label_ReturnValue = CallFunc_GetAbility3Label_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue3 = CallFunc_GetFortInputDataForBlueprint_ReturnValue3;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue4 = CallFunc_GetFortInputDataForBlueprint_ReturnValue4;
	Parms.CallFunc_GetRepairImproveSpotEnemyLabel_ReturnValue = CallFunc_GetRepairImproveSpotEnemyLabel_ReturnValue;
	Parms.CallFunc_GetLookLabel_ReturnValue = CallFunc_GetLookLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue3 = CallFunc_Array_Add_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue4 = CallFunc_Array_Add_ReturnValue4;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue5 = CallFunc_GetFortInputDataForBlueprint_ReturnValue5;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue6 = CallFunc_GetFortInputDataForBlueprint_ReturnValue6;
	Parms.CallFunc_GetJumpLabel_ReturnValue = CallFunc_GetJumpLabel_ReturnValue;
	Parms.CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue = CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue5 = CallFunc_Array_Add_ReturnValue5;
	Parms.CallFunc_Array_Add_ReturnValue6 = CallFunc_Array_Add_ReturnValue6;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue7 = CallFunc_GetFortInputDataForBlueprint_ReturnValue7;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue8 = CallFunc_GetFortInputDataForBlueprint_ReturnValue8;
	Parms.CallFunc_GetDeployHoverboardLabel_ReturnValue = CallFunc_GetDeployHoverboardLabel_ReturnValue;
	Parms.CallFunc_GetSwitchQuickbarLabel_ReturnValue = CallFunc_GetSwitchQuickbarLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue7 = CallFunc_Array_Add_ReturnValue7;
	Parms.CallFunc_Array_Add_ReturnValue8 = CallFunc_Array_Add_ReturnValue8;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue9 = CallFunc_GetFortInputDataForBlueprint_ReturnValue9;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue10 = CallFunc_GetFortInputDataForBlueprint_ReturnValue10;
	Parms.CallFunc_GetCraftAmmoHoldLabel_ReturnValue = CallFunc_GetCraftAmmoHoldLabel_ReturnValue;
	Parms.CallFunc_GetInteractTapHoldLabel_ReturnValue = CallFunc_GetInteractTapHoldLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue9 = CallFunc_Array_Add_ReturnValue9;
	Parms.CallFunc_Array_Add_ReturnValue10 = CallFunc_Array_Add_ReturnValue10;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue11 = CallFunc_GetFortInputDataForBlueprint_ReturnValue11;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue12 = CallFunc_GetFortInputDataForBlueprint_ReturnValue12;
	Parms.CallFunc_GetReloadTapLabel_ReturnValue = CallFunc_GetReloadTapLabel_ReturnValue;
	Parms.CallFunc_GetHarvestWeaponLabel_ReturnValue = CallFunc_GetHarvestWeaponLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue11 = CallFunc_Array_Add_ReturnValue11;
	Parms.CallFunc_Array_Add_ReturnValue12 = CallFunc_Array_Add_ReturnValue12;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue13 = CallFunc_GetFortInputDataForBlueprint_ReturnValue13;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue14 = CallFunc_GetFortInputDataForBlueprint_ReturnValue14;
	Parms.CallFunc_GetNextWeaponTapLabel_ReturnValue = CallFunc_GetNextWeaponTapLabel_ReturnValue;
	Parms.CallFunc_GetAttackConfirmLabel_ReturnValue = CallFunc_GetAttackConfirmLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue13 = CallFunc_Array_Add_ReturnValue13;
	Parms.CallFunc_Array_Add_ReturnValue14 = CallFunc_Array_Add_ReturnValue14;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue15 = CallFunc_GetFortInputDataForBlueprint_ReturnValue15;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue16 = CallFunc_GetFortInputDataForBlueprint_ReturnValue16;
	Parms.CallFunc_GetGameMenuLabel_ReturnValue = CallFunc_GetGameMenuLabel_ReturnValue;
	Parms.CallFunc_GetToggleFullScreenMapLabel_ReturnValue = CallFunc_GetToggleFullScreenMapLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue15 = CallFunc_Array_Add_ReturnValue15;
	Parms.CallFunc_Array_Add_ReturnValue16 = CallFunc_Array_Add_ReturnValue16;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue17 = CallFunc_GetFortInputDataForBlueprint_ReturnValue17;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue18 = CallFunc_GetFortInputDataForBlueprint_ReturnValue18;
	Parms.CallFunc_GetGadget2Label_ReturnValue = CallFunc_GetGadget2Label_ReturnValue;
	Parms.CallFunc_GetGadget2Label_ReturnValue1 = CallFunc_GetGadget2Label_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue17 = CallFunc_Array_Add_ReturnValue17;
	Parms.CallFunc_Array_Add_ReturnValue18 = CallFunc_Array_Add_ReturnValue18;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue19 = CallFunc_GetFortInputDataForBlueprint_ReturnValue19;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue20 = CallFunc_GetFortInputDataForBlueprint_ReturnValue20;
	Parms.CallFunc_GetGadget1Label_ReturnValue = CallFunc_GetGadget1Label_ReturnValue;
	Parms.CallFunc_GetGadget1Label_ReturnValue1 = CallFunc_GetGadget1Label_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue19 = CallFunc_Array_Add_ReturnValue19;
	Parms.CallFunc_Array_Add_ReturnValue20 = CallFunc_Array_Add_ReturnValue20;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue21 = CallFunc_GetFortInputDataForBlueprint_ReturnValue21;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue22 = CallFunc_GetFortInputDataForBlueprint_ReturnValue22;
	Parms.CallFunc_GetToggleInventoryLabel_ReturnValue = CallFunc_GetToggleInventoryLabel_ReturnValue;
	Parms.CallFunc_GetToggleInventoryLabel_ReturnValue1 = CallFunc_GetToggleInventoryLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue21 = CallFunc_Array_Add_ReturnValue21;
	Parms.CallFunc_Array_Add_ReturnValue22 = CallFunc_Array_Add_ReturnValue22;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue23 = CallFunc_GetFortInputDataForBlueprint_ReturnValue23;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue24 = CallFunc_GetFortInputDataForBlueprint_ReturnValue24;
	Parms.CallFunc_GetEmoteOrQuickChatLabel_ReturnValue = CallFunc_GetEmoteOrQuickChatLabel_ReturnValue;
	Parms.CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1 = CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue23 = CallFunc_Array_Add_ReturnValue23;
	Parms.CallFunc_Array_Add_ReturnValue24 = CallFunc_Array_Add_ReturnValue24;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue25 = CallFunc_GetFortInputDataForBlueprint_ReturnValue25;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue26 = CallFunc_GetFortInputDataForBlueprint_ReturnValue26;
	Parms.CallFunc_GetAutoSprintLabel_ReturnValue = CallFunc_GetAutoSprintLabel_ReturnValue;
	Parms.CallFunc_GetAutoSprintLabel_ReturnValue1 = CallFunc_GetAutoSprintLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue25 = CallFunc_Array_Add_ReturnValue25;
	Parms.CallFunc_Array_Add_ReturnValue26 = CallFunc_Array_Add_ReturnValue26;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue27 = CallFunc_GetFortInputDataForBlueprint_ReturnValue27;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue28 = CallFunc_GetFortInputDataForBlueprint_ReturnValue28;
	Parms.CallFunc_GetSprintLabel_ReturnValue = CallFunc_GetSprintLabel_ReturnValue;
	Parms.CallFunc_GetSprintLabel_ReturnValue1 = CallFunc_GetSprintLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue27 = CallFunc_Array_Add_ReturnValue27;
	Parms.CallFunc_Array_Add_ReturnValue28 = CallFunc_Array_Add_ReturnValue28;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue29 = CallFunc_GetFortInputDataForBlueprint_ReturnValue29;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue30 = CallFunc_GetFortInputDataForBlueprint_ReturnValue30;
	Parms.CallFunc_GetMoveLabel_ReturnValue = CallFunc_GetMoveLabel_ReturnValue;
	Parms.CallFunc_GetMoveLabel_ReturnValue1 = CallFunc_GetMoveLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue29 = CallFunc_Array_Add_ReturnValue29;
	Parms.CallFunc_Array_Add_ReturnValue30 = CallFunc_Array_Add_ReturnValue30;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue31 = CallFunc_GetFortInputDataForBlueprint_ReturnValue31;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue32 = CallFunc_GetFortInputDataForBlueprint_ReturnValue32;
	Parms.CallFunc_GetPreviousWeaponTapLabel_ReturnValue = CallFunc_GetPreviousWeaponTapLabel_ReturnValue;
	Parms.CallFunc_GetAimDownSightsHeavyMeleeLabel_ReturnValue = CallFunc_GetAimDownSightsHeavyMeleeLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue31 = CallFunc_Array_Add_ReturnValue31;
	Parms.CallFunc_Array_Add_ReturnValue32 = CallFunc_Array_Add_ReturnValue32;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Array_Add_ReturnValue33 = CallFunc_Array_Add_ReturnValue33;
	Parms.CallFunc_Array_Add_ReturnValue34 = CallFunc_Array_Add_ReturnValue34;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.CallFunc_Array_Add_ReturnValue35 = CallFunc_Array_Add_ReturnValue35;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetTextFieldVisibilityForExtraLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  TextWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::SetTextFieldVisibilityForExtraLine(class UTextBlock* TextWidget, bool Temp_bool_Variable, class FText CallFunc_GetText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "SetTextFieldVisibilityForExtraLine");

	Params::UGamepadMappingInfo_v3_C_SetTextFieldVisibilityForExtraLine_Params Parms{};

	Parms.TextWidget = TextWidget;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetDesiredSlateVisibilityForAbilityChordFromTextDisplay
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*                  TextWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        DesiredSlateVisibility                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::GetDesiredSlateVisibilityForAbilityChordFromTextDisplay(class UTextBlock* TextWidget, enum class ESlateVisibility* DesiredSlateVisibility, bool Temp_bool_Variable, class FText CallFunc_GetText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "GetDesiredSlateVisibilityForAbilityChordFromTextDisplay");

	Params::UGamepadMappingInfo_v3_C_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_Params Parms{};

	Parms.TextWidget = TextWidget;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (DesiredSlateVisibility != nullptr)
		*DesiredSlateVisibility = Parms.DesiredSlateVisibility;

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTWCombatProBuild
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                ButtonTextLabels                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable1                                              (ConstParm)
// class FText                        Temp_text_Variable2                                              (ConstParm)
// class FText                        Temp_text_Variable3                                              (ConstParm)
// class FText                        Temp_text_Variable4                                              (ConstParm)
// class FText                        Temp_text_Variable5                                              (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetBuildingEditResetLabel_ReturnValue                   (None)
// class FText                        CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue         (None)
// int32                              CallFunc_Array_Add_ReturnValue6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLookLabel_ReturnValue                                (None)
// class FText                        CallFunc_GetJumpLabel_ReturnValue                                (None)
// int32                              CallFunc_Array_Add_ReturnValue8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue               (None)
// class FText                        CallFunc_GetSwitchQuickbarLabel_ReturnValue                      (None)
// int32                              CallFunc_Array_Add_ReturnValue10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue7               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTrapInventoryHoldLabel_ReturnValue                   (None)
// class FText                        CallFunc_GetInteractTapHoldLabel_ReturnValue                     (None)
// int32                              CallFunc_Array_Add_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue8               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue9               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPickTrapTapHoldLabel_ReturnValue                     (None)
// class FText                        CallFunc_GetHarvestWeaponLabel_ReturnValue                       (None)
// int32                              CallFunc_Array_Add_ReturnValue14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue10              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue11              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetNextBuildingPieceLabel_ReturnValue                   (None)
// class FText                        CallFunc_GetPlaceBuildingOrTrapConfirmLabel_ReturnValue          (None)
// int32                              CallFunc_Array_Add_ReturnValue16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue12              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue13              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGameMenuLabel_ReturnValue                            (None)
// class FText                        CallFunc_GetToggleFullScreenMapLabel_ReturnValue                 (None)
// int32                              CallFunc_Array_Add_ReturnValue18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue14              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue15              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetToggleInventoryLabel_ReturnValue                     (None)
// class FText                        CallFunc_GetToggleInventoryLabel_ReturnValue1                    (None)
// int32                              CallFunc_Array_Add_ReturnValue20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue16              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue17              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmoteOrQuickChatLabel_ReturnValue                    (None)
// class FText                        CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1                   (None)
// int32                              CallFunc_Array_Add_ReturnValue22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue18              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue19              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAutoSprintLabel_ReturnValue                          (None)
// class FText                        CallFunc_GetAutoSprintLabel_ReturnValue1                         (None)
// int32                              CallFunc_Array_Add_ReturnValue24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue25                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue20              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue21              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSprintLabel_ReturnValue                              (None)
// class FText                        CallFunc_GetSprintLabel_ReturnValue1                             (None)
// int32                              CallFunc_Array_Add_ReturnValue26                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue27                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue22              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue23              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMoveLabel_ReturnValue                                (None)
// class FText                        CallFunc_GetMoveLabel_ReturnValue1                               (None)
// int32                              CallFunc_Array_Add_ReturnValue28                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue29                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue24              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue25              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPreviousBuildingPieceLabel_ReturnValue               (None)
// class FText                        CallFunc_GetChangeMaterialLabel_ReturnValue                      (None)
// int32                              CallFunc_Array_Add_ReturnValue30                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue31                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable6                                              (ConstParm)
// class FText                        Temp_text_Variable7                                              (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue32                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue33                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable8                                              (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue34                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// int32                              CallFunc_Array_Add_ReturnValue35                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::InitializeListOfButtonTextForSTWCombatProBuild(TArray<class FText>& ButtonTextLabels, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue4, int32 CallFunc_Array_Add_ReturnValue5, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue1, class FText CallFunc_GetBuildingEditResetLabel_ReturnValue, class FText CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue6, int32 CallFunc_Array_Add_ReturnValue7, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue2, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue3, class FText CallFunc_GetLookLabel_ReturnValue, class FText CallFunc_GetJumpLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue8, int32 CallFunc_Array_Add_ReturnValue9, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue4, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue5, class FText CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue, class FText CallFunc_GetSwitchQuickbarLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue10, int32 CallFunc_Array_Add_ReturnValue11, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue6, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue7, class FText CallFunc_GetTrapInventoryHoldLabel_ReturnValue, class FText CallFunc_GetInteractTapHoldLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue12, int32 CallFunc_Array_Add_ReturnValue13, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue8, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue9, class FText CallFunc_GetPickTrapTapHoldLabel_ReturnValue, class FText CallFunc_GetHarvestWeaponLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue14, int32 CallFunc_Array_Add_ReturnValue15, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue10, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue11, class FText CallFunc_GetNextBuildingPieceLabel_ReturnValue, class FText CallFunc_GetPlaceBuildingOrTrapConfirmLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue16, int32 CallFunc_Array_Add_ReturnValue17, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue12, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue13, class FText CallFunc_GetGameMenuLabel_ReturnValue, class FText CallFunc_GetToggleFullScreenMapLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue18, int32 CallFunc_Array_Add_ReturnValue19, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue14, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue15, class FText CallFunc_GetToggleInventoryLabel_ReturnValue, class FText CallFunc_GetToggleInventoryLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue20, int32 CallFunc_Array_Add_ReturnValue21, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue16, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue17, class FText CallFunc_GetEmoteOrQuickChatLabel_ReturnValue, class FText CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue22, int32 CallFunc_Array_Add_ReturnValue23, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue18, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue19, class FText CallFunc_GetAutoSprintLabel_ReturnValue, class FText CallFunc_GetAutoSprintLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue24, int32 CallFunc_Array_Add_ReturnValue25, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue20, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue21, class FText CallFunc_GetSprintLabel_ReturnValue, class FText CallFunc_GetSprintLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue26, int32 CallFunc_Array_Add_ReturnValue27, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue22, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue23, class FText CallFunc_GetMoveLabel_ReturnValue, class FText CallFunc_GetMoveLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue28, int32 CallFunc_Array_Add_ReturnValue29, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue24, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue25, class FText CallFunc_GetPreviousBuildingPieceLabel_ReturnValue, class FText CallFunc_GetChangeMaterialLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue30, int32 CallFunc_Array_Add_ReturnValue31, class FText Temp_text_Variable6, class FText Temp_text_Variable7, int32 CallFunc_Array_Add_ReturnValue32, int32 CallFunc_Array_Add_ReturnValue33, class FText Temp_text_Variable8, int32 CallFunc_Array_Add_ReturnValue34, class FText CallFunc_MakeLiteralText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue35)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "InitializeListOfButtonTextForSTWCombatProBuild");

	Params::UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTWCombatProBuild_Params Parms{};

	Parms.ButtonTextLabels = ButtonTextLabels;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue3 = CallFunc_Array_Add_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue4 = CallFunc_Array_Add_ReturnValue4;
	Parms.CallFunc_Array_Add_ReturnValue5 = CallFunc_Array_Add_ReturnValue5;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue = CallFunc_GetFortInputDataForBlueprint_ReturnValue;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue1 = CallFunc_GetFortInputDataForBlueprint_ReturnValue1;
	Parms.CallFunc_GetBuildingEditResetLabel_ReturnValue = CallFunc_GetBuildingEditResetLabel_ReturnValue;
	Parms.CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue = CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue6 = CallFunc_Array_Add_ReturnValue6;
	Parms.CallFunc_Array_Add_ReturnValue7 = CallFunc_Array_Add_ReturnValue7;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue2 = CallFunc_GetFortInputDataForBlueprint_ReturnValue2;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue3 = CallFunc_GetFortInputDataForBlueprint_ReturnValue3;
	Parms.CallFunc_GetLookLabel_ReturnValue = CallFunc_GetLookLabel_ReturnValue;
	Parms.CallFunc_GetJumpLabel_ReturnValue = CallFunc_GetJumpLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue8 = CallFunc_Array_Add_ReturnValue8;
	Parms.CallFunc_Array_Add_ReturnValue9 = CallFunc_Array_Add_ReturnValue9;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue4 = CallFunc_GetFortInputDataForBlueprint_ReturnValue4;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue5 = CallFunc_GetFortInputDataForBlueprint_ReturnValue5;
	Parms.CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue = CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue;
	Parms.CallFunc_GetSwitchQuickbarLabel_ReturnValue = CallFunc_GetSwitchQuickbarLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue10 = CallFunc_Array_Add_ReturnValue10;
	Parms.CallFunc_Array_Add_ReturnValue11 = CallFunc_Array_Add_ReturnValue11;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue6 = CallFunc_GetFortInputDataForBlueprint_ReturnValue6;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue7 = CallFunc_GetFortInputDataForBlueprint_ReturnValue7;
	Parms.CallFunc_GetTrapInventoryHoldLabel_ReturnValue = CallFunc_GetTrapInventoryHoldLabel_ReturnValue;
	Parms.CallFunc_GetInteractTapHoldLabel_ReturnValue = CallFunc_GetInteractTapHoldLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue12 = CallFunc_Array_Add_ReturnValue12;
	Parms.CallFunc_Array_Add_ReturnValue13 = CallFunc_Array_Add_ReturnValue13;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue8 = CallFunc_GetFortInputDataForBlueprint_ReturnValue8;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue9 = CallFunc_GetFortInputDataForBlueprint_ReturnValue9;
	Parms.CallFunc_GetPickTrapTapHoldLabel_ReturnValue = CallFunc_GetPickTrapTapHoldLabel_ReturnValue;
	Parms.CallFunc_GetHarvestWeaponLabel_ReturnValue = CallFunc_GetHarvestWeaponLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue14 = CallFunc_Array_Add_ReturnValue14;
	Parms.CallFunc_Array_Add_ReturnValue15 = CallFunc_Array_Add_ReturnValue15;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue10 = CallFunc_GetFortInputDataForBlueprint_ReturnValue10;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue11 = CallFunc_GetFortInputDataForBlueprint_ReturnValue11;
	Parms.CallFunc_GetNextBuildingPieceLabel_ReturnValue = CallFunc_GetNextBuildingPieceLabel_ReturnValue;
	Parms.CallFunc_GetPlaceBuildingOrTrapConfirmLabel_ReturnValue = CallFunc_GetPlaceBuildingOrTrapConfirmLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue16 = CallFunc_Array_Add_ReturnValue16;
	Parms.CallFunc_Array_Add_ReturnValue17 = CallFunc_Array_Add_ReturnValue17;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue12 = CallFunc_GetFortInputDataForBlueprint_ReturnValue12;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue13 = CallFunc_GetFortInputDataForBlueprint_ReturnValue13;
	Parms.CallFunc_GetGameMenuLabel_ReturnValue = CallFunc_GetGameMenuLabel_ReturnValue;
	Parms.CallFunc_GetToggleFullScreenMapLabel_ReturnValue = CallFunc_GetToggleFullScreenMapLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue18 = CallFunc_Array_Add_ReturnValue18;
	Parms.CallFunc_Array_Add_ReturnValue19 = CallFunc_Array_Add_ReturnValue19;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue14 = CallFunc_GetFortInputDataForBlueprint_ReturnValue14;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue15 = CallFunc_GetFortInputDataForBlueprint_ReturnValue15;
	Parms.CallFunc_GetToggleInventoryLabel_ReturnValue = CallFunc_GetToggleInventoryLabel_ReturnValue;
	Parms.CallFunc_GetToggleInventoryLabel_ReturnValue1 = CallFunc_GetToggleInventoryLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue20 = CallFunc_Array_Add_ReturnValue20;
	Parms.CallFunc_Array_Add_ReturnValue21 = CallFunc_Array_Add_ReturnValue21;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue16 = CallFunc_GetFortInputDataForBlueprint_ReturnValue16;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue17 = CallFunc_GetFortInputDataForBlueprint_ReturnValue17;
	Parms.CallFunc_GetEmoteOrQuickChatLabel_ReturnValue = CallFunc_GetEmoteOrQuickChatLabel_ReturnValue;
	Parms.CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1 = CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue22 = CallFunc_Array_Add_ReturnValue22;
	Parms.CallFunc_Array_Add_ReturnValue23 = CallFunc_Array_Add_ReturnValue23;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue18 = CallFunc_GetFortInputDataForBlueprint_ReturnValue18;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue19 = CallFunc_GetFortInputDataForBlueprint_ReturnValue19;
	Parms.CallFunc_GetAutoSprintLabel_ReturnValue = CallFunc_GetAutoSprintLabel_ReturnValue;
	Parms.CallFunc_GetAutoSprintLabel_ReturnValue1 = CallFunc_GetAutoSprintLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue24 = CallFunc_Array_Add_ReturnValue24;
	Parms.CallFunc_Array_Add_ReturnValue25 = CallFunc_Array_Add_ReturnValue25;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue20 = CallFunc_GetFortInputDataForBlueprint_ReturnValue20;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue21 = CallFunc_GetFortInputDataForBlueprint_ReturnValue21;
	Parms.CallFunc_GetSprintLabel_ReturnValue = CallFunc_GetSprintLabel_ReturnValue;
	Parms.CallFunc_GetSprintLabel_ReturnValue1 = CallFunc_GetSprintLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue26 = CallFunc_Array_Add_ReturnValue26;
	Parms.CallFunc_Array_Add_ReturnValue27 = CallFunc_Array_Add_ReturnValue27;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue22 = CallFunc_GetFortInputDataForBlueprint_ReturnValue22;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue23 = CallFunc_GetFortInputDataForBlueprint_ReturnValue23;
	Parms.CallFunc_GetMoveLabel_ReturnValue = CallFunc_GetMoveLabel_ReturnValue;
	Parms.CallFunc_GetMoveLabel_ReturnValue1 = CallFunc_GetMoveLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue28 = CallFunc_Array_Add_ReturnValue28;
	Parms.CallFunc_Array_Add_ReturnValue29 = CallFunc_Array_Add_ReturnValue29;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue24 = CallFunc_GetFortInputDataForBlueprint_ReturnValue24;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue25 = CallFunc_GetFortInputDataForBlueprint_ReturnValue25;
	Parms.CallFunc_GetPreviousBuildingPieceLabel_ReturnValue = CallFunc_GetPreviousBuildingPieceLabel_ReturnValue;
	Parms.CallFunc_GetChangeMaterialLabel_ReturnValue = CallFunc_GetChangeMaterialLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue30 = CallFunc_Array_Add_ReturnValue30;
	Parms.CallFunc_Array_Add_ReturnValue31 = CallFunc_Array_Add_ReturnValue31;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.CallFunc_Array_Add_ReturnValue32 = CallFunc_Array_Add_ReturnValue32;
	Parms.CallFunc_Array_Add_ReturnValue33 = CallFunc_Array_Add_ReturnValue33;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.CallFunc_Array_Add_ReturnValue34 = CallFunc_Array_Add_ReturnValue34;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue35 = CallFunc_Array_Add_ReturnValue35;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonLabelTextWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCommonTextBlock*>    K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UCommonTextBlock*>    K2Node_MakeArray_Array1                                          (ConstParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCommonTextBlock*>    K2Node_MakeArray_Array2                                          (ConstParm, ZeroConstructor, ReferenceParm)

void UGamepadMappingInfo_v3_C::InitializeListOfButtonLabelTextWidgets(int32 CallFunc_Array_Add_ReturnValue, TArray<class UCommonTextBlock*>& K2Node_MakeArray_Array, TArray<class UCommonTextBlock*>& K2Node_MakeArray_Array1, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue4, int32 CallFunc_Array_Add_ReturnValue5, int32 CallFunc_Array_Add_ReturnValue6, int32 CallFunc_Array_Add_ReturnValue7, int32 CallFunc_Array_Add_ReturnValue8, int32 CallFunc_Array_Add_ReturnValue9, int32 CallFunc_Array_Add_ReturnValue10, int32 CallFunc_Array_Add_ReturnValue11, int32 CallFunc_Array_Add_ReturnValue12, int32 CallFunc_Array_Add_ReturnValue13, int32 CallFunc_Array_Add_ReturnValue14, int32 CallFunc_Array_Add_ReturnValue15, int32 CallFunc_Array_Add_ReturnValue16, int32 CallFunc_Array_Add_ReturnValue17, TArray<class UCommonTextBlock*>& K2Node_MakeArray_Array2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "InitializeListOfButtonLabelTextWidgets");

	Params::UGamepadMappingInfo_v3_C_InitializeListOfButtonLabelTextWidgets_Params Parms{};

	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue3 = CallFunc_Array_Add_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue4 = CallFunc_Array_Add_ReturnValue4;
	Parms.CallFunc_Array_Add_ReturnValue5 = CallFunc_Array_Add_ReturnValue5;
	Parms.CallFunc_Array_Add_ReturnValue6 = CallFunc_Array_Add_ReturnValue6;
	Parms.CallFunc_Array_Add_ReturnValue7 = CallFunc_Array_Add_ReturnValue7;
	Parms.CallFunc_Array_Add_ReturnValue8 = CallFunc_Array_Add_ReturnValue8;
	Parms.CallFunc_Array_Add_ReturnValue9 = CallFunc_Array_Add_ReturnValue9;
	Parms.CallFunc_Array_Add_ReturnValue10 = CallFunc_Array_Add_ReturnValue10;
	Parms.CallFunc_Array_Add_ReturnValue11 = CallFunc_Array_Add_ReturnValue11;
	Parms.CallFunc_Array_Add_ReturnValue12 = CallFunc_Array_Add_ReturnValue12;
	Parms.CallFunc_Array_Add_ReturnValue13 = CallFunc_Array_Add_ReturnValue13;
	Parms.CallFunc_Array_Add_ReturnValue14 = CallFunc_Array_Add_ReturnValue14;
	Parms.CallFunc_Array_Add_ReturnValue15 = CallFunc_Array_Add_ReturnValue15;
	Parms.CallFunc_Array_Add_ReturnValue16 = CallFunc_Array_Add_ReturnValue16;
	Parms.CallFunc_Array_Add_ReturnValue17 = CallFunc_Array_Add_ReturnValue17;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed Hide or Show Unused Text Lines
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::Handle_Config_Changed_Hide_or_Show_Unused_Text_Lines(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility, enum class ESlateVisibility CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility2, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "Handle Config Changed Hide or Show Unused Text Lines");

	Params::UGamepadMappingInfo_v3_C_Handle_Config_Changed_Hide_or_Show_Unused_Text_Lines_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility = CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility;
	Parms.CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility1 = CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility2 = CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed STW Combat Mode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Config                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable1                                              (None)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        Temp_text_Variable2                                              (None)
// class FText                        Temp_text_Variable3                                              (None)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select1_Default                                           (None)
// class FText                        Temp_text_Variable4                                              (None)
// class FText                        Temp_text_Variable5                                              (None)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select2_Default                                           (None)
// class FText                        Temp_text_Variable6                                              (None)
// class FText                        Temp_text_Variable7                                              (None)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select3_Default                                           (None)
// class FText                        Temp_text_Variable8                                              (None)
// class FText                        Temp_text_Variable9                                              (None)
// int32                              Temp_int_Variable5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select4_Default                                           (None)
// class FText                        Temp_text_Variable10                                             (None)
// class FText                        Temp_text_Variable11                                             (None)
// int32                              Temp_int_Variable6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select5_Default                                           (None)
// class FText                        Temp_text_Variable12                                             (None)
// class FText                        Temp_text_Variable13                                             (None)
// int32                              Temp_int_Variable7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select6_Default                                           (None)
// class FText                        Temp_text_Variable14                                             (None)
// class FText                        Temp_text_Variable15                                             (None)
// int32                              Temp_int_Variable8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select7_Default                                           (None)
// class FText                        Temp_text_Variable16                                             (None)
// class FText                        Temp_text_Variable17                                             (None)
// int32                              Temp_int_Variable9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select8_Default                                           (None)
// class FText                        Temp_text_Variable18                                             (None)
// class FText                        Temp_text_Variable19                                             (None)
// int32                              Temp_int_Variable10                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select9_Default                                           (None)
// class FText                        Temp_text_Variable20                                             (None)
// class FText                        Temp_text_Variable21                                             (None)
// int32                              Temp_int_Variable11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select10_Default                                          (None)
// class FText                        Temp_text_Variable22                                             (None)
// class FText                        Temp_text_Variable23                                             (None)
// int32                              Temp_int_Variable12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select11_Default                                          (None)
// class FText                        Temp_text_Variable24                                             (None)
// class FText                        Temp_text_Variable25                                             (None)
// int32                              Temp_int_Variable13                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select12_Default                                          (None)
// class FText                        Temp_text_Variable26                                             (None)
// class FText                        Temp_text_Variable27                                             (None)
// int32                              Temp_int_Variable14                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select13_Default                                          (None)
// class FText                        Temp_text_Variable28                                             (None)
// class FText                        Temp_text_Variable29                                             (None)
// int32                              Temp_int_Variable15                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select14_Default                                          (None)
// class FText                        Temp_text_Variable30                                             (None)
// class FText                        Temp_text_Variable31                                             (None)
// int32                              Temp_int_Variable16                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select15_Default                                          (None)
// class FText                        Temp_text_Variable32                                             (None)
// class FText                        Temp_text_Variable33                                             (None)
// int32                              Temp_int_Variable17                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select16_Default                                          (None)
// class FText                        Temp_text_Variable34                                             (None)
// class FText                        Temp_text_Variable35                                             (None)
// int32                              Temp_int_Variable18                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select17_Default                                          (None)
// class FText                        Temp_text_Variable36                                             (None)
// class FText                        Temp_text_Variable37                                             (None)
// int32                              Temp_int_Variable19                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select18_Default                                          (None)
// class FText                        Temp_text_Variable38                                             (None)
// class FText                        Temp_text_Variable39                                             (None)
// int32                              Temp_int_Variable20                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select19_Default                                          (None)
// class FText                        Temp_text_Variable40                                             (None)
// class FText                        Temp_text_Variable41                                             (None)
// int32                              Temp_int_Variable21                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select20_Default                                          (None)
// class FText                        Temp_text_Variable42                                             (None)
// class FText                        Temp_text_Variable43                                             (None)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select21_Default                                          (None)
// class FText                        CallFunc_GetAbility2Label_ReturnValue                            (None)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAbility1Label_ReturnValue                            (None)
// class FText                        CallFunc_GetAbility3Label_ReturnValue                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1                            (None)
// class FText                        Temp_text_Variable44                                             (None)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable45                                             (None)
// class FText                        CallFunc_GetDeployHoverboardLabel_ReturnValue                    (None)
// int32                              Temp_int_Variable22                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select22_Default                                          (None)

void UGamepadMappingInfo_v3_C::Handle_Config_Changed_STW_Combat_Mode(int32 Config, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, class FText Temp_text_Variable, class FText Temp_text_Variable1, int32 Temp_int_Variable1, class FText K2Node_Select_Default, class FText Temp_text_Variable2, class FText Temp_text_Variable3, int32 Temp_int_Variable2, class FText K2Node_Select1_Default, class FText Temp_text_Variable4, class FText Temp_text_Variable5, int32 Temp_int_Variable3, class FText K2Node_Select2_Default, class FText Temp_text_Variable6, class FText Temp_text_Variable7, int32 Temp_int_Variable4, class FText K2Node_Select3_Default, class FText Temp_text_Variable8, class FText Temp_text_Variable9, int32 Temp_int_Variable5, class FText K2Node_Select4_Default, class FText Temp_text_Variable10, class FText Temp_text_Variable11, int32 Temp_int_Variable6, class FText K2Node_Select5_Default, class FText Temp_text_Variable12, class FText Temp_text_Variable13, int32 Temp_int_Variable7, class FText K2Node_Select6_Default, class FText Temp_text_Variable14, class FText Temp_text_Variable15, int32 Temp_int_Variable8, class FText K2Node_Select7_Default, class FText Temp_text_Variable16, class FText Temp_text_Variable17, int32 Temp_int_Variable9, class FText K2Node_Select8_Default, class FText Temp_text_Variable18, class FText Temp_text_Variable19, int32 Temp_int_Variable10, class FText K2Node_Select9_Default, class FText Temp_text_Variable20, class FText Temp_text_Variable21, int32 Temp_int_Variable11, class FText K2Node_Select10_Default, class FText Temp_text_Variable22, class FText Temp_text_Variable23, int32 Temp_int_Variable12, class FText K2Node_Select11_Default, class FText Temp_text_Variable24, class FText Temp_text_Variable25, int32 Temp_int_Variable13, class FText K2Node_Select12_Default, class FText Temp_text_Variable26, class FText Temp_text_Variable27, int32 Temp_int_Variable14, class FText K2Node_Select13_Default, class FText Temp_text_Variable28, class FText Temp_text_Variable29, int32 Temp_int_Variable15, class FText K2Node_Select14_Default, class FText Temp_text_Variable30, class FText Temp_text_Variable31, int32 Temp_int_Variable16, class FText K2Node_Select15_Default, class FText Temp_text_Variable32, class FText Temp_text_Variable33, int32 Temp_int_Variable17, class FText K2Node_Select16_Default, class FText Temp_text_Variable34, class FText Temp_text_Variable35, int32 Temp_int_Variable18, class FText K2Node_Select17_Default, class FText Temp_text_Variable36, class FText Temp_text_Variable37, int32 Temp_int_Variable19, class FText K2Node_Select18_Default, class FText Temp_text_Variable38, class FText Temp_text_Variable39, int32 Temp_int_Variable20, class FText K2Node_Select19_Default, class FText Temp_text_Variable40, class FText Temp_text_Variable41, int32 Temp_int_Variable21, class FText K2Node_Select20_Default, class FText Temp_text_Variable42, class FText Temp_text_Variable43, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue, class FText K2Node_Select21_Default, class FText CallFunc_GetAbility2Label_ReturnValue, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue1, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue2, class FText CallFunc_GetAbility1Label_ReturnValue, class FText CallFunc_GetAbility3Label_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText Temp_text_Variable44, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue3, class FText Temp_text_Variable45, class FText CallFunc_GetDeployHoverboardLabel_ReturnValue, int32 Temp_int_Variable22, class FText K2Node_Select22_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "Handle Config Changed STW Combat Mode");

	Params::UGamepadMappingInfo_v3_C_Handle_Config_Changed_STW_Combat_Mode_Params Parms{};

	Parms.Config = Config;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.Temp_int_Variable5 = Temp_int_Variable5;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.Temp_text_Variable10 = Temp_text_Variable10;
	Parms.Temp_text_Variable11 = Temp_text_Variable11;
	Parms.Temp_int_Variable6 = Temp_int_Variable6;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_text_Variable13 = Temp_text_Variable13;
	Parms.Temp_int_Variable7 = Temp_int_Variable7;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.Temp_text_Variable14 = Temp_text_Variable14;
	Parms.Temp_text_Variable15 = Temp_text_Variable15;
	Parms.Temp_int_Variable8 = Temp_int_Variable8;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.Temp_text_Variable16 = Temp_text_Variable16;
	Parms.Temp_text_Variable17 = Temp_text_Variable17;
	Parms.Temp_int_Variable9 = Temp_int_Variable9;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;
	Parms.Temp_text_Variable18 = Temp_text_Variable18;
	Parms.Temp_text_Variable19 = Temp_text_Variable19;
	Parms.Temp_int_Variable10 = Temp_int_Variable10;
	Parms.K2Node_Select9_Default = K2Node_Select9_Default;
	Parms.Temp_text_Variable20 = Temp_text_Variable20;
	Parms.Temp_text_Variable21 = Temp_text_Variable21;
	Parms.Temp_int_Variable11 = Temp_int_Variable11;
	Parms.K2Node_Select10_Default = K2Node_Select10_Default;
	Parms.Temp_text_Variable22 = Temp_text_Variable22;
	Parms.Temp_text_Variable23 = Temp_text_Variable23;
	Parms.Temp_int_Variable12 = Temp_int_Variable12;
	Parms.K2Node_Select11_Default = K2Node_Select11_Default;
	Parms.Temp_text_Variable24 = Temp_text_Variable24;
	Parms.Temp_text_Variable25 = Temp_text_Variable25;
	Parms.Temp_int_Variable13 = Temp_int_Variable13;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.Temp_text_Variable26 = Temp_text_Variable26;
	Parms.Temp_text_Variable27 = Temp_text_Variable27;
	Parms.Temp_int_Variable14 = Temp_int_Variable14;
	Parms.K2Node_Select13_Default = K2Node_Select13_Default;
	Parms.Temp_text_Variable28 = Temp_text_Variable28;
	Parms.Temp_text_Variable29 = Temp_text_Variable29;
	Parms.Temp_int_Variable15 = Temp_int_Variable15;
	Parms.K2Node_Select14_Default = K2Node_Select14_Default;
	Parms.Temp_text_Variable30 = Temp_text_Variable30;
	Parms.Temp_text_Variable31 = Temp_text_Variable31;
	Parms.Temp_int_Variable16 = Temp_int_Variable16;
	Parms.K2Node_Select15_Default = K2Node_Select15_Default;
	Parms.Temp_text_Variable32 = Temp_text_Variable32;
	Parms.Temp_text_Variable33 = Temp_text_Variable33;
	Parms.Temp_int_Variable17 = Temp_int_Variable17;
	Parms.K2Node_Select16_Default = K2Node_Select16_Default;
	Parms.Temp_text_Variable34 = Temp_text_Variable34;
	Parms.Temp_text_Variable35 = Temp_text_Variable35;
	Parms.Temp_int_Variable18 = Temp_int_Variable18;
	Parms.K2Node_Select17_Default = K2Node_Select17_Default;
	Parms.Temp_text_Variable36 = Temp_text_Variable36;
	Parms.Temp_text_Variable37 = Temp_text_Variable37;
	Parms.Temp_int_Variable19 = Temp_int_Variable19;
	Parms.K2Node_Select18_Default = K2Node_Select18_Default;
	Parms.Temp_text_Variable38 = Temp_text_Variable38;
	Parms.Temp_text_Variable39 = Temp_text_Variable39;
	Parms.Temp_int_Variable20 = Temp_int_Variable20;
	Parms.K2Node_Select19_Default = K2Node_Select19_Default;
	Parms.Temp_text_Variable40 = Temp_text_Variable40;
	Parms.Temp_text_Variable41 = Temp_text_Variable41;
	Parms.Temp_int_Variable21 = Temp_int_Variable21;
	Parms.K2Node_Select20_Default = K2Node_Select20_Default;
	Parms.Temp_text_Variable42 = Temp_text_Variable42;
	Parms.Temp_text_Variable43 = Temp_text_Variable43;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue = CallFunc_GetFortInputDataForBlueprint_ReturnValue;
	Parms.K2Node_Select21_Default = K2Node_Select21_Default;
	Parms.CallFunc_GetAbility2Label_ReturnValue = CallFunc_GetAbility2Label_ReturnValue;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue1 = CallFunc_GetFortInputDataForBlueprint_ReturnValue1;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue2 = CallFunc_GetFortInputDataForBlueprint_ReturnValue2;
	Parms.CallFunc_GetAbility1Label_ReturnValue = CallFunc_GetAbility1Label_ReturnValue;
	Parms.CallFunc_GetAbility3Label_ReturnValue = CallFunc_GetAbility3Label_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue1 = CallFunc_MakeLiteralText_ReturnValue1;
	Parms.Temp_text_Variable44 = Temp_text_Variable44;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue3 = CallFunc_GetFortInputDataForBlueprint_ReturnValue3;
	Parms.Temp_text_Variable45 = Temp_text_Variable45;
	Parms.CallFunc_GetDeployHoverboardLabel_ReturnValue = CallFunc_GetDeployHoverboardLabel_ReturnValue;
	Parms.Temp_int_Variable22 = Temp_int_Variable22;
	Parms.K2Node_Select22_Default = K2Node_Select22_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed STW Build Mode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Config                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable1                                              (None)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        Temp_text_Variable2                                              (None)
// class FText                        Temp_text_Variable3                                              (None)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select1_Default                                           (None)
// class FText                        Temp_text_Variable4                                              (None)
// class FText                        Temp_text_Variable5                                              (None)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select2_Default                                           (None)
// class FText                        Temp_text_Variable6                                              (None)
// class FText                        Temp_text_Variable7                                              (None)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select3_Default                                           (None)
// class FText                        Temp_text_Variable8                                              (None)
// class FText                        Temp_text_Variable9                                              (None)
// int32                              Temp_int_Variable5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select4_Default                                           (None)
// class FText                        Temp_text_Variable10                                             (None)
// class FText                        Temp_text_Variable11                                             (None)
// int32                              Temp_int_Variable6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select5_Default                                           (None)
// class FText                        Temp_text_Variable12                                             (None)
// class FText                        Temp_text_Variable13                                             (None)
// int32                              Temp_int_Variable7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select6_Default                                           (None)
// class FText                        Temp_text_Variable14                                             (None)
// class FText                        Temp_text_Variable15                                             (None)
// int32                              Temp_int_Variable8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select7_Default                                           (None)
// class FText                        Temp_text_Variable16                                             (None)
// class FText                        Temp_text_Variable17                                             (None)
// int32                              Temp_int_Variable9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select8_Default                                           (None)
// class FText                        Temp_text_Variable18                                             (None)
// class FText                        Temp_text_Variable19                                             (None)
// int32                              Temp_int_Variable10                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select9_Default                                           (None)
// class FText                        Temp_text_Variable20                                             (None)
// class FText                        Temp_text_Variable21                                             (None)
// int32                              Temp_int_Variable11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select10_Default                                          (None)
// class FText                        Temp_text_Variable22                                             (None)
// class FText                        Temp_text_Variable23                                             (None)
// int32                              Temp_int_Variable12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select11_Default                                          (None)
// class FText                        Temp_text_Variable24                                             (None)
// class FText                        Temp_text_Variable25                                             (None)
// int32                              Temp_int_Variable13                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select12_Default                                          (None)
// class FText                        Temp_text_Variable26                                             (None)
// class FText                        Temp_text_Variable27                                             (None)
// int32                              Temp_int_Variable14                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select13_Default                                          (None)
// class FText                        Temp_text_Variable28                                             (None)
// class FText                        Temp_text_Variable29                                             (None)
// int32                              Temp_int_Variable15                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select14_Default                                          (None)
// class FText                        Temp_text_Variable30                                             (None)
// class FText                        Temp_text_Variable31                                             (None)
// int32                              Temp_int_Variable16                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select15_Default                                          (None)
// class FText                        Temp_text_Variable32                                             (None)
// class FText                        Temp_text_Variable33                                             (None)
// int32                              Temp_int_Variable17                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select16_Default                                          (None)
// class FText                        Temp_text_Variable34                                             (None)
// class FText                        Temp_text_Variable35                                             (None)
// int32                              Temp_int_Variable18                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select17_Default                                          (None)
// class FText                        Temp_text_Variable36                                             (None)
// class FText                        Temp_text_Variable37                                             (None)
// int32                              Temp_int_Variable19                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select18_Default                                          (None)
// class FText                        Temp_text_Variable38                                             (None)
// class FText                        Temp_text_Variable39                                             (None)
// int32                              Temp_int_Variable20                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select19_Default                                          (None)
// class FText                        Temp_text_Variable40                                             (None)
// class FText                        Temp_text_Variable41                                             (None)
// int32                              Temp_int_Variable21                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select20_Default                                          (None)
// class FText                        Temp_text_Variable42                                             (None)
// class FText                        Temp_text_Variable43                                             (None)
// int32                              Temp_int_Variable22                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select21_Default                                          (None)
// class FText                        Temp_text_Variable44                                             (None)
// class FText                        Temp_text_Variable45                                             (None)
// int32                              Temp_int_Variable23                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select22_Default                                          (None)
// class FText                        Temp_text_Variable46                                             (None)
// class FText                        Temp_text_Variable47                                             (None)
// class FText                        Temp_text_Variable48                                             (None)
// class FText                        K2Node_Select23_Default                                          (None)
// class FText                        Temp_text_Variable49                                             (None)
// int32                              Temp_int_Variable24                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select24_Default                                          (None)

void UGamepadMappingInfo_v3_C::Handle_Config_Changed_STW_Build_Mode(int32 Config, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, class FText Temp_text_Variable, class FText Temp_text_Variable1, int32 Temp_int_Variable1, class FText K2Node_Select_Default, class FText Temp_text_Variable2, class FText Temp_text_Variable3, int32 Temp_int_Variable2, class FText K2Node_Select1_Default, class FText Temp_text_Variable4, class FText Temp_text_Variable5, int32 Temp_int_Variable3, class FText K2Node_Select2_Default, class FText Temp_text_Variable6, class FText Temp_text_Variable7, int32 Temp_int_Variable4, class FText K2Node_Select3_Default, class FText Temp_text_Variable8, class FText Temp_text_Variable9, int32 Temp_int_Variable5, class FText K2Node_Select4_Default, class FText Temp_text_Variable10, class FText Temp_text_Variable11, int32 Temp_int_Variable6, class FText K2Node_Select5_Default, class FText Temp_text_Variable12, class FText Temp_text_Variable13, int32 Temp_int_Variable7, class FText K2Node_Select6_Default, class FText Temp_text_Variable14, class FText Temp_text_Variable15, int32 Temp_int_Variable8, class FText K2Node_Select7_Default, class FText Temp_text_Variable16, class FText Temp_text_Variable17, int32 Temp_int_Variable9, class FText K2Node_Select8_Default, class FText Temp_text_Variable18, class FText Temp_text_Variable19, int32 Temp_int_Variable10, class FText K2Node_Select9_Default, class FText Temp_text_Variable20, class FText Temp_text_Variable21, int32 Temp_int_Variable11, class FText K2Node_Select10_Default, class FText Temp_text_Variable22, class FText Temp_text_Variable23, int32 Temp_int_Variable12, class FText K2Node_Select11_Default, class FText Temp_text_Variable24, class FText Temp_text_Variable25, int32 Temp_int_Variable13, class FText K2Node_Select12_Default, class FText Temp_text_Variable26, class FText Temp_text_Variable27, int32 Temp_int_Variable14, class FText K2Node_Select13_Default, class FText Temp_text_Variable28, class FText Temp_text_Variable29, int32 Temp_int_Variable15, class FText K2Node_Select14_Default, class FText Temp_text_Variable30, class FText Temp_text_Variable31, int32 Temp_int_Variable16, class FText K2Node_Select15_Default, class FText Temp_text_Variable32, class FText Temp_text_Variable33, int32 Temp_int_Variable17, class FText K2Node_Select16_Default, class FText Temp_text_Variable34, class FText Temp_text_Variable35, int32 Temp_int_Variable18, class FText K2Node_Select17_Default, class FText Temp_text_Variable36, class FText Temp_text_Variable37, int32 Temp_int_Variable19, class FText K2Node_Select18_Default, class FText Temp_text_Variable38, class FText Temp_text_Variable39, int32 Temp_int_Variable20, class FText K2Node_Select19_Default, class FText Temp_text_Variable40, class FText Temp_text_Variable41, int32 Temp_int_Variable21, class FText K2Node_Select20_Default, class FText Temp_text_Variable42, class FText Temp_text_Variable43, int32 Temp_int_Variable22, class FText K2Node_Select21_Default, class FText Temp_text_Variable44, class FText Temp_text_Variable45, int32 Temp_int_Variable23, class FText K2Node_Select22_Default, class FText Temp_text_Variable46, class FText Temp_text_Variable47, class FText Temp_text_Variable48, class FText K2Node_Select23_Default, class FText Temp_text_Variable49, int32 Temp_int_Variable24, class FText K2Node_Select24_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "Handle Config Changed STW Build Mode");

	Params::UGamepadMappingInfo_v3_C_Handle_Config_Changed_STW_Build_Mode_Params Parms{};

	Parms.Config = Config;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.Temp_int_Variable5 = Temp_int_Variable5;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.Temp_text_Variable10 = Temp_text_Variable10;
	Parms.Temp_text_Variable11 = Temp_text_Variable11;
	Parms.Temp_int_Variable6 = Temp_int_Variable6;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_text_Variable13 = Temp_text_Variable13;
	Parms.Temp_int_Variable7 = Temp_int_Variable7;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.Temp_text_Variable14 = Temp_text_Variable14;
	Parms.Temp_text_Variable15 = Temp_text_Variable15;
	Parms.Temp_int_Variable8 = Temp_int_Variable8;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.Temp_text_Variable16 = Temp_text_Variable16;
	Parms.Temp_text_Variable17 = Temp_text_Variable17;
	Parms.Temp_int_Variable9 = Temp_int_Variable9;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;
	Parms.Temp_text_Variable18 = Temp_text_Variable18;
	Parms.Temp_text_Variable19 = Temp_text_Variable19;
	Parms.Temp_int_Variable10 = Temp_int_Variable10;
	Parms.K2Node_Select9_Default = K2Node_Select9_Default;
	Parms.Temp_text_Variable20 = Temp_text_Variable20;
	Parms.Temp_text_Variable21 = Temp_text_Variable21;
	Parms.Temp_int_Variable11 = Temp_int_Variable11;
	Parms.K2Node_Select10_Default = K2Node_Select10_Default;
	Parms.Temp_text_Variable22 = Temp_text_Variable22;
	Parms.Temp_text_Variable23 = Temp_text_Variable23;
	Parms.Temp_int_Variable12 = Temp_int_Variable12;
	Parms.K2Node_Select11_Default = K2Node_Select11_Default;
	Parms.Temp_text_Variable24 = Temp_text_Variable24;
	Parms.Temp_text_Variable25 = Temp_text_Variable25;
	Parms.Temp_int_Variable13 = Temp_int_Variable13;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.Temp_text_Variable26 = Temp_text_Variable26;
	Parms.Temp_text_Variable27 = Temp_text_Variable27;
	Parms.Temp_int_Variable14 = Temp_int_Variable14;
	Parms.K2Node_Select13_Default = K2Node_Select13_Default;
	Parms.Temp_text_Variable28 = Temp_text_Variable28;
	Parms.Temp_text_Variable29 = Temp_text_Variable29;
	Parms.Temp_int_Variable15 = Temp_int_Variable15;
	Parms.K2Node_Select14_Default = K2Node_Select14_Default;
	Parms.Temp_text_Variable30 = Temp_text_Variable30;
	Parms.Temp_text_Variable31 = Temp_text_Variable31;
	Parms.Temp_int_Variable16 = Temp_int_Variable16;
	Parms.K2Node_Select15_Default = K2Node_Select15_Default;
	Parms.Temp_text_Variable32 = Temp_text_Variable32;
	Parms.Temp_text_Variable33 = Temp_text_Variable33;
	Parms.Temp_int_Variable17 = Temp_int_Variable17;
	Parms.K2Node_Select16_Default = K2Node_Select16_Default;
	Parms.Temp_text_Variable34 = Temp_text_Variable34;
	Parms.Temp_text_Variable35 = Temp_text_Variable35;
	Parms.Temp_int_Variable18 = Temp_int_Variable18;
	Parms.K2Node_Select17_Default = K2Node_Select17_Default;
	Parms.Temp_text_Variable36 = Temp_text_Variable36;
	Parms.Temp_text_Variable37 = Temp_text_Variable37;
	Parms.Temp_int_Variable19 = Temp_int_Variable19;
	Parms.K2Node_Select18_Default = K2Node_Select18_Default;
	Parms.Temp_text_Variable38 = Temp_text_Variable38;
	Parms.Temp_text_Variable39 = Temp_text_Variable39;
	Parms.Temp_int_Variable20 = Temp_int_Variable20;
	Parms.K2Node_Select19_Default = K2Node_Select19_Default;
	Parms.Temp_text_Variable40 = Temp_text_Variable40;
	Parms.Temp_text_Variable41 = Temp_text_Variable41;
	Parms.Temp_int_Variable21 = Temp_int_Variable21;
	Parms.K2Node_Select20_Default = K2Node_Select20_Default;
	Parms.Temp_text_Variable42 = Temp_text_Variable42;
	Parms.Temp_text_Variable43 = Temp_text_Variable43;
	Parms.Temp_int_Variable22 = Temp_int_Variable22;
	Parms.K2Node_Select21_Default = K2Node_Select21_Default;
	Parms.Temp_text_Variable44 = Temp_text_Variable44;
	Parms.Temp_text_Variable45 = Temp_text_Variable45;
	Parms.Temp_int_Variable23 = Temp_int_Variable23;
	Parms.K2Node_Select22_Default = K2Node_Select22_Default;
	Parms.Temp_text_Variable46 = Temp_text_Variable46;
	Parms.Temp_text_Variable47 = Temp_text_Variable47;
	Parms.Temp_text_Variable48 = Temp_text_Variable48;
	Parms.K2Node_Select23_Default = K2Node_Select23_Default;
	Parms.Temp_text_Variable49 = Temp_text_Variable49;
	Parms.Temp_int_Variable24 = Temp_int_Variable24;
	Parms.K2Node_Select24_Default = K2Node_Select24_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HandleConfigChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortInputActionGroup   Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Config                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadMappingInfo_v3_C::HandleConfigChanged(enum class EFortInputActionGroup Mode, int32 Config, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "HandleConfigChanged");

	Params::UGamepadMappingInfo_v3_C_HandleConfigChanged_Params Parms{};

	Parms.Mode = Mode;
	Parms.Config = Config;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HandleConfigChanged_Athena
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortInputActionGroup   Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Config                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable1                                              (None)
// class FText                        Temp_text_Variable2                                              (None)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable3                                              (None)
// class FText                        Temp_text_Variable4                                              (None)
// class FText                        Temp_text_Variable5                                              (None)
// class FText                        Temp_text_Variable6                                              (None)
// class FText                        Temp_text_Variable7                                              (None)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        Temp_text_Variable8                                              (None)
// class FText                        Temp_text_Variable9                                              (None)
// class FText                        Temp_text_Variable10                                             (None)
// class FText                        Temp_text_Variable11                                             (None)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select1_Default                                           (None)
// class FText                        Temp_text_Variable12                                             (None)
// class FText                        Temp_text_Variable13                                             (None)
// class FText                        Temp_text_Variable14                                             (None)
// class FText                        Temp_text_Variable15                                             (None)
// class FText                        Temp_text_Variable16                                             (None)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select2_Default                                           (None)
// class FText                        Temp_text_Variable17                                             (None)
// class FText                        Temp_text_Variable18                                             (None)
// class FText                        Temp_text_Variable19                                             (None)
// class FText                        Temp_text_Variable20                                             (None)
// class FText                        Temp_text_Variable21                                             (None)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select3_Default                                           (None)
// class FText                        Temp_text_Variable22                                             (None)
// class FText                        Temp_text_Variable23                                             (None)
// class FText                        Temp_text_Variable24                                             (None)
// class FText                        Temp_text_Variable25                                             (None)
// int32                              Temp_int_Variable5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select4_Default                                           (None)
// class FText                        Temp_text_Variable26                                             (None)
// class FText                        Temp_text_Variable27                                             (None)
// class FText                        Temp_text_Variable28                                             (None)
// class FText                        Temp_text_Variable29                                             (None)
// class FText                        Temp_text_Variable30                                             (None)
// int32                              Temp_int_Variable6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select5_Default                                           (None)
// class FText                        Temp_text_Variable31                                             (None)
// class FText                        Temp_text_Variable32                                             (None)
// class FText                        Temp_text_Variable33                                             (None)
// class FText                        Temp_text_Variable34                                             (None)
// class FText                        Temp_text_Variable35                                             (None)
// int32                              Temp_int_Variable7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select6_Default                                           (None)
// class FText                        Temp_text_Variable36                                             (None)
// class FText                        Temp_text_Variable37                                             (None)
// class FText                        Temp_text_Variable38                                             (None)
// class FText                        Temp_text_Variable39                                             (None)
// class FText                        Temp_text_Variable40                                             (None)
// int32                              Temp_int_Variable8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select7_Default                                           (None)
// class FText                        Temp_text_Variable41                                             (None)
// class FText                        Temp_text_Variable42                                             (None)
// class FText                        Temp_text_Variable43                                             (None)
// class FText                        Temp_text_Variable44                                             (None)
// class FText                        Temp_text_Variable45                                             (None)
// int32                              Temp_int_Variable9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select8_Default                                           (None)
// class FText                        Temp_text_Variable46                                             (None)
// class FText                        Temp_text_Variable47                                             (None)
// class FText                        Temp_text_Variable48                                             (None)
// class FText                        Temp_text_Variable49                                             (None)
// class FText                        Temp_text_Variable50                                             (None)
// int32                              Temp_int_Variable10                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select9_Default                                           (None)
// class FText                        Temp_text_Variable51                                             (None)
// class FText                        Temp_text_Variable52                                             (None)
// class FText                        Temp_text_Variable53                                             (None)
// class FText                        Temp_text_Variable54                                             (None)
// class FText                        Temp_text_Variable55                                             (None)
// int32                              Temp_int_Variable11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select10_Default                                          (None)
// class FText                        Temp_text_Variable56                                             (None)
// class FText                        Temp_text_Variable57                                             (None)
// class FText                        Temp_text_Variable58                                             (None)
// class FText                        Temp_text_Variable59                                             (None)
// class FText                        Temp_text_Variable60                                             (None)
// int32                              Temp_int_Variable12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select11_Default                                          (None)
// class FText                        Temp_text_Variable61                                             (None)
// class FText                        Temp_text_Variable62                                             (None)
// class FText                        Temp_text_Variable63                                             (None)
// class FText                        Temp_text_Variable64                                             (None)
// class FText                        Temp_text_Variable65                                             (None)
// int32                              Temp_int_Variable13                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select12_Default                                          (None)
// class FText                        Temp_text_Variable66                                             (None)
// class FText                        Temp_text_Variable67                                             (None)
// class FText                        Temp_text_Variable68                                             (None)
// class FText                        Temp_text_Variable69                                             (None)
// class FText                        Temp_text_Variable70                                             (None)
// int32                              Temp_int_Variable14                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select13_Default                                          (None)
// class FText                        Temp_text_Variable71                                             (None)
// class FText                        Temp_text_Variable72                                             (None)
// class FText                        Temp_text_Variable73                                             (None)
// class FText                        Temp_text_Variable74                                             (None)
// class FText                        Temp_text_Variable75                                             (None)
// int32                              Temp_int_Variable15                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select14_Default                                          (None)
// class FText                        Temp_text_Variable76                                             (None)
// class FText                        Temp_text_Variable77                                             (None)
// class FText                        Temp_text_Variable78                                             (None)
// class FText                        Temp_text_Variable79                                             (None)
// class FText                        Temp_text_Variable80                                             (None)
// int32                              Temp_int_Variable16                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select15_Default                                          (None)
// class FText                        Temp_text_Variable81                                             (None)
// class FText                        Temp_text_Variable82                                             (None)
// class FText                        Temp_text_Variable83                                             (None)
// class FText                        Temp_text_Variable84                                             (None)
// class FText                        Temp_text_Variable85                                             (None)
// int32                              Temp_int_Variable17                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select16_Default                                          (None)
// class FText                        Temp_text_Variable86                                             (None)
// class FText                        Temp_text_Variable87                                             (None)
// class FText                        Temp_text_Variable88                                             (None)
// class FText                        Temp_text_Variable89                                             (None)
// class FText                        Temp_text_Variable90                                             (None)
// int32                              Temp_int_Variable18                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select17_Default                                          (None)
// class FText                        Temp_text_Variable91                                             (None)
// class FText                        Temp_text_Variable92                                             (None)
// class FText                        Temp_text_Variable93                                             (None)
// class FText                        Temp_text_Variable94                                             (None)
// class FText                        Temp_text_Variable95                                             (None)
// int32                              Temp_int_Variable19                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select18_Default                                          (None)
// class FText                        Temp_text_Variable96                                             (None)
// class FText                        Temp_text_Variable97                                             (None)
// class FText                        Temp_text_Variable98                                             (None)
// class FText                        Temp_text_Variable99                                             (None)
// class FText                        Temp_text_Variable100                                            (None)
// int32                              Temp_int_Variable20                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select19_Default                                          (None)
// class FText                        Temp_text_Variable101                                            (None)
// class FText                        Temp_text_Variable102                                            (None)
// class FText                        Temp_text_Variable103                                            (None)
// class FText                        Temp_text_Variable104                                            (None)
// class FText                        Temp_text_Variable105                                            (None)
// int32                              Temp_int_Variable21                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select20_Default                                          (None)
// class FText                        Temp_text_Variable106                                            (None)
// class FText                        Temp_text_Variable107                                            (None)
// class FText                        Temp_text_Variable108                                            (None)
// class FText                        Temp_text_Variable109                                            (None)
// class FText                        Temp_text_Variable110                                            (None)
// int32                              Temp_int_Variable22                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select21_Default                                          (None)
// class FText                        Temp_text_Variable111                                            (None)
// class FText                        Temp_text_Variable112                                            (None)
// class FText                        Temp_text_Variable113                                            (None)
// class FText                        Temp_text_Variable114                                            (None)
// class FText                        Temp_text_Variable115                                            (None)
// int32                              Temp_int_Variable23                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select22_Default                                          (None)
// class FText                        Temp_text_Variable116                                            (None)
// class FText                        Temp_text_Variable117                                            (None)
// class FText                        Temp_text_Variable118                                            (None)
// class FText                        Temp_text_Variable119                                            (None)
// class FText                        Temp_text_Variable120                                            (None)
// int32                              Temp_int_Variable24                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select23_Default                                          (None)
// class FText                        Temp_text_Variable121                                            (None)
// class FText                        Temp_text_Variable122                                            (None)
// class FText                        Temp_text_Variable123                                            (None)
// class FText                        Temp_text_Variable124                                            (None)
// class FText                        Temp_text_Variable125                                            (None)
// int32                              Temp_int_Variable25                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select24_Default                                          (None)
// class FText                        Temp_text_Variable126                                            (None)
// class FText                        Temp_text_Variable127                                            (None)
// class FText                        Temp_text_Variable128                                            (None)
// class FText                        Temp_text_Variable129                                            (None)
// class FText                        Temp_text_Variable130                                            (None)
// int32                              Temp_int_Variable26                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select25_Default                                          (None)
// class FText                        Temp_text_Variable131                                            (None)
// class FText                        Temp_text_Variable132                                            (None)
// class FText                        Temp_text_Variable133                                            (None)
// class FText                        Temp_text_Variable134                                            (None)
// class FText                        Temp_text_Variable135                                            (None)
// int32                              Temp_int_Variable27                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select26_Default                                          (None)
// class FText                        Temp_text_Variable136                                            (None)
// class FText                        Temp_text_Variable137                                            (None)
// class FText                        Temp_text_Variable138                                            (None)
// class FText                        Temp_text_Variable139                                            (None)
// class FText                        Temp_text_Variable140                                            (None)
// int32                              Temp_int_Variable28                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select27_Default                                          (None)
// class FText                        Temp_text_Variable141                                            (None)
// class FText                        Temp_text_Variable142                                            (None)
// class FText                        Temp_text_Variable143                                            (None)
// class FText                        Temp_text_Variable144                                            (None)
// class FText                        Temp_text_Variable145                                            (None)
// int32                              Temp_int_Variable29                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select28_Default                                          (None)
// class FText                        Temp_text_Variable146                                            (None)
// class FText                        Temp_text_Variable147                                            (None)
// class FText                        Temp_text_Variable148                                            (None)
// class FText                        Temp_text_Variable149                                            (None)
// class FText                        Temp_text_Variable150                                            (None)
// int32                              Temp_int_Variable30                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select29_Default                                          (None)
// class FText                        Temp_text_Variable151                                            (None)
// class FText                        Temp_text_Variable152                                            (None)
// class FText                        Temp_text_Variable153                                            (None)
// class FText                        Temp_text_Variable154                                            (None)
// class FText                        Temp_text_Variable155                                            (None)
// int32                              Temp_int_Variable31                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select30_Default                                          (None)
// class FText                        Temp_text_Variable156                                            (None)
// class FText                        Temp_text_Variable157                                            (None)
// class FText                        Temp_text_Variable158                                            (None)
// class FText                        Temp_text_Variable159                                            (None)
// class FText                        Temp_text_Variable160                                            (None)
// int32                              Temp_int_Variable32                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select31_Default                                          (None)
// class FText                        Temp_text_Variable161                                            (None)
// class FText                        Temp_text_Variable162                                            (None)
// class FText                        Temp_text_Variable163                                            (None)
// class FText                        Temp_text_Variable164                                            (None)
// class FText                        Temp_text_Variable165                                            (None)
// int32                              Temp_int_Variable33                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select32_Default                                          (None)
// class FText                        Temp_text_Variable166                                            (None)
// class FText                        Temp_text_Variable167                                            (None)
// class FText                        Temp_text_Variable168                                            (None)
// class FText                        Temp_text_Variable169                                            (None)
// class FText                        Temp_text_Variable170                                            (None)
// int32                              Temp_int_Variable34                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select33_Default                                          (None)
// class FText                        Temp_text_Variable171                                            (None)
// class FText                        Temp_text_Variable172                                            (None)
// class FText                        Temp_text_Variable173                                            (None)
// class FText                        Temp_text_Variable174                                            (None)
// class FText                        Temp_text_Variable175                                            (None)
// int32                              Temp_int_Variable35                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select34_Default                                          (None)
// class FText                        Temp_text_Variable176                                            (None)
// class FText                        Temp_text_Variable177                                            (None)
// class FText                        Temp_text_Variable178                                            (None)
// class FText                        Temp_text_Variable179                                            (None)
// class FText                        Temp_text_Variable180                                            (None)
// int32                              Temp_int_Variable36                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select35_Default                                          (None)
// class FText                        Temp_text_Variable181                                            (None)
// class FText                        Temp_text_Variable182                                            (None)
// class FText                        Temp_text_Variable183                                            (None)
// class FText                        Temp_text_Variable184                                            (None)
// class FText                        Temp_text_Variable185                                            (None)
// int32                              Temp_int_Variable37                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select36_Default                                          (None)
// class FText                        Temp_text_Variable186                                            (None)
// class FText                        Temp_text_Variable187                                            (None)
// class FText                        Temp_text_Variable188                                            (None)
// class FText                        Temp_text_Variable189                                            (None)
// class FText                        Temp_text_Variable190                                            (None)
// int32                              Temp_int_Variable38                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select37_Default                                          (None)
// class FText                        Temp_text_Variable191                                            (None)
// class FText                        Temp_text_Variable192                                            (None)
// class FText                        Temp_text_Variable193                                            (None)
// class FText                        Temp_text_Variable194                                            (None)
// class FText                        Temp_text_Variable195                                            (None)
// int32                              Temp_int_Variable39                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select38_Default                                          (None)
// class FText                        Temp_text_Variable196                                            (None)
// class FText                        Temp_text_Variable197                                            (None)
// class FText                        Temp_text_Variable198                                            (None)
// class FText                        Temp_text_Variable199                                            (None)
// class FText                        Temp_text_Variable200                                            (None)
// int32                              Temp_int_Variable40                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select39_Default                                          (None)
// class FText                        Temp_text_Variable201                                            (None)
// class FText                        Temp_text_Variable202                                            (None)
// class FText                        Temp_text_Variable203                                            (None)
// class FText                        Temp_text_Variable204                                            (None)
// class FText                        Temp_text_Variable205                                            (None)
// int32                              Temp_int_Variable41                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select40_Default                                          (None)
// class FText                        Temp_text_Variable206                                            (None)
// class FText                        Temp_text_Variable207                                            (None)
// class FText                        Temp_text_Variable208                                            (None)
// class FText                        Temp_text_Variable209                                            (None)
// class FText                        Temp_text_Variable210                                            (None)
// int32                              Temp_int_Variable42                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select41_Default                                          (None)
// class FText                        Temp_text_Variable211                                            (None)
// class FText                        Temp_text_Variable212                                            (None)
// class FText                        Temp_text_Variable213                                            (None)
// class FText                        Temp_text_Variable214                                            (None)
// class FText                        Temp_text_Variable215                                            (None)
// int32                              Temp_int_Variable43                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select42_Default                                          (None)
// class FText                        Temp_text_Variable216                                            (None)
// class FText                        Temp_text_Variable217                                            (None)
// class FText                        Temp_text_Variable218                                            (None)
// class FText                        Temp_text_Variable219                                            (None)
// class FText                        Temp_text_Variable220                                            (None)
// int32                              Temp_int_Variable44                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select43_Default                                          (None)
// class FText                        Temp_text_Variable221                                            (None)
// class FText                        Temp_text_Variable222                                            (None)
// class FText                        Temp_text_Variable223                                            (None)
// class FText                        Temp_text_Variable224                                            (None)
// class FText                        Temp_text_Variable225                                            (None)
// int32                              Temp_int_Variable45                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select44_Default                                          (None)
// class FText                        Temp_text_Variable226                                            (None)
// class FText                        Temp_text_Variable227                                            (None)
// class FText                        Temp_text_Variable228                                            (None)
// class FText                        Temp_text_Variable229                                            (None)
// class FText                        Temp_text_Variable230                                            (None)
// int32                              Temp_int_Variable46                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select45_Default                                          (None)
// class FText                        Temp_text_Variable231                                            (None)
// class FText                        Temp_text_Variable232                                            (None)
// class FText                        Temp_text_Variable233                                            (None)
// class FText                        Temp_text_Variable234                                            (None)
// class FText                        Temp_text_Variable235                                            (None)
// int32                              Temp_int_Variable47                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select46_Default                                          (None)
// class FText                        Temp_text_Variable236                                            (None)
// class FText                        Temp_text_Variable237                                            (None)
// class FText                        Temp_text_Variable238                                            (None)
// class FText                        Temp_text_Variable239                                            (None)
// class FText                        Temp_text_Variable240                                            (None)
// int32                              Temp_int_Variable48                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select47_Default                                          (None)
// class FText                        Temp_text_Variable241                                            (None)
// class FText                        Temp_text_Variable242                                            (None)
// class FText                        Temp_text_Variable243                                            (None)
// class FText                        Temp_text_Variable244                                            (None)
// class FText                        Temp_text_Variable245                                            (None)
// class FText                        K2Node_Select48_Default                                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        Temp_text_Variable246                                            (None)
// class FText                        Temp_text_Variable247                                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1                            (None)
// int32                              Temp_int_Variable49                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select49_Default                                          (None)

void UGamepadMappingInfo_v3_C::HandleConfigChanged_Athena(enum class EFortInputActionGroup Mode, int32 Config, class FText Temp_text_Variable, bool K2Node_SwitchEnum_CmpSuccess, class FText Temp_text_Variable1, class FText Temp_text_Variable2, int32 Temp_int_Variable, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, int32 Temp_int_Variable1, class FText K2Node_Select_Default, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class FText Temp_text_Variable10, class FText Temp_text_Variable11, int32 Temp_int_Variable2, class FText K2Node_Select1_Default, class FText Temp_text_Variable12, class FText Temp_text_Variable13, class FText Temp_text_Variable14, class FText Temp_text_Variable15, class FText Temp_text_Variable16, int32 Temp_int_Variable3, class FText K2Node_Select2_Default, class FText Temp_text_Variable17, class FText Temp_text_Variable18, class FText Temp_text_Variable19, class FText Temp_text_Variable20, class FText Temp_text_Variable21, int32 Temp_int_Variable4, class FText K2Node_Select3_Default, class FText Temp_text_Variable22, class FText Temp_text_Variable23, class FText Temp_text_Variable24, class FText Temp_text_Variable25, int32 Temp_int_Variable5, class FText K2Node_Select4_Default, class FText Temp_text_Variable26, class FText Temp_text_Variable27, class FText Temp_text_Variable28, class FText Temp_text_Variable29, class FText Temp_text_Variable30, int32 Temp_int_Variable6, class FText K2Node_Select5_Default, class FText Temp_text_Variable31, class FText Temp_text_Variable32, class FText Temp_text_Variable33, class FText Temp_text_Variable34, class FText Temp_text_Variable35, int32 Temp_int_Variable7, class FText K2Node_Select6_Default, class FText Temp_text_Variable36, class FText Temp_text_Variable37, class FText Temp_text_Variable38, class FText Temp_text_Variable39, class FText Temp_text_Variable40, int32 Temp_int_Variable8, class FText K2Node_Select7_Default, class FText Temp_text_Variable41, class FText Temp_text_Variable42, class FText Temp_text_Variable43, class FText Temp_text_Variable44, class FText Temp_text_Variable45, int32 Temp_int_Variable9, class FText K2Node_Select8_Default, class FText Temp_text_Variable46, class FText Temp_text_Variable47, class FText Temp_text_Variable48, class FText Temp_text_Variable49, class FText Temp_text_Variable50, int32 Temp_int_Variable10, class FText K2Node_Select9_Default, class FText Temp_text_Variable51, class FText Temp_text_Variable52, class FText Temp_text_Variable53, class FText Temp_text_Variable54, class FText Temp_text_Variable55, int32 Temp_int_Variable11, class FText K2Node_Select10_Default, class FText Temp_text_Variable56, class FText Temp_text_Variable57, class FText Temp_text_Variable58, class FText Temp_text_Variable59, class FText Temp_text_Variable60, int32 Temp_int_Variable12, class FText K2Node_Select11_Default, class FText Temp_text_Variable61, class FText Temp_text_Variable62, class FText Temp_text_Variable63, class FText Temp_text_Variable64, class FText Temp_text_Variable65, int32 Temp_int_Variable13, class FText K2Node_Select12_Default, class FText Temp_text_Variable66, class FText Temp_text_Variable67, class FText Temp_text_Variable68, class FText Temp_text_Variable69, class FText Temp_text_Variable70, int32 Temp_int_Variable14, class FText K2Node_Select13_Default, class FText Temp_text_Variable71, class FText Temp_text_Variable72, class FText Temp_text_Variable73, class FText Temp_text_Variable74, class FText Temp_text_Variable75, int32 Temp_int_Variable15, class FText K2Node_Select14_Default, class FText Temp_text_Variable76, class FText Temp_text_Variable77, class FText Temp_text_Variable78, class FText Temp_text_Variable79, class FText Temp_text_Variable80, int32 Temp_int_Variable16, class FText K2Node_Select15_Default, class FText Temp_text_Variable81, class FText Temp_text_Variable82, class FText Temp_text_Variable83, class FText Temp_text_Variable84, class FText Temp_text_Variable85, int32 Temp_int_Variable17, class FText K2Node_Select16_Default, class FText Temp_text_Variable86, class FText Temp_text_Variable87, class FText Temp_text_Variable88, class FText Temp_text_Variable89, class FText Temp_text_Variable90, int32 Temp_int_Variable18, class FText K2Node_Select17_Default, class FText Temp_text_Variable91, class FText Temp_text_Variable92, class FText Temp_text_Variable93, class FText Temp_text_Variable94, class FText Temp_text_Variable95, int32 Temp_int_Variable19, class FText K2Node_Select18_Default, class FText Temp_text_Variable96, class FText Temp_text_Variable97, class FText Temp_text_Variable98, class FText Temp_text_Variable99, class FText Temp_text_Variable100, int32 Temp_int_Variable20, class FText K2Node_Select19_Default, class FText Temp_text_Variable101, class FText Temp_text_Variable102, class FText Temp_text_Variable103, class FText Temp_text_Variable104, class FText Temp_text_Variable105, int32 Temp_int_Variable21, class FText K2Node_Select20_Default, class FText Temp_text_Variable106, class FText Temp_text_Variable107, class FText Temp_text_Variable108, class FText Temp_text_Variable109, class FText Temp_text_Variable110, int32 Temp_int_Variable22, class FText K2Node_Select21_Default, class FText Temp_text_Variable111, class FText Temp_text_Variable112, class FText Temp_text_Variable113, class FText Temp_text_Variable114, class FText Temp_text_Variable115, int32 Temp_int_Variable23, class FText K2Node_Select22_Default, class FText Temp_text_Variable116, class FText Temp_text_Variable117, class FText Temp_text_Variable118, class FText Temp_text_Variable119, class FText Temp_text_Variable120, int32 Temp_int_Variable24, class FText K2Node_Select23_Default, class FText Temp_text_Variable121, class FText Temp_text_Variable122, class FText Temp_text_Variable123, class FText Temp_text_Variable124, class FText Temp_text_Variable125, int32 Temp_int_Variable25, class FText K2Node_Select24_Default, class FText Temp_text_Variable126, class FText Temp_text_Variable127, class FText Temp_text_Variable128, class FText Temp_text_Variable129, class FText Temp_text_Variable130, int32 Temp_int_Variable26, class FText K2Node_Select25_Default, class FText Temp_text_Variable131, class FText Temp_text_Variable132, class FText Temp_text_Variable133, class FText Temp_text_Variable134, class FText Temp_text_Variable135, int32 Temp_int_Variable27, class FText K2Node_Select26_Default, class FText Temp_text_Variable136, class FText Temp_text_Variable137, class FText Temp_text_Variable138, class FText Temp_text_Variable139, class FText Temp_text_Variable140, int32 Temp_int_Variable28, class FText K2Node_Select27_Default, class FText Temp_text_Variable141, class FText Temp_text_Variable142, class FText Temp_text_Variable143, class FText Temp_text_Variable144, class FText Temp_text_Variable145, int32 Temp_int_Variable29, class FText K2Node_Select28_Default, class FText Temp_text_Variable146, class FText Temp_text_Variable147, class FText Temp_text_Variable148, class FText Temp_text_Variable149, class FText Temp_text_Variable150, int32 Temp_int_Variable30, class FText K2Node_Select29_Default, class FText Temp_text_Variable151, class FText Temp_text_Variable152, class FText Temp_text_Variable153, class FText Temp_text_Variable154, class FText Temp_text_Variable155, int32 Temp_int_Variable31, class FText K2Node_Select30_Default, class FText Temp_text_Variable156, class FText Temp_text_Variable157, class FText Temp_text_Variable158, class FText Temp_text_Variable159, class FText Temp_text_Variable160, int32 Temp_int_Variable32, class FText K2Node_Select31_Default, class FText Temp_text_Variable161, class FText Temp_text_Variable162, class FText Temp_text_Variable163, class FText Temp_text_Variable164, class FText Temp_text_Variable165, int32 Temp_int_Variable33, class FText K2Node_Select32_Default, class FText Temp_text_Variable166, class FText Temp_text_Variable167, class FText Temp_text_Variable168, class FText Temp_text_Variable169, class FText Temp_text_Variable170, int32 Temp_int_Variable34, class FText K2Node_Select33_Default, class FText Temp_text_Variable171, class FText Temp_text_Variable172, class FText Temp_text_Variable173, class FText Temp_text_Variable174, class FText Temp_text_Variable175, int32 Temp_int_Variable35, class FText K2Node_Select34_Default, class FText Temp_text_Variable176, class FText Temp_text_Variable177, class FText Temp_text_Variable178, class FText Temp_text_Variable179, class FText Temp_text_Variable180, int32 Temp_int_Variable36, class FText K2Node_Select35_Default, class FText Temp_text_Variable181, class FText Temp_text_Variable182, class FText Temp_text_Variable183, class FText Temp_text_Variable184, class FText Temp_text_Variable185, int32 Temp_int_Variable37, class FText K2Node_Select36_Default, class FText Temp_text_Variable186, class FText Temp_text_Variable187, class FText Temp_text_Variable188, class FText Temp_text_Variable189, class FText Temp_text_Variable190, int32 Temp_int_Variable38, class FText K2Node_Select37_Default, class FText Temp_text_Variable191, class FText Temp_text_Variable192, class FText Temp_text_Variable193, class FText Temp_text_Variable194, class FText Temp_text_Variable195, int32 Temp_int_Variable39, class FText K2Node_Select38_Default, class FText Temp_text_Variable196, class FText Temp_text_Variable197, class FText Temp_text_Variable198, class FText Temp_text_Variable199, class FText Temp_text_Variable200, int32 Temp_int_Variable40, class FText K2Node_Select39_Default, class FText Temp_text_Variable201, class FText Temp_text_Variable202, class FText Temp_text_Variable203, class FText Temp_text_Variable204, class FText Temp_text_Variable205, int32 Temp_int_Variable41, class FText K2Node_Select40_Default, class FText Temp_text_Variable206, class FText Temp_text_Variable207, class FText Temp_text_Variable208, class FText Temp_text_Variable209, class FText Temp_text_Variable210, int32 Temp_int_Variable42, class FText K2Node_Select41_Default, class FText Temp_text_Variable211, class FText Temp_text_Variable212, class FText Temp_text_Variable213, class FText Temp_text_Variable214, class FText Temp_text_Variable215, int32 Temp_int_Variable43, class FText K2Node_Select42_Default, class FText Temp_text_Variable216, class FText Temp_text_Variable217, class FText Temp_text_Variable218, class FText Temp_text_Variable219, class FText Temp_text_Variable220, int32 Temp_int_Variable44, class FText K2Node_Select43_Default, class FText Temp_text_Variable221, class FText Temp_text_Variable222, class FText Temp_text_Variable223, class FText Temp_text_Variable224, class FText Temp_text_Variable225, int32 Temp_int_Variable45, class FText K2Node_Select44_Default, class FText Temp_text_Variable226, class FText Temp_text_Variable227, class FText Temp_text_Variable228, class FText Temp_text_Variable229, class FText Temp_text_Variable230, int32 Temp_int_Variable46, class FText K2Node_Select45_Default, class FText Temp_text_Variable231, class FText Temp_text_Variable232, class FText Temp_text_Variable233, class FText Temp_text_Variable234, class FText Temp_text_Variable235, int32 Temp_int_Variable47, class FText K2Node_Select46_Default, class FText Temp_text_Variable236, class FText Temp_text_Variable237, class FText Temp_text_Variable238, class FText Temp_text_Variable239, class FText Temp_text_Variable240, int32 Temp_int_Variable48, class FText K2Node_Select47_Default, class FText Temp_text_Variable241, class FText Temp_text_Variable242, class FText Temp_text_Variable243, class FText Temp_text_Variable244, class FText Temp_text_Variable245, class FText K2Node_Select48_Default, class FText CallFunc_MakeLiteralText_ReturnValue, class FText Temp_text_Variable246, class FText Temp_text_Variable247, class FText CallFunc_MakeLiteralText_ReturnValue1, int32 Temp_int_Variable49, class FText K2Node_Select49_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "HandleConfigChanged_Athena");

	Params::UGamepadMappingInfo_v3_C_HandleConfigChanged_Athena_Params Parms{};

	Parms.Mode = Mode;
	Parms.Config = Config;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.Temp_text_Variable10 = Temp_text_Variable10;
	Parms.Temp_text_Variable11 = Temp_text_Variable11;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_text_Variable13 = Temp_text_Variable13;
	Parms.Temp_text_Variable14 = Temp_text_Variable14;
	Parms.Temp_text_Variable15 = Temp_text_Variable15;
	Parms.Temp_text_Variable16 = Temp_text_Variable16;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_text_Variable17 = Temp_text_Variable17;
	Parms.Temp_text_Variable18 = Temp_text_Variable18;
	Parms.Temp_text_Variable19 = Temp_text_Variable19;
	Parms.Temp_text_Variable20 = Temp_text_Variable20;
	Parms.Temp_text_Variable21 = Temp_text_Variable21;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_text_Variable22 = Temp_text_Variable22;
	Parms.Temp_text_Variable23 = Temp_text_Variable23;
	Parms.Temp_text_Variable24 = Temp_text_Variable24;
	Parms.Temp_text_Variable25 = Temp_text_Variable25;
	Parms.Temp_int_Variable5 = Temp_int_Variable5;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.Temp_text_Variable26 = Temp_text_Variable26;
	Parms.Temp_text_Variable27 = Temp_text_Variable27;
	Parms.Temp_text_Variable28 = Temp_text_Variable28;
	Parms.Temp_text_Variable29 = Temp_text_Variable29;
	Parms.Temp_text_Variable30 = Temp_text_Variable30;
	Parms.Temp_int_Variable6 = Temp_int_Variable6;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.Temp_text_Variable31 = Temp_text_Variable31;
	Parms.Temp_text_Variable32 = Temp_text_Variable32;
	Parms.Temp_text_Variable33 = Temp_text_Variable33;
	Parms.Temp_text_Variable34 = Temp_text_Variable34;
	Parms.Temp_text_Variable35 = Temp_text_Variable35;
	Parms.Temp_int_Variable7 = Temp_int_Variable7;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.Temp_text_Variable36 = Temp_text_Variable36;
	Parms.Temp_text_Variable37 = Temp_text_Variable37;
	Parms.Temp_text_Variable38 = Temp_text_Variable38;
	Parms.Temp_text_Variable39 = Temp_text_Variable39;
	Parms.Temp_text_Variable40 = Temp_text_Variable40;
	Parms.Temp_int_Variable8 = Temp_int_Variable8;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.Temp_text_Variable41 = Temp_text_Variable41;
	Parms.Temp_text_Variable42 = Temp_text_Variable42;
	Parms.Temp_text_Variable43 = Temp_text_Variable43;
	Parms.Temp_text_Variable44 = Temp_text_Variable44;
	Parms.Temp_text_Variable45 = Temp_text_Variable45;
	Parms.Temp_int_Variable9 = Temp_int_Variable9;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;
	Parms.Temp_text_Variable46 = Temp_text_Variable46;
	Parms.Temp_text_Variable47 = Temp_text_Variable47;
	Parms.Temp_text_Variable48 = Temp_text_Variable48;
	Parms.Temp_text_Variable49 = Temp_text_Variable49;
	Parms.Temp_text_Variable50 = Temp_text_Variable50;
	Parms.Temp_int_Variable10 = Temp_int_Variable10;
	Parms.K2Node_Select9_Default = K2Node_Select9_Default;
	Parms.Temp_text_Variable51 = Temp_text_Variable51;
	Parms.Temp_text_Variable52 = Temp_text_Variable52;
	Parms.Temp_text_Variable53 = Temp_text_Variable53;
	Parms.Temp_text_Variable54 = Temp_text_Variable54;
	Parms.Temp_text_Variable55 = Temp_text_Variable55;
	Parms.Temp_int_Variable11 = Temp_int_Variable11;
	Parms.K2Node_Select10_Default = K2Node_Select10_Default;
	Parms.Temp_text_Variable56 = Temp_text_Variable56;
	Parms.Temp_text_Variable57 = Temp_text_Variable57;
	Parms.Temp_text_Variable58 = Temp_text_Variable58;
	Parms.Temp_text_Variable59 = Temp_text_Variable59;
	Parms.Temp_text_Variable60 = Temp_text_Variable60;
	Parms.Temp_int_Variable12 = Temp_int_Variable12;
	Parms.K2Node_Select11_Default = K2Node_Select11_Default;
	Parms.Temp_text_Variable61 = Temp_text_Variable61;
	Parms.Temp_text_Variable62 = Temp_text_Variable62;
	Parms.Temp_text_Variable63 = Temp_text_Variable63;
	Parms.Temp_text_Variable64 = Temp_text_Variable64;
	Parms.Temp_text_Variable65 = Temp_text_Variable65;
	Parms.Temp_int_Variable13 = Temp_int_Variable13;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.Temp_text_Variable66 = Temp_text_Variable66;
	Parms.Temp_text_Variable67 = Temp_text_Variable67;
	Parms.Temp_text_Variable68 = Temp_text_Variable68;
	Parms.Temp_text_Variable69 = Temp_text_Variable69;
	Parms.Temp_text_Variable70 = Temp_text_Variable70;
	Parms.Temp_int_Variable14 = Temp_int_Variable14;
	Parms.K2Node_Select13_Default = K2Node_Select13_Default;
	Parms.Temp_text_Variable71 = Temp_text_Variable71;
	Parms.Temp_text_Variable72 = Temp_text_Variable72;
	Parms.Temp_text_Variable73 = Temp_text_Variable73;
	Parms.Temp_text_Variable74 = Temp_text_Variable74;
	Parms.Temp_text_Variable75 = Temp_text_Variable75;
	Parms.Temp_int_Variable15 = Temp_int_Variable15;
	Parms.K2Node_Select14_Default = K2Node_Select14_Default;
	Parms.Temp_text_Variable76 = Temp_text_Variable76;
	Parms.Temp_text_Variable77 = Temp_text_Variable77;
	Parms.Temp_text_Variable78 = Temp_text_Variable78;
	Parms.Temp_text_Variable79 = Temp_text_Variable79;
	Parms.Temp_text_Variable80 = Temp_text_Variable80;
	Parms.Temp_int_Variable16 = Temp_int_Variable16;
	Parms.K2Node_Select15_Default = K2Node_Select15_Default;
	Parms.Temp_text_Variable81 = Temp_text_Variable81;
	Parms.Temp_text_Variable82 = Temp_text_Variable82;
	Parms.Temp_text_Variable83 = Temp_text_Variable83;
	Parms.Temp_text_Variable84 = Temp_text_Variable84;
	Parms.Temp_text_Variable85 = Temp_text_Variable85;
	Parms.Temp_int_Variable17 = Temp_int_Variable17;
	Parms.K2Node_Select16_Default = K2Node_Select16_Default;
	Parms.Temp_text_Variable86 = Temp_text_Variable86;
	Parms.Temp_text_Variable87 = Temp_text_Variable87;
	Parms.Temp_text_Variable88 = Temp_text_Variable88;
	Parms.Temp_text_Variable89 = Temp_text_Variable89;
	Parms.Temp_text_Variable90 = Temp_text_Variable90;
	Parms.Temp_int_Variable18 = Temp_int_Variable18;
	Parms.K2Node_Select17_Default = K2Node_Select17_Default;
	Parms.Temp_text_Variable91 = Temp_text_Variable91;
	Parms.Temp_text_Variable92 = Temp_text_Variable92;
	Parms.Temp_text_Variable93 = Temp_text_Variable93;
	Parms.Temp_text_Variable94 = Temp_text_Variable94;
	Parms.Temp_text_Variable95 = Temp_text_Variable95;
	Parms.Temp_int_Variable19 = Temp_int_Variable19;
	Parms.K2Node_Select18_Default = K2Node_Select18_Default;
	Parms.Temp_text_Variable96 = Temp_text_Variable96;
	Parms.Temp_text_Variable97 = Temp_text_Variable97;
	Parms.Temp_text_Variable98 = Temp_text_Variable98;
	Parms.Temp_text_Variable99 = Temp_text_Variable99;
	Parms.Temp_text_Variable100 = Temp_text_Variable100;
	Parms.Temp_int_Variable20 = Temp_int_Variable20;
	Parms.K2Node_Select19_Default = K2Node_Select19_Default;
	Parms.Temp_text_Variable101 = Temp_text_Variable101;
	Parms.Temp_text_Variable102 = Temp_text_Variable102;
	Parms.Temp_text_Variable103 = Temp_text_Variable103;
	Parms.Temp_text_Variable104 = Temp_text_Variable104;
	Parms.Temp_text_Variable105 = Temp_text_Variable105;
	Parms.Temp_int_Variable21 = Temp_int_Variable21;
	Parms.K2Node_Select20_Default = K2Node_Select20_Default;
	Parms.Temp_text_Variable106 = Temp_text_Variable106;
	Parms.Temp_text_Variable107 = Temp_text_Variable107;
	Parms.Temp_text_Variable108 = Temp_text_Variable108;
	Parms.Temp_text_Variable109 = Temp_text_Variable109;
	Parms.Temp_text_Variable110 = Temp_text_Variable110;
	Parms.Temp_int_Variable22 = Temp_int_Variable22;
	Parms.K2Node_Select21_Default = K2Node_Select21_Default;
	Parms.Temp_text_Variable111 = Temp_text_Variable111;
	Parms.Temp_text_Variable112 = Temp_text_Variable112;
	Parms.Temp_text_Variable113 = Temp_text_Variable113;
	Parms.Temp_text_Variable114 = Temp_text_Variable114;
	Parms.Temp_text_Variable115 = Temp_text_Variable115;
	Parms.Temp_int_Variable23 = Temp_int_Variable23;
	Parms.K2Node_Select22_Default = K2Node_Select22_Default;
	Parms.Temp_text_Variable116 = Temp_text_Variable116;
	Parms.Temp_text_Variable117 = Temp_text_Variable117;
	Parms.Temp_text_Variable118 = Temp_text_Variable118;
	Parms.Temp_text_Variable119 = Temp_text_Variable119;
	Parms.Temp_text_Variable120 = Temp_text_Variable120;
	Parms.Temp_int_Variable24 = Temp_int_Variable24;
	Parms.K2Node_Select23_Default = K2Node_Select23_Default;
	Parms.Temp_text_Variable121 = Temp_text_Variable121;
	Parms.Temp_text_Variable122 = Temp_text_Variable122;
	Parms.Temp_text_Variable123 = Temp_text_Variable123;
	Parms.Temp_text_Variable124 = Temp_text_Variable124;
	Parms.Temp_text_Variable125 = Temp_text_Variable125;
	Parms.Temp_int_Variable25 = Temp_int_Variable25;
	Parms.K2Node_Select24_Default = K2Node_Select24_Default;
	Parms.Temp_text_Variable126 = Temp_text_Variable126;
	Parms.Temp_text_Variable127 = Temp_text_Variable127;
	Parms.Temp_text_Variable128 = Temp_text_Variable128;
	Parms.Temp_text_Variable129 = Temp_text_Variable129;
	Parms.Temp_text_Variable130 = Temp_text_Variable130;
	Parms.Temp_int_Variable26 = Temp_int_Variable26;
	Parms.K2Node_Select25_Default = K2Node_Select25_Default;
	Parms.Temp_text_Variable131 = Temp_text_Variable131;
	Parms.Temp_text_Variable132 = Temp_text_Variable132;
	Parms.Temp_text_Variable133 = Temp_text_Variable133;
	Parms.Temp_text_Variable134 = Temp_text_Variable134;
	Parms.Temp_text_Variable135 = Temp_text_Variable135;
	Parms.Temp_int_Variable27 = Temp_int_Variable27;
	Parms.K2Node_Select26_Default = K2Node_Select26_Default;
	Parms.Temp_text_Variable136 = Temp_text_Variable136;
	Parms.Temp_text_Variable137 = Temp_text_Variable137;
	Parms.Temp_text_Variable138 = Temp_text_Variable138;
	Parms.Temp_text_Variable139 = Temp_text_Variable139;
	Parms.Temp_text_Variable140 = Temp_text_Variable140;
	Parms.Temp_int_Variable28 = Temp_int_Variable28;
	Parms.K2Node_Select27_Default = K2Node_Select27_Default;
	Parms.Temp_text_Variable141 = Temp_text_Variable141;
	Parms.Temp_text_Variable142 = Temp_text_Variable142;
	Parms.Temp_text_Variable143 = Temp_text_Variable143;
	Parms.Temp_text_Variable144 = Temp_text_Variable144;
	Parms.Temp_text_Variable145 = Temp_text_Variable145;
	Parms.Temp_int_Variable29 = Temp_int_Variable29;
	Parms.K2Node_Select28_Default = K2Node_Select28_Default;
	Parms.Temp_text_Variable146 = Temp_text_Variable146;
	Parms.Temp_text_Variable147 = Temp_text_Variable147;
	Parms.Temp_text_Variable148 = Temp_text_Variable148;
	Parms.Temp_text_Variable149 = Temp_text_Variable149;
	Parms.Temp_text_Variable150 = Temp_text_Variable150;
	Parms.Temp_int_Variable30 = Temp_int_Variable30;
	Parms.K2Node_Select29_Default = K2Node_Select29_Default;
	Parms.Temp_text_Variable151 = Temp_text_Variable151;
	Parms.Temp_text_Variable152 = Temp_text_Variable152;
	Parms.Temp_text_Variable153 = Temp_text_Variable153;
	Parms.Temp_text_Variable154 = Temp_text_Variable154;
	Parms.Temp_text_Variable155 = Temp_text_Variable155;
	Parms.Temp_int_Variable31 = Temp_int_Variable31;
	Parms.K2Node_Select30_Default = K2Node_Select30_Default;
	Parms.Temp_text_Variable156 = Temp_text_Variable156;
	Parms.Temp_text_Variable157 = Temp_text_Variable157;
	Parms.Temp_text_Variable158 = Temp_text_Variable158;
	Parms.Temp_text_Variable159 = Temp_text_Variable159;
	Parms.Temp_text_Variable160 = Temp_text_Variable160;
	Parms.Temp_int_Variable32 = Temp_int_Variable32;
	Parms.K2Node_Select31_Default = K2Node_Select31_Default;
	Parms.Temp_text_Variable161 = Temp_text_Variable161;
	Parms.Temp_text_Variable162 = Temp_text_Variable162;
	Parms.Temp_text_Variable163 = Temp_text_Variable163;
	Parms.Temp_text_Variable164 = Temp_text_Variable164;
	Parms.Temp_text_Variable165 = Temp_text_Variable165;
	Parms.Temp_int_Variable33 = Temp_int_Variable33;
	Parms.K2Node_Select32_Default = K2Node_Select32_Default;
	Parms.Temp_text_Variable166 = Temp_text_Variable166;
	Parms.Temp_text_Variable167 = Temp_text_Variable167;
	Parms.Temp_text_Variable168 = Temp_text_Variable168;
	Parms.Temp_text_Variable169 = Temp_text_Variable169;
	Parms.Temp_text_Variable170 = Temp_text_Variable170;
	Parms.Temp_int_Variable34 = Temp_int_Variable34;
	Parms.K2Node_Select33_Default = K2Node_Select33_Default;
	Parms.Temp_text_Variable171 = Temp_text_Variable171;
	Parms.Temp_text_Variable172 = Temp_text_Variable172;
	Parms.Temp_text_Variable173 = Temp_text_Variable173;
	Parms.Temp_text_Variable174 = Temp_text_Variable174;
	Parms.Temp_text_Variable175 = Temp_text_Variable175;
	Parms.Temp_int_Variable35 = Temp_int_Variable35;
	Parms.K2Node_Select34_Default = K2Node_Select34_Default;
	Parms.Temp_text_Variable176 = Temp_text_Variable176;
	Parms.Temp_text_Variable177 = Temp_text_Variable177;
	Parms.Temp_text_Variable178 = Temp_text_Variable178;
	Parms.Temp_text_Variable179 = Temp_text_Variable179;
	Parms.Temp_text_Variable180 = Temp_text_Variable180;
	Parms.Temp_int_Variable36 = Temp_int_Variable36;
	Parms.K2Node_Select35_Default = K2Node_Select35_Default;
	Parms.Temp_text_Variable181 = Temp_text_Variable181;
	Parms.Temp_text_Variable182 = Temp_text_Variable182;
	Parms.Temp_text_Variable183 = Temp_text_Variable183;
	Parms.Temp_text_Variable184 = Temp_text_Variable184;
	Parms.Temp_text_Variable185 = Temp_text_Variable185;
	Parms.Temp_int_Variable37 = Temp_int_Variable37;
	Parms.K2Node_Select36_Default = K2Node_Select36_Default;
	Parms.Temp_text_Variable186 = Temp_text_Variable186;
	Parms.Temp_text_Variable187 = Temp_text_Variable187;
	Parms.Temp_text_Variable188 = Temp_text_Variable188;
	Parms.Temp_text_Variable189 = Temp_text_Variable189;
	Parms.Temp_text_Variable190 = Temp_text_Variable190;
	Parms.Temp_int_Variable38 = Temp_int_Variable38;
	Parms.K2Node_Select37_Default = K2Node_Select37_Default;
	Parms.Temp_text_Variable191 = Temp_text_Variable191;
	Parms.Temp_text_Variable192 = Temp_text_Variable192;
	Parms.Temp_text_Variable193 = Temp_text_Variable193;
	Parms.Temp_text_Variable194 = Temp_text_Variable194;
	Parms.Temp_text_Variable195 = Temp_text_Variable195;
	Parms.Temp_int_Variable39 = Temp_int_Variable39;
	Parms.K2Node_Select38_Default = K2Node_Select38_Default;
	Parms.Temp_text_Variable196 = Temp_text_Variable196;
	Parms.Temp_text_Variable197 = Temp_text_Variable197;
	Parms.Temp_text_Variable198 = Temp_text_Variable198;
	Parms.Temp_text_Variable199 = Temp_text_Variable199;
	Parms.Temp_text_Variable200 = Temp_text_Variable200;
	Parms.Temp_int_Variable40 = Temp_int_Variable40;
	Parms.K2Node_Select39_Default = K2Node_Select39_Default;
	Parms.Temp_text_Variable201 = Temp_text_Variable201;
	Parms.Temp_text_Variable202 = Temp_text_Variable202;
	Parms.Temp_text_Variable203 = Temp_text_Variable203;
	Parms.Temp_text_Variable204 = Temp_text_Variable204;
	Parms.Temp_text_Variable205 = Temp_text_Variable205;
	Parms.Temp_int_Variable41 = Temp_int_Variable41;
	Parms.K2Node_Select40_Default = K2Node_Select40_Default;
	Parms.Temp_text_Variable206 = Temp_text_Variable206;
	Parms.Temp_text_Variable207 = Temp_text_Variable207;
	Parms.Temp_text_Variable208 = Temp_text_Variable208;
	Parms.Temp_text_Variable209 = Temp_text_Variable209;
	Parms.Temp_text_Variable210 = Temp_text_Variable210;
	Parms.Temp_int_Variable42 = Temp_int_Variable42;
	Parms.K2Node_Select41_Default = K2Node_Select41_Default;
	Parms.Temp_text_Variable211 = Temp_text_Variable211;
	Parms.Temp_text_Variable212 = Temp_text_Variable212;
	Parms.Temp_text_Variable213 = Temp_text_Variable213;
	Parms.Temp_text_Variable214 = Temp_text_Variable214;
	Parms.Temp_text_Variable215 = Temp_text_Variable215;
	Parms.Temp_int_Variable43 = Temp_int_Variable43;
	Parms.K2Node_Select42_Default = K2Node_Select42_Default;
	Parms.Temp_text_Variable216 = Temp_text_Variable216;
	Parms.Temp_text_Variable217 = Temp_text_Variable217;
	Parms.Temp_text_Variable218 = Temp_text_Variable218;
	Parms.Temp_text_Variable219 = Temp_text_Variable219;
	Parms.Temp_text_Variable220 = Temp_text_Variable220;
	Parms.Temp_int_Variable44 = Temp_int_Variable44;
	Parms.K2Node_Select43_Default = K2Node_Select43_Default;
	Parms.Temp_text_Variable221 = Temp_text_Variable221;
	Parms.Temp_text_Variable222 = Temp_text_Variable222;
	Parms.Temp_text_Variable223 = Temp_text_Variable223;
	Parms.Temp_text_Variable224 = Temp_text_Variable224;
	Parms.Temp_text_Variable225 = Temp_text_Variable225;
	Parms.Temp_int_Variable45 = Temp_int_Variable45;
	Parms.K2Node_Select44_Default = K2Node_Select44_Default;
	Parms.Temp_text_Variable226 = Temp_text_Variable226;
	Parms.Temp_text_Variable227 = Temp_text_Variable227;
	Parms.Temp_text_Variable228 = Temp_text_Variable228;
	Parms.Temp_text_Variable229 = Temp_text_Variable229;
	Parms.Temp_text_Variable230 = Temp_text_Variable230;
	Parms.Temp_int_Variable46 = Temp_int_Variable46;
	Parms.K2Node_Select45_Default = K2Node_Select45_Default;
	Parms.Temp_text_Variable231 = Temp_text_Variable231;
	Parms.Temp_text_Variable232 = Temp_text_Variable232;
	Parms.Temp_text_Variable233 = Temp_text_Variable233;
	Parms.Temp_text_Variable234 = Temp_text_Variable234;
	Parms.Temp_text_Variable235 = Temp_text_Variable235;
	Parms.Temp_int_Variable47 = Temp_int_Variable47;
	Parms.K2Node_Select46_Default = K2Node_Select46_Default;
	Parms.Temp_text_Variable236 = Temp_text_Variable236;
	Parms.Temp_text_Variable237 = Temp_text_Variable237;
	Parms.Temp_text_Variable238 = Temp_text_Variable238;
	Parms.Temp_text_Variable239 = Temp_text_Variable239;
	Parms.Temp_text_Variable240 = Temp_text_Variable240;
	Parms.Temp_int_Variable48 = Temp_int_Variable48;
	Parms.K2Node_Select47_Default = K2Node_Select47_Default;
	Parms.Temp_text_Variable241 = Temp_text_Variable241;
	Parms.Temp_text_Variable242 = Temp_text_Variable242;
	Parms.Temp_text_Variable243 = Temp_text_Variable243;
	Parms.Temp_text_Variable244 = Temp_text_Variable244;
	Parms.Temp_text_Variable245 = Temp_text_Variable245;
	Parms.K2Node_Select48_Default = K2Node_Select48_Default;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_text_Variable246 = Temp_text_Variable246;
	Parms.Temp_text_Variable247 = Temp_text_Variable247;
	Parms.CallFunc_MakeLiteralText_ReturnValue1 = CallFunc_MakeLiteralText_ReturnValue1;
	Parms.Temp_int_Variable49 = Temp_int_Variable49;
	Parms.K2Node_Select49_Default = K2Node_Select49_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnConfigChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortInputActionGroup   Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Config                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCustomGamepadConfig_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadMappingInfo_v3_C::OnConfigChanged(enum class EFortInputActionGroup Mode, int32 Config, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsCustomGamepadConfig_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "OnConfigChanged");

	Params::UGamepadMappingInfo_v3_C_OnConfigChanged_Params Parms{};

	Parms.Mode = Mode;
	Parms.Config = Config;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_IsCustomGamepadConfig_ReturnValue = CallFunc_IsCustomGamepadConfig_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Update Displayed Mapping
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Platform                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortInputActionGroup   Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Configuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UTexture2D>>K2Node_Select2_Default                                           (ZeroConstructor, ReferenceParm)

void UGamepadMappingInfo_v3_C::Update_Displayed_Mapping(int32 Platform, enum class EFortInputActionGroup Mode, int32 Configuration, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, enum class ESlateVisibility Temp_byte_Variable9, int32 Temp_int_Variable1, enum class ESlateVisibility K2Node_Select1_Default, int32 Temp_int_Variable2, TArray<TSoftObjectPtr<class UTexture2D>>& K2Node_Select2_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "Update Displayed Mapping");

	Params::UGamepadMappingInfo_v3_C_Update_Displayed_Mapping_Params Parms{};

	Parms.Platform = Platform;
	Parms.Mode = Mode;
	Parms.Configuration = Configuration;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnLoaded_CDBC1B27496027B96D10BC9A64224F3D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::OnLoaded_CDBC1B27496027B96D10BC9A64224F3D(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "OnLoaded_CDBC1B27496027B96D10BC9A64224F3D");

	Params::UGamepadMappingInfo_v3_C_OnLoaded_CDBC1B27496027B96D10BC9A64224F3D_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UGamepadMappingInfo_v3_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Update Controller Images
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadMappingInfo_v3_C::Update_Controller_Images()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "Update Controller Images");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnButtonClicked_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::OnButtonClicked_Bind(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "OnButtonClicked_Bind");

	Params::UGamepadMappingInfo_v3_C_OnButtonClicked_Bind_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.UpdateCustomButtons
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadMappingInfo_v3_C::UpdateCustomButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "UpdateCustomButtons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ExecuteUbergraph_GamepadMappingInfo_v3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetControllerImage_Texture                              (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAssetNull_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UGamepadKeyTextButton_C*     K2Node_DynamicCast_AsGamepad_Key_Text_Button                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UGamepadKeyTextButton_C*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UGamepadKeyTextButton_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCustomButtonDataForKey_ActionName                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCustomButtonDataForKey_DescText                      (None)
// class FName                        CallFunc_GetCustomButtonDataForKey_ActionName1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCustomButtonDataForKey_DescText1                     (None)
// class FName                        CallFunc_GetTabIdAtIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTabIdAtIndex_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTabIdAtIndex_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTabCount_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGamepadKeyTextButton_C*     CallFunc_Array_Get_Item1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCustomButtonDataForKey_ActionName2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCustomButtonDataForKey_DescText2                     (None)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadMappingInfo_v3_C::ExecuteUbergraph_GamepadMappingInfo_v3(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, TSoftObjectPtr<class UTexture2D> CallFunc_GetControllerImage_Texture, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsAssetNull_ReturnValue, int32 Temp_int_Array_Index_Variable, class UObject* K2Node_CustomEvent_Loaded, class UCommonButton* K2Node_CustomEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGamepadKeyTextButton_C* K2Node_DynamicCast_AsGamepad_Key_Text_Button, bool K2Node_DynamicCast_bSuccess2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, TArray<class UGamepadKeyTextButton_C*>& K2Node_MakeArray_Array, class UGamepadKeyTextButton_C* CallFunc_Array_Get_Item, class FName CallFunc_GetCustomButtonDataForKey_ActionName, class FText CallFunc_GetCustomButtonDataForKey_DescText, class FName CallFunc_GetCustomButtonDataForKey_ActionName1, class FText CallFunc_GetCustomButtonDataForKey_DescText1, class FName CallFunc_GetTabIdAtIndex_ReturnValue, class FName CallFunc_GetTabIdAtIndex_ReturnValue1, class FName CallFunc_GetTabIdAtIndex_ReturnValue2, int32 CallFunc_GetTabCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UObject* Temp_object_Variable, class UGamepadKeyTextButton_C* CallFunc_Array_Get_Item1, class FName CallFunc_GetCustomButtonDataForKey_ActionName2, class FText CallFunc_GetCustomButtonDataForKey_DescText2, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "ExecuteUbergraph_GamepadMappingInfo_v3");

	Params::UGamepadMappingInfo_v3_C_ExecuteUbergraph_GamepadMappingInfo_v3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_GetControllerImage_Texture = CallFunc_GetControllerImage_Texture;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D1 = K2Node_DynamicCast_AsTexture_2D1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsAssetNull_ReturnValue = CallFunc_IsAssetNull_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsGamepad_Key_Text_Button = K2Node_DynamicCast_AsGamepad_Key_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetCustomButtonDataForKey_ActionName = CallFunc_GetCustomButtonDataForKey_ActionName;
	Parms.CallFunc_GetCustomButtonDataForKey_DescText = CallFunc_GetCustomButtonDataForKey_DescText;
	Parms.CallFunc_GetCustomButtonDataForKey_ActionName1 = CallFunc_GetCustomButtonDataForKey_ActionName1;
	Parms.CallFunc_GetCustomButtonDataForKey_DescText1 = CallFunc_GetCustomButtonDataForKey_DescText1;
	Parms.CallFunc_GetTabIdAtIndex_ReturnValue = CallFunc_GetTabIdAtIndex_ReturnValue;
	Parms.CallFunc_GetTabIdAtIndex_ReturnValue1 = CallFunc_GetTabIdAtIndex_ReturnValue1;
	Parms.CallFunc_GetTabIdAtIndex_ReturnValue2 = CallFunc_GetTabIdAtIndex_ReturnValue2;
	Parms.CallFunc_GetTabCount_ReturnValue = CallFunc_GetTabCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_GetCustomButtonDataForKey_ActionName2 = CallFunc_GetCustomButtonDataForKey_ActionName2;
	Parms.CallFunc_GetCustomButtonDataForKey_DescText2 = CallFunc_GetCustomButtonDataForKey_DescText2;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.CustomButtonNavLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadMappingInfo_v3_C::CustomButtonNavLeft__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "CustomButtonNavLeft__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Image_LightboxClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadMappingInfo_v3_C::Image_LightboxClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "Image_LightboxClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.CustomKeySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::CustomKeySelected__DelegateSignature(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadMappingInfo_v3_C", "CustomKeySelected__DelegateSignature");

	Params::UGamepadMappingInfo_v3_C_CustomKeySelected__DelegateSignature_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}

}



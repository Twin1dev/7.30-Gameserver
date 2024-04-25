#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MissionDetailsModifierList.MissionDetailsModifierList_C
// (None)

class UClass* UMissionDetailsModifierList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionDetailsModifierList_C");

	return Clss;
}


// MissionDetailsModifierList_C MissionDetailsModifierList.Default__MissionDetailsModifierList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionDetailsModifierList_C* UMissionDetailsModifierList_C::GetDefaultObj()
{
	static class UMissionDetailsModifierList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionDetailsModifierList_C*>(UMissionDetailsModifierList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MissionDetailsModifierList.MissionDetailsModifierList_C.CreateDebugModifiers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*>Modifiers                                                        (Parm, OutParm, ZeroConstructor)
// class UFortGameplayModifierItemDefinition*DebugMod8                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameplayModifierItemDefinition*DebugMod7                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameplayModifierItemDefinition*DebugMod6                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameplayModifierItemDefinition*DebugMod5                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameplayModifierItemDefinition*DebugMod4                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameplayModifierItemDefinition*DebugMod3                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameplayModifierItemDefinition*DebugMod2                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameplayModifierItemDefinition*DebugMod1                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameplayModifierItemDefinition*K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionDetailsModifierList_C::CreateDebugModifiers(TArray<class UFortGameplayModifierItemDefinition*>* Modifiers, class UFortGameplayModifierItemDefinition* DebugMod8, class UFortGameplayModifierItemDefinition* DebugMod7, class UFortGameplayModifierItemDefinition* DebugMod6, class UFortGameplayModifierItemDefinition* DebugMod5, class UFortGameplayModifierItemDefinition* DebugMod4, class UFortGameplayModifierItemDefinition* DebugMod3, class UFortGameplayModifierItemDefinition* DebugMod2, class UFortGameplayModifierItemDefinition* DebugMod1, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UFortGameplayModifierItemDefinition* K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierList_C", "CreateDebugModifiers");

	Params::UMissionDetailsModifierList_C_CreateDebugModifiers_Params Parms{};

	Parms.DebugMod8 = DebugMod8;
	Parms.DebugMod7 = DebugMod7;
	Parms.DebugMod6 = DebugMod6;
	Parms.DebugMod5 = DebugMod5;
	Parms.DebugMod4 = DebugMod4;
	Parms.DebugMod3 = DebugMod3;
	Parms.DebugMod2 = DebugMod2;
	Parms.DebugMod1 = DebugMod1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue1 = CallFunc_RandomIntegerInRange_ReturnValue1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Modifiers != nullptr)
		*Modifiers = std::move(Parms.Modifiers);

}


// Function MissionDetailsModifierList.MissionDetailsModifierList_C.PopulateModifiers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseTrunctatedList                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      NameTextStyle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      DescriptionTextStyle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowMinusDescriptions                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortGameplayModifierItemDefinition*>ModifierItems                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               UseSmallIcons                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CurrIndex                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionDetailsModifierRow_C*CurrRow                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DisplayMoreThreshold                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameplayModifierItemDefinition*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue                        (HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetSmallPreviewImageBrush_ReturnValue                   (None)
// class UTexture2D*                  CallFunc_GetBrushResourceAsTexture2D_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGameplayModifierItemDefinition*CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue1                       (HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetSmallPreviewImageBrush_ReturnValue1                  (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetBrushResourceAsTexture2D_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetShortDescription_ReturnValue                         (None)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionDetailsModifierRow_C*K2Node_DynamicCast_AsMission_Details_Modifier_Row                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionDetailsModifierRow_C*K2Node_DynamicCast_AsMission_Details_Modifier_Row1               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionDetailsModifierList_C::PopulateModifiers(bool UseTrunctatedList, class UClass* NameTextStyle, class UClass* DescriptionTextStyle, bool ShowMinusDescriptions, TArray<class UFortGameplayModifierItemDefinition*>& ModifierItems, bool UseSmallIcons, int32 CurrIndex, class UMissionDetailsModifierRow_C* CurrRow, int32 DisplayMoreThreshold, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable, class UFortGameplayModifierItemDefinition* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue3, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, const struct FSlateBrush& CallFunc_GetSmallPreviewImageBrush_ReturnValue, class UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, int32 CallFunc_Array_Length_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue4, bool CallFunc_Less_IntInt_ReturnValue1, class UFortGameplayModifierItemDefinition* CallFunc_Array_Get_Item1, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue1, int32 CallFunc_GetChildrenCount_ReturnValue, const struct FSlateBrush& CallFunc_GetSmallPreviewImageBrush_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue, class UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue1, class FText CallFunc_GetShortDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Variable1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UMissionDetailsModifierRow_C* K2Node_DynamicCast_AsMission_Details_Modifier_Row, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue5, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue1, class UMissionDetailsModifierRow_C* K2Node_DynamicCast_AsMission_Details_Modifier_Row1, bool K2Node_DynamicCast_bSuccess1, int32 Temp_int_Variable2, float Temp_float_Variable, int32 CallFunc_GetChildrenCount_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue1, int32 Temp_int_Variable3, bool CallFunc_LessEqual_IntInt_ReturnValue2, int32 Temp_int_Variable4, float Temp_float_Variable1, float K2Node_Select_Default, int32 Temp_int_Variable5, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierList_C", "PopulateModifiers");

	Params::UMissionDetailsModifierList_C_PopulateModifiers_Params Parms{};

	Parms.UseTrunctatedList = UseTrunctatedList;
	Parms.NameTextStyle = NameTextStyle;
	Parms.DescriptionTextStyle = DescriptionTextStyle;
	Parms.ShowMinusDescriptions = ShowMinusDescriptions;
	Parms.ModifierItems = ModifierItems;
	Parms.UseSmallIcons = UseSmallIcons;
	Parms.CurrIndex = CurrIndex;
	Parms.CurrRow = CurrRow;
	Parms.DisplayMoreThreshold = DisplayMoreThreshold;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue = CallFunc_GetLargePreviewImage_ReturnValue;
	Parms.CallFunc_GetSmallPreviewImageBrush_ReturnValue = CallFunc_GetSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_GetBrushResourceAsTexture2D_ReturnValue = CallFunc_GetBrushResourceAsTexture2D_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue = CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue1 = CallFunc_GetLargePreviewImage_ReturnValue1;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_GetSmallPreviewImageBrush_ReturnValue1 = CallFunc_GetSmallPreviewImageBrush_ReturnValue1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetBrushResourceAsTexture2D_ReturnValue1 = CallFunc_GetBrushResourceAsTexture2D_ReturnValue1;
	Parms.CallFunc_GetShortDescription_ReturnValue = CallFunc_GetShortDescription_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsMission_Details_Modifier_Row = K2Node_DynamicCast_AsMission_Details_Modifier_Row;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue1 = CallFunc_LessEqual_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue5 = CallFunc_Add_IntInt_ReturnValue5;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue1 = CallFunc_GetChildAt_ReturnValue1;
	Parms.K2Node_DynamicCast_AsMission_Details_Modifier_Row1 = K2Node_DynamicCast_AsMission_Details_Modifier_Row1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetChildrenCount_ReturnValue1 = CallFunc_GetChildrenCount_ReturnValue1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue1 = CallFunc_Subtract_IntInt_ReturnValue1;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Variable5 = Temp_int_Variable5;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}

}



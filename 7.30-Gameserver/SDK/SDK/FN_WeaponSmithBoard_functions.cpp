#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponSmithBoard.WeaponSmithBoard_C
// (Actor)

class UClass* AWeaponSmithBoard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponSmithBoard_C");

	return Clss;
}


// WeaponSmithBoard_C WeaponSmithBoard.Default__WeaponSmithBoard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponSmithBoard_C* AWeaponSmithBoard_C::GetDefaultObj()
{
	static class AWeaponSmithBoard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponSmithBoard_C*>(AWeaponSmithBoard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.GetCustomMeleeSchematics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeaponSmithBoard_C::GetCustomMeleeSchematics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "GetCustomMeleeSchematics");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.GetCustomRangedSchematics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeaponSmithBoard_C::GetCustomRangedSchematics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "GetCustomRangedSchematics");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateSceneWithCustomStoredMeleeSchematics
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortAccountItem*>    CustomizedMeleeWeaponSchematics                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FTransform                  HammerMinusTransform                                             (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FTransform                  SwordMinusTransform                                              (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// TArray<class UFortAccountItem*>    MeleeWeaponAccountItems                                          (Edit, BlueprintVisible, ZeroConstructor)
// TArray<class UFortSchematicItem*>  SchematicWpnArray                                                (Edit, BlueprintVisible, ZeroConstructor)
// TArray<class FText>                WpnTypes                                                         (Edit, BlueprintVisible, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAccountItem*>    CallFunc_GetAccountItemsByFilterType_OutItemList                 (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItem*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSecondaryCategory_ItemCategoryText                   (None)
// struct FSlateBrush                 CallFunc_GetSecondaryCategory_ItemCategoryBrush                  (None)
// bool                               CallFunc_GetSecondaryCategory_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTertiaryCategory_ItemCategoryText                    (None)
// struct FSlateBrush                 CallFunc_GetTertiaryCategory_ItemCategoryBrush                   (None)
// bool                               CallFunc_GetTertiaryCategory_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<class UFortSchematicItem*>  K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class UFortSchematicItem*          CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSchematicItem*          CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            CallFunc_GetBounds_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBoxSphereBounds            CallFunc_GetBounds_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult1                       (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class FText                        CallFunc_Array_Get_Item3                                         (None)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeaponSmithBoard_C::PopulateSceneWithCustomStoredMeleeSchematics(TArray<class UFortAccountItem*>& CustomizedMeleeWeaponSchematics, const struct FTransform& HammerMinusTransform, const struct FTransform& SwordMinusTransform, const TArray<class UFortAccountItem*>& MeleeWeaponAccountItems, const TArray<class UFortSchematicItem*>& SchematicWpnArray, const TArray<class FText>& WpnTypes, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult1, int32 CallFunc_Add_IntInt_ReturnValue1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByFilterType_OutItemList, int32 Temp_int_Array_Index_Variable1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortAccountItem* CallFunc_Array_Get_Item, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetSecondaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetSecondaryCategory_ItemCategoryBrush, bool CallFunc_GetSecondaryCategory_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_GetTertiaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetTertiaryCategory_ItemCategoryBrush, bool CallFunc_GetTertiaryCategory_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, TArray<class UFortSchematicItem*>& K2Node_MakeArray_Array1, class UFortSchematicItem* CallFunc_Array_Get_Item1, class UFortSchematicItem* CallFunc_Array_Get_Item2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue1, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult1, class FText CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_EqualEqual_TextText_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "PopulateSceneWithCustomStoredMeleeSchematics");

	Params::AWeaponSmithBoard_C_PopulateSceneWithCustomStoredMeleeSchematics_Params Parms{};

	Parms.CustomizedMeleeWeaponSchematics = CustomizedMeleeWeaponSchematics;
	Parms.HammerMinusTransform = HammerMinusTransform;
	Parms.SwordMinusTransform = SwordMinusTransform;
	Parms.MeleeWeaponAccountItems = MeleeWeaponAccountItems;
	Parms.SchematicWpnArray = SchematicWpnArray;
	Parms.WpnTypes = WpnTypes;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult1 = CallFunc_K2_SetRelativeTransform_SweepHitResult1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAccountItemsByFilterType_OutItemList = CallFunc_GetAccountItemsByFilterType_OutItemList;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item = K2Node_DynamicCast_AsFort_Schematic_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryText = CallFunc_GetSecondaryCategory_ItemCategoryText;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryBrush = CallFunc_GetSecondaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetSecondaryCategory_ReturnValue = CallFunc_GetSecondaryCategory_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryText = CallFunc_GetTertiaryCategory_ItemCategoryText;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryBrush = CallFunc_GetTertiaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetTertiaryCategory_ReturnValue = CallFunc_GetTertiaryCategory_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue;
	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1 = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue = CallFunc_GetWeaponMeshOverride_ReturnValue;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue1 = CallFunc_GetWeaponMeshOverride_ReturnValue1;
	Parms.CallFunc_GetBounds_ReturnValue = CallFunc_GetBounds_ReturnValue;
	Parms.CallFunc_GetBounds_ReturnValue1 = CallFunc_GetBounds_ReturnValue1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue1 = CallFunc_Multiply_VectorVector_ReturnValue1;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult = CallFunc_K2_AddLocalOffset_SweepHitResult;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult1 = CallFunc_K2_AddLocalOffset_SweepHitResult1;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue1 = CallFunc_EqualEqual_TextText_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateSceneFromCustomStoredRangedSchematics
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortAccountItem*>    CustomizedRangedWeaponSchematics                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FTransform                  RocketLauncherMinusTransform                                     (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FTransform                  ShotgunMinusTransform                                            (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FTransform                  PistolMinusTransform                                             (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FTransform                  SniperMinusTransform                                             (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FTransform                  AssaultMinusTransform                                            (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// TArray<class UFortAccountItem*>    RangedWeaponAccountItems                                         (Edit, BlueprintVisible, ZeroConstructor)
// TArray<class UFortSchematicItem*>  SchematicWpnArray                                                (Edit, BlueprintVisible, ZeroConstructor)
// TArray<class FText>                WpnTypes                                                         (Edit, BlueprintVisible, ZeroConstructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult2                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult3                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult4                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult5                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetSecondaryCategory_ItemCategoryText                   (None)
// struct FSlateBrush                 CallFunc_GetSecondaryCategory_ItemCategoryBrush                  (None)
// bool                               CallFunc_GetSecondaryCategory_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<class UFortSchematicItem*>  K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class UFortSchematicItem*          CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItem*          CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            CallFunc_GetBounds_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            CallFunc_GetBounds_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult1                       (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UFortSchematicItem*          CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItem*          CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            CallFunc_GetBounds_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            CallFunc_GetBounds_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult2                       (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult3                       (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItem*          CallFunc_Array_Get_Item5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item6                                         (None)
// struct FBoxSphereBounds            CallFunc_GetBounds_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult4                       (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeaponSmithBoard_C::PopulateSceneFromCustomStoredRangedSchematics(TArray<class UFortAccountItem*>& CustomizedRangedWeaponSchematics, const struct FTransform& RocketLauncherMinusTransform, const struct FTransform& ShotgunMinusTransform, const struct FTransform& PistolMinusTransform, const struct FTransform& SniperMinusTransform, const struct FTransform& AssaultMinusTransform, const TArray<class UFortAccountItem*>& RangedWeaponAccountItems, const TArray<class UFortSchematicItem*>& SchematicWpnArray, const TArray<class FText>& WpnTypes, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 Temp_int_Array_Index_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, int32 Temp_int_Loop_Counter_Variable, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult2, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult3, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult4, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult5, int32 Temp_int_Loop_Counter_Variable1, class UFortAccountItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_GetSecondaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetSecondaryCategory_ItemCategoryBrush, bool CallFunc_GetSecondaryCategory_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, TArray<class FText>& K2Node_MakeArray_Array, TArray<class UFortSchematicItem*>& K2Node_MakeArray_Array1, class UFortSchematicItem* CallFunc_Array_Get_Item1, bool CallFunc_IsValid_ReturnValue, class UFortSchematicItem* CallFunc_Array_Get_Item2, bool CallFunc_IsValid_ReturnValue1, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue1, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult1, class UFortSchematicItem* CallFunc_Array_Get_Item3, bool CallFunc_IsValid_ReturnValue2, class UFortSchematicItem* CallFunc_Array_Get_Item4, bool CallFunc_IsValid_ReturnValue3, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue2, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue2, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue3, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue2, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue3, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue2, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue3, const class FString& CallFunc_GetObjectName_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult3, bool CallFunc_Contains_ReturnValue, class UFortSchematicItem* CallFunc_Array_Get_Item5, bool CallFunc_IsValid_ReturnValue4, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue4, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue4, class FText CallFunc_Array_Get_Item6, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue4, bool CallFunc_EqualEqual_TextText_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue4, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult4, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "PopulateSceneFromCustomStoredRangedSchematics");

	Params::AWeaponSmithBoard_C_PopulateSceneFromCustomStoredRangedSchematics_Params Parms{};

	Parms.CustomizedRangedWeaponSchematics = CustomizedRangedWeaponSchematics;
	Parms.RocketLauncherMinusTransform = RocketLauncherMinusTransform;
	Parms.ShotgunMinusTransform = ShotgunMinusTransform;
	Parms.PistolMinusTransform = PistolMinusTransform;
	Parms.SniperMinusTransform = SniperMinusTransform;
	Parms.AssaultMinusTransform = AssaultMinusTransform;
	Parms.RangedWeaponAccountItems = RangedWeaponAccountItems;
	Parms.SchematicWpnArray = SchematicWpnArray;
	Parms.WpnTypes = WpnTypes;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult1 = CallFunc_K2_SetRelativeTransform_SweepHitResult1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult2 = CallFunc_K2_SetRelativeTransform_SweepHitResult2;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult3 = CallFunc_K2_SetRelativeTransform_SweepHitResult3;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult4 = CallFunc_K2_SetRelativeTransform_SweepHitResult4;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult5 = CallFunc_K2_SetRelativeTransform_SweepHitResult5;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item = K2Node_DynamicCast_AsFort_Schematic_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryText = CallFunc_GetSecondaryCategory_ItemCategoryText;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryBrush = CallFunc_GetSecondaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetSecondaryCategory_ReturnValue = CallFunc_GetSecondaryCategory_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue = CallFunc_GetWeaponMeshOverride_ReturnValue;
	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1 = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1;
	Parms.CallFunc_GetBounds_ReturnValue = CallFunc_GetBounds_ReturnValue;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue1 = CallFunc_GetWeaponMeshOverride_ReturnValue1;
	Parms.CallFunc_GetBounds_ReturnValue1 = CallFunc_GetBounds_ReturnValue1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult = CallFunc_K2_AddLocalOffset_SweepHitResult;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue1 = CallFunc_Multiply_VectorVector_ReturnValue1;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult1 = CallFunc_K2_AddLocalOffset_SweepHitResult1;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue2 = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue2;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue2 = CallFunc_GetWeaponMeshOverride_ReturnValue2;
	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue3 = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue3;
	Parms.CallFunc_GetBounds_ReturnValue2 = CallFunc_GetBounds_ReturnValue2;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue3 = CallFunc_GetWeaponMeshOverride_ReturnValue3;
	Parms.CallFunc_GetBounds_ReturnValue3 = CallFunc_GetBounds_ReturnValue3;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue2 = CallFunc_Multiply_VectorVector_ReturnValue2;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult2 = CallFunc_K2_AddLocalOffset_SweepHitResult2;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue3 = CallFunc_Multiply_VectorVector_ReturnValue3;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult3 = CallFunc_K2_AddLocalOffset_SweepHitResult3;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Array_Get_Item5 = CallFunc_Array_Get_Item5;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue4 = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue4;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue4 = CallFunc_GetWeaponMeshOverride_ReturnValue4;
	Parms.CallFunc_Array_Get_Item6 = CallFunc_Array_Get_Item6;
	Parms.CallFunc_GetBounds_ReturnValue4 = CallFunc_GetBounds_ReturnValue4;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue4 = CallFunc_Multiply_VectorVector_ReturnValue4;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult4 = CallFunc_K2_AddLocalOffset_SweepHitResult4;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.RandomizeMeleeSchematics
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortAccountItem*>    MeleeSchematicsForBoard                                          (Parm, OutParm, ZeroConstructor)
// struct FTransform                  HammerMinusTransform                                             (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FTransform                  SwordMinusTransform                                              (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// TArray<class UFortAccountItem*>    MeleeWeaponAccountItems                                          (Edit, BlueprintVisible, ZeroConstructor)
// TArray<class UFortSchematicItem*>  SchematicWpnArray                                                (Edit, BlueprintVisible, ZeroConstructor)
// TArray<class FText>                WpnTypes                                                         (Edit, BlueprintVisible, ZeroConstructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<class UFortSchematicItem*>  K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class UFortAccountItem*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetSecondaryCategory_ItemCategoryText                   (None)
// struct FSlateBrush                 CallFunc_GetSecondaryCategory_ItemCategoryBrush                  (None)
// bool                               CallFunc_GetSecondaryCategory_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTertiaryCategory_ItemCategoryText                    (None)
// struct FSlateBrush                 CallFunc_GetTertiaryCategory_ItemCategoryBrush                   (None)
// bool                               CallFunc_GetTertiaryCategory_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAccountItem*>    CallFunc_GetAccountItemsByFilterType_OutItemList                 (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item1                                         (None)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponSmithBoard_C::RandomizeMeleeSchematics(TArray<class UFortAccountItem*>* MeleeSchematicsForBoard, const struct FTransform& HammerMinusTransform, const struct FTransform& SwordMinusTransform, const TArray<class UFortAccountItem*>& MeleeWeaponAccountItems, const TArray<class UFortSchematicItem*>& SchematicWpnArray, const TArray<class FText>& WpnTypes, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable1, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, TArray<class UFortSchematicItem*>& K2Node_MakeArray_Array1, class UFortAccountItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_GetSecondaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetSecondaryCategory_ItemCategoryBrush, bool CallFunc_GetSecondaryCategory_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_GetTertiaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetTertiaryCategory_ItemCategoryBrush, bool CallFunc_GetTertiaryCategory_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByFilterType_OutItemList, int32 Temp_int_Loop_Counter_Variable1, class FText CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_EqualEqual_TextText_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "RandomizeMeleeSchematics");

	Params::AWeaponSmithBoard_C_RandomizeMeleeSchematics_Params Parms{};

	Parms.HammerMinusTransform = HammerMinusTransform;
	Parms.SwordMinusTransform = SwordMinusTransform;
	Parms.MeleeWeaponAccountItems = MeleeWeaponAccountItems;
	Parms.SchematicWpnArray = SchematicWpnArray;
	Parms.WpnTypes = WpnTypes;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item = K2Node_DynamicCast_AsFort_Schematic_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryText = CallFunc_GetSecondaryCategory_ItemCategoryText;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryBrush = CallFunc_GetSecondaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetSecondaryCategory_ReturnValue = CallFunc_GetSecondaryCategory_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryText = CallFunc_GetTertiaryCategory_ItemCategoryText;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryBrush = CallFunc_GetTertiaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetTertiaryCategory_ReturnValue = CallFunc_GetTertiaryCategory_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAccountItemsByFilterType_OutItemList = CallFunc_GetAccountItemsByFilterType_OutItemList;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue1 = CallFunc_EqualEqual_TextText_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (MeleeSchematicsForBoard != nullptr)
		*MeleeSchematicsForBoard = std::move(Parms.MeleeSchematicsForBoard);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.RandomizeRangedSchematics
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortSchematicItem*>  RangedSchematicsForBoard                                         (Parm, OutParm, ZeroConstructor)
// struct FTransform                  RocketLauncherMinusTransform                                     (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FTransform                  ShotgunMinusTransform                                            (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FTransform                  PistolMinusTransform                                             (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FTransform                  SniperMinusTransform                                             (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FTransform                  AssaultMinusTransform                                            (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// TArray<class UFortAccountItem*>    RangedWeaponAccountItems                                         (Edit, BlueprintVisible, ZeroConstructor)
// TArray<class UFortSchematicItem*>  SchematicWpnArray                                                (Edit, BlueprintVisible, ZeroConstructor)
// TArray<class FText>                WpnTypes                                                         (Edit, BlueprintVisible, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<class UFortSchematicItem*>  K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class UFortAccountItem*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetSecondaryCategory_ItemCategoryText                   (None)
// struct FSlateBrush                 CallFunc_GetSecondaryCategory_ItemCategoryBrush                  (None)
// bool                               CallFunc_GetSecondaryCategory_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAccountItem*>    CallFunc_GetAccountItemsByFilterType_OutItemList                 (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item1                                         (None)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponSmithBoard_C::RandomizeRangedSchematics(TArray<class UFortSchematicItem*>* RangedSchematicsForBoard, const struct FTransform& RocketLauncherMinusTransform, const struct FTransform& ShotgunMinusTransform, const struct FTransform& PistolMinusTransform, const struct FTransform& SniperMinusTransform, const struct FTransform& AssaultMinusTransform, const TArray<class UFortAccountItem*>& RangedWeaponAccountItems, const TArray<class UFortSchematicItem*>& SchematicWpnArray, const TArray<class FText>& WpnTypes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable1, bool CallFunc_Not_PreBool_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, TArray<class UFortSchematicItem*>& K2Node_MakeArray_Array1, class UFortAccountItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_GetSecondaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetSecondaryCategory_ItemCategoryBrush, bool CallFunc_GetSecondaryCategory_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByFilterType_OutItemList, int32 Temp_int_Loop_Counter_Variable1, class FText CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "RandomizeRangedSchematics");

	Params::AWeaponSmithBoard_C_RandomizeRangedSchematics_Params Parms{};

	Parms.RocketLauncherMinusTransform = RocketLauncherMinusTransform;
	Parms.ShotgunMinusTransform = ShotgunMinusTransform;
	Parms.PistolMinusTransform = PistolMinusTransform;
	Parms.SniperMinusTransform = SniperMinusTransform;
	Parms.AssaultMinusTransform = AssaultMinusTransform;
	Parms.RangedWeaponAccountItems = RangedWeaponAccountItems;
	Parms.SchematicWpnArray = SchematicWpnArray;
	Parms.WpnTypes = WpnTypes;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item = K2Node_DynamicCast_AsFort_Schematic_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryText = CallFunc_GetSecondaryCategory_ItemCategoryText;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryBrush = CallFunc_GetSecondaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetSecondaryCategory_ReturnValue = CallFunc_GetSecondaryCategory_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAccountItemsByFilterType_OutItemList = CallFunc_GetAccountItemsByFilterType_OutItemList;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (RangedSchematicsForBoard != nullptr)
		*RangedSchematicsForBoard = std::move(Parms.RangedSchematicsForBoard);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeaponSmithBoard_C::UpdateVisibility(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "UpdateVisibility");

	Params::AWeaponSmithBoard_C_UpdateVisibility_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateSceneWithBestMeleeWeaponSchematics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  HammerMinusTransform                                             (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FTransform                  SwordMinusTransform                                              (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// TArray<class UFortAccountItem*>    MeleeWeaponAccountItems                                          (Edit, BlueprintVisible, ZeroConstructor)
// TArray<class UFortSchematicItem*>  SchematicWpnArray                                                (Edit, BlueprintVisible, ZeroConstructor)
// TArray<class FText>                WpnTypes                                                         (Edit, BlueprintVisible, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAccountItem*>    CallFunc_GetAccountItemsByFilterType_OutItemList                 (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItem*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSecondaryCategory_ItemCategoryText                   (None)
// struct FSlateBrush                 CallFunc_GetSecondaryCategory_ItemCategoryBrush                  (None)
// bool                               CallFunc_GetSecondaryCategory_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTertiaryCategory_ItemCategoryText                    (None)
// struct FSlateBrush                 CallFunc_GetTertiaryCategory_ItemCategoryBrush                   (None)
// bool                               CallFunc_GetTertiaryCategory_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<class UFortSchematicItem*>  K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class UFortSchematicItem*          CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSchematicItem*          CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            CallFunc_GetBounds_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBoxSphereBounds            CallFunc_GetBounds_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult1                       (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class FText                        CallFunc_Array_Get_Item3                                         (None)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeaponSmithBoard_C::PopulateSceneWithBestMeleeWeaponSchematics(const struct FTransform& HammerMinusTransform, const struct FTransform& SwordMinusTransform, const TArray<class UFortAccountItem*>& MeleeWeaponAccountItems, const TArray<class UFortSchematicItem*>& SchematicWpnArray, const TArray<class FText>& WpnTypes, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult1, int32 CallFunc_Add_IntInt_ReturnValue1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByFilterType_OutItemList, int32 Temp_int_Array_Index_Variable1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortAccountItem* CallFunc_Array_Get_Item, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetSecondaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetSecondaryCategory_ItemCategoryBrush, bool CallFunc_GetSecondaryCategory_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_GetTertiaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetTertiaryCategory_ItemCategoryBrush, bool CallFunc_GetTertiaryCategory_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, TArray<class UFortSchematicItem*>& K2Node_MakeArray_Array1, class UFortSchematicItem* CallFunc_Array_Get_Item1, class UFortSchematicItem* CallFunc_Array_Get_Item2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue1, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult1, class FText CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_EqualEqual_TextText_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "PopulateSceneWithBestMeleeWeaponSchematics");

	Params::AWeaponSmithBoard_C_PopulateSceneWithBestMeleeWeaponSchematics_Params Parms{};

	Parms.HammerMinusTransform = HammerMinusTransform;
	Parms.SwordMinusTransform = SwordMinusTransform;
	Parms.MeleeWeaponAccountItems = MeleeWeaponAccountItems;
	Parms.SchematicWpnArray = SchematicWpnArray;
	Parms.WpnTypes = WpnTypes;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult1 = CallFunc_K2_SetRelativeTransform_SweepHitResult1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAccountItemsByFilterType_OutItemList = CallFunc_GetAccountItemsByFilterType_OutItemList;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item = K2Node_DynamicCast_AsFort_Schematic_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryText = CallFunc_GetSecondaryCategory_ItemCategoryText;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryBrush = CallFunc_GetSecondaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetSecondaryCategory_ReturnValue = CallFunc_GetSecondaryCategory_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryText = CallFunc_GetTertiaryCategory_ItemCategoryText;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryBrush = CallFunc_GetTertiaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetTertiaryCategory_ReturnValue = CallFunc_GetTertiaryCategory_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue;
	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1 = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue = CallFunc_GetWeaponMeshOverride_ReturnValue;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue1 = CallFunc_GetWeaponMeshOverride_ReturnValue1;
	Parms.CallFunc_GetBounds_ReturnValue = CallFunc_GetBounds_ReturnValue;
	Parms.CallFunc_GetBounds_ReturnValue1 = CallFunc_GetBounds_ReturnValue1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue1 = CallFunc_Multiply_VectorVector_ReturnValue1;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult = CallFunc_K2_AddLocalOffset_SweepHitResult;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult1 = CallFunc_K2_AddLocalOffset_SweepHitResult1;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue1 = CallFunc_EqualEqual_TextText_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateSceneWithBestRangedWeaponSchematics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  RocketLauncherMinusTransform                                     (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FTransform                  ShotgunMinusTransform                                            (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FTransform                  PistolMinusTransform                                             (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FTransform                  SniperMinusTransform                                             (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FTransform                  AssaultMinusTransform                                            (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// TArray<class UFortAccountItem*>    RangedWeaponAccountItems                                         (Edit, BlueprintVisible, ZeroConstructor)
// TArray<class UFortSchematicItem*>  SchematicWpnArray                                                (Edit, BlueprintVisible, ZeroConstructor)
// TArray<class FText>                WpnTypes                                                         (Edit, BlueprintVisible, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult2                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult3                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult4                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult5                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAccountItem*>    CallFunc_GetAccountItemsByFilterType_OutItemList                 (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UFortAccountItem*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSecondaryCategory_ItemCategoryText                   (None)
// struct FSlateBrush                 CallFunc_GetSecondaryCategory_ItemCategoryBrush                  (None)
// bool                               CallFunc_GetSecondaryCategory_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortSchematicItem*>  K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItem*          CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItem*          CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            CallFunc_GetBounds_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            CallFunc_GetBounds_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult1                       (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UFortSchematicItem*          CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItem*          CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            CallFunc_GetBounds_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            CallFunc_GetBounds_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult2                       (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult3                       (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItem*          CallFunc_Array_Get_Item5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item6                                         (None)
// struct FBoxSphereBounds            CallFunc_GetBounds_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult4                       (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeaponSmithBoard_C::PopulateSceneWithBestRangedWeaponSchematics(const struct FTransform& RocketLauncherMinusTransform, const struct FTransform& ShotgunMinusTransform, const struct FTransform& PistolMinusTransform, const struct FTransform& SniperMinusTransform, const struct FTransform& AssaultMinusTransform, const TArray<class UFortAccountItem*>& RangedWeaponAccountItems, const TArray<class UFortSchematicItem*>& SchematicWpnArray, const TArray<class FText>& WpnTypes, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, int32 Temp_int_Loop_Counter_Variable, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult2, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult3, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult4, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult5, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByFilterType_OutItemList, int32 CallFunc_Add_IntInt_ReturnValue1, TArray<class FText>& K2Node_MakeArray_Array, class UFortAccountItem* CallFunc_Array_Get_Item, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetSecondaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetSecondaryCategory_ItemCategoryBrush, bool CallFunc_GetSecondaryCategory_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UFortSchematicItem*>& K2Node_MakeArray_Array1, bool CallFunc_BooleanAND_ReturnValue, class UFortSchematicItem* CallFunc_Array_Get_Item1, bool CallFunc_IsValid_ReturnValue, class UFortSchematicItem* CallFunc_Array_Get_Item2, bool CallFunc_IsValid_ReturnValue1, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue1, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult1, class UFortSchematicItem* CallFunc_Array_Get_Item3, bool CallFunc_IsValid_ReturnValue2, class UFortSchematicItem* CallFunc_Array_Get_Item4, bool CallFunc_IsValid_ReturnValue3, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue2, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue2, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue3, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue2, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue3, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue2, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue3, const class FString& CallFunc_GetObjectName_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult3, bool CallFunc_Contains_ReturnValue, class UFortSchematicItem* CallFunc_Array_Get_Item5, bool CallFunc_IsValid_ReturnValue4, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue4, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue4, class FText CallFunc_Array_Get_Item6, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue4, bool CallFunc_EqualEqual_TextText_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue4, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult4, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "PopulateSceneWithBestRangedWeaponSchematics");

	Params::AWeaponSmithBoard_C_PopulateSceneWithBestRangedWeaponSchematics_Params Parms{};

	Parms.RocketLauncherMinusTransform = RocketLauncherMinusTransform;
	Parms.ShotgunMinusTransform = ShotgunMinusTransform;
	Parms.PistolMinusTransform = PistolMinusTransform;
	Parms.SniperMinusTransform = SniperMinusTransform;
	Parms.AssaultMinusTransform = AssaultMinusTransform;
	Parms.RangedWeaponAccountItems = RangedWeaponAccountItems;
	Parms.SchematicWpnArray = SchematicWpnArray;
	Parms.WpnTypes = WpnTypes;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult1 = CallFunc_K2_SetRelativeTransform_SweepHitResult1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult2 = CallFunc_K2_SetRelativeTransform_SweepHitResult2;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult3 = CallFunc_K2_SetRelativeTransform_SweepHitResult3;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult4 = CallFunc_K2_SetRelativeTransform_SweepHitResult4;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult5 = CallFunc_K2_SetRelativeTransform_SweepHitResult5;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_GetAccountItemsByFilterType_OutItemList = CallFunc_GetAccountItemsByFilterType_OutItemList;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item = K2Node_DynamicCast_AsFort_Schematic_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryText = CallFunc_GetSecondaryCategory_ItemCategoryText;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryBrush = CallFunc_GetSecondaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetSecondaryCategory_ReturnValue = CallFunc_GetSecondaryCategory_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue = CallFunc_GetWeaponMeshOverride_ReturnValue;
	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1 = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1;
	Parms.CallFunc_GetBounds_ReturnValue = CallFunc_GetBounds_ReturnValue;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue1 = CallFunc_GetWeaponMeshOverride_ReturnValue1;
	Parms.CallFunc_GetBounds_ReturnValue1 = CallFunc_GetBounds_ReturnValue1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult = CallFunc_K2_AddLocalOffset_SweepHitResult;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue1 = CallFunc_Multiply_VectorVector_ReturnValue1;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult1 = CallFunc_K2_AddLocalOffset_SweepHitResult1;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue2 = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue2;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue2 = CallFunc_GetWeaponMeshOverride_ReturnValue2;
	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue3 = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue3;
	Parms.CallFunc_GetBounds_ReturnValue2 = CallFunc_GetBounds_ReturnValue2;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue3 = CallFunc_GetWeaponMeshOverride_ReturnValue3;
	Parms.CallFunc_GetBounds_ReturnValue3 = CallFunc_GetBounds_ReturnValue3;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue2 = CallFunc_Multiply_VectorVector_ReturnValue2;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult2 = CallFunc_K2_AddLocalOffset_SweepHitResult2;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue3 = CallFunc_Multiply_VectorVector_ReturnValue3;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult3 = CallFunc_K2_AddLocalOffset_SweepHitResult3;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Array_Get_Item5 = CallFunc_Array_Get_Item5;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue4 = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue4;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue4 = CallFunc_GetWeaponMeshOverride_ReturnValue4;
	Parms.CallFunc_Array_Get_Item6 = CallFunc_Array_Get_Item6;
	Parms.CallFunc_GetBounds_ReturnValue4 = CallFunc_GetBounds_ReturnValue4;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue4 = CallFunc_Multiply_VectorVector_ReturnValue4;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult4 = CallFunc_K2_AddLocalOffset_SweepHitResult4;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.Populate Skeletal Mesh Slots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponSmithBoard_C::Populate_Skeletal_Mesh_Slots(class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue1, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue2, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue3, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue2, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue3, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue4, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "Populate Skeletal Mesh Slots");

	Params::AWeaponSmithBoard_C_Populate_Skeletal_Mesh_Slots_Params Parms{};

	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue;
	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1 = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue = CallFunc_GetWeaponMeshOverride_ReturnValue;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue1 = CallFunc_GetWeaponMeshOverride_ReturnValue1;
	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue2 = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue2;
	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue3 = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue3;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue2 = CallFunc_GetWeaponMeshOverride_ReturnValue2;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue3 = CallFunc_GetWeaponMeshOverride_ReturnValue3;
	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue4 = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue4;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue4 = CallFunc_GetWeaponMeshOverride_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.Populate Ranged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FavSchematicCount                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAccountItem*>    CallFunc_GetAccountItemsByType_Items                             (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface2               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface3               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface4               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess9                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeaponSmithBoard_C::Populate_Ranged(int32 FavSchematicCount, int32 Temp_int_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable1, int32 Temp_int_Variable2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Variable3, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByType_Items, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, class UFortAccountItem* CallFunc_Array_Get_Item, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue1, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface2, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_HasMatchingGameplayTag_ReturnValue2, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface3, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_HasMatchingGameplayTag_ReturnValue3, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface4, bool K2Node_DynamicCast_bSuccess4, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_HasMatchingGameplayTag_ReturnValue4, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item1, bool K2Node_DynamicCast_bSuccess6, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item2, bool K2Node_DynamicCast_bSuccess7, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item3, bool K2Node_DynamicCast_bSuccess8, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item4, bool K2Node_DynamicCast_bSuccess9, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable2, int32 Temp_int_Variable4, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue5, bool Temp_bool_Variable3, bool Temp_bool_Variable4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "Populate Ranged");

	Params::AWeaponSmithBoard_C_Populate_Ranged_Params Parms{};

	Parms.FavSchematicCount = FavSchematicCount;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.CallFunc_GetAccountItemsByType_Items = CallFunc_GetAccountItemsByType_Items;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface1 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue1 = CallFunc_HasMatchingGameplayTag_ReturnValue1;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface2 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue2 = CallFunc_HasMatchingGameplayTag_ReturnValue2;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface3 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface3;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue3 = CallFunc_HasMatchingGameplayTag_ReturnValue3;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface4 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface4;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item = K2Node_DynamicCast_AsFort_Schematic_Item;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue4 = CallFunc_HasMatchingGameplayTag_ReturnValue4;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item1 = K2Node_DynamicCast_AsFort_Schematic_Item1;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item2 = K2Node_DynamicCast_AsFort_Schematic_Item2;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item3 = K2Node_DynamicCast_AsFort_Schematic_Item3;
	Parms.K2Node_DynamicCast_bSuccess8 = K2Node_DynamicCast_bSuccess8;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item4 = K2Node_DynamicCast_AsFort_Schematic_Item4;
	Parms.K2Node_DynamicCast_bSuccess9 = K2Node_DynamicCast_bSuccess9;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;
	Parms.CallFunc_Add_IntInt_ReturnValue5 = CallFunc_Add_IntInt_ReturnValue5;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.Generate StaticMesh Array
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkeletalMeshComponent*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)

void AWeaponSmithBoard_C::Generate_StaticMesh_Array(TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "Generate StaticMesh Array");

	Params::AWeaponSmithBoard_C_Generate_StaticMesh_Array_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.Populate Schematic Favs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FavSchematicCount                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAccountItem*>    CallFunc_GetAccountItemsByType_Items                             (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFavorite_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeaponSmithBoard_C::Populate_Schematic_Favs(int32 FavSchematicCount, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByType_Items, int32 CallFunc_Add_IntInt_ReturnValue1, class UFortAccountItem* CallFunc_Array_Get_Item, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsFavorite_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "Populate Schematic Favs");

	Params::AWeaponSmithBoard_C_Populate_Schematic_Favs_Params Parms{};

	Parms.FavSchematicCount = FavSchematicCount;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAccountItemsByType_Items = CallFunc_GetAccountItemsByType_Items;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item = K2Node_DynamicCast_AsFort_Schematic_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsFavorite_ReturnValue = CallFunc_IsFavorite_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FavSchematicCount                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortSchematicItem*>  FavSchematics                                                    (Edit, BlueprintVisible, ZeroConstructor)
// bool                               NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeaponSmithBoard_C::UserConstructionScript(int32 FavSchematicCount, const TArray<class UFortSchematicItem*>& FavSchematics, bool NewLocalVar_0)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "UserConstructionScript");

	Params::AWeaponSmithBoard_C_UserConstructionScript_Params Parms{};

	Parms.FavSchematicCount = FavSchematicCount;
	Parms.FavSchematics = FavSchematics;
	Parms.NewLocalVar_0 = NewLocalVar_0;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.OnLoaded_2931F78441AF4AD6B643BEB635F904F1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponSmithBoard_C::OnLoaded_2931F78441AF4AD6B643BEB635F904F1(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "OnLoaded_2931F78441AF4AD6B643BEB635F904F1");

	Params::AWeaponSmithBoard_C_OnLoaded_2931F78441AF4AD6B643BEB635F904F1_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AWeaponSmithBoard_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.LoadAsync
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UStaticMesh>  StaticMeshAsset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UStaticMeshComponent*        MeshComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponSmithBoard_C::LoadAsync(TSoftObjectPtr<class UStaticMesh> StaticMeshAsset, class UStaticMeshComponent* MeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "LoadAsync");

	Params::AWeaponSmithBoard_C_LoadAsync_Params Parms{};

	Parms.StaticMeshAsset = StaticMeshAsset;
	Parms.MeshComponent = MeshComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateWeaponBoard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWeaponSmithBoardOrganizationEnumOrganization                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponSmithBoard_C::PopulateWeaponBoard(enum class EWeaponSmithBoardOrganizationEnum Organization)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "PopulateWeaponBoard");

	Params::AWeaponSmithBoard_C_PopulateWeaponBoard_Params Parms{};

	Parms.Organization = Organization;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.CameraChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFrontEndCamera         NewCamera                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         OldCamera                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponSmithBoard_C::CameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "CameraChanged");

	Params::AWeaponSmithBoard_C_CameraChanged_Params Parms{};

	Parms.NewCamera = NewCamera;
	Parms.OldCamera = OldCamera;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.ExecuteUbergraph_WeaponSmithBoard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UStaticMesh>  K2Node_CustomEvent_StaticMeshAsset                               (HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_MeshComponent                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// enum class EWeaponSmithBoardOrganizationEnumK2Node_CustomEvent_Organization                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         K2Node_CustomEvent_NewCamera                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         K2Node_CustomEvent_OldCamera                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortSchematicItem*>  CallFunc_RandomizeRangedSchematics_RangedSchematicsForBoard      (ZeroConstructor, ReferenceParm)
// TArray<class UFortAccountItem*>    CallFunc_RandomizeMeleeSchematics_MeleeSchematicsForBoard        (ZeroConstructor, ReferenceParm)

void AWeaponSmithBoard_C::ExecuteUbergraph_WeaponSmithBoard(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UStaticMesh> K2Node_CustomEvent_StaticMeshAsset, class UStaticMeshComponent* K2Node_CustomEvent_MeshComponent, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class EWeaponSmithBoardOrganizationEnum K2Node_CustomEvent_Organization, bool K2Node_SwitchEnum_CmpSuccess, class UObject* Temp_object_Variable, enum class EFrontEndCamera K2Node_CustomEvent_NewCamera, enum class EFrontEndCamera K2Node_CustomEvent_OldCamera, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, TArray<class UFortSchematicItem*>& CallFunc_RandomizeRangedSchematics_RangedSchematicsForBoard, TArray<class UFortAccountItem*>& CallFunc_RandomizeMeleeSchematics_MeleeSchematicsForBoard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "ExecuteUbergraph_WeaponSmithBoard");

	Params::AWeaponSmithBoard_C_ExecuteUbergraph_WeaponSmithBoard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_StaticMeshAsset = K2Node_CustomEvent_StaticMeshAsset;
	Parms.K2Node_CustomEvent_MeshComponent = K2Node_CustomEvent_MeshComponent;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CustomEvent_Organization = K2Node_CustomEvent_Organization;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_NewCamera = K2Node_CustomEvent_NewCamera;
	Parms.K2Node_CustomEvent_OldCamera = K2Node_CustomEvent_OldCamera;
	Parms.K2Node_DynamicCast_AsStatic_Mesh = K2Node_DynamicCast_AsStatic_Mesh;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_RandomizeRangedSchematics_RangedSchematicsForBoard = CallFunc_RandomizeRangedSchematics_RangedSchematicsForBoard;
	Parms.CallFunc_RandomizeMeleeSchematics_MeleeSchematicsForBoard = CallFunc_RandomizeMeleeSchematics_MeleeSchematicsForBoard;

	UObject::ProcessEvent(Func, &Parms);

}

}



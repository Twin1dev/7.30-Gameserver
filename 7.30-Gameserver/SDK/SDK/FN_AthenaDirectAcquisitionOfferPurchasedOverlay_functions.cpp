#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C
// (None)

class UClass* UAthenaDirectAcquisitionOfferPurchasedOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaDirectAcquisitionOfferPurchasedOverlay_C");

	return Clss;
}


// AthenaDirectAcquisitionOfferPurchasedOverlay_C AthenaDirectAcquisitionOfferPurchasedOverlay.Default__AthenaDirectAcquisitionOfferPurchasedOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaDirectAcquisitionOfferPurchasedOverlay_C* UAthenaDirectAcquisitionOfferPurchasedOverlay_C::GetDefaultObj()
{
	static class UAthenaDirectAcquisitionOfferPurchasedOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaDirectAcquisitionOfferPurchasedOverlay_C*>(UAthenaDirectAcquisitionOfferPurchasedOverlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Mini Bundle Item Location
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Bundle_Item_Index                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBox*              HBox_Row                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Bundle_Item_Index__local_                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMod_Remainder                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBox*              K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBox*              K2Node_Select1_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::Mini_Bundle_Item_Location(int32 Bundle_Item_Index, class UHorizontalBox** HBox_Row, int32 Bundle_Item_Index__local_, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, float CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UHorizontalBox* K2Node_Select_Default, class UHorizontalBox* K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedOverlay_C", "Mini Bundle Item Location");

	Params::UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Mini_Bundle_Item_Location_Params Parms{};

	Parms.Bundle_Item_Index = Bundle_Item_Index;
	Parms.Bundle_Item_Index__local_ = Bundle_Item_Index__local_;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_FMod_Remainder = CallFunc_FMod_Remainder;
	Parms.CallFunc_FMod_ReturnValue = CallFunc_FMod_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (HBox_Row != nullptr)
		*HBox_Row = Parms.HBox_Row;

}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Bundle Item Anim Speed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Speed                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::Bundle_Item_Anim_Speed(float* Speed, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedOverlay_C", "Bundle Item Anim Speed");

	Params::UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Bundle_Item_Anim_Speed_Params Parms{};

	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue1 = CallFunc_SelectFloat_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (Speed != nullptr)
		*Speed = Parms.Speed;

}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Get Bundle Info from Item Def
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItemDefinition*  Item_Definition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBundledItemInfo            Bundled_Item_Info                                                (Parm, OutParm)
// bool                               bFoundItem                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItemDefinition*  Item_Definition__local_                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBundledItemInfo            Bundled_Item_Info__local_                                        (Edit, BlueprintVisible)
// bool                               bFoundItem__local_                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPersistentName_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBundledItemInfo>    CallFunc_GetDynamicBundleItems_Items                             (ZeroConstructor, ReferenceParm)
// struct FBundledItemInfo            CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::Get_Bundle_Info_from_Item_Def(class UFortAccountItemDefinition* Item_Definition, struct FBundledItemInfo* Bundled_Item_Info, bool* bFoundItem, class UFortAccountItemDefinition* Item_Definition__local_, const struct FBundledItemInfo& Bundled_Item_Info__local_, bool bFoundItem__local_, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, const class FString& CallFunc_GetPersistentName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, TArray<struct FBundledItemInfo>& CallFunc_GetDynamicBundleItems_Items, const struct FBundledItemInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedOverlay_C", "Get Bundle Info from Item Def");

	Params::UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Get_Bundle_Info_from_Item_Def_Params Parms{};

	Parms.Item_Definition = Item_Definition;
	Parms.Item_Definition__local_ = Item_Definition__local_;
	Parms.Bundled_Item_Info__local_ = Bundled_Item_Info__local_;
	Parms.bFoundItem__local_ = bFoundItem__local_;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_GetPersistentName_ReturnValue = CallFunc_GetPersistentName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetDynamicBundleItems_Items = CallFunc_GetDynamicBundleItems_Items;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Bundled_Item_Info != nullptr)
		*Bundled_Item_Info = std::move(Parms.Bundled_Item_Info);

	if (bFoundItem != nullptr)
		*bFoundItem = Parms.bFoundItem;

}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.PopScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::PopScreen(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedOverlay_C", "PopScreen");

	Params::UAthenaDirectAcquisitionOfferPurchasedOverlay_C_PopScreen_Params Parms{};

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::HandleBack(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedOverlay_C", "HandleBack");

	Params::UAthenaDirectAcquisitionOfferPurchasedOverlay_C_HandleBack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.UpdateFromOffer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItemDefinition*  Item_Definition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Grant_Quantity__local_                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  Item_Definition__local_                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBundledItemInfo            CallFunc_Get_Bundle_Info_from_Item_Def_Bundled_Item_Info         (None)
// bool                               CallFunc_Get_Bundle_Info_from_Item_Def_bFoundItem                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECatalogOfferType       CallFunc_GetOfferType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetName_ReturnValue                                     (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECatalogOfferType       CallFunc_GetOfferType_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGrantedItemQuantity_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::UpdateFromOffer(class UFortAccountItemDefinition* Item_Definition, int32 Grant_Quantity__local_, class UFortAccountItemDefinition* Item_Definition__local_, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue1, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue1, const struct FBundledItemInfo& CallFunc_Get_Bundle_Info_from_Item_Def_Bundled_Item_Info, bool CallFunc_Get_Bundle_Info_from_Item_Def_bFoundItem, class FText CallFunc_GetDisplayName_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, enum class ECatalogOfferType CallFunc_GetOfferType_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue2, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue3, enum class ECatalogOfferType CallFunc_GetOfferType_ReturnValue1, int32 CallFunc_GetGrantedItemQuantity_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedOverlay_C", "UpdateFromOffer");

	Params::UAthenaDirectAcquisitionOfferPurchasedOverlay_C_UpdateFromOffer_Params Parms{};

	Parms.Item_Definition = Item_Definition;
	Parms.Grant_Quantity__local_ = Grant_Quantity__local_;
	Parms.Item_Definition__local_ = Item_Definition__local_;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue1 = CallFunc_GetDynamicMaterial_ReturnValue1;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue1 = CallFunc_MakeLiteralName_ReturnValue1;
	Parms.CallFunc_Get_Bundle_Info_from_Item_Def_Bundled_Item_Info = CallFunc_Get_Bundle_Info_from_Item_Def_Bundled_Item_Info;
	Parms.CallFunc_Get_Bundle_Info_from_Item_Def_bFoundItem = CallFunc_Get_Bundle_Info_from_Item_Def_bFoundItem;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetOfferType_ReturnValue = CallFunc_GetOfferType_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue1 = CallFunc_GetOfferInfo_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetName_ReturnValue = CallFunc_GetName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue2 = CallFunc_GetOfferInfo_ReturnValue2;
	Parms.CallFunc_GetOfferInfo_ReturnValue3 = CallFunc_GetOfferInfo_ReturnValue3;
	Parms.CallFunc_GetOfferType_ReturnValue1 = CallFunc_GetOfferType_ReturnValue1;
	Parms.CallFunc_GetGrantedItemQuantity_ReturnValue = CallFunc_GetGrantedItemQuantity_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.OnOfferSet
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::OnOfferSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedOverlay_C", "OnOfferSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedOverlay_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedOverlay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.WidgetAnimationEvt_Purchased!_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::WidgetAnimationEvt_Purchased__K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedOverlay_C", "WidgetAnimationEvt_Purchased!_K2Node_WidgetAnimationEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Remove Widget and Return to Last Menu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::Remove_Widget_and_Return_to_Last_Menu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedOverlay_C", "Remove Widget and Return to Last Menu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Show Next Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::Show_Next_Item()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedOverlay_C", "Show Next Item");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.BundleBlurOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::BundleBlurOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedOverlay_C", "BundleBlurOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.WidgetAnimationEvt_Purchased! (Bundle Item)_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::WidgetAnimationEvt_Purchased___Bundle_Item__K2Node_WidgetAnimationEvent_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedOverlay_C", "WidgetAnimationEvt_Purchased! (Bundle Item)_K2Node_WidgetAnimationEvent_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.WidgetAnimationEvt_Purchased! (Bundle Item) - FAST_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::WidgetAnimationEvt_Purchased___Bundle_Item__Minus_FAST_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedOverlay_C", "WidgetAnimationEvt_Purchased! (Bundle Item) - FAST_K2Node_WidgetAnimationEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Init Bundle Layout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::Init_Bundle_Layout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedOverlay_C", "Init Bundle Layout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Populate Bundle Mini-Cards
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::Populate_Bundle_MiniMinusCards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedOverlay_C", "Populate Bundle Mini-Cards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Show Bundle Mini Item Card
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::Show_Bundle_Mini_Item_Card()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedOverlay_C", "Show Bundle Mini Item Card");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedOverlay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumGrantedItems_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECatalogOfferType       CallFunc_GetOfferType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECatalogOfferType       CallFunc_GetOfferType_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECatalogOfferType       CallFunc_GetOfferType_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBox*              CallFunc_Mini_Bundle_Item_Location_HBox_Row                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECatalogOfferType       CallFunc_GetOfferType_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECatalogOfferType       CallFunc_GetOfferType_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  CallFunc_GetGrantedItemDefinition_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItemDefinition*  K2Node_DynamicCast_AsFort_Account_Item_Definition                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItemDefinition*  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Bundle_Item_Anim_Speed_speed                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Bundle_Item_Anim_Speed_speed1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Bundle_Item_Anim_Speed_speed2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetAnimation*            K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_SlotAsUniformGridSlot_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBundleItemMiniCardWidget_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPurchasedItemInfo          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  K2Node_DynamicCast_AsFort_Account_Item_Definition1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBundleItemMiniCardWidget_C* CallFunc_Array_Get_Item1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedOverlay(int32 EntryPoint, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue1, int32 CallFunc_GetNumGrantedItems_ReturnValue, enum class ECatalogOfferType CallFunc_GetOfferType_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Variable, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue2, bool Temp_bool_Variable1, enum class ECatalogOfferType CallFunc_GetOfferType_ReturnValue1, bool Temp_bool_IsClosed_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue3, int32 Temp_int_Loop_Counter_Variable, enum class ECatalogOfferType CallFunc_GetOfferType_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, int32 Temp_int_Array_Index_Variable, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue4, class UHorizontalBox* CallFunc_Mini_Bundle_Item_Location_HBox_Row, enum class ECatalogOfferType CallFunc_GetOfferType_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, enum class ESlateVisibility Temp_byte_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue5, bool Temp_bool_Variable2, enum class ECatalogOfferType CallFunc_GetOfferType_ReturnValue4, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue6, class UFortAccountItemDefinition* CallFunc_GetGrantedItemDefinition_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue1, bool Temp_bool_Variable3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UFortAccountItemDefinition* K2Node_DynamicCast_AsFort_Account_Item_Definition, bool K2Node_DynamicCast_bSuccess, class UFortAccountItemDefinition* K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_Bundle_Item_Anim_Speed_speed, float CallFunc_Bundle_Item_Anim_Speed_speed1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, float CallFunc_Bundle_Item_Anim_Speed_speed2, bool CallFunc_Greater_FloatFloat_ReturnValue, class UWidgetAnimation* K2Node_Select1_Default, class UWidgetAnimation* K2Node_Select2_Default, class UUniformGridSlot* CallFunc_SlotAsUniformGridSlot_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UBundleItemMiniCardWidget_C* CallFunc_Create_ReturnValue, const struct FPurchasedItemInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue1, class UFortAccountItemDefinition* K2Node_DynamicCast_AsFort_Account_Item_Definition1, bool K2Node_DynamicCast_bSuccess1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, class UBundleItemMiniCardWidget_C* CallFunc_Array_Get_Item1, enum class ESlateVisibility K2Node_Select3_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedOverlay_C", "ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedOverlay");

	Params::UAthenaDirectAcquisitionOfferPurchasedOverlay_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedOverlay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue1 = CallFunc_GetOfferInfo_ReturnValue1;
	Parms.CallFunc_GetNumGrantedItems_ReturnValue = CallFunc_GetNumGrantedItems_ReturnValue;
	Parms.CallFunc_GetOfferType_ReturnValue = CallFunc_GetOfferType_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOfferInfo_ReturnValue2 = CallFunc_GetOfferInfo_ReturnValue2;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_GetOfferType_ReturnValue1 = CallFunc_GetOfferType_ReturnValue1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_GetOfferInfo_ReturnValue3 = CallFunc_GetOfferInfo_ReturnValue3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetOfferType_ReturnValue2 = CallFunc_GetOfferType_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOfferInfo_ReturnValue4 = CallFunc_GetOfferInfo_ReturnValue4;
	Parms.CallFunc_Mini_Bundle_Item_Location_HBox_Row = CallFunc_Mini_Bundle_Item_Location_HBox_Row;
	Parms.CallFunc_GetOfferType_ReturnValue3 = CallFunc_GetOfferType_ReturnValue3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue5 = CallFunc_GetOfferInfo_ReturnValue5;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetOfferType_ReturnValue4 = CallFunc_GetOfferType_ReturnValue4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue4 = CallFunc_EqualEqual_ByteByte_ReturnValue4;
	Parms.CallFunc_GetOfferInfo_ReturnValue6 = CallFunc_GetOfferInfo_ReturnValue6;
	Parms.CallFunc_GetGrantedItemDefinition_ReturnValue = CallFunc_GetGrantedItemDefinition_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue1 = CallFunc_PlayAnimation_ReturnValue1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item_Definition = K2Node_DynamicCast_AsFort_Account_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Bundle_Item_Anim_Speed_speed = CallFunc_Bundle_Item_Anim_Speed_speed;
	Parms.CallFunc_Bundle_Item_Anim_Speed_speed1 = CallFunc_Bundle_Item_Anim_Speed_speed1;
	Parms.CallFunc_PlayAnimation_ReturnValue2 = CallFunc_PlayAnimation_ReturnValue2;
	Parms.CallFunc_Bundle_Item_Anim_Speed_speed2 = CallFunc_Bundle_Item_Anim_Speed_speed2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_SlotAsUniformGridSlot_ReturnValue = CallFunc_SlotAsUniformGridSlot_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue3 = CallFunc_PlayAnimation_ReturnValue3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue1 = CallFunc_GetItemDefinitionBP_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_Account_Item_Definition1 = K2Node_DynamicCast_AsFort_Account_Item_Definition1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



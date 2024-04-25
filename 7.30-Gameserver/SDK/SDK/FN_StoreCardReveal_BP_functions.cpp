#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StoreCardReveal_BP.StoreCardReveal_BP_C
// (Actor)

class UClass* AStoreCardReveal_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StoreCardReveal_BP_C");

	return Clss;
}


// StoreCardReveal_BP_C StoreCardReveal_BP.Default__StoreCardReveal_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStoreCardReveal_BP_C* AStoreCardReveal_BP_C::GetDefaultObj()
{
	static class AStoreCardReveal_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStoreCardReveal_BP_C*>(AStoreCardReveal_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetVisibilityByItemDef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*            Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         ItemDef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Hide                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable13                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable14                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable15                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable16                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable17                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable18                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable19                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable20                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable21                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable22                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable23                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable24                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable25                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable26                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable27                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable28                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable29                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable30                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable31                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable32                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable33                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable34                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable35                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable36                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable37                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable38                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable39                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable40                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable41                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable42                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable43                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable44                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable45                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable46                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable47                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable48                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable49                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable50                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable51                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable52                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable53                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable54                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable55                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable56                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable57                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable58                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable59                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable60                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable61                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable62                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable63                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable64                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable65                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable66                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable67                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable68                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable69                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable70                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable71                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable72                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable73                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable74                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable75                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable76                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable77                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable78                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable79                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable80                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable81                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable82                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable83                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable84                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable85                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable86                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable87                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable88                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable89                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable90                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStoreCardReveal_BP_C::SetVisibilityByItemDef(class UWidgetComponent* Widget, class UFortItemDefinition* ItemDef, bool Hide, bool* Visibility, enum class EFortItemType Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, bool Temp_bool_Variable8, bool Temp_bool_Variable9, bool Temp_bool_Variable10, bool Temp_bool_Variable11, bool Temp_bool_Variable12, bool Temp_bool_Variable13, bool Temp_bool_Variable14, bool Temp_bool_Variable15, bool Temp_bool_Variable16, bool Temp_bool_Variable17, bool Temp_bool_Variable18, bool Temp_bool_Variable19, bool Temp_bool_Variable20, bool Temp_bool_Variable21, bool Temp_bool_Variable22, bool Temp_bool_Variable23, bool Temp_bool_Variable24, bool Temp_bool_Variable25, bool Temp_bool_Variable26, bool Temp_bool_Variable27, bool Temp_bool_Variable28, bool Temp_bool_Variable29, bool Temp_bool_Variable30, bool Temp_bool_Variable31, bool Temp_bool_Variable32, bool Temp_bool_Variable33, bool Temp_bool_Variable34, bool Temp_bool_Variable35, bool Temp_bool_Variable36, bool Temp_bool_Variable37, bool Temp_bool_Variable38, bool Temp_bool_Variable39, bool Temp_bool_Variable40, bool Temp_bool_Variable41, bool Temp_bool_Variable42, bool Temp_bool_Variable43, bool Temp_bool_Variable44, bool Temp_bool_Variable45, bool Temp_bool_Variable46, bool Temp_bool_Variable47, bool Temp_bool_Variable48, bool Temp_bool_Variable49, bool Temp_bool_Variable50, bool Temp_bool_Variable51, bool Temp_bool_Variable52, bool Temp_bool_Variable53, bool Temp_bool_Variable54, bool Temp_bool_Variable55, bool Temp_bool_Variable56, bool Temp_bool_Variable57, bool Temp_bool_Variable58, bool Temp_bool_Variable59, bool Temp_bool_Variable60, bool Temp_bool_Variable61, bool Temp_bool_Variable62, bool Temp_bool_Variable63, bool Temp_bool_Variable64, bool Temp_bool_Variable65, bool Temp_bool_Variable66, bool Temp_bool_Variable67, bool Temp_bool_Variable68, bool Temp_bool_Variable69, bool Temp_bool_Variable70, bool Temp_bool_Variable71, bool Temp_bool_Variable72, bool Temp_bool_Variable73, bool Temp_bool_Variable74, bool Temp_bool_Variable75, bool Temp_bool_Variable76, bool Temp_bool_Variable77, bool Temp_bool_Variable78, bool Temp_bool_Variable79, bool Temp_bool_Variable80, bool Temp_bool_Variable81, bool Temp_bool_Variable82, bool Temp_bool_Variable83, bool Temp_bool_Variable84, bool Temp_bool_Variable85, bool Temp_bool_Variable86, bool Temp_bool_Variable87, bool Temp_bool_Variable88, bool Temp_bool_Variable89, bool Temp_bool_Variable90, enum class EFortItemType CallFunc_GetItemType_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "SetVisibilityByItemDef");

	Params::AStoreCardReveal_BP_C_SetVisibilityByItemDef_Params Parms{};

	Parms.Widget = Widget;
	Parms.ItemDef = ItemDef;
	Parms.Hide = Hide;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.Temp_bool_Variable10 = Temp_bool_Variable10;
	Parms.Temp_bool_Variable11 = Temp_bool_Variable11;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.Temp_bool_Variable13 = Temp_bool_Variable13;
	Parms.Temp_bool_Variable14 = Temp_bool_Variable14;
	Parms.Temp_bool_Variable15 = Temp_bool_Variable15;
	Parms.Temp_bool_Variable16 = Temp_bool_Variable16;
	Parms.Temp_bool_Variable17 = Temp_bool_Variable17;
	Parms.Temp_bool_Variable18 = Temp_bool_Variable18;
	Parms.Temp_bool_Variable19 = Temp_bool_Variable19;
	Parms.Temp_bool_Variable20 = Temp_bool_Variable20;
	Parms.Temp_bool_Variable21 = Temp_bool_Variable21;
	Parms.Temp_bool_Variable22 = Temp_bool_Variable22;
	Parms.Temp_bool_Variable23 = Temp_bool_Variable23;
	Parms.Temp_bool_Variable24 = Temp_bool_Variable24;
	Parms.Temp_bool_Variable25 = Temp_bool_Variable25;
	Parms.Temp_bool_Variable26 = Temp_bool_Variable26;
	Parms.Temp_bool_Variable27 = Temp_bool_Variable27;
	Parms.Temp_bool_Variable28 = Temp_bool_Variable28;
	Parms.Temp_bool_Variable29 = Temp_bool_Variable29;
	Parms.Temp_bool_Variable30 = Temp_bool_Variable30;
	Parms.Temp_bool_Variable31 = Temp_bool_Variable31;
	Parms.Temp_bool_Variable32 = Temp_bool_Variable32;
	Parms.Temp_bool_Variable33 = Temp_bool_Variable33;
	Parms.Temp_bool_Variable34 = Temp_bool_Variable34;
	Parms.Temp_bool_Variable35 = Temp_bool_Variable35;
	Parms.Temp_bool_Variable36 = Temp_bool_Variable36;
	Parms.Temp_bool_Variable37 = Temp_bool_Variable37;
	Parms.Temp_bool_Variable38 = Temp_bool_Variable38;
	Parms.Temp_bool_Variable39 = Temp_bool_Variable39;
	Parms.Temp_bool_Variable40 = Temp_bool_Variable40;
	Parms.Temp_bool_Variable41 = Temp_bool_Variable41;
	Parms.Temp_bool_Variable42 = Temp_bool_Variable42;
	Parms.Temp_bool_Variable43 = Temp_bool_Variable43;
	Parms.Temp_bool_Variable44 = Temp_bool_Variable44;
	Parms.Temp_bool_Variable45 = Temp_bool_Variable45;
	Parms.Temp_bool_Variable46 = Temp_bool_Variable46;
	Parms.Temp_bool_Variable47 = Temp_bool_Variable47;
	Parms.Temp_bool_Variable48 = Temp_bool_Variable48;
	Parms.Temp_bool_Variable49 = Temp_bool_Variable49;
	Parms.Temp_bool_Variable50 = Temp_bool_Variable50;
	Parms.Temp_bool_Variable51 = Temp_bool_Variable51;
	Parms.Temp_bool_Variable52 = Temp_bool_Variable52;
	Parms.Temp_bool_Variable53 = Temp_bool_Variable53;
	Parms.Temp_bool_Variable54 = Temp_bool_Variable54;
	Parms.Temp_bool_Variable55 = Temp_bool_Variable55;
	Parms.Temp_bool_Variable56 = Temp_bool_Variable56;
	Parms.Temp_bool_Variable57 = Temp_bool_Variable57;
	Parms.Temp_bool_Variable58 = Temp_bool_Variable58;
	Parms.Temp_bool_Variable59 = Temp_bool_Variable59;
	Parms.Temp_bool_Variable60 = Temp_bool_Variable60;
	Parms.Temp_bool_Variable61 = Temp_bool_Variable61;
	Parms.Temp_bool_Variable62 = Temp_bool_Variable62;
	Parms.Temp_bool_Variable63 = Temp_bool_Variable63;
	Parms.Temp_bool_Variable64 = Temp_bool_Variable64;
	Parms.Temp_bool_Variable65 = Temp_bool_Variable65;
	Parms.Temp_bool_Variable66 = Temp_bool_Variable66;
	Parms.Temp_bool_Variable67 = Temp_bool_Variable67;
	Parms.Temp_bool_Variable68 = Temp_bool_Variable68;
	Parms.Temp_bool_Variable69 = Temp_bool_Variable69;
	Parms.Temp_bool_Variable70 = Temp_bool_Variable70;
	Parms.Temp_bool_Variable71 = Temp_bool_Variable71;
	Parms.Temp_bool_Variable72 = Temp_bool_Variable72;
	Parms.Temp_bool_Variable73 = Temp_bool_Variable73;
	Parms.Temp_bool_Variable74 = Temp_bool_Variable74;
	Parms.Temp_bool_Variable75 = Temp_bool_Variable75;
	Parms.Temp_bool_Variable76 = Temp_bool_Variable76;
	Parms.Temp_bool_Variable77 = Temp_bool_Variable77;
	Parms.Temp_bool_Variable78 = Temp_bool_Variable78;
	Parms.Temp_bool_Variable79 = Temp_bool_Variable79;
	Parms.Temp_bool_Variable80 = Temp_bool_Variable80;
	Parms.Temp_bool_Variable81 = Temp_bool_Variable81;
	Parms.Temp_bool_Variable82 = Temp_bool_Variable82;
	Parms.Temp_bool_Variable83 = Temp_bool_Variable83;
	Parms.Temp_bool_Variable84 = Temp_bool_Variable84;
	Parms.Temp_bool_Variable85 = Temp_bool_Variable85;
	Parms.Temp_bool_Variable86 = Temp_bool_Variable86;
	Parms.Temp_bool_Variable87 = Temp_bool_Variable87;
	Parms.Temp_bool_Variable88 = Temp_bool_Variable88;
	Parms.Temp_bool_Variable89 = Temp_bool_Variable89;
	Parms.Temp_bool_Variable90 = Temp_bool_Variable90;
	Parms.CallFunc_GetItemType_ReturnValue = CallFunc_GetItemType_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RarityEnumToText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFortRarity             InRarity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        OutRarity                                                        (Parm, OutParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStoreCardReveal_BP_C::RarityEnumToText(enum class EFortRarity InRarity, class FText* OutRarity, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "RarityEnumToText");

	Params::AStoreCardReveal_BP_C_RarityEnumToText_Params Parms{};

	Parms.InRarity = InRarity;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRarity != nullptr)
		*OutRarity = Parms.OutRarity;

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.IsDefender
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItemDefinition*  Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDefender                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Result                                                           (Parm, OutParm)
// class FText                        Temp_text_Variable                                               (None)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_RarityEnumToText_OutRarity                              (None)
// class FText                        CallFunc_GetTertiaryCategory_ItemCategoryText                    (None)
// struct FSlateBrush                 CallFunc_GetTertiaryCategory_ItemCategoryBrush                   (None)
// bool                               CallFunc_GetTertiaryCategory_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// class FText                        CallFunc_GetSecondaryCategory_ItemCategoryText                   (None)
// struct FSlateBrush                 CallFunc_GetSecondaryCategory_ItemCategoryBrush                  (None)
// bool                               CallFunc_GetSecondaryCategory_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable1                                              (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable2                                              (None)
// class FText                        Temp_text_Variable3                                              (None)
// class FText                        Temp_text_Variable4                                              (None)
// class FText                        Temp_text_Variable5                                              (None)
// class FText                        Temp_text_Variable6                                              (None)
// class FText                        Temp_text_Variable7                                              (None)
// class FText                        Temp_text_Variable8                                              (None)
// class FText                        Temp_text_Variable9                                              (None)
// class FText                        Temp_text_Variable10                                             (None)
// class FText                        Temp_text_Variable11                                             (None)
// class FText                        Temp_text_Variable12                                             (None)
// class FText                        Temp_text_Variable13                                             (None)
// class FText                        Temp_text_Variable14                                             (None)
// class FText                        Temp_text_Variable15                                             (None)
// class FText                        Temp_text_Variable16                                             (None)
// class FText                        Temp_text_Variable17                                             (None)
// class FText                        Temp_text_Variable18                                             (None)
// class FText                        Temp_text_Variable19                                             (None)
// class FText                        Temp_text_Variable20                                             (None)
// class FText                        Temp_text_Variable21                                             (None)
// class FText                        Temp_text_Variable22                                             (None)
// class FText                        Temp_text_Variable23                                             (None)
// class FText                        Temp_text_Variable24                                             (None)
// class FText                        Temp_text_Variable25                                             (None)
// class FText                        Temp_text_Variable26                                             (None)
// class FText                        Temp_text_Variable27                                             (None)
// class FText                        Temp_text_Variable28                                             (None)
// class FText                        Temp_text_Variable29                                             (None)
// class FText                        Temp_text_Variable30                                             (None)
// class FText                        Temp_text_Variable31                                             (None)
// class FText                        Temp_text_Variable32                                             (None)
// class FText                        Temp_text_Variable33                                             (None)
// class FText                        Temp_text_Variable34                                             (None)
// class FText                        Temp_text_Variable35                                             (None)
// class FText                        Temp_text_Variable36                                             (None)
// class FText                        Temp_text_Variable37                                             (None)
// class FText                        Temp_text_Variable38                                             (None)
// class FText                        Temp_text_Variable39                                             (None)
// class FText                        Temp_text_Variable40                                             (None)
// class FText                        Temp_text_Variable41                                             (None)
// class FText                        Temp_text_Variable42                                             (None)
// class FText                        Temp_text_Variable43                                             (None)
// class FText                        Temp_text_Variable44                                             (None)
// class FText                        Temp_text_Variable45                                             (None)
// class FText                        Temp_text_Variable46                                             (None)
// class FText                        Temp_text_Variable47                                             (None)
// class FText                        Temp_text_Variable48                                             (None)
// class FText                        Temp_text_Variable49                                             (None)
// class FText                        Temp_text_Variable50                                             (None)
// class FText                        Temp_text_Variable51                                             (None)
// class FText                        Temp_text_Variable52                                             (None)
// class FText                        Temp_text_Variable53                                             (None)
// class FText                        Temp_text_Variable54                                             (None)
// class FText                        Temp_text_Variable55                                             (None)
// class FText                        Temp_text_Variable56                                             (None)
// class FText                        Temp_text_Variable57                                             (None)
// class FText                        Temp_text_Variable58                                             (None)
// class FText                        Temp_text_Variable59                                             (None)
// class FText                        Temp_text_Variable60                                             (None)
// class FText                        Temp_text_Variable61                                             (None)
// class FText                        Temp_text_Variable62                                             (None)
// class FText                        Temp_text_Variable63                                             (None)
// class FText                        Temp_text_Variable64                                             (None)
// class FText                        Temp_text_Variable65                                             (None)
// class FText                        Temp_text_Variable66                                             (None)
// class FText                        Temp_text_Variable67                                             (None)
// class FText                        Temp_text_Variable68                                             (None)
// class FText                        Temp_text_Variable69                                             (None)
// class FText                        Temp_text_Variable70                                             (None)
// class FText                        Temp_text_Variable71                                             (None)
// class FText                        Temp_text_Variable72                                             (None)
// class FText                        Temp_text_Variable73                                             (None)
// class FText                        Temp_text_Variable74                                             (None)
// class FText                        Temp_text_Variable75                                             (None)
// class FText                        Temp_text_Variable76                                             (None)
// class FText                        Temp_text_Variable77                                             (None)
// class FText                        Temp_text_Variable78                                             (None)
// class FText                        Temp_text_Variable79                                             (None)
// class FText                        Temp_text_Variable80                                             (None)
// class FText                        Temp_text_Variable81                                             (None)
// class FText                        Temp_text_Variable82                                             (None)
// class FText                        Temp_text_Variable83                                             (None)
// class FText                        Temp_text_Variable84                                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        Temp_text_Variable85                                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData4                            (HasGetValueTypeHash)
// class FText                        Temp_text_Variable86                                             (None)
// class FText                        Temp_text_Variable87                                             (None)
// class FText                        Temp_text_Variable88                                             (None)
// enum class EFortItemType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData5                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData6                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue1                                     (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData7                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue2                                     (None)

void AStoreCardReveal_BP_C::IsDefender(class UFortAccountItemDefinition* Object, bool* IsDefender, class FText* Result, class FText Temp_text_Variable, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, class FText CallFunc_RarityEnumToText_OutRarity, class FText CallFunc_GetTertiaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetTertiaryCategory_ItemCategoryBrush, bool CallFunc_GetTertiaryCategory_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class FText CallFunc_GetSecondaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetSecondaryCategory_ItemCategoryBrush, bool CallFunc_GetSecondaryCategory_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, enum class EFortItemType CallFunc_GetType_ReturnValue1, class FText Temp_text_Variable1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class FText Temp_text_Variable10, class FText Temp_text_Variable11, class FText Temp_text_Variable12, class FText Temp_text_Variable13, class FText Temp_text_Variable14, class FText Temp_text_Variable15, class FText Temp_text_Variable16, class FText Temp_text_Variable17, class FText Temp_text_Variable18, class FText Temp_text_Variable19, class FText Temp_text_Variable20, class FText Temp_text_Variable21, class FText Temp_text_Variable22, class FText Temp_text_Variable23, class FText Temp_text_Variable24, class FText Temp_text_Variable25, class FText Temp_text_Variable26, class FText Temp_text_Variable27, class FText Temp_text_Variable28, class FText Temp_text_Variable29, class FText Temp_text_Variable30, class FText Temp_text_Variable31, class FText Temp_text_Variable32, class FText Temp_text_Variable33, class FText Temp_text_Variable34, class FText Temp_text_Variable35, class FText Temp_text_Variable36, class FText Temp_text_Variable37, class FText Temp_text_Variable38, class FText Temp_text_Variable39, class FText Temp_text_Variable40, class FText Temp_text_Variable41, class FText Temp_text_Variable42, class FText Temp_text_Variable43, class FText Temp_text_Variable44, class FText Temp_text_Variable45, class FText Temp_text_Variable46, class FText Temp_text_Variable47, class FText Temp_text_Variable48, class FText Temp_text_Variable49, class FText Temp_text_Variable50, class FText Temp_text_Variable51, class FText Temp_text_Variable52, class FText Temp_text_Variable53, class FText Temp_text_Variable54, class FText Temp_text_Variable55, class FText Temp_text_Variable56, class FText Temp_text_Variable57, class FText Temp_text_Variable58, class FText Temp_text_Variable59, class FText Temp_text_Variable60, class FText Temp_text_Variable61, class FText Temp_text_Variable62, class FText Temp_text_Variable63, class FText Temp_text_Variable64, class FText Temp_text_Variable65, class FText Temp_text_Variable66, class FText Temp_text_Variable67, class FText Temp_text_Variable68, class FText Temp_text_Variable69, class FText Temp_text_Variable70, class FText Temp_text_Variable71, class FText Temp_text_Variable72, class FText Temp_text_Variable73, class FText Temp_text_Variable74, class FText Temp_text_Variable75, class FText Temp_text_Variable76, class FText Temp_text_Variable77, class FText Temp_text_Variable78, class FText Temp_text_Variable79, class FText Temp_text_Variable80, class FText Temp_text_Variable81, class FText Temp_text_Variable82, class FText Temp_text_Variable83, class FText Temp_text_Variable84, class FText CallFunc_MakeLiteralText_ReturnValue, class FText Temp_text_Variable85, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, class FText Temp_text_Variable86, class FText Temp_text_Variable87, class FText Temp_text_Variable88, enum class EFortItemType Temp_byte_Variable, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData7, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "IsDefender");

	Params::AStoreCardReveal_BP_C_IsDefender_Params Parms{};

	Parms.Object = Object;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_RarityEnumToText_OutRarity = CallFunc_RarityEnumToText_OutRarity;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryText = CallFunc_GetTertiaryCategory_ItemCategoryText;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryBrush = CallFunc_GetTertiaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetTertiaryCategory_ReturnValue = CallFunc_GetTertiaryCategory_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryText = CallFunc_GetSecondaryCategory_ItemCategoryText;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryBrush = CallFunc_GetSecondaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetSecondaryCategory_ReturnValue = CallFunc_GetSecondaryCategory_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.CallFunc_GetType_ReturnValue1 = CallFunc_GetType_ReturnValue1;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.Temp_text_Variable10 = Temp_text_Variable10;
	Parms.Temp_text_Variable11 = Temp_text_Variable11;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_text_Variable13 = Temp_text_Variable13;
	Parms.Temp_text_Variable14 = Temp_text_Variable14;
	Parms.Temp_text_Variable15 = Temp_text_Variable15;
	Parms.Temp_text_Variable16 = Temp_text_Variable16;
	Parms.Temp_text_Variable17 = Temp_text_Variable17;
	Parms.Temp_text_Variable18 = Temp_text_Variable18;
	Parms.Temp_text_Variable19 = Temp_text_Variable19;
	Parms.Temp_text_Variable20 = Temp_text_Variable20;
	Parms.Temp_text_Variable21 = Temp_text_Variable21;
	Parms.Temp_text_Variable22 = Temp_text_Variable22;
	Parms.Temp_text_Variable23 = Temp_text_Variable23;
	Parms.Temp_text_Variable24 = Temp_text_Variable24;
	Parms.Temp_text_Variable25 = Temp_text_Variable25;
	Parms.Temp_text_Variable26 = Temp_text_Variable26;
	Parms.Temp_text_Variable27 = Temp_text_Variable27;
	Parms.Temp_text_Variable28 = Temp_text_Variable28;
	Parms.Temp_text_Variable29 = Temp_text_Variable29;
	Parms.Temp_text_Variable30 = Temp_text_Variable30;
	Parms.Temp_text_Variable31 = Temp_text_Variable31;
	Parms.Temp_text_Variable32 = Temp_text_Variable32;
	Parms.Temp_text_Variable33 = Temp_text_Variable33;
	Parms.Temp_text_Variable34 = Temp_text_Variable34;
	Parms.Temp_text_Variable35 = Temp_text_Variable35;
	Parms.Temp_text_Variable36 = Temp_text_Variable36;
	Parms.Temp_text_Variable37 = Temp_text_Variable37;
	Parms.Temp_text_Variable38 = Temp_text_Variable38;
	Parms.Temp_text_Variable39 = Temp_text_Variable39;
	Parms.Temp_text_Variable40 = Temp_text_Variable40;
	Parms.Temp_text_Variable41 = Temp_text_Variable41;
	Parms.Temp_text_Variable42 = Temp_text_Variable42;
	Parms.Temp_text_Variable43 = Temp_text_Variable43;
	Parms.Temp_text_Variable44 = Temp_text_Variable44;
	Parms.Temp_text_Variable45 = Temp_text_Variable45;
	Parms.Temp_text_Variable46 = Temp_text_Variable46;
	Parms.Temp_text_Variable47 = Temp_text_Variable47;
	Parms.Temp_text_Variable48 = Temp_text_Variable48;
	Parms.Temp_text_Variable49 = Temp_text_Variable49;
	Parms.Temp_text_Variable50 = Temp_text_Variable50;
	Parms.Temp_text_Variable51 = Temp_text_Variable51;
	Parms.Temp_text_Variable52 = Temp_text_Variable52;
	Parms.Temp_text_Variable53 = Temp_text_Variable53;
	Parms.Temp_text_Variable54 = Temp_text_Variable54;
	Parms.Temp_text_Variable55 = Temp_text_Variable55;
	Parms.Temp_text_Variable56 = Temp_text_Variable56;
	Parms.Temp_text_Variable57 = Temp_text_Variable57;
	Parms.Temp_text_Variable58 = Temp_text_Variable58;
	Parms.Temp_text_Variable59 = Temp_text_Variable59;
	Parms.Temp_text_Variable60 = Temp_text_Variable60;
	Parms.Temp_text_Variable61 = Temp_text_Variable61;
	Parms.Temp_text_Variable62 = Temp_text_Variable62;
	Parms.Temp_text_Variable63 = Temp_text_Variable63;
	Parms.Temp_text_Variable64 = Temp_text_Variable64;
	Parms.Temp_text_Variable65 = Temp_text_Variable65;
	Parms.Temp_text_Variable66 = Temp_text_Variable66;
	Parms.Temp_text_Variable67 = Temp_text_Variable67;
	Parms.Temp_text_Variable68 = Temp_text_Variable68;
	Parms.Temp_text_Variable69 = Temp_text_Variable69;
	Parms.Temp_text_Variable70 = Temp_text_Variable70;
	Parms.Temp_text_Variable71 = Temp_text_Variable71;
	Parms.Temp_text_Variable72 = Temp_text_Variable72;
	Parms.Temp_text_Variable73 = Temp_text_Variable73;
	Parms.Temp_text_Variable74 = Temp_text_Variable74;
	Parms.Temp_text_Variable75 = Temp_text_Variable75;
	Parms.Temp_text_Variable76 = Temp_text_Variable76;
	Parms.Temp_text_Variable77 = Temp_text_Variable77;
	Parms.Temp_text_Variable78 = Temp_text_Variable78;
	Parms.Temp_text_Variable79 = Temp_text_Variable79;
	Parms.Temp_text_Variable80 = Temp_text_Variable80;
	Parms.Temp_text_Variable81 = Temp_text_Variable81;
	Parms.Temp_text_Variable82 = Temp_text_Variable82;
	Parms.Temp_text_Variable83 = Temp_text_Variable83;
	Parms.Temp_text_Variable84 = Temp_text_Variable84;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_text_Variable85 = Temp_text_Variable85;
	Parms.K2Node_MakeStruct_FormatArgumentData4 = K2Node_MakeStruct_FormatArgumentData4;
	Parms.Temp_text_Variable86 = Temp_text_Variable86;
	Parms.Temp_text_Variable87 = Temp_text_Variable87;
	Parms.Temp_text_Variable88 = Temp_text_Variable88;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData5 = K2Node_MakeStruct_FormatArgumentData5;
	Parms.K2Node_MakeStruct_FormatArgumentData6 = K2Node_MakeStruct_FormatArgumentData6;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue1 = CallFunc_Format_ReturnValue1;
	Parms.K2Node_MakeStruct_FormatArgumentData7 = K2Node_MakeStruct_FormatArgumentData7;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDefender != nullptr)
		*IsDefender = Parms.IsDefender;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetText_CCB
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hide                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CCB_Rarity                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CCB_Text                                                         (Edit, BlueprintVisible)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChoiceCardCount_C*          K2Node_DynamicCast_AsChoice_Card_Count                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChoiceCardName_C*           K2Node_DynamicCast_AsChoice_Card_Name                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCard                       CallFunc_GetCard_ResultOut                                       (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCardPackItem*           K2Node_DynamicCast_AsFort_Card_Pack_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortAccountItemDefinition*>CallFunc_GetChoices_Choices                                      (ZeroConstructor, ReferenceParm)
// class UFortAccountItemDefinition*  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// int32                              CallFunc_GetOwnedItemCount_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVisibilityByItemDef_Visibility                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStoreCardReveal_BP_C::SetText_CCB(bool Hide, enum class EFortRarity CCB_Rarity, class FText CCB_Text, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool Temp_bool_Variable, class UChoiceCardCount_C* K2Node_DynamicCast_AsChoice_Card_Count, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool K2Node_Select_Default, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue1, class UChoiceCardName_C* K2Node_DynamicCast_AsChoice_Card_Name, bool K2Node_DynamicCast_bSuccess1, class UFortStoreContext* CallFunc_GetContext_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue1, const struct FCard& CallFunc_GetCard_ResultOut, bool CallFunc_GetCard_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class UFortCardPackItem* K2Node_DynamicCast_AsFort_Card_Pack_Item, bool K2Node_DynamicCast_bSuccess2, TArray<class UFortAccountItemDefinition*>& CallFunc_GetChoices_Choices, class UFortAccountItemDefinition* CallFunc_Array_Get_Item, class FText CallFunc_GetDisplayName_ReturnValue, int32 CallFunc_GetOwnedItemCount_ReturnValue, bool CallFunc_SetVisibilityByItemDef_Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "SetText_CCB");

	Params::AStoreCardReveal_BP_C_SetText_CCB_Params Parms{};

	Parms.Hide = Hide;
	Parms.CCB_Rarity = CCB_Rarity;
	Parms.CCB_Text = CCB_Text;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsChoice_Card_Count = K2Node_DynamicCast_AsChoice_Card_Count;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue1 = CallFunc_GetUserWidgetObject_ReturnValue1;
	Parms.K2Node_DynamicCast_AsChoice_Card_Name = K2Node_DynamicCast_AsChoice_Card_Name;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetCard_ResultOut = CallFunc_GetCard_ResultOut;
	Parms.CallFunc_GetCard_ReturnValue = CallFunc_GetCard_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Card_Pack_Item = K2Node_DynamicCast_AsFort_Card_Pack_Item;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetChoices_Choices = CallFunc_GetChoices_Choices;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetOwnedItemCount_ReturnValue = CallFunc_GetOwnedItemCount_ReturnValue;
	Parms.CallFunc_SetVisibilityByItemDef_Visibility = CallFunc_SetVisibilityByItemDef_Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetText_CCA
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hide                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CCA_Text                                                         (Edit, BlueprintVisible)
// enum class EFortRarity             CCA_Rarity                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChoiceCardCount_C*          K2Node_DynamicCast_AsChoice_Card_Count                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCard                       CallFunc_GetCard_ResultOut                                       (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortCardPackItem*           K2Node_DynamicCast_AsFort_Card_Pack_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAccountItemDefinition*>CallFunc_GetChoices_Choices                                      (ZeroConstructor, ReferenceParm)
// class UFortAccountItemDefinition*  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetVisibilityByItemDef_Visibility                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOwnedItemCount_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChoiceCardName_C*           K2Node_DynamicCast_AsChoice_Card_Name                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStoreCardReveal_BP_C::SetText_CCA(bool Hide, class FText CCA_Text, enum class EFortRarity CCA_Rarity, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue, class UChoiceCardCount_C* K2Node_DynamicCast_AsChoice_Card_Count, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, const struct FCard& CallFunc_GetCard_ResultOut, bool CallFunc_GetCard_ReturnValue, class UFortCardPackItem* K2Node_DynamicCast_AsFort_Card_Pack_Item, bool K2Node_DynamicCast_bSuccess1, enum class EFortRarity CallFunc_GetRarity_ReturnValue, TArray<class UFortAccountItemDefinition*>& CallFunc_GetChoices_Choices, class UFortAccountItemDefinition* CallFunc_Array_Get_Item, bool Temp_bool_Variable1, class FText CallFunc_GetDisplayName_ReturnValue, bool Temp_bool_Variable2, bool CallFunc_SetVisibilityByItemDef_Visibility, bool K2Node_Select_Default, class UFortStoreContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_GetOwnedItemCount_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue1, class UChoiceCardName_C* K2Node_DynamicCast_AsChoice_Card_Name, bool K2Node_DynamicCast_bSuccess2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "SetText_CCA");

	Params::AStoreCardReveal_BP_C_SetText_CCA_Params Parms{};

	Parms.Hide = Hide;
	Parms.CCA_Text = CCA_Text;
	Parms.CCA_Rarity = CCA_Rarity;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsChoice_Card_Count = K2Node_DynamicCast_AsChoice_Card_Count;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCard_ResultOut = CallFunc_GetCard_ResultOut;
	Parms.CallFunc_GetCard_ReturnValue = CallFunc_GetCard_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Card_Pack_Item = K2Node_DynamicCast_AsFort_Card_Pack_Item;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_GetChoices_Choices = CallFunc_GetChoices_Choices;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_SetVisibilityByItemDef_Visibility = CallFunc_SetVisibilityByItemDef_Visibility;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetOwnedItemCount_ReturnValue = CallFunc_GetOwnedItemCount_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue1 = CallFunc_GetUserWidgetObject_ReturnValue1;
	Parms.K2Node_DynamicCast_AsChoice_Card_Name = K2Node_DynamicCast_AsChoice_Card_Name;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue1                     (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue2                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue3                     (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue1                              (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue6              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue7              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue8              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue9              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue10             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue11             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult1                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult1                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue13             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue14             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue15             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue16             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::UserConstructionScript(float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue3, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue9, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue10, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue11, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue13, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue14, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue15, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue16)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "UserConstructionScript");

	Params::AStoreCardReveal_BP_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue1 = CallFunc_K2_GetComponentToWorld_ReturnValue1;
	Parms.CallFunc_BreakTransform_Location1 = CallFunc_BreakTransform_Location1;
	Parms.CallFunc_BreakTransform_Rotation1 = CallFunc_BreakTransform_Rotation1;
	Parms.CallFunc_BreakTransform_Scale1 = CallFunc_BreakTransform_Scale1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue2 = CallFunc_K2_GetComponentToWorld_ReturnValue2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue3 = CallFunc_K2_GetComponentToWorld_ReturnValue3;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue1 = CallFunc_K2_GetComponentRotation_ReturnValue1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue1 = CallFunc_MakeTransform_ReturnValue1;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult1 = CallFunc_K2_SetWorldTransform_SweepHitResult1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue4;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue5 = CallFunc_CreateDynamicMaterialInstance_ReturnValue5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue6 = CallFunc_CreateDynamicMaterialInstance_ReturnValue6;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue7 = CallFunc_CreateDynamicMaterialInstance_ReturnValue7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue8 = CallFunc_CreateDynamicMaterialInstance_ReturnValue8;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue9 = CallFunc_CreateDynamicMaterialInstance_ReturnValue9;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue10 = CallFunc_CreateDynamicMaterialInstance_ReturnValue10;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue11 = CallFunc_CreateDynamicMaterialInstance_ReturnValue11;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue1 = CallFunc_K2_GetComponentLocation_ReturnValue1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult1 = CallFunc_K2_SetRelativeRotation_SweepHitResult1;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult1 = CallFunc_K2_SetWorldLocation_SweepHitResult1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue13 = CallFunc_CreateDynamicMaterialInstance_ReturnValue13;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue14 = CallFunc_CreateDynamicMaterialInstance_ReturnValue14;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue15 = CallFunc_CreateDynamicMaterialInstance_ReturnValue15;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue16 = CallFunc_CreateDynamicMaterialInstance_ReturnValue16;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCardExit__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardExit__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCardExit__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardExit__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__Proceed__EventFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCardExit__Proceed__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardExit__Proceed__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardFlipToFront__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCardFlipToFront__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardFlipToFront__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardFlipToFront__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCardFlipToFront__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardFlipToFront__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardUpgradeFast__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCardUpgradeFast__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardUpgradeFast__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardUpgradeFast__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCardUpgradeFast__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardUpgradeFast__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-Reveal-CC-Choices__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusRevealMinusCCMinusChoices__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-Reveal-CC-Choices__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-Reveal-CC-Choices__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusRevealMinusCCMinusChoices__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-Reveal-CC-Choices__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-ClearPostProcessDOFSettings__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusClearPostProcessDOFSettings__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-ClearPostProcessDOFSettings__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-ClearPostProcessDOFSettings__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusClearPostProcessDOFSettings__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-ClearPostProcessDOFSettings__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-FlareFX__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCCMinusFlareFX__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-FlareFX__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-FlareFX__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCCMinusFlareFX__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-FlareFX__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusSelectedChoiceCardAnims__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-SelectedChoiceCardAnims__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusSelectedChoiceCardAnims__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-SelectedChoiceCardAnims__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusSelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CameraFOV__EventFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusSelectedChoiceCardAnims__CameraFOV__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-SelectedChoiceCardAnims__CameraFOV__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CC-Phase2-Hide__EventFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusSelectedChoiceCardAnims__CCMinusPhase2MinusHide__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-SelectedChoiceCardAnims__CC-Phase2-Hide__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CC-Phase2__EventFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusSelectedChoiceCardAnims__CCMinusPhase2__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-SelectedChoiceCardAnims__CC-Phase2__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusMouseoverCCMinusA__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-A__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusMouseoverCCMinusA__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-A__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A-End__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusMouseoverCCMinusAMinusEnd__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-A-End__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A-End__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusMouseoverCCMinusAMinusEnd__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-A-End__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusMouseoverCCMinusB__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-B__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusMouseoverCCMinusB__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-B__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B-End__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusMouseoverCCMinusBMinusEnd__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-B-End__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B-End__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusMouseoverCCMinusBMinusEnd__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-B-End__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-Reveal__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCCAMinusReveal__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCA-Reveal__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-Reveal__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCCAMinusReveal__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCA-Reveal__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-Reveal__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCCBMinusReveal__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCB-Reveal__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-Reveal__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCCBMinusReveal__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCB-Reveal__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-QuestionMarkAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCCMinusQuestionMarkAnim__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-QuestionMarkAnim__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-QuestionMarkAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCCMinusQuestionMarkAnim__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-QuestionMarkAnim__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-AmbientAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCCAMinusAmbientAnim__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCA-AmbientAnim__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-AmbientAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCCAMinusAmbientAnim__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCA-AmbientAnim__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-AmbientAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCCBMinusAmbientAnim__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCB-AmbientAnim__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-AmbientAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCCBMinusAmbientAnim__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCB-AmbientAnim__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCCMinusDataDiskBurns__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-DataDiskBurns__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCCMinusDataDiskBurns__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-DataDiskBurns__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__ChangeTexture__EventFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCCMinusDataDiskBurns__ChangeTexture__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-DataDiskBurns__ChangeTexture__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardMoveToScreen__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCardMoveToScreen__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardMoveToScreen__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardMoveToScreen__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TLMinusCardMoveToScreen__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardMoveToScreen__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_90006C1C471D136EF3B142B7181AC990
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnLoaded_90006C1C471D136EF3B142B7181AC990(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "OnLoaded_90006C1C471D136EF3B142B7181AC990");

	Params::AStoreCardReveal_BP_C_OnLoaded_90006C1C471D136EF3B142B7181AC990_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3");

	Params::AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");

	Params::AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6");

	Params::AStoreCardReveal_BP_C_OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_EFC62B084995CBCCD64787B51198EA0F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnLoaded_EFC62B084995CBCCD64787B51198EA0F(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "OnLoaded_EFC62B084995CBCCD64787B51198EA0F");

	Params::AStoreCardReveal_BP_C_OnLoaded_EFC62B084995CBCCD64787B51198EA0F_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_90006C1C471D136EF3B142B7CD6D1379
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnLoaded_90006C1C471D136EF3B142B7CD6D1379(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "OnLoaded_90006C1C471D136EF3B142B7CD6D1379");

	Params::AStoreCardReveal_BP_C_OnLoaded_90006C1C471D136EF3B142B7CD6D1379_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1");

	Params::AStoreCardReveal_BP_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpTchEvt_Released
// (BlueprintEvent)
// Parameters:
// enum class ETouchIndex             FingerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpTchEvt_Released(enum class ETouchIndex FingerIndex, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "InpTchEvt_Released");

	Params::AStoreCardReveal_BP_C_InpTchEvt_Released_Params Parms{};

	Parms.FingerIndex = FingerIndex;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpTchEvt_Pressed
// (BlueprintEvent)
// Parameters:
// enum class ETouchIndex             FingerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpTchEvt_Pressed(enum class ETouchIndex FingerIndex, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "InpTchEvt_Pressed");

	Params::AStoreCardReveal_BP_C_InpTchEvt_Pressed_Params Parms{};

	Parms.FingerIndex = FingerIndex;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0");

	Params::AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnStoreStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortStoreState         NewStoreState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnStoreStateChanged(enum class EFortStoreState NewStoreState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "OnStoreStateChanged");

	Params::AStoreCardReveal_BP_C_OnStoreStateChanged_Params Parms{};

	Parms.NewStoreState = NewStoreState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StartPackOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::StartPackOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "StartPackOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardEnterStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardEnterStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "CardEnterStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PackDestroyStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::PackDestroyStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "PackDestroyStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardFlipStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardFlipStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "CardFlipStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardExitStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardExitStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "CardExitStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TurnOffFastForward
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TurnOffFastForward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TurnOffFastForward");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardBackRevealStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardBackRevealStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "CardBackRevealStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardFrontRevealStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardFrontRevealStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "CardFrontRevealStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TurnOnFastForward
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TurnOnFastForward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "TurnOnFastForward");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EnableMouseInputOnActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::EnableMouseInputOnActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "EnableMouseInputOnActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardPackStoreStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardPackStoreStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "CardPackStoreStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SpecialCardPauseAbort
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::SpecialCardPauseAbort()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "SpecialCardPauseAbort");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PresentChoiceStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::PresentChoiceStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "PresentChoiceStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ChoiceMadeStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ChoiceMadeStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "ChoiceMadeStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        ButtonPressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature");

	Params::AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params Parms{};

	Parms.TouchedComponent = TouchedComponent;
	Parms.ButtonPressed = ButtonPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        ButtonPressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature");

	Params::AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature_Params Parms{};

	Parms.TouchedComponent = TouchedComponent;
	Parms.ButtonPressed = ButtonPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SkipBackRevealForChoicePack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::SkipBackRevealForChoicePack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "SkipBackRevealForChoicePack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ContinueFinalChoiceCardProcess
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ContinueFinalChoiceCardProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "ContinueFinalChoiceCardProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ConstructCardFront
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ConstructCardFront()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "ConstructCardFront");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StopCCA-AmbientAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::StopCCAMinusAmbientAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "StopCCA-AmbientAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.GetReadyToShowCards
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::GetReadyToShowCards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "GetReadyToShowCards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.Stop-CC-HoverAnims
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::StopMinusCCMinusHoverAnims()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "Stop-CC-HoverAnims");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnBeginCursorOver_ChoiceCardA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnBeginCursorOver_ChoiceCardA(class UPrimitiveComponent* TouchedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "OnBeginCursorOver_ChoiceCardA");

	Params::AStoreCardReveal_BP_C_OnBeginCursorOver_ChoiceCardA_Params Parms{};

	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnEndCursorOver_ChoiceCardA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnEndCursorOver_ChoiceCardA(class UPrimitiveComponent* TouchedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "OnEndCursorOver_ChoiceCardA");

	Params::AStoreCardReveal_BP_C_OnEndCursorOver_ChoiceCardA_Params Parms{};

	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverStart-CC-A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::HoverStartMinusCCMinusA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "HoverStart-CC-A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverEnd-CC-A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::HoverEndMinusCCMinusA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "HoverEnd-CC-A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnBeginCursorOver_ChoiceCardB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnBeginCursorOver_ChoiceCardB(class UPrimitiveComponent* TouchedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "OnBeginCursorOver_ChoiceCardB");

	Params::AStoreCardReveal_BP_C_OnBeginCursorOver_ChoiceCardB_Params Parms{};

	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnEndCursorOver_ChoiceCardB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnEndCursorOver_ChoiceCardB(class UPrimitiveComponent* TouchedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "OnEndCursorOver_ChoiceCardB");

	Params::AStoreCardReveal_BP_C_OnEndCursorOver_ChoiceCardB_Params Parms{};

	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverStart-CC-B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::HoverStartMinusCCMinusB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "HoverStart-CC-B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverEnd-CC-B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::HoverEndMinusCCMinusB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "HoverEnd-CC-B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CheckHoverStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CheckHoverStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "CheckHoverStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RestartCCA-AmbientAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::RestartCCAMinusAmbientAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "RestartCCA-AmbientAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StopCCB-AmbientAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::StopCCBMinusAmbientAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "StopCCB-AmbientAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RestartCCB-AmbientAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::RestartCCBMinusAmbientAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "RestartCCB-AmbientAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EnableOpenAllPacks
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::EnableOpenAllPacks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "EnableOpenAllPacks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardInPlace
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardInPlace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "CardInPlace");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CompareRarity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CompareRarity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "CompareRarity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PlayUpgradeAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::PlayUpgradeAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "PlayUpgradeAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ReadyForCardToCome
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ReadyForCardToCome()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "ReadyForCardToCome");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_0
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_0(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_0");

	Params::AStoreCardReveal_BP_C_InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_0_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.Handle Input Mode Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AStoreCardReveal_BP_C::Handle_Input_Mode_Changed(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "Handle Input Mode Changed");

	Params::AStoreCardReveal_BP_C_Handle_Input_Mode_Changed_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ExitPackStore
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ExitPackStore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "ExitPackStore");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S-ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ETouchIndex             FingerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::BndEvt__SMinusChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature(enum class ETouchIndex FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "BndEvt__S-ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature");

	Params::AStoreCardReveal_BP_C_BndEvt__SMinusChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature_Params Parms{};

	Parms.FingerIndex = FingerIndex;
	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S-ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ETouchIndex             FingerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::BndEvt__SMinusChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature(enum class ETouchIndex FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "BndEvt__S-ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature");

	Params::AStoreCardReveal_BP_C_BndEvt__SMinusChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature_Params Parms{};

	Parms.FingerIndex = FingerIndex;
	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ResetGamepadInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ResetGamepadInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "ResetGamepadInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OpenGamepadGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::OpenGamepadGate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "OpenGamepadGate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CloseGamepadGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CloseGamepadGate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "CloseGamepadGate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EndQuestionMarkAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::EndQuestionMarkAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "EndQuestionMarkAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetCCRarityColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::SetCCRarityColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "SetCCRarityColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CCRarityColorReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CCRarityColorReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "CCRarityColorReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_40
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_40(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "InpAxisEvt_MoveRight_K2Node_InputAxisEvent_40");

	Params::AStoreCardReveal_BP_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_40_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InitiatePinata
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::InitiatePinata()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "InitiatePinata");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ExecuteUbergraph_StoreCardReveal_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue5                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue6                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue7                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue8                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Add_ByteByte_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue9                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue10                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue11                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue12                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue13                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue14                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue15                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue16                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue17                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue18                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue19                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue20                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue21                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue22                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue23                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue24                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue25                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue26                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue27                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue28                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue29                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue30                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue31                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue32                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class ATVPostProcessBP_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue33                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue34                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue35                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue36                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue37                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue38                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue39                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue40                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue41                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue42                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue43                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue44                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue45                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue46                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_ByteByte_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_TouchedComponent3                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_ComponentBoundEvent_ButtonPressed1                        (HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_TouchedComponent2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_ComponentBoundEvent_ButtonPressed                         (HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AStoreCamera_Blueprint_C*>CallFunc_GetAllActorsOfClass_OutActors1                          (ZeroConstructor, ReferenceParm)
// class AStoreCamera_Blueprint_C*    CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue47                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue48                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue49                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue50                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue51                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue52                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue53                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_TouchedComponent3                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_TouchedComponent2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_TouchedComponent1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_TouchedComponent                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortStoreState         K2Node_CustomEvent_NewStoreState                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue1                     (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue4                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue5                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue6                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue7                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue5                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue6                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue7                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue2                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue3                     (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue8                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue9                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue4                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue5                     (IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue6                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue7                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue8                     (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue9                     (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable3  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue10                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue11                    (IsPlainOldData, NoDestructor)
// class UCommonInputSubsystem*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCard                       CallFunc_GetCard_ResultOut                                       (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLimitedToES2Features_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETouchIndex             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETouchIndex             K2Node_InputTouchEvent_FingerIndex                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_InputTouchEvent_Location                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETouchIndex             K2Node_InputTouchEvent_FingerIndex1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_InputTouchEvent_Location1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonUISubsystem*          CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key1                                        (HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortInitializeFromObjectInterface>K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue54                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VLerp_ReturnValue1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_GreaterEqual_ByteByte_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_ByteByte_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPauseType              Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult1                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class EPauseType              Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue8                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue10                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              K2Node_InputAxisEvent_AxisValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPauseType              Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable13                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bUsingGamepad                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable14                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable15                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPauseType              Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VLerp_ReturnValue2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult2                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VLerp_ReturnValue3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue1                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue1                              (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult3                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTransform                  CallFunc_TLerp_ReturnValue                                       (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult4                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_Has_Been_Initd_Variable7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VLerp_ReturnValue4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult1                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class ETouchIndex             K2Node_ComponentBoundEvent_FingerIndex1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_TouchedComponent1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETouchIndex             K2Node_ComponentBoundEvent_FingerIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_TouchedComponent                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue2                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue3                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult1                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult2                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_VLerp_ReturnValue7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue4                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult2                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Add_FloatFloat_ReturnValue11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue5                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult3                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_VLerp_ReturnValue8                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult3                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_TLerp_ReturnValue1                                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_TLerp_ReturnValue2                                      (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult5                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult6                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_VLerp_ReturnValue9                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult4                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Lerp_ReturnValue8                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue9                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCard                       CallFunc_GetCard_ResultOut1                                      (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCard                       CallFunc_GetCard_ResultOut2                                      (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortCardPackItem*           K2Node_DynamicCast_AsFort_Card_Pack_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortCardPackItem*           K2Node_DynamicCast_AsFort_Card_Pack_Item1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger1_CmpSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ChoiceResultComplete_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeChoice_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeChoice_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum3_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             (None)
// class UObject*                     K2Node_CustomEvent_Loaded2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult2                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable1                                            (HasGetValueTypeHash)
// struct FCard                       CallFunc_GetCard_ResultOut3                                      (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key2                                        (HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key3                                        (HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue6                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult3                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_VLerp_ReturnValue10                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_CardExitComplete_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CardFrontRevealComplete_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CardFlipComplete_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CardBackRevealComplete_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CardEntryComplete_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue16                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue17                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSchematicItemDefinition*K2Node_DynamicCast_AsFort_Schematic_Item_Definition              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCard                       CallFunc_GetCard_ResultOut4                                      (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorldItemDefinition*    CallFunc_GetResultWorldItemDefinition_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue                        (HasGetValueTypeHash)
// class UFortCardPackItem*           K2Node_DynamicCast_AsFort_Card_Pack_Item2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPersistentName_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class UFortAccountItemDefinition*>CallFunc_GetChoices_Choices                                      (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue1                       (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItemDefinition*K2Node_DynamicCast_AsFort_Schematic_Item_Definition1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorldItemDefinition*    CallFunc_GetResultWorldItemDefinition_ReturnValue1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentName_ReturnValue1                          (ZeroConstructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue2                       (HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue19                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue3                       (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess9                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItemDefinition*  CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue12                    (IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_TLerp_ReturnValue3                                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_TLerp_ReturnValue4                                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_TLerp_ReturnValue5                                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue2                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_TLerp_ReturnValue6                                      (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult7                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_BreakTransform_Location9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation9                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue3                              (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult8                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue11                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue12                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue13                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue11                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult5                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue14                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult6                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_VLerp_ReturnValue12                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult7                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult8                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_IsClosed_Variable8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_InputAxisEvent_AxisValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::ExecuteUbergraph_StoreCardReveal_BP(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue2, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue3, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue4, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue5, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue6, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue7, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue8, uint8 CallFunc_Add_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue9, uint8 CallFunc_GetValidValue_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue10, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue11, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue12, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue13, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue14, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue15, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue16, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue17, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue18, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue19, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue20, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue21, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue22, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue23, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue24, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue25, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue26, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue27, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue28, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue29, bool CallFunc_Greater_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue30, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue31, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue32, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue33, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue34, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue35, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue36, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue37, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue38, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue39, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue40, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue41, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue42, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue43, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue44, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue45, bool Temp_bool_Has_Been_Initd_Variable1, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue46, bool CallFunc_GreaterEqual_ByteByte_ReturnValue, bool Temp_bool_IsClosed_Variable1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent3, const struct FKey& K2Node_ComponentBoundEvent_ButtonPressed1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent2, const struct FKey& K2Node_ComponentBoundEvent_ButtonPressed, bool Temp_bool_Has_Been_Initd_Variable2, bool Temp_bool_IsClosed_Variable2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable3, bool Temp_bool_IsClosed_Variable3, TArray<class AStoreCamera_Blueprint_C*>& CallFunc_GetAllActorsOfClass_OutActors1, class AStoreCamera_Blueprint_C* CallFunc_Array_Get_Item1, bool Temp_bool_Has_Been_Initd_Variable4, bool Temp_bool_IsClosed_Variable4, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue2, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue47, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue48, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue49, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue50, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue51, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue52, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue53, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, class UPrimitiveComponent* K2Node_CustomEvent_TouchedComponent3, class UPrimitiveComponent* K2Node_CustomEvent_TouchedComponent2, class UPrimitiveComponent* K2Node_CustomEvent_TouchedComponent1, class UPrimitiveComponent* K2Node_CustomEvent_TouchedComponent, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, const struct FVector& CallFunc_BreakTransform_Location3, const struct FRotator& CallFunc_BreakTransform_Rotation3, const struct FVector& CallFunc_BreakTransform_Scale3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue2, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue3, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue3, bool Temp_bool_IsClosed_Variable5, enum class EFortStoreState K2Node_CustomEvent_NewStoreState, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue4, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue4, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FVector& CallFunc_MakeVector_ReturnValue1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue5, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue6, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue7, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue5, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, bool Temp_bool_Has_Been_Initd_Variable5, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue6, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue7, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue3, bool Temp_bool_IsClosed_Variable6, bool Temp_bool_Has_Been_Initd_Variable6, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue8, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue9, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue4, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue5, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue6, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue7, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue8, const struct FVector& CallFunc_BreakTransform_Location4, const struct FRotator& CallFunc_BreakTransform_Rotation4, const struct FVector& CallFunc_BreakTransform_Scale4, float CallFunc_BreakRotator_Roll2, float CallFunc_BreakRotator_Pitch2, float CallFunc_BreakRotator_Yaw2, float CallFunc_BreakVector_X4, float CallFunc_BreakVector_Y4, float CallFunc_BreakVector_Z4, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue9, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable3, const struct FVector& CallFunc_BreakTransform_Location5, const struct FRotator& CallFunc_BreakTransform_Rotation5, const struct FVector& CallFunc_BreakTransform_Scale5, float CallFunc_BreakRotator_Roll3, float CallFunc_BreakRotator_Pitch3, float CallFunc_BreakRotator_Yaw3, float CallFunc_BreakVector_X5, float CallFunc_BreakVector_Y5, float CallFunc_BreakVector_Z5, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue10, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue11, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class UFortStoreContext* CallFunc_GetContext_ReturnValue2, const struct FCard& CallFunc_GetCard_ResultOut, bool CallFunc_GetCard_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsLimitedToES2Features_ReturnValue, const struct FVector& Temp_struct_Variable, enum class ETouchIndex Temp_byte_Variable, enum class ETouchIndex K2Node_InputTouchEvent_FingerIndex, const struct FVector& K2Node_InputTouchEvent_Location, enum class ETouchIndex K2Node_InputTouchEvent_FingerIndex1, const struct FVector& K2Node_InputTouchEvent_Location1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonUISubsystem* CallFunc_GetContext_ReturnValue4, const struct FKey& K2Node_InputKeyEvent_Key1, class UUserWidget* CallFunc_Create_ReturnValue, TScriptInterface<class IFortInitializeFromObjectInterface> K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface, bool K2Node_DynamicCast_bSuccess, class UObject* Temp_object_Variable, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue54, class UObject* K2Node_CustomEvent_Loaded, class UFortStoreContext* CallFunc_GetContext_ReturnValue5, int32 CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_GreaterEqual_ByteByte_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class APlayerController* CallFunc_GetPlayerController_ReturnValue3, class UObject* Temp_object_Variable1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess1, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_LessEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum2_CmpSuccess, class UObject* K2Node_CustomEvent_Loaded1, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool Temp_bool_Variable2, bool Temp_bool_Variable3, enum class EPauseType Temp_byte_Variable1, bool Temp_bool_Variable4, bool K2Node_Select_Default, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, float CallFunc_BreakRotator_Roll4, float CallFunc_BreakRotator_Pitch4, float CallFunc_BreakRotator_Yaw4, float CallFunc_Add_FloatFloat_ReturnValue1, const struct FRotator& CallFunc_MakeRotator_ReturnValue1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult1, enum class EPauseType Temp_byte_Variable2, bool Temp_bool_Variable8, bool K2Node_Select1_Default, bool Temp_bool_Variable9, bool Temp_bool_Variable10, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue8, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue10, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, float K2Node_InputAxisEvent_AxisValue1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable11, enum class EPauseType Temp_byte_Variable3, bool Temp_bool_Variable12, bool K2Node_Select2_Default, bool Temp_bool_Variable13, bool K2Node_CustomEvent_bUsingGamepad, bool Temp_bool_Variable14, bool Temp_bool_Variable15, enum class EPauseType Temp_byte_Variable4, bool K2Node_Select3_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue5, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FRotator& CallFunc_MakeRotator_ReturnValue2, const struct FVector& CallFunc_VLerp_ReturnValue2, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult2, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue6, float CallFunc_Add_FloatFloat_ReturnValue7, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue8, float CallFunc_Add_FloatFloat_ReturnValue9, const struct FVector& CallFunc_MakeVector_ReturnValue3, const struct FRotator& CallFunc_MakeRotator_ReturnValue3, const struct FVector& CallFunc_VLerp_ReturnValue3, const struct FRotator& CallFunc_RLerp_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult3, const struct FTransform& CallFunc_TLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult4, bool Temp_bool_Has_Been_Initd_Variable7, const struct FVector& CallFunc_VLerp_ReturnValue4, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult1, enum class ETouchIndex K2Node_ComponentBoundEvent_FingerIndex1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent1, enum class ETouchIndex K2Node_ComponentBoundEvent_FingerIndex, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent, const struct FVector& CallFunc_VLerp_ReturnValue5, const struct FRotator& CallFunc_RLerp_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_Multiply_FloatFloat_ReturnValue4, const struct FRotator& CallFunc_RLerp_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue10, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult1, const struct FVector& CallFunc_MakeVector_ReturnValue4, const struct FVector& CallFunc_VLerp_ReturnValue6, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult2, const struct FVector& CallFunc_VLerp_ReturnValue7, const struct FRotator& CallFunc_RLerp_ReturnValue4, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult2, float CallFunc_Add_FloatFloat_ReturnValue11, const struct FRotator& CallFunc_RLerp_ReturnValue5, const struct FVector& CallFunc_MakeVector_ReturnValue5, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult3, const struct FVector& CallFunc_VLerp_ReturnValue8, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult3, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Lerp_ReturnValue1, float CallFunc_Lerp_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, float CallFunc_Lerp_ReturnValue3, float CallFunc_Lerp_ReturnValue4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, float CallFunc_Lerp_ReturnValue5, float CallFunc_Lerp_ReturnValue6, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue3, float CallFunc_Lerp_ReturnValue7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FTransform& CallFunc_TLerp_ReturnValue1, const struct FTransform& CallFunc_TLerp_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult5, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult6, const struct FVector& CallFunc_VLerp_ReturnValue9, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult4, float CallFunc_Lerp_ReturnValue8, bool Temp_bool_IsClosed_Variable7, float CallFunc_Lerp_ReturnValue9, class UFortStoreContext* CallFunc_GetContext_ReturnValue6, class UFortStoreContext* CallFunc_GetContext_ReturnValue7, const struct FCard& CallFunc_GetCard_ResultOut1, bool CallFunc_GetCard_ReturnValue1, const struct FCard& CallFunc_GetCard_ResultOut2, bool CallFunc_GetCard_ReturnValue2, class UFortCardPackItem* K2Node_DynamicCast_AsFort_Card_Pack_Item, bool K2Node_DynamicCast_bSuccess2, class UFortCardPackItem* K2Node_DynamicCast_AsFort_Card_Pack_Item1, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger1_CmpSuccess, class UFortStoreContext* CallFunc_GetContext_ReturnValue8, bool CallFunc_ChoiceResultComplete_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue9, bool CallFunc_MakeChoice_ReturnValue, bool CallFunc_MakeChoice_ReturnValue1, class UObject* Temp_object_Variable2, class UTexture2D* K2Node_DynamicCast_AsTexture_2D1, bool K2Node_DynamicCast_bSuccess4, bool K2Node_SwitchEnum3_CmpSuccess, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, class UObject* K2Node_CustomEvent_Loaded2, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue12, const struct FRotator& CallFunc_MakeRotator_ReturnValue4, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult2, class UFortStoreContext* CallFunc_GetContext_ReturnValue10, const struct FKey& Temp_struct_Variable1, const struct FCard& CallFunc_GetCard_ResultOut3, bool CallFunc_GetCard_ReturnValue3, const struct FKey& K2Node_InputKeyEvent_Key2, enum class EFortRarity CallFunc_GetRarity_ReturnValue1, const struct FKey& K2Node_InputKeyEvent_Key3, const struct FRotator& CallFunc_RLerp_ReturnValue6, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult3, const struct FVector& CallFunc_VLerp_ReturnValue10, class UFortStoreContext* CallFunc_GetContext_ReturnValue11, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_CardExitComplete_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_CardFrontRevealComplete_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue13, bool CallFunc_CardFlipComplete_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue14, bool CallFunc_CardBackRevealComplete_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue15, bool CallFunc_CardEntryComplete_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortStoreContext* CallFunc_GetContext_ReturnValue16, class UObject* Temp_object_Variable3, class UObject* K2Node_CustomEvent_Loaded3, class UFortStoreContext* CallFunc_GetContext_ReturnValue17, class UFortSchematicItemDefinition* K2Node_DynamicCast_AsFort_Schematic_Item_Definition, bool K2Node_DynamicCast_bSuccess5, const struct FCard& CallFunc_GetCard_ResultOut4, bool CallFunc_GetCard_ReturnValue4, class UFortWorldItemDefinition* CallFunc_GetResultWorldItemDefinition_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, class UFortCardPackItem* K2Node_DynamicCast_AsFort_Card_Pack_Item2, bool K2Node_DynamicCast_bSuccess6, const class FString& CallFunc_GetPersistentName_ReturnValue, TArray<class UFortAccountItemDefinition*>& CallFunc_GetChoices_Choices, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue1, bool CallFunc_Contains_ReturnValue2, bool CallFunc_Contains_ReturnValue3, bool CallFunc_Contains_ReturnValue4, bool CallFunc_Contains_ReturnValue5, bool CallFunc_Contains_ReturnValue6, bool CallFunc_Contains_ReturnValue7, bool CallFunc_Contains_ReturnValue8, bool CallFunc_Contains_ReturnValue9, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D2, bool K2Node_DynamicCast_bSuccess7, class UFortSchematicItemDefinition* K2Node_DynamicCast_AsFort_Schematic_Item_Definition1, bool K2Node_DynamicCast_bSuccess8, class UFortWorldItemDefinition* CallFunc_GetResultWorldItemDefinition_ReturnValue1, const class FString& CallFunc_GetPersistentName_ReturnValue1, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue2, bool CallFunc_Contains_ReturnValue10, bool CallFunc_Contains_ReturnValue11, bool CallFunc_Contains_ReturnValue12, bool CallFunc_Contains_ReturnValue13, bool CallFunc_Contains_ReturnValue14, bool CallFunc_Contains_ReturnValue15, bool CallFunc_Contains_ReturnValue16, bool CallFunc_Contains_ReturnValue17, bool CallFunc_Contains_ReturnValue18, bool CallFunc_Contains_ReturnValue19, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue1, class UFortAccountItemDefinition* CallFunc_Array_Get_Item2, class UTexture2D* K2Node_DynamicCast_AsTexture_2D3, bool K2Node_DynamicCast_bSuccess9, class UFortAccountItemDefinition* CallFunc_Array_Get_Item3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FTransform& CallFunc_TLerp_ReturnValue3, const struct FVector& CallFunc_BreakTransform_Location6, const struct FRotator& CallFunc_BreakTransform_Rotation6, const struct FVector& CallFunc_BreakTransform_Scale6, const struct FTransform& CallFunc_TLerp_ReturnValue4, const struct FTransform& CallFunc_TLerp_ReturnValue5, const struct FVector& CallFunc_BreakTransform_Location7, const struct FRotator& CallFunc_BreakTransform_Rotation7, const struct FVector& CallFunc_BreakTransform_Scale7, const struct FVector& CallFunc_BreakTransform_Location8, const struct FRotator& CallFunc_BreakTransform_Rotation8, const struct FVector& CallFunc_BreakTransform_Scale8, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, const struct FTransform& CallFunc_TLerp_ReturnValue6, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult7, const struct FVector& CallFunc_BreakTransform_Location9, const struct FRotator& CallFunc_BreakTransform_Rotation9, const struct FVector& CallFunc_BreakTransform_Scale9, const struct FTransform& CallFunc_MakeTransform_ReturnValue3, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, bool Temp_bool_Has_Been_Initd_Variable8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue11, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue12, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue13, const struct FVector& CallFunc_VLerp_ReturnValue11, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue14, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult6, const struct FVector& CallFunc_VLerp_ReturnValue12, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult7, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult8, bool Temp_bool_IsClosed_Variable8, float K2Node_InputAxisEvent_AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_BP_C", "ExecuteUbergraph_StoreCardReveal_BP");

	Params::AStoreCardReveal_BP_C_ExecuteUbergraph_StoreCardReveal_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue = CallFunc_GetVectorParameterValue_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue1 = CallFunc_GetVectorParameterValue_ReturnValue1;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue2 = CallFunc_GetVectorParameterValue_ReturnValue2;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue3 = CallFunc_GetVectorParameterValue_ReturnValue3;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue4 = CallFunc_GetVectorParameterValue_ReturnValue4;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue5 = CallFunc_GetVectorParameterValue_ReturnValue5;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue6 = CallFunc_GetVectorParameterValue_ReturnValue6;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue7 = CallFunc_GetVectorParameterValue_ReturnValue7;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue8 = CallFunc_GetVectorParameterValue_ReturnValue8;
	Parms.CallFunc_Add_ByteByte_ReturnValue = CallFunc_Add_ByteByte_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue9 = CallFunc_GetVectorParameterValue_ReturnValue9;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue10 = CallFunc_GetVectorParameterValue_ReturnValue10;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue11 = CallFunc_GetVectorParameterValue_ReturnValue11;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue12 = CallFunc_GetVectorParameterValue_ReturnValue12;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue13 = CallFunc_GetVectorParameterValue_ReturnValue13;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue14 = CallFunc_GetVectorParameterValue_ReturnValue14;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue15 = CallFunc_GetVectorParameterValue_ReturnValue15;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue16 = CallFunc_GetVectorParameterValue_ReturnValue16;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue17 = CallFunc_GetVectorParameterValue_ReturnValue17;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue18 = CallFunc_GetVectorParameterValue_ReturnValue18;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue19 = CallFunc_GetVectorParameterValue_ReturnValue19;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue20 = CallFunc_GetVectorParameterValue_ReturnValue20;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue21 = CallFunc_GetVectorParameterValue_ReturnValue21;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue22 = CallFunc_GetVectorParameterValue_ReturnValue22;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue23 = CallFunc_GetVectorParameterValue_ReturnValue23;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue24 = CallFunc_GetVectorParameterValue_ReturnValue24;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue25 = CallFunc_GetVectorParameterValue_ReturnValue25;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue26 = CallFunc_GetVectorParameterValue_ReturnValue26;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue27 = CallFunc_GetVectorParameterValue_ReturnValue27;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue28 = CallFunc_GetVectorParameterValue_ReturnValue28;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue29 = CallFunc_GetVectorParameterValue_ReturnValue29;
	Parms.CallFunc_Greater_ByteByte_ReturnValue = CallFunc_Greater_ByteByte_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_Greater_ByteByte_ReturnValue1 = CallFunc_Greater_ByteByte_ReturnValue1;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue30 = CallFunc_GetVectorParameterValue_ReturnValue30;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue31 = CallFunc_GetVectorParameterValue_ReturnValue31;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue32 = CallFunc_GetVectorParameterValue_ReturnValue32;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue1 = CallFunc_SpawnSound2D_ReturnValue1;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue33 = CallFunc_GetVectorParameterValue_ReturnValue33;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue34 = CallFunc_GetVectorParameterValue_ReturnValue34;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue35 = CallFunc_GetVectorParameterValue_ReturnValue35;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue36 = CallFunc_GetVectorParameterValue_ReturnValue36;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue37 = CallFunc_GetVectorParameterValue_ReturnValue37;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue38 = CallFunc_GetVectorParameterValue_ReturnValue38;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue39 = CallFunc_GetVectorParameterValue_ReturnValue39;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue40 = CallFunc_GetVectorParameterValue_ReturnValue40;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue41 = CallFunc_GetVectorParameterValue_ReturnValue41;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue42 = CallFunc_GetVectorParameterValue_ReturnValue42;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue43 = CallFunc_GetVectorParameterValue_ReturnValue43;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue44 = CallFunc_GetVectorParameterValue_ReturnValue44;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue45 = CallFunc_GetVectorParameterValue_ReturnValue45;
	Parms.Temp_bool_Has_Been_Initd_Variable1 = Temp_bool_Has_Been_Initd_Variable1;
	Parms.CallFunc_GetPlayerController_ReturnValue1 = CallFunc_GetPlayerController_ReturnValue1;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue46 = CallFunc_GetVectorParameterValue_ReturnValue46;
	Parms.CallFunc_GreaterEqual_ByteByte_ReturnValue = CallFunc_GreaterEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable1 = Temp_bool_IsClosed_Variable1;
	Parms.K2Node_ComponentBoundEvent_TouchedComponent3 = K2Node_ComponentBoundEvent_TouchedComponent3;
	Parms.K2Node_ComponentBoundEvent_ButtonPressed1 = K2Node_ComponentBoundEvent_ButtonPressed1;
	Parms.K2Node_ComponentBoundEvent_TouchedComponent2 = K2Node_ComponentBoundEvent_TouchedComponent2;
	Parms.K2Node_ComponentBoundEvent_ButtonPressed = K2Node_ComponentBoundEvent_ButtonPressed;
	Parms.Temp_bool_Has_Been_Initd_Variable2 = Temp_bool_Has_Been_Initd_Variable2;
	Parms.Temp_bool_IsClosed_Variable2 = Temp_bool_IsClosed_Variable2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable3 = Temp_bool_Has_Been_Initd_Variable3;
	Parms.Temp_bool_IsClosed_Variable3 = Temp_bool_IsClosed_Variable3;
	Parms.CallFunc_GetAllActorsOfClass_OutActors1 = CallFunc_GetAllActorsOfClass_OutActors1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.Temp_bool_Has_Been_Initd_Variable4 = Temp_bool_Has_Been_Initd_Variable4;
	Parms.Temp_bool_IsClosed_Variable4 = Temp_bool_IsClosed_Variable4;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue2 = CallFunc_GetPlayerController_ReturnValue2;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue47 = CallFunc_GetVectorParameterValue_ReturnValue47;
	Parms.CallFunc_BreakRotator_Roll1 = CallFunc_BreakRotator_Roll1;
	Parms.CallFunc_BreakRotator_Pitch1 = CallFunc_BreakRotator_Pitch1;
	Parms.CallFunc_BreakRotator_Yaw1 = CallFunc_BreakRotator_Yaw1;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue48 = CallFunc_GetVectorParameterValue_ReturnValue48;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue49 = CallFunc_GetVectorParameterValue_ReturnValue49;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue50 = CallFunc_GetVectorParameterValue_ReturnValue50;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue51 = CallFunc_GetVectorParameterValue_ReturnValue51;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue52 = CallFunc_GetVectorParameterValue_ReturnValue52;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue53 = CallFunc_GetVectorParameterValue_ReturnValue53;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue1 = CallFunc_K2_GetComponentLocation_ReturnValue1;
	Parms.K2Node_CustomEvent_TouchedComponent3 = K2Node_CustomEvent_TouchedComponent3;
	Parms.K2Node_CustomEvent_TouchedComponent2 = K2Node_CustomEvent_TouchedComponent2;
	Parms.K2Node_CustomEvent_TouchedComponent1 = K2Node_CustomEvent_TouchedComponent1;
	Parms.K2Node_CustomEvent_TouchedComponent = K2Node_CustomEvent_TouchedComponent;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakTransform_Location1 = CallFunc_BreakTransform_Location1;
	Parms.CallFunc_BreakTransform_Rotation1 = CallFunc_BreakTransform_Rotation1;
	Parms.CallFunc_BreakTransform_Scale1 = CallFunc_BreakTransform_Scale1;
	Parms.CallFunc_BreakTransform_Location2 = CallFunc_BreakTransform_Location2;
	Parms.CallFunc_BreakTransform_Rotation2 = CallFunc_BreakTransform_Rotation2;
	Parms.CallFunc_BreakTransform_Scale2 = CallFunc_BreakTransform_Scale2;
	Parms.CallFunc_BreakTransform_Location3 = CallFunc_BreakTransform_Location3;
	Parms.CallFunc_BreakTransform_Rotation3 = CallFunc_BreakTransform_Rotation3;
	Parms.CallFunc_BreakTransform_Scale3 = CallFunc_BreakTransform_Scale3;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue2 = CallFunc_K2_GetComponentLocation_ReturnValue2;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue1 = CallFunc_K2_GetComponentRotation_ReturnValue1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue2 = CallFunc_K2_GetComponentRotation_ReturnValue2;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue1 = CallFunc_K2_GetComponentScale_ReturnValue1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue3 = CallFunc_K2_GetComponentLocation_ReturnValue3;
	Parms.CallFunc_BreakVector_X1 = CallFunc_BreakVector_X1;
	Parms.CallFunc_BreakVector_Y1 = CallFunc_BreakVector_Y1;
	Parms.CallFunc_BreakVector_Z1 = CallFunc_BreakVector_Z1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue3 = CallFunc_K2_GetComponentRotation_ReturnValue3;
	Parms.Temp_bool_IsClosed_Variable5 = Temp_bool_IsClosed_Variable5;
	Parms.K2Node_CustomEvent_NewStoreState = K2Node_CustomEvent_NewStoreState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue1 = CallFunc_K2_GetComponentToWorld_ReturnValue1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue4 = CallFunc_K2_GetComponentRotation_ReturnValue4;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue2 = CallFunc_K2_GetComponentScale_ReturnValue2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue4 = CallFunc_K2_GetComponentLocation_ReturnValue4;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_MakeVector_ReturnValue1 = CallFunc_MakeVector_ReturnValue1;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult1 = CallFunc_K2_SetWorldTransform_SweepHitResult1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue5 = CallFunc_K2_GetComponentRotation_ReturnValue5;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue6 = CallFunc_K2_GetComponentRotation_ReturnValue6;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue7 = CallFunc_K2_GetComponentRotation_ReturnValue7;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue3 = CallFunc_K2_GetComponentScale_ReturnValue3;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue5 = CallFunc_K2_GetComponentLocation_ReturnValue5;
	Parms.CallFunc_BreakVector_X3 = CallFunc_BreakVector_X3;
	Parms.CallFunc_BreakVector_Y3 = CallFunc_BreakVector_Y3;
	Parms.CallFunc_BreakVector_Z3 = CallFunc_BreakVector_Z3;
	Parms.Temp_bool_Has_Been_Initd_Variable5 = Temp_bool_Has_Been_Initd_Variable5;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue1 = CallFunc_SpawnSoundAttached_ReturnValue1;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue6 = CallFunc_K2_GetComponentLocation_ReturnValue6;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue7 = CallFunc_K2_GetComponentLocation_ReturnValue7;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue2 = CallFunc_K2_GetComponentToWorld_ReturnValue2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue3 = CallFunc_K2_GetComponentToWorld_ReturnValue3;
	Parms.Temp_bool_IsClosed_Variable6 = Temp_bool_IsClosed_Variable6;
	Parms.Temp_bool_Has_Been_Initd_Variable6 = Temp_bool_Has_Been_Initd_Variable6;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue8 = CallFunc_K2_GetComponentLocation_ReturnValue8;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue9 = CallFunc_K2_GetComponentLocation_ReturnValue9;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue4 = CallFunc_K2_GetComponentToWorld_ReturnValue4;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue5 = CallFunc_K2_GetComponentToWorld_ReturnValue5;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue6 = CallFunc_K2_GetComponentToWorld_ReturnValue6;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue7 = CallFunc_K2_GetComponentToWorld_ReturnValue7;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue8 = CallFunc_K2_GetComponentToWorld_ReturnValue8;
	Parms.CallFunc_BreakTransform_Location4 = CallFunc_BreakTransform_Location4;
	Parms.CallFunc_BreakTransform_Rotation4 = CallFunc_BreakTransform_Rotation4;
	Parms.CallFunc_BreakTransform_Scale4 = CallFunc_BreakTransform_Scale4;
	Parms.CallFunc_BreakRotator_Roll2 = CallFunc_BreakRotator_Roll2;
	Parms.CallFunc_BreakRotator_Pitch2 = CallFunc_BreakRotator_Pitch2;
	Parms.CallFunc_BreakRotator_Yaw2 = CallFunc_BreakRotator_Yaw2;
	Parms.CallFunc_BreakVector_X4 = CallFunc_BreakVector_X4;
	Parms.CallFunc_BreakVector_Y4 = CallFunc_BreakVector_Y4;
	Parms.CallFunc_BreakVector_Z4 = CallFunc_BreakVector_Z4;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue9 = CallFunc_K2_GetComponentToWorld_ReturnValue9;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable3 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable3;
	Parms.CallFunc_BreakTransform_Location5 = CallFunc_BreakTransform_Location5;
	Parms.CallFunc_BreakTransform_Rotation5 = CallFunc_BreakTransform_Rotation5;
	Parms.CallFunc_BreakTransform_Scale5 = CallFunc_BreakTransform_Scale5;
	Parms.CallFunc_BreakRotator_Roll3 = CallFunc_BreakRotator_Roll3;
	Parms.CallFunc_BreakRotator_Pitch3 = CallFunc_BreakRotator_Pitch3;
	Parms.CallFunc_BreakRotator_Yaw3 = CallFunc_BreakRotator_Yaw3;
	Parms.CallFunc_BreakVector_X5 = CallFunc_BreakVector_X5;
	Parms.CallFunc_BreakVector_Y5 = CallFunc_BreakVector_Y5;
	Parms.CallFunc_BreakVector_Z5 = CallFunc_BreakVector_Z5;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue10 = CallFunc_K2_GetComponentToWorld_ReturnValue10;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue11 = CallFunc_K2_GetComponentToWorld_ReturnValue11;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue1 = CallFunc_GetCurrentInputType_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetCard_ResultOut = CallFunc_GetCard_ResultOut;
	Parms.CallFunc_GetCard_ReturnValue = CallFunc_GetCard_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_IsLimitedToES2Features_ReturnValue = CallFunc_IsLimitedToES2Features_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_InputTouchEvent_FingerIndex = K2Node_InputTouchEvent_FingerIndex;
	Parms.K2Node_InputTouchEvent_Location = K2Node_InputTouchEvent_Location;
	Parms.K2Node_InputTouchEvent_FingerIndex1 = K2Node_InputTouchEvent_FingerIndex1;
	Parms.K2Node_InputTouchEvent_Location1 = K2Node_InputTouchEvent_Location1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.K2Node_InputKeyEvent_Key1 = K2Node_InputKeyEvent_Key1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface = K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue54 = CallFunc_GetVectorParameterValue_ReturnValue54;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue = CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue1 = CallFunc_VLerp_ReturnValue1;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_GreaterEqual_ByteByte_ReturnValue1 = CallFunc_GreaterEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_GetPlayerController_ReturnValue3 = CallFunc_GetPlayerController_ReturnValue3;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.CallFunc_LessEqual_ByteByte_ReturnValue = CallFunc_LessEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.K2Node_CustomEvent_Loaded1 = K2Node_CustomEvent_Loaded1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.CallFunc_BreakRotator_Roll4 = CallFunc_BreakRotator_Roll4;
	Parms.CallFunc_BreakRotator_Pitch4 = CallFunc_BreakRotator_Pitch4;
	Parms.CallFunc_BreakRotator_Yaw4 = CallFunc_BreakRotator_Yaw4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.CallFunc_MakeRotator_ReturnValue1 = CallFunc_MakeRotator_ReturnValue1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult1 = CallFunc_K2_SetRelativeRotation_SweepHitResult1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.Temp_bool_Variable10 = Temp_bool_Variable10;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue8 = CallFunc_K2_GetComponentRotation_ReturnValue8;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue10 = CallFunc_K2_GetComponentLocation_ReturnValue10;
	Parms.CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult = CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult;
	Parms.K2Node_InputAxisEvent_AxisValue1 = K2Node_InputAxisEvent_AxisValue1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable11 = Temp_bool_Variable11;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_bool_Variable13 = Temp_bool_Variable13;
	Parms.K2Node_CustomEvent_bUsingGamepad = K2Node_CustomEvent_bUsingGamepad;
	Parms.Temp_bool_Variable14 = Temp_bool_Variable14;
	Parms.Temp_bool_Variable15 = Temp_bool_Variable15;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue3 = CallFunc_Add_FloatFloat_ReturnValue3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue4 = CallFunc_Add_FloatFloat_ReturnValue4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue5 = CallFunc_Add_FloatFloat_ReturnValue5;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_MakeRotator_ReturnValue2 = CallFunc_MakeRotator_ReturnValue2;
	Parms.CallFunc_VLerp_ReturnValue2 = CallFunc_VLerp_ReturnValue2;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult2 = CallFunc_K2_SetWorldTransform_SweepHitResult2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue6 = CallFunc_Add_FloatFloat_ReturnValue6;
	Parms.CallFunc_Add_FloatFloat_ReturnValue7 = CallFunc_Add_FloatFloat_ReturnValue7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue8 = CallFunc_Add_FloatFloat_ReturnValue8;
	Parms.CallFunc_Add_FloatFloat_ReturnValue9 = CallFunc_Add_FloatFloat_ReturnValue9;
	Parms.CallFunc_MakeVector_ReturnValue3 = CallFunc_MakeVector_ReturnValue3;
	Parms.CallFunc_MakeRotator_ReturnValue3 = CallFunc_MakeRotator_ReturnValue3;
	Parms.CallFunc_VLerp_ReturnValue3 = CallFunc_VLerp_ReturnValue3;
	Parms.CallFunc_RLerp_ReturnValue1 = CallFunc_RLerp_ReturnValue1;
	Parms.CallFunc_MakeTransform_ReturnValue1 = CallFunc_MakeTransform_ReturnValue1;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult3 = CallFunc_K2_SetWorldTransform_SweepHitResult3;
	Parms.CallFunc_TLerp_ReturnValue = CallFunc_TLerp_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult4 = CallFunc_K2_SetWorldTransform_SweepHitResult4;
	Parms.Temp_bool_Has_Been_Initd_Variable7 = Temp_bool_Has_Been_Initd_Variable7;
	Parms.CallFunc_VLerp_ReturnValue4 = CallFunc_VLerp_ReturnValue4;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult1 = CallFunc_K2_SetWorldLocation_SweepHitResult1;
	Parms.K2Node_ComponentBoundEvent_FingerIndex1 = K2Node_ComponentBoundEvent_FingerIndex1;
	Parms.K2Node_ComponentBoundEvent_TouchedComponent1 = K2Node_ComponentBoundEvent_TouchedComponent1;
	Parms.K2Node_ComponentBoundEvent_FingerIndex = K2Node_ComponentBoundEvent_FingerIndex;
	Parms.K2Node_ComponentBoundEvent_TouchedComponent = K2Node_ComponentBoundEvent_TouchedComponent;
	Parms.CallFunc_VLerp_ReturnValue5 = CallFunc_VLerp_ReturnValue5;
	Parms.CallFunc_RLerp_ReturnValue2 = CallFunc_RLerp_ReturnValue2;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue4 = CallFunc_Multiply_FloatFloat_ReturnValue4;
	Parms.CallFunc_RLerp_ReturnValue3 = CallFunc_RLerp_ReturnValue3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue10 = CallFunc_Add_FloatFloat_ReturnValue10;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult1 = CallFunc_K2_SetWorldRotation_SweepHitResult1;
	Parms.CallFunc_MakeVector_ReturnValue4 = CallFunc_MakeVector_ReturnValue4;
	Parms.CallFunc_VLerp_ReturnValue6 = CallFunc_VLerp_ReturnValue6;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue2 = CallFunc_SpawnSoundAttached_ReturnValue2;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult2 = CallFunc_K2_SetWorldLocation_SweepHitResult2;
	Parms.CallFunc_VLerp_ReturnValue7 = CallFunc_VLerp_ReturnValue7;
	Parms.CallFunc_RLerp_ReturnValue4 = CallFunc_RLerp_ReturnValue4;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult2 = CallFunc_K2_SetWorldRotation_SweepHitResult2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue11 = CallFunc_Add_FloatFloat_ReturnValue11;
	Parms.CallFunc_RLerp_ReturnValue5 = CallFunc_RLerp_ReturnValue5;
	Parms.CallFunc_MakeVector_ReturnValue5 = CallFunc_MakeVector_ReturnValue5;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult3 = CallFunc_K2_SetWorldRotation_SweepHitResult3;
	Parms.CallFunc_VLerp_ReturnValue8 = CallFunc_VLerp_ReturnValue8;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult3 = CallFunc_K2_SetWorldLocation_SweepHitResult3;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue1 = CallFunc_Lerp_ReturnValue1;
	Parms.CallFunc_Lerp_ReturnValue2 = CallFunc_Lerp_ReturnValue2;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue1 = CallFunc_Multiply_VectorFloat_ReturnValue1;
	Parms.CallFunc_Lerp_ReturnValue3 = CallFunc_Lerp_ReturnValue3;
	Parms.CallFunc_Lerp_ReturnValue4 = CallFunc_Lerp_ReturnValue4;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue2 = CallFunc_Multiply_VectorFloat_ReturnValue2;
	Parms.CallFunc_Lerp_ReturnValue5 = CallFunc_Lerp_ReturnValue5;
	Parms.CallFunc_Lerp_ReturnValue6 = CallFunc_Lerp_ReturnValue6;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue3 = CallFunc_Multiply_VectorFloat_ReturnValue3;
	Parms.CallFunc_Lerp_ReturnValue7 = CallFunc_Lerp_ReturnValue7;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_TLerp_ReturnValue1 = CallFunc_TLerp_ReturnValue1;
	Parms.CallFunc_TLerp_ReturnValue2 = CallFunc_TLerp_ReturnValue2;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult5 = CallFunc_K2_SetWorldTransform_SweepHitResult5;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult6 = CallFunc_K2_SetWorldTransform_SweepHitResult6;
	Parms.CallFunc_VLerp_ReturnValue9 = CallFunc_VLerp_ReturnValue9;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult4 = CallFunc_K2_SetWorldLocation_SweepHitResult4;
	Parms.CallFunc_Lerp_ReturnValue8 = CallFunc_Lerp_ReturnValue8;
	Parms.Temp_bool_IsClosed_Variable7 = Temp_bool_IsClosed_Variable7;
	Parms.CallFunc_Lerp_ReturnValue9 = CallFunc_Lerp_ReturnValue9;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.CallFunc_GetCard_ResultOut1 = CallFunc_GetCard_ResultOut1;
	Parms.CallFunc_GetCard_ReturnValue1 = CallFunc_GetCard_ReturnValue1;
	Parms.CallFunc_GetCard_ResultOut2 = CallFunc_GetCard_ResultOut2;
	Parms.CallFunc_GetCard_ReturnValue2 = CallFunc_GetCard_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Card_Pack_Item = K2Node_DynamicCast_AsFort_Card_Pack_Item;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsFort_Card_Pack_Item1 = K2Node_DynamicCast_AsFort_Card_Pack_Item1;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger1_CmpSuccess = K2Node_SwitchInteger1_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue8 = CallFunc_GetContext_ReturnValue8;
	Parms.CallFunc_ChoiceResultComplete_ReturnValue = CallFunc_ChoiceResultComplete_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue9 = CallFunc_GetContext_ReturnValue9;
	Parms.CallFunc_MakeChoice_ReturnValue = CallFunc_MakeChoice_ReturnValue;
	Parms.CallFunc_MakeChoice_ReturnValue1 = CallFunc_MakeChoice_ReturnValue1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.K2Node_DynamicCast_AsTexture_2D1 = K2Node_DynamicCast_AsTexture_2D1;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.K2Node_SwitchEnum3_CmpSuccess = K2Node_SwitchEnum3_CmpSuccess;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded2 = K2Node_CustomEvent_Loaded2;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue1 = CallFunc_Multiply_LinearColorFloat_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue12 = CallFunc_Add_FloatFloat_ReturnValue12;
	Parms.CallFunc_MakeRotator_ReturnValue4 = CallFunc_MakeRotator_ReturnValue4;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult2 = CallFunc_K2_SetRelativeRotation_SweepHitResult2;
	Parms.CallFunc_GetContext_ReturnValue10 = CallFunc_GetContext_ReturnValue10;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_GetCard_ResultOut3 = CallFunc_GetCard_ResultOut3;
	Parms.CallFunc_GetCard_ReturnValue3 = CallFunc_GetCard_ReturnValue3;
	Parms.K2Node_InputKeyEvent_Key2 = K2Node_InputKeyEvent_Key2;
	Parms.CallFunc_GetRarity_ReturnValue1 = CallFunc_GetRarity_ReturnValue1;
	Parms.K2Node_InputKeyEvent_Key3 = K2Node_InputKeyEvent_Key3;
	Parms.CallFunc_RLerp_ReturnValue6 = CallFunc_RLerp_ReturnValue6;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult3 = CallFunc_K2_SetRelativeRotation_SweepHitResult3;
	Parms.CallFunc_VLerp_ReturnValue10 = CallFunc_VLerp_ReturnValue10;
	Parms.CallFunc_GetContext_ReturnValue11 = CallFunc_GetContext_ReturnValue11;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_CardExitComplete_ReturnValue = CallFunc_CardExitComplete_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_CardFrontRevealComplete_ReturnValue = CallFunc_CardFrontRevealComplete_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue13 = CallFunc_GetContext_ReturnValue13;
	Parms.CallFunc_CardFlipComplete_ReturnValue = CallFunc_CardFlipComplete_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue14 = CallFunc_GetContext_ReturnValue14;
	Parms.CallFunc_CardBackRevealComplete_ReturnValue = CallFunc_CardBackRevealComplete_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue15 = CallFunc_GetContext_ReturnValue15;
	Parms.CallFunc_CardEntryComplete_ReturnValue = CallFunc_CardEntryComplete_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_GetContext_ReturnValue16 = CallFunc_GetContext_ReturnValue16;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.K2Node_CustomEvent_Loaded3 = K2Node_CustomEvent_Loaded3;
	Parms.CallFunc_GetContext_ReturnValue17 = CallFunc_GetContext_ReturnValue17;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item_Definition = K2Node_DynamicCast_AsFort_Schematic_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.CallFunc_GetCard_ResultOut4 = CallFunc_GetCard_ResultOut4;
	Parms.CallFunc_GetCard_ReturnValue4 = CallFunc_GetCard_ReturnValue4;
	Parms.CallFunc_GetResultWorldItemDefinition_ReturnValue = CallFunc_GetResultWorldItemDefinition_ReturnValue;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue = CallFunc_GetLargePreviewImage_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Card_Pack_Item2 = K2Node_DynamicCast_AsFort_Card_Pack_Item2;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.CallFunc_GetPersistentName_ReturnValue = CallFunc_GetPersistentName_ReturnValue;
	Parms.CallFunc_GetChoices_Choices = CallFunc_GetChoices_Choices;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue1 = CallFunc_Contains_ReturnValue1;
	Parms.CallFunc_Contains_ReturnValue2 = CallFunc_Contains_ReturnValue2;
	Parms.CallFunc_Contains_ReturnValue3 = CallFunc_Contains_ReturnValue3;
	Parms.CallFunc_Contains_ReturnValue4 = CallFunc_Contains_ReturnValue4;
	Parms.CallFunc_Contains_ReturnValue5 = CallFunc_Contains_ReturnValue5;
	Parms.CallFunc_Contains_ReturnValue6 = CallFunc_Contains_ReturnValue6;
	Parms.CallFunc_Contains_ReturnValue7 = CallFunc_Contains_ReturnValue7;
	Parms.CallFunc_Contains_ReturnValue8 = CallFunc_Contains_ReturnValue8;
	Parms.CallFunc_Contains_ReturnValue9 = CallFunc_Contains_ReturnValue9;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue1 = CallFunc_GetLargePreviewImage_ReturnValue1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D2 = K2Node_DynamicCast_AsTexture_2D2;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item_Definition1 = K2Node_DynamicCast_AsFort_Schematic_Item_Definition1;
	Parms.K2Node_DynamicCast_bSuccess8 = K2Node_DynamicCast_bSuccess8;
	Parms.CallFunc_GetResultWorldItemDefinition_ReturnValue1 = CallFunc_GetResultWorldItemDefinition_ReturnValue1;
	Parms.CallFunc_GetPersistentName_ReturnValue1 = CallFunc_GetPersistentName_ReturnValue1;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue2 = CallFunc_GetLargePreviewImage_ReturnValue2;
	Parms.CallFunc_Contains_ReturnValue10 = CallFunc_Contains_ReturnValue10;
	Parms.CallFunc_Contains_ReturnValue11 = CallFunc_Contains_ReturnValue11;
	Parms.CallFunc_Contains_ReturnValue12 = CallFunc_Contains_ReturnValue12;
	Parms.CallFunc_Contains_ReturnValue13 = CallFunc_Contains_ReturnValue13;
	Parms.CallFunc_Contains_ReturnValue14 = CallFunc_Contains_ReturnValue14;
	Parms.CallFunc_Contains_ReturnValue15 = CallFunc_Contains_ReturnValue15;
	Parms.CallFunc_Contains_ReturnValue16 = CallFunc_Contains_ReturnValue16;
	Parms.CallFunc_Contains_ReturnValue17 = CallFunc_Contains_ReturnValue17;
	Parms.CallFunc_Contains_ReturnValue18 = CallFunc_Contains_ReturnValue18;
	Parms.CallFunc_Contains_ReturnValue19 = CallFunc_Contains_ReturnValue19;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue3 = CallFunc_GetLargePreviewImage_ReturnValue3;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue1;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.K2Node_DynamicCast_AsTexture_2D3 = K2Node_DynamicCast_AsTexture_2D3;
	Parms.K2Node_DynamicCast_bSuccess9 = K2Node_DynamicCast_bSuccess9;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue12 = CallFunc_K2_GetComponentToWorld_ReturnValue12;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_TLerp_ReturnValue3 = CallFunc_TLerp_ReturnValue3;
	Parms.CallFunc_BreakTransform_Location6 = CallFunc_BreakTransform_Location6;
	Parms.CallFunc_BreakTransform_Rotation6 = CallFunc_BreakTransform_Rotation6;
	Parms.CallFunc_BreakTransform_Scale6 = CallFunc_BreakTransform_Scale6;
	Parms.CallFunc_TLerp_ReturnValue4 = CallFunc_TLerp_ReturnValue4;
	Parms.CallFunc_TLerp_ReturnValue5 = CallFunc_TLerp_ReturnValue5;
	Parms.CallFunc_BreakTransform_Location7 = CallFunc_BreakTransform_Location7;
	Parms.CallFunc_BreakTransform_Rotation7 = CallFunc_BreakTransform_Rotation7;
	Parms.CallFunc_BreakTransform_Scale7 = CallFunc_BreakTransform_Scale7;
	Parms.CallFunc_BreakTransform_Location8 = CallFunc_BreakTransform_Location8;
	Parms.CallFunc_BreakTransform_Rotation8 = CallFunc_BreakTransform_Rotation8;
	Parms.CallFunc_BreakTransform_Scale8 = CallFunc_BreakTransform_Scale8;
	Parms.CallFunc_MakeTransform_ReturnValue2 = CallFunc_MakeTransform_ReturnValue2;
	Parms.CallFunc_TLerp_ReturnValue6 = CallFunc_TLerp_ReturnValue6;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult7 = CallFunc_K2_SetWorldTransform_SweepHitResult7;
	Parms.CallFunc_BreakTransform_Location9 = CallFunc_BreakTransform_Location9;
	Parms.CallFunc_BreakTransform_Rotation9 = CallFunc_BreakTransform_Rotation9;
	Parms.CallFunc_BreakTransform_Scale9 = CallFunc_BreakTransform_Scale9;
	Parms.CallFunc_MakeTransform_ReturnValue3 = CallFunc_MakeTransform_ReturnValue3;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult8 = CallFunc_K2_SetWorldTransform_SweepHitResult8;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.Temp_bool_Has_Been_Initd_Variable8 = Temp_bool_Has_Been_Initd_Variable8;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue11 = CallFunc_K2_GetComponentLocation_ReturnValue11;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue12 = CallFunc_K2_GetComponentLocation_ReturnValue12;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue13 = CallFunc_K2_GetComponentLocation_ReturnValue13;
	Parms.CallFunc_VLerp_ReturnValue11 = CallFunc_VLerp_ReturnValue11;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult5 = CallFunc_K2_SetWorldLocation_SweepHitResult5;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue14 = CallFunc_K2_GetComponentLocation_ReturnValue14;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult6 = CallFunc_K2_SetWorldLocation_SweepHitResult6;
	Parms.CallFunc_VLerp_ReturnValue12 = CallFunc_VLerp_ReturnValue12;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult7 = CallFunc_K2_SetWorldLocation_SweepHitResult7;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult8 = CallFunc_K2_SetWorldLocation_SweepHitResult8;
	Parms.Temp_bool_IsClosed_Variable8 = Temp_bool_IsClosed_Variable8;
	Parms.K2Node_InputAxisEvent_AxisValue = K2Node_InputAxisEvent_AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



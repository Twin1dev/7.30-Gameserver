#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemInspectionItemExtraDetailsHostPanel.ItemInspectionItemExtraDetailsHostPanel_C
// (None)

class UClass* UItemInspectionItemExtraDetailsHostPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemInspectionItemExtraDetailsHostPanel_C");

	return Clss;
}


// ItemInspectionItemExtraDetailsHostPanel_C ItemInspectionItemExtraDetailsHostPanel.Default__ItemInspectionItemExtraDetailsHostPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemInspectionItemExtraDetailsHostPanel_C* UItemInspectionItemExtraDetailsHostPanel_C::GetDefaultObj()
{
	static class UItemInspectionItemExtraDetailsHostPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemInspectionItemExtraDetailsHostPanel_C*>(UItemInspectionItemExtraDetailsHostPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemInspectionItemExtraDetailsHostPanel.ItemInspectionItemExtraDetailsHostPanel_C.Update Border Color
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectionItemExtraDetailsHostPanel_C::Update_Border_Color(enum class EFortRarity CallFunc_GetRarity_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue1, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectionItemExtraDetailsHostPanel_C", "Update Border Color");

	Params::UItemInspectionItemExtraDetailsHostPanel_C_Update_Border_Color_Params Parms{};

	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue1 = CallFunc_GetRarity_ReturnValue1;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectionItemExtraDetailsHostPanel.ItemInspectionItemExtraDetailsHostPanel_C.Update Scrollbox Layout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectionItemExtraDetailsHostPanel_C::Update_Scrollbox_Layout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectionItemExtraDetailsHostPanel_C", "Update Scrollbox Layout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectionItemExtraDetailsHostPanel.ItemInspectionItemExtraDetailsHostPanel_C.Update Header Size
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HeaderWidth                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectionItemExtraDetailsHostPanel_C::Update_Header_Size(float HeaderWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectionItemExtraDetailsHostPanel_C", "Update Header Size");

	Params::UItemInspectionItemExtraDetailsHostPanel_C_Update_Header_Size_Params Parms{};

	Parms.HeaderWidth = HeaderWidth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectionItemExtraDetailsHostPanel.ItemInspectionItemExtraDetailsHostPanel_C.HandleDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectionItemExtraDetailsHostPanel_C::HandleDifferentItemToDetailSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectionItemExtraDetailsHostPanel_C", "HandleDifferentItemToDetailSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectionItemExtraDetailsHostPanel.ItemInspectionItemExtraDetailsHostPanel_C.ExecuteUbergraph_ItemInspectionItemExtraDetailsHostPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectionItemExtraDetailsHostPanel_C::ExecuteUbergraph_ItemInspectionItemExtraDetailsHostPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectionItemExtraDetailsHostPanel_C", "ExecuteUbergraph_ItemInspectionItemExtraDetailsHostPanel");

	Params::UItemInspectionItemExtraDetailsHostPanel_C_ExecuteUbergraph_ItemInspectionItemExtraDetailsHostPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



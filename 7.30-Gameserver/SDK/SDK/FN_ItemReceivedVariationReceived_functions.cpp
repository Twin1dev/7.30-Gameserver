#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemReceivedVariationReceived.ItemReceivedVariationReceived_C
// (None)

class UClass* UItemReceivedVariationReceived_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemReceivedVariationReceived_C");

	return Clss;
}


// ItemReceivedVariationReceived_C ItemReceivedVariationReceived.Default__ItemReceivedVariationReceived_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemReceivedVariationReceived_C* UItemReceivedVariationReceived_C::GetDefaultObj()
{
	static class UItemReceivedVariationReceived_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemReceivedVariationReceived_C*>(UItemReceivedVariationReceived_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemReceivedVariationReceived.ItemReceivedVariationReceived_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceivedVariationReceived_C::InitFromGiftBoxItem_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedVariationReceived_C", "InitFromGiftBoxItem_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemReceivedVariationReceived.ItemReceivedVariationReceived_C.ExecuteUbergraph_ItemReceivedVariationReceived
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortReceivedItemLootInfo   CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemReceivedVariationReceived_C::ExecuteUbergraph_ItemReceivedVariationReceived(int32 EntryPoint, const struct FFortReceivedItemLootInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedVariationReceived_C", "ExecuteUbergraph_ItemReceivedVariationReceived");

	Params::UItemReceivedVariationReceived_C_ExecuteUbergraph_ItemReceivedVariationReceived_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemInspectRefundItemQuantityList.ItemInspectRefundItemQuantityList_C
// (None)

class UClass* UItemInspectRefundItemQuantityList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemInspectRefundItemQuantityList_C");

	return Clss;
}


// ItemInspectRefundItemQuantityList_C ItemInspectRefundItemQuantityList.Default__ItemInspectRefundItemQuantityList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemInspectRefundItemQuantityList_C* UItemInspectRefundItemQuantityList_C::GetDefaultObj()
{
	static class UItemInspectRefundItemQuantityList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemInspectRefundItemQuantityList_C*>(UItemInspectRefundItemQuantityList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemInspectRefundItemQuantityList.ItemInspectRefundItemQuantityList_C.AddListEntry
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItemQuantityListEntryBase*ListEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectRefundItemQuantityList_C::AddListEntry(class UFortItemQuantityListEntryBase* ListEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectRefundItemQuantityList_C", "AddListEntry");

	Params::UItemInspectRefundItemQuantityList_C_AddListEntry_Params Parms{};

	Parms.ListEntry = ListEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectRefundItemQuantityList.ItemInspectRefundItemQuantityList_C.ExecuteUbergraph_ItemInspectRefundItemQuantityList
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemQuantityListEntryBase*K2Node_Event_ListEntry                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectRefundItemQuantityList_C::ExecuteUbergraph_ItemInspectRefundItemQuantityList(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, class UFortItemQuantityListEntryBase* K2Node_Event_ListEntry, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectRefundItemQuantityList_C", "ExecuteUbergraph_ItemInspectRefundItemQuantityList");

	Params::UItemInspectRefundItemQuantityList_C_ExecuteUbergraph_ItemInspectRefundItemQuantityList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_Event_ListEntry = K2Node_Event_ListEntry;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



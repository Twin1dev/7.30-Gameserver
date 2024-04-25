#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemInspectRefundDetailsPanel.ItemInspectRefundDetailsPanel_C
// (None)

class UClass* UItemInspectRefundDetailsPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemInspectRefundDetailsPanel_C");

	return Clss;
}


// ItemInspectRefundDetailsPanel_C ItemInspectRefundDetailsPanel.Default__ItemInspectRefundDetailsPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemInspectRefundDetailsPanel_C* UItemInspectRefundDetailsPanel_C::GetDefaultObj()
{
	static class UItemInspectRefundDetailsPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemInspectRefundDetailsPanel_C*>(UItemInspectRefundDetailsPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemInspectRefundDetailsPanel.ItemInspectRefundDetailsPanel_C.SetScrollWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectRefundDetailsPanel_C::SetScrollWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectRefundDetailsPanel_C", "SetScrollWidget");

	Params::UItemInspectRefundDetailsPanel_C_SetScrollWidget_Params Parms{};

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectRefundDetailsPanel.ItemInspectRefundDetailsPanel_C.SetItemToRefund
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*            ItemToRefund                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemQuantityPair>CallFunc_GetRefundResults_ReturnValue                            (ZeroConstructor, ReferenceParm)

void UItemInspectRefundDetailsPanel_C::SetItemToRefund(class UFortAccountItem* ItemToRefund, TArray<struct FFortItemQuantityPair>& CallFunc_GetRefundResults_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectRefundDetailsPanel_C", "SetItemToRefund");

	Params::UItemInspectRefundDetailsPanel_C_SetItemToRefund_Params Parms{};

	Parms.ItemToRefund = ItemToRefund;
	Parms.CallFunc_GetRefundResults_ReturnValue = CallFunc_GetRefundResults_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



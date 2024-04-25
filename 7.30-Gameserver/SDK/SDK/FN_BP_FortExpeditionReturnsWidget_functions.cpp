#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C
// (None)

class UClass* UBP_FortExpeditionReturnsWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FortExpeditionReturnsWidget_C");

	return Clss;
}


// BP_FortExpeditionReturnsWidget_C BP_FortExpeditionReturnsWidget.Default__BP_FortExpeditionReturnsWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FortExpeditionReturnsWidget_C* UBP_FortExpeditionReturnsWidget_C::GetDefaultObj()
{
	static class UBP_FortExpeditionReturnsWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FortExpeditionReturnsWidget_C*>(UBP_FortExpeditionReturnsWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Get Mcp Relative Utc Now
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime                   UtcNow                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_GetMcpRelativeUtcNow_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionReturnsWidget_C::Get_Mcp_Relative_Utc_Now(struct FDateTime* UtcNow, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FDateTime& CallFunc_GetMcpRelativeUtcNow_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "Get Mcp Relative Utc Now");

	Params::UBP_FortExpeditionReturnsWidget_C_Get_Mcp_Relative_Utc_Now_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMcpRelativeUtcNow_ReturnValue = CallFunc_GetMcpRelativeUtcNow_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UtcNow != nullptr)
		*UtcNow = std::move(Parms.UtcNow);

}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Get Expedition Item Definition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItemDefinition*ItemDef                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItemDefinition*K2Node_DynamicCast_AsFort_Expedition_Item_Definition             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionReturnsWidget_C::Get_Expedition_Item_Definition(class UFortExpeditionItem* Item, class UFortExpeditionItemDefinition** ItemDef, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortExpeditionItemDefinition* K2Node_DynamicCast_AsFort_Expedition_Item_Definition, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "Get Expedition Item Definition");

	Params::UBP_FortExpeditionReturnsWidget_C_Get_Expedition_Item_Definition_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Expedition_Item_Definition = K2Node_DynamicCast_AsFort_Expedition_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemDef != nullptr)
		*ItemDef = Parms.ItemDef;

}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Set Expedition Return Progress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItemDefinition*CallFunc_Get_Expedition_Item_Definition_ItemDef                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_GetRemainingExpeditionDuration_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalSeconds_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionReturnsWidget_C::Set_Expedition_Return_Progress(class UFortExpeditionItem* Item, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_ItemDef, const struct FDateTime& CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FTimespan& CallFunc_GetRemainingExpeditionDuration_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue, int32 CallFunc_FCeil_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "Set Expedition Return Progress");

	Params::UBP_FortExpeditionReturnsWidget_C_Set_Expedition_Return_Progress_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_Get_Expedition_Item_Definition_ItemDef = CallFunc_Get_Expedition_Item_Definition_ItemDef;
	Parms.CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow = CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetRemainingExpeditionDuration_ReturnValue = CallFunc_GetRemainingExpeditionDuration_ReturnValue;
	Parms.CallFunc_GetTotalSeconds_ReturnValue = CallFunc_GetTotalSeconds_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Set Expedition Return Time
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_MakeTimespan_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExpeditionCompleted_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimespan                   CallFunc_GetRemainingExpeditionDuration_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_Add_TimespanTimespan_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTimespanAsText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_FortExpeditionReturnsWidget_C::Set_Expedition_Return_Time(class UFortExpeditionItem* Item, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, const struct FDateTime& CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow, bool CallFunc_IsExpeditionCompleted_ReturnValue, const struct FTimespan& CallFunc_GetRemainingExpeditionDuration_ReturnValue, const struct FTimespan& CallFunc_Add_TimespanTimespan_ReturnValue, class FText CallFunc_GetTimespanAsText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "Set Expedition Return Time");

	Params::UBP_FortExpeditionReturnsWidget_C_Set_Expedition_Return_Time_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_MakeTimespan_ReturnValue = CallFunc_MakeTimespan_ReturnValue;
	Parms.CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow = CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow;
	Parms.CallFunc_IsExpeditionCompleted_ReturnValue = CallFunc_IsExpeditionCompleted_ReturnValue;
	Parms.CallFunc_GetRemainingExpeditionDuration_ReturnValue = CallFunc_GetRemainingExpeditionDuration_ReturnValue;
	Parms.CallFunc_Add_TimespanTimespan_ReturnValue = CallFunc_Add_TimespanTimespan_ReturnValue;
	Parms.CallFunc_GetTimespanAsText_ReturnValue = CallFunc_GetTimespanAsText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Refresh In Progress Widgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExpeditionInProgress_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionReturnsWidget_C::Refresh_In_Progress_Widgets(class UFortExpeditionItem* Item, bool CallFunc_IsExpeditionInProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "Refresh In Progress Widgets");

	Params::UBP_FortExpeditionReturnsWidget_C_Refresh_In_Progress_Widgets_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_IsExpeditionInProgress_ReturnValue = CallFunc_IsExpeditionInProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.OnExpeditionInProgressUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionReturnsWidget_C::OnExpeditionInProgressUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "OnExpeditionInProgressUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionReturnsWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         InItem                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionReturnsWidget_C::SetData(class UFortExpeditionItem* InItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "SetData");

	Params::UBP_FortExpeditionReturnsWidget_C_SetData_Params Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionReturnsWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "PreConstruct");

	Params::UBP_FortExpeditionReturnsWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.ExecuteUbergraph_BP_FortExpeditionReturnsWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItem*         K2Node_Event_InItem                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsExpeditionCompleted_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionReturnsWidget_C::ExecuteUbergraph_BP_FortExpeditionReturnsWidget(int32 EntryPoint, const struct FDateTime& CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow, class UFortExpeditionItem* K2Node_Event_InItem, bool K2Node_Event_IsDesignTime, bool CallFunc_IsExpeditionCompleted_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "ExecuteUbergraph_BP_FortExpeditionReturnsWidget");

	Params::UBP_FortExpeditionReturnsWidget_C_ExecuteUbergraph_BP_FortExpeditionReturnsWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow = CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow;
	Parms.K2Node_Event_InItem = K2Node_Event_InItem;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsExpeditionCompleted_ReturnValue = CallFunc_IsExpeditionCompleted_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.OnExpeditionCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionReturnsWidget_C::OnExpeditionCompleted__DelegateSignature(class UFortExpeditionItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "OnExpeditionCompleted__DelegateSignature");

	Params::UBP_FortExpeditionReturnsWidget_C_OnExpeditionCompleted__DelegateSignature_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}

}



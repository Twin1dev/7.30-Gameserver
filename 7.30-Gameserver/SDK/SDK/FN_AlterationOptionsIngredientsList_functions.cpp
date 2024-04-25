#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C
// (None)

class UClass* UAlterationOptionsIngredientsList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AlterationOptionsIngredientsList_C");

	return Clss;
}


// AlterationOptionsIngredientsList_C AlterationOptionsIngredientsList.Default__AlterationOptionsIngredientsList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAlterationOptionsIngredientsList_C* UAlterationOptionsIngredientsList_C::GetDefaultObj()
{
	static class UAlterationOptionsIngredientsList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAlterationOptionsIngredientsList_C*>(UAlterationOptionsIngredientsList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.SetupTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmptyList_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOptionsIngredientsList_C::SetupTitle(bool Temp_bool_Variable, bool CallFunc_IsEmptyList_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOptionsIngredientsList_C", "SetupTitle");

	Params::UAlterationOptionsIngredientsList_C_SetupTitle_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsEmptyList_ReturnValue = CallFunc_IsEmptyList_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.AddListEntry
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItemQuantityListEntryBase*ListEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOptionsIngredientsList_C::AddListEntry(class UFortItemQuantityListEntryBase* ListEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOptionsIngredientsList_C", "AddListEntry");

	Params::UAlterationOptionsIngredientsList_C_AddListEntry_Params Parms{};

	Parms.ListEntry = ListEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAlterationOptionsIngredientsList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOptionsIngredientsList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.ExecuteUbergraph_AlterationOptionsIngredientsList
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemQuantityListEntryBase*K2Node_Event_ListEntry                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOptionsIngredientsList_C::ExecuteUbergraph_AlterationOptionsIngredientsList(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, class UFortItemQuantityListEntryBase* K2Node_Event_ListEntry, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOptionsIngredientsList_C", "ExecuteUbergraph_AlterationOptionsIngredientsList");

	Params::UAlterationOptionsIngredientsList_C_ExecuteUbergraph_AlterationOptionsIngredientsList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_Event_ListEntry = K2Node_Event_ListEntry;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



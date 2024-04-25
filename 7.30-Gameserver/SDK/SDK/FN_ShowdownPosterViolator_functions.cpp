#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ShowdownPosterViolator.ShowdownPosterViolator_C
// (None)

class UClass* UShowdownPosterViolator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShowdownPosterViolator_C");

	return Clss;
}


// ShowdownPosterViolator_C ShowdownPosterViolator.Default__ShowdownPosterViolator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShowdownPosterViolator_C* UShowdownPosterViolator_C::GetDefaultObj()
{
	static class UShowdownPosterViolator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShowdownPosterViolator_C*>(UShowdownPosterViolator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShowdownPosterViolator.ShowdownPosterViolator_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UShowdownPosterViolator_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownPosterViolator_C", "RefreshDataBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownPosterViolator.ShowdownPosterViolator_C.ExecuteUbergraph_ShowdownPosterViolator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortShowdownEventState Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortShowdownEventState CallFunc_GetTournamentState_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownPosterViolator_C::ExecuteUbergraph_ShowdownPosterViolator(int32 EntryPoint, enum class EFortShowdownEventState Temp_byte_Variable, class UWidget* Temp_object_Variable, enum class EFortShowdownEventState CallFunc_GetTournamentState_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownPosterViolator_C", "ExecuteUbergraph_ShowdownPosterViolator");

	Params::UShowdownPosterViolator_C_ExecuteUbergraph_ShowdownPosterViolator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetTournamentState_ReturnValue = CallFunc_GetTournamentState_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}



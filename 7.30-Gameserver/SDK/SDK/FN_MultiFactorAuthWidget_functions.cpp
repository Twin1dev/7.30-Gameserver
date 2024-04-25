#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MultiFactorAuthWidget.MultiFactorAuthWidget_C
// (None)

class UClass* UMultiFactorAuthWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiFactorAuthWidget_C");

	return Clss;
}


// MultiFactorAuthWidget_C MultiFactorAuthWidget.Default__MultiFactorAuthWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMultiFactorAuthWidget_C* UMultiFactorAuthWidget_C::GetDefaultObj()
{
	static class UMultiFactorAuthWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiFactorAuthWidget_C*>(UMultiFactorAuthWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiFactorAuthWidget.MultiFactorAuthWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMultiFactorAuthWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiFactorAuthWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MultiFactorAuthWidget.MultiFactorAuthWidget_C.ExecuteUbergraph_MultiFactorAuthWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMultiFactorAuthWidget_C::ExecuteUbergraph_MultiFactorAuthWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiFactorAuthWidget_C", "ExecuteUbergraph_MultiFactorAuthWidget");

	Params::UMultiFactorAuthWidget_C_ExecuteUbergraph_MultiFactorAuthWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



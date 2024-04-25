#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HealthWarningWidget.HealthWarningWidget_C
// (None)

class UClass* UHealthWarningWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HealthWarningWidget_C");

	return Clss;
}


// HealthWarningWidget_C HealthWarningWidget.Default__HealthWarningWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHealthWarningWidget_C* UHealthWarningWidget_C::GetDefaultObj()
{
	static class UHealthWarningWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHealthWarningWidget_C*>(UHealthWarningWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HealthWarningWidget.HealthWarningWidget_C.HandleShowTimerComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHealthWarningWidget_C::HandleShowTimerComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HealthWarningWidget_C", "HandleShowTimerComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HealthWarningWidget.HealthWarningWidget_C.ExecuteUbergraph_HealthWarningWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHealthWarningWidget_C::ExecuteUbergraph_HealthWarningWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HealthWarningWidget_C", "ExecuteUbergraph_HealthWarningWidget");

	Params::UHealthWarningWidget_C_ExecuteUbergraph_HealthWarningWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HealthWarningWidget.HealthWarningWidget_C.HealthWarningCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHealthWarningWidget_C::HealthWarningCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HealthWarningWidget_C", "HealthWarningCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}



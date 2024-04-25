#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NetUI.ConnectionTimeoutWidget
// (None)

class UClass* UConnectionTimeoutWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConnectionTimeoutWidget");

	return Clss;
}


// ConnectionTimeoutWidget NetUI.Default__ConnectionTimeoutWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UConnectionTimeoutWidget* UConnectionTimeoutWidget::GetDefaultObj()
{
	static class UConnectionTimeoutWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UConnectionTimeoutWidget*>(UConnectionTimeoutWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function NetUI.ConnectionTimeoutWidget.StopTimeoutUICheck
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UConnectionTimeoutWidget::StopTimeoutUICheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConnectionTimeoutWidget", "StopTimeoutUICheck");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NetUI.ConnectionTimeoutWidget.StartTimeoutUICheck
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UConnectionTimeoutWidget::StartTimeoutUICheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConnectionTimeoutWidget", "StartTimeoutUICheck");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class NetUI.NetDebugWidget
// (None)

class UClass* UNetDebugWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetDebugWidget");

	return Clss;
}


// NetDebugWidget NetUI.Default__NetDebugWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetDebugWidget* UNetDebugWidget::GetDefaultObj()
{
	static class UNetDebugWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetDebugWidget*>(UNetDebugWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function NetUI.NetDebugWidget.StopTimer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UNetDebugWidget::StopTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NetDebugWidget", "StopTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NetUI.NetDebugWidget.StartTimer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UNetDebugWidget::StartTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NetDebugWidget", "StartTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}



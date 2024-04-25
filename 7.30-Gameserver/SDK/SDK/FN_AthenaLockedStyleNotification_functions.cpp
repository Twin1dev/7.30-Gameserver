#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaLockedStyleNotification.AthenaLockedStyleNotification_C
// (None)

class UClass* UAthenaLockedStyleNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaLockedStyleNotification_C");

	return Clss;
}


// AthenaLockedStyleNotification_C AthenaLockedStyleNotification.Default__AthenaLockedStyleNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaLockedStyleNotification_C* UAthenaLockedStyleNotification_C::GetDefaultObj()
{
	static class UAthenaLockedStyleNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaLockedStyleNotification_C*>(UAthenaLockedStyleNotification_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.SetLockedStyleDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        LockedStyleDescription                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaLockedStyleNotification_C::SetLockedStyleDescription(class FText LockedStyleDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLockedStyleNotification_C", "SetLockedStyleDescription");

	Params::UAthenaLockedStyleNotification_C_SetLockedStyleDescription_Params Parms{};

	Parms.LockedStyleDescription = LockedStyleDescription;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaLockedStyleNotification_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLockedStyleNotification_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.ExecuteUbergraph_AthenaLockedStyleNotification
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLockedStyleNotification_C::ExecuteUbergraph_AthenaLockedStyleNotification(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLockedStyleNotification_C", "ExecuteUbergraph_AthenaLockedStyleNotification");

	Params::UAthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



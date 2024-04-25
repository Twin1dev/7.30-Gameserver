#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemReceived14DaysPresent.ItemReceived14DaysPresent_C
// (None)

class UClass* UItemReceived14DaysPresent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemReceived14DaysPresent_C");

	return Clss;
}


// ItemReceived14DaysPresent_C ItemReceived14DaysPresent.Default__ItemReceived14DaysPresent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemReceived14DaysPresent_C* UItemReceived14DaysPresent_C::GetDefaultObj()
{
	static class UItemReceived14DaysPresent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemReceived14DaysPresent_C*>(UItemReceived14DaysPresent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemReceived14DaysPresent.ItemReceived14DaysPresent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceived14DaysPresent_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceived14DaysPresent_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemReceived14DaysPresent.ItemReceived14DaysPresent_C.ExecuteUbergraph_ItemReceived14DaysPresent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceived14DaysPresent_C::ExecuteUbergraph_ItemReceived14DaysPresent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceived14DaysPresent_C", "ExecuteUbergraph_ItemReceived14DaysPresent");

	Params::UItemReceived14DaysPresent_C_ExecuteUbergraph_ItemReceived14DaysPresent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



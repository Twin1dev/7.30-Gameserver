#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemReceived14DaysBundle.ItemReceived14DaysBundle_C
// (None)

class UClass* UItemReceived14DaysBundle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemReceived14DaysBundle_C");

	return Clss;
}


// ItemReceived14DaysBundle_C ItemReceived14DaysBundle.Default__ItemReceived14DaysBundle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemReceived14DaysBundle_C* UItemReceived14DaysBundle_C::GetDefaultObj()
{
	static class UItemReceived14DaysBundle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemReceived14DaysBundle_C*>(UItemReceived14DaysBundle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemReceived14DaysBundle.ItemReceived14DaysBundle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceived14DaysBundle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceived14DaysBundle_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemReceived14DaysBundle.ItemReceived14DaysBundle_C.ExecuteUbergraph_ItemReceived14DaysBundle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceived14DaysBundle_C::ExecuteUbergraph_ItemReceived14DaysBundle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceived14DaysBundle_C", "ExecuteUbergraph_ItemReceived14DaysBundle");

	Params::UItemReceived14DaysBundle_C_ExecuteUbergraph_ItemReceived14DaysBundle_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemReceivedTomatoHeadStyleChallenge.ItemReceivedTomatoHeadStyleChallenge_C
// (None)

class UClass* UItemReceivedTomatoHeadStyleChallenge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemReceivedTomatoHeadStyleChallenge_C");

	return Clss;
}


// ItemReceivedTomatoHeadStyleChallenge_C ItemReceivedTomatoHeadStyleChallenge.Default__ItemReceivedTomatoHeadStyleChallenge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemReceivedTomatoHeadStyleChallenge_C* UItemReceivedTomatoHeadStyleChallenge_C::GetDefaultObj()
{
	static class UItemReceivedTomatoHeadStyleChallenge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemReceivedTomatoHeadStyleChallenge_C*>(UItemReceivedTomatoHeadStyleChallenge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemReceivedTomatoHeadStyleChallenge.ItemReceivedTomatoHeadStyleChallenge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceivedTomatoHeadStyleChallenge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedTomatoHeadStyleChallenge_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemReceivedTomatoHeadStyleChallenge.ItemReceivedTomatoHeadStyleChallenge_C.ExecuteUbergraph_ItemReceivedTomatoHeadStyleChallenge
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedTomatoHeadStyleChallenge_C::ExecuteUbergraph_ItemReceivedTomatoHeadStyleChallenge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedTomatoHeadStyleChallenge_C", "ExecuteUbergraph_ItemReceivedTomatoHeadStyleChallenge");

	Params::UItemReceivedTomatoHeadStyleChallenge_C_ExecuteUbergraph_ItemReceivedTomatoHeadStyleChallenge_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



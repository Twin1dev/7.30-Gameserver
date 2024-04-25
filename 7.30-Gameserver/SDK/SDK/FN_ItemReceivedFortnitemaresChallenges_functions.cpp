#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemReceivedFortnitemaresChallenges.ItemReceivedFortnitemaresChallenges_C
// (None)

class UClass* UItemReceivedFortnitemaresChallenges_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemReceivedFortnitemaresChallenges_C");

	return Clss;
}


// ItemReceivedFortnitemaresChallenges_C ItemReceivedFortnitemaresChallenges.Default__ItemReceivedFortnitemaresChallenges_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemReceivedFortnitemaresChallenges_C* UItemReceivedFortnitemaresChallenges_C::GetDefaultObj()
{
	static class UItemReceivedFortnitemaresChallenges_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemReceivedFortnitemaresChallenges_C*>(UItemReceivedFortnitemaresChallenges_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemReceivedFortnitemaresChallenges.ItemReceivedFortnitemaresChallenges_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceivedFortnitemaresChallenges_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedFortnitemaresChallenges_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemReceivedFortnitemaresChallenges.ItemReceivedFortnitemaresChallenges_C.ExecuteUbergraph_ItemReceivedFortnitemaresChallenges
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedFortnitemaresChallenges_C::ExecuteUbergraph_ItemReceivedFortnitemaresChallenges(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedFortnitemaresChallenges_C", "ExecuteUbergraph_ItemReceivedFortnitemaresChallenges");

	Params::UItemReceivedFortnitemaresChallenges_C_ExecuteUbergraph_ItemReceivedFortnitemaresChallenges_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



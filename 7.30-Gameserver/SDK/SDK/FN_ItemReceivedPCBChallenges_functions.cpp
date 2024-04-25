#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemReceivedPCBChallenges.ItemReceivedPCBChallenges_C
// (None)

class UClass* UItemReceivedPCBChallenges_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemReceivedPCBChallenges_C");

	return Clss;
}


// ItemReceivedPCBChallenges_C ItemReceivedPCBChallenges.Default__ItemReceivedPCBChallenges_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemReceivedPCBChallenges_C* UItemReceivedPCBChallenges_C::GetDefaultObj()
{
	static class UItemReceivedPCBChallenges_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemReceivedPCBChallenges_C*>(UItemReceivedPCBChallenges_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemReceivedPCBChallenges.ItemReceivedPCBChallenges_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceivedPCBChallenges_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedPCBChallenges_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemReceivedPCBChallenges.ItemReceivedPCBChallenges_C.ExecuteUbergraph_ItemReceivedPCBChallenges
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedPCBChallenges_C::ExecuteUbergraph_ItemReceivedPCBChallenges(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedPCBChallenges_C", "ExecuteUbergraph_ItemReceivedPCBChallenges");

	Params::UItemReceivedPCBChallenges_C_ExecuteUbergraph_ItemReceivedPCBChallenges_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



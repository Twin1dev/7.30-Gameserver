#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemReceivedSkullTrooperStyleChallenge.ItemReceivedSkullTrooperStyleChallenge_C
// (None)

class UClass* UItemReceivedSkullTrooperStyleChallenge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemReceivedSkullTrooperStyleChallenge_C");

	return Clss;
}


// ItemReceivedSkullTrooperStyleChallenge_C ItemReceivedSkullTrooperStyleChallenge.Default__ItemReceivedSkullTrooperStyleChallenge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemReceivedSkullTrooperStyleChallenge_C* UItemReceivedSkullTrooperStyleChallenge_C::GetDefaultObj()
{
	static class UItemReceivedSkullTrooperStyleChallenge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemReceivedSkullTrooperStyleChallenge_C*>(UItemReceivedSkullTrooperStyleChallenge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemReceivedSkullTrooperStyleChallenge.ItemReceivedSkullTrooperStyleChallenge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceivedSkullTrooperStyleChallenge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedSkullTrooperStyleChallenge_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemReceivedSkullTrooperStyleChallenge.ItemReceivedSkullTrooperStyleChallenge_C.ExecuteUbergraph_ItemReceivedSkullTrooperStyleChallenge
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedSkullTrooperStyleChallenge_C::ExecuteUbergraph_ItemReceivedSkullTrooperStyleChallenge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedSkullTrooperStyleChallenge_C", "ExecuteUbergraph_ItemReceivedSkullTrooperStyleChallenge");

	Params::UItemReceivedSkullTrooperStyleChallenge_C_ExecuteUbergraph_ItemReceivedSkullTrooperStyleChallenge_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



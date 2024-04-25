#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemReceivedPCBGeneric.ItemReceivedPCBGeneric_C
// (None)

class UClass* UItemReceivedPCBGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemReceivedPCBGeneric_C");

	return Clss;
}


// ItemReceivedPCBGeneric_C ItemReceivedPCBGeneric.Default__ItemReceivedPCBGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemReceivedPCBGeneric_C* UItemReceivedPCBGeneric_C::GetDefaultObj()
{
	static class UItemReceivedPCBGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemReceivedPCBGeneric_C*>(UItemReceivedPCBGeneric_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemReceivedPCBGeneric.ItemReceivedPCBGeneric_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceivedPCBGeneric_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedPCBGeneric_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemReceivedPCBGeneric.ItemReceivedPCBGeneric_C.ExecuteUbergraph_ItemReceivedPCBGeneric
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedPCBGeneric_C::ExecuteUbergraph_ItemReceivedPCBGeneric(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedPCBGeneric_C", "ExecuteUbergraph_ItemReceivedPCBGeneric");

	Params::UItemReceivedPCBGeneric_C_ExecuteUbergraph_ItemReceivedPCBGeneric_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



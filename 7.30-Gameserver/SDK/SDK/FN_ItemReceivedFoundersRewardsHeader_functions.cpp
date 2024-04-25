#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemReceivedFoundersRewardsHeader.ItemReceivedFoundersRewardsHeader_C
// (None)

class UClass* UItemReceivedFoundersRewardsHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemReceivedFoundersRewardsHeader_C");

	return Clss;
}


// ItemReceivedFoundersRewardsHeader_C ItemReceivedFoundersRewardsHeader.Default__ItemReceivedFoundersRewardsHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemReceivedFoundersRewardsHeader_C* UItemReceivedFoundersRewardsHeader_C::GetDefaultObj()
{
	static class UItemReceivedFoundersRewardsHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemReceivedFoundersRewardsHeader_C*>(UItemReceivedFoundersRewardsHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemReceivedFoundersRewardsHeader.ItemReceivedFoundersRewardsHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceivedFoundersRewardsHeader_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedFoundersRewardsHeader_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemReceivedFoundersRewardsHeader.ItemReceivedFoundersRewardsHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceivedFoundersRewardsHeader_C::InitFromGiftBoxItem_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedFoundersRewardsHeader_C", "InitFromGiftBoxItem_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemReceivedFoundersRewardsHeader.ItemReceivedFoundersRewardsHeader_C.ExecuteUbergraph_ItemReceivedFoundersRewardsHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedFoundersRewardsHeader_C::ExecuteUbergraph_ItemReceivedFoundersRewardsHeader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedFoundersRewardsHeader_C", "ExecuteUbergraph_ItemReceivedFoundersRewardsHeader");

	Params::UItemReceivedFoundersRewardsHeader_C_ExecuteUbergraph_ItemReceivedFoundersRewardsHeader_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



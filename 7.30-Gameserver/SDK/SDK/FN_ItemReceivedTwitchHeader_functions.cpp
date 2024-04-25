#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemReceivedTwitchHeader.ItemReceivedTwitchHeader_C
// (None)

class UClass* UItemReceivedTwitchHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemReceivedTwitchHeader_C");

	return Clss;
}


// ItemReceivedTwitchHeader_C ItemReceivedTwitchHeader.Default__ItemReceivedTwitchHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemReceivedTwitchHeader_C* UItemReceivedTwitchHeader_C::GetDefaultObj()
{
	static class UItemReceivedTwitchHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemReceivedTwitchHeader_C*>(UItemReceivedTwitchHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemReceivedTwitchHeader.ItemReceivedTwitchHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceivedTwitchHeader_C::InitFromGiftBoxItem_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedTwitchHeader_C", "InitFromGiftBoxItem_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemReceivedTwitchHeader.ItemReceivedTwitchHeader_C.ExecuteUbergraph_ItemReceivedTwitchHeader
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_HasParam_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FormatTextUsingParams_ReturnValue                       (None)

void UItemReceivedTwitchHeader_C::ExecuteUbergraph_ItemReceivedTwitchHeader(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_HasParam_ReturnValue, class FText CallFunc_FormatTextUsingParams_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedTwitchHeader_C", "ExecuteUbergraph_ItemReceivedTwitchHeader");

	Params::UItemReceivedTwitchHeader_C_ExecuteUbergraph_ItemReceivedTwitchHeader_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_HasParam_ReturnValue = CallFunc_HasParam_ReturnValue;
	Parms.CallFunc_FormatTextUsingParams_ReturnValue = CallFunc_FormatTextUsingParams_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



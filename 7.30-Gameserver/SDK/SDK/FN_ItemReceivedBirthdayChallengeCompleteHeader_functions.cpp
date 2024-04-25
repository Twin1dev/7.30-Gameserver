#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemReceivedBirthdayChallengeCompleteHeader.ItemReceivedBirthdayChallengeCompleteHeader_C
// (None)

class UClass* UItemReceivedBirthdayChallengeCompleteHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemReceivedBirthdayChallengeCompleteHeader_C");

	return Clss;
}


// ItemReceivedBirthdayChallengeCompleteHeader_C ItemReceivedBirthdayChallengeCompleteHeader.Default__ItemReceivedBirthdayChallengeCompleteHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemReceivedBirthdayChallengeCompleteHeader_C* UItemReceivedBirthdayChallengeCompleteHeader_C::GetDefaultObj()
{
	static class UItemReceivedBirthdayChallengeCompleteHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemReceivedBirthdayChallengeCompleteHeader_C*>(UItemReceivedBirthdayChallengeCompleteHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemReceivedBirthdayChallengeCompleteHeader.ItemReceivedBirthdayChallengeCompleteHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceivedBirthdayChallengeCompleteHeader_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedBirthdayChallengeCompleteHeader_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemReceivedBirthdayChallengeCompleteHeader.ItemReceivedBirthdayChallengeCompleteHeader_C.BndEvt__CandleLightButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedBirthdayChallengeCompleteHeader_C::BndEvt__CandleLightButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedBirthdayChallengeCompleteHeader_C", "BndEvt__CandleLightButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature");

	Params::UItemReceivedBirthdayChallengeCompleteHeader_C_BndEvt__CandleLightButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedBirthdayChallengeCompleteHeader.ItemReceivedBirthdayChallengeCompleteHeader_C.ExecuteUbergraph_ItemReceivedBirthdayChallengeCompleteHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedBirthdayChallengeCompleteHeader_C::ExecuteUbergraph_ItemReceivedBirthdayChallengeCompleteHeader(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedBirthdayChallengeCompleteHeader_C", "ExecuteUbergraph_ItemReceivedBirthdayChallengeCompleteHeader");

	Params::UItemReceivedBirthdayChallengeCompleteHeader_C_ExecuteUbergraph_ItemReceivedBirthdayChallengeCompleteHeader_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}



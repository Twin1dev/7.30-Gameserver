#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemReceivedDeepFreezeBundleHeader.ItemReceivedDeepFreezeBundleHeader_C
// (None)

class UClass* UItemReceivedDeepFreezeBundleHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemReceivedDeepFreezeBundleHeader_C");

	return Clss;
}


// ItemReceivedDeepFreezeBundleHeader_C ItemReceivedDeepFreezeBundleHeader.Default__ItemReceivedDeepFreezeBundleHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemReceivedDeepFreezeBundleHeader_C* UItemReceivedDeepFreezeBundleHeader_C::GetDefaultObj()
{
	static class UItemReceivedDeepFreezeBundleHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemReceivedDeepFreezeBundleHeader_C*>(UItemReceivedDeepFreezeBundleHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemReceivedDeepFreezeBundleHeader.ItemReceivedDeepFreezeBundleHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceivedDeepFreezeBundleHeader_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedDeepFreezeBundleHeader_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemReceivedDeepFreezeBundleHeader.ItemReceivedDeepFreezeBundleHeader_C.BndEvt__CandleLightButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedDeepFreezeBundleHeader_C::BndEvt__CandleLightButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedDeepFreezeBundleHeader_C", "BndEvt__CandleLightButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature");

	Params::UItemReceivedDeepFreezeBundleHeader_C_BndEvt__CandleLightButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedDeepFreezeBundleHeader.ItemReceivedDeepFreezeBundleHeader_C.ExecuteUbergraph_ItemReceivedDeepFreezeBundleHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedDeepFreezeBundleHeader_C::ExecuteUbergraph_ItemReceivedDeepFreezeBundleHeader(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedDeepFreezeBundleHeader_C", "ExecuteUbergraph_ItemReceivedDeepFreezeBundleHeader");

	Params::UItemReceivedDeepFreezeBundleHeader_C_ExecuteUbergraph_ItemReceivedDeepFreezeBundleHeader_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}



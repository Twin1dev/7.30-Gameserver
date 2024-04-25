#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CreativeLobbyAd.CreativeLobbyAd_C
// (None)

class UClass* UCreativeLobbyAd_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeLobbyAd_C");

	return Clss;
}


// CreativeLobbyAd_C CreativeLobbyAd.Default__CreativeLobbyAd_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreativeLobbyAd_C* UCreativeLobbyAd_C::GetDefaultObj()
{
	static class UCreativeLobbyAd_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeLobbyAd_C*>(UCreativeLobbyAd_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CreativeLobbyAd.CreativeLobbyAd_C.OnCMSDataUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void UCreativeLobbyAd_C::OnCMSDataUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeLobbyAd_C", "OnCMSDataUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeLobbyAd.CreativeLobbyAd_C.ExecuteUbergraph_CreativeLobbyAd
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue1                          (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_TextToUpper_ReturnValue1                                (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue2                          (None)
// class FText                        CallFunc_TextToUpper_ReturnValue2                                (None)

void UCreativeLobbyAd_C::ExecuteUbergraph_CreativeLobbyAd(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1, class FText CallFunc_Conv_StringToText_ReturnValue2, class FText CallFunc_TextToUpper_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeLobbyAd_C", "ExecuteUbergraph_CreativeLobbyAd");

	Params::UCreativeLobbyAd_C_ExecuteUbergraph_CreativeLobbyAd_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue1 = CallFunc_Conv_StringToText_ReturnValue1;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue1 = CallFunc_TextToUpper_ReturnValue1;
	Parms.CallFunc_Conv_StringToText_ReturnValue2 = CallFunc_Conv_StringToText_ReturnValue2;
	Parms.CallFunc_TextToUpper_ReturnValue2 = CallFunc_TextToUpper_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}



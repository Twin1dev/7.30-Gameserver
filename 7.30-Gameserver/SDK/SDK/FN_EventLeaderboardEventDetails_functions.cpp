#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EventLeaderboardEventDetails.EventLeaderboardEventDetails_C
// (None)

class UClass* UEventLeaderboardEventDetails_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EventLeaderboardEventDetails_C");

	return Clss;
}


// EventLeaderboardEventDetails_C EventLeaderboardEventDetails.Default__EventLeaderboardEventDetails_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEventLeaderboardEventDetails_C* UEventLeaderboardEventDetails_C::GetDefaultObj()
{
	static class UEventLeaderboardEventDetails_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEventLeaderboardEventDetails_C*>(UEventLeaderboardEventDetails_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EventLeaderboardEventDetails.EventLeaderboardEventDetails_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEventLeaderboardEventDetails_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventLeaderboardEventDetails_C", "RefreshDataBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventLeaderboardEventDetails.EventLeaderboardEventDetails_C.ExecuteUbergraph_EventLeaderboardEventDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_TextToUpper_ReturnValue1                                (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UEventLeaderboardEventDetails_C::ExecuteUbergraph_EventLeaderboardEventDetails(int32 EntryPoint, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventLeaderboardEventDetails_C", "ExecuteUbergraph_EventLeaderboardEventDetails");

	Params::UEventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue1 = CallFunc_TextToUpper_ReturnValue1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



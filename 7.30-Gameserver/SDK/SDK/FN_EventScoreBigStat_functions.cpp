#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EventScoreBigStat.EventScoreBigStat_C
// (None)

class UClass* UEventScoreBigStat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EventScoreBigStat_C");

	return Clss;
}


// EventScoreBigStat_C EventScoreBigStat.Default__EventScoreBigStat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEventScoreBigStat_C* UEventScoreBigStat_C::GetDefaultObj()
{
	static class UEventScoreBigStat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEventScoreBigStat_C*>(UEventScoreBigStat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EventScoreBigStat.EventScoreBigStat_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ValueContext                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        FormatterText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortTournamentDisplayInfo  Tournament_Display_Info                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             (None)

void UEventScoreBigStat_C::SetData(class FText Label, int32 Value, int32 ValueContext, class FText FormatterText, const struct FFortTournamentDisplayInfo& Tournament_Display_Info, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventScoreBigStat_C", "SetData");

	Params::UEventScoreBigStat_C_SetData_Params Parms{};

	Parms.Label = Label;
	Parms.Value = Value;
	Parms.ValueContext = ValueContext;
	Parms.FormatterText = FormatterText;
	Parms.Tournament_Display_Info = Tournament_Display_Info;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}



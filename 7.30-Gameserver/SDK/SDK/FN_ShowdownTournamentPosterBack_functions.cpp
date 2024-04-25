#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C
// (None)

class UClass* UShowdownTournamentPosterBack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShowdownTournamentPosterBack_C");

	return Clss;
}


// ShowdownTournamentPosterBack_C ShowdownTournamentPosterBack.Default__ShowdownTournamentPosterBack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShowdownTournamentPosterBack_C* UShowdownTournamentPosterBack_C::GetDefaultObj()
{
	static class UShowdownTournamentPosterBack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShowdownTournamentPosterBack_C*>(UShowdownTournamentPosterBack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.GetTournamentDateText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TournamentDate                                                   (Parm, OutParm)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable1                                              (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable2                                              (None)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable3                                              (None)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable4                                              (None)
// class FText                        Temp_text_Variable5                                              (None)
// class FText                        Temp_text_Variable6                                              (None)
// class FText                        Temp_text_Variable7                                              (None)
// class FText                        Temp_text_Variable8                                              (None)
// class FText                        Temp_text_Variable9                                              (None)
// class FText                        Temp_text_Variable10                                             (None)
// class FText                        Temp_text_Variable11                                             (None)
// class FText                        Temp_text_Variable12                                             (None)
// class FText                        Temp_text_Variable13                                             (None)
// class FText                        Temp_text_Variable14                                             (None)
// class FText                        Temp_text_Variable15                                             (None)
// class FText                        Temp_text_Variable16                                             (None)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable17                                             (None)
// class FText                        Temp_text_Variable18                                             (None)
// class FText                        Temp_text_Variable19                                             (None)
// class FText                        Temp_text_Variable20                                             (None)
// class FText                        Temp_text_Variable21                                             (None)
// class FText                        Temp_text_Variable22                                             (None)
// class FText                        Temp_text_Variable23                                             (None)
// class FText                        Temp_text_Variable24                                             (None)
// class FText                        Temp_text_Variable25                                             (None)
// class FText                        Temp_text_Variable26                                             (None)
// class FText                        Temp_text_Variable27                                             (None)
// class FText                        Temp_text_Variable28                                             (None)
// class FText                        Temp_text_Variable29                                             (None)
// struct FDateTime                   CallFunc_GetTournamentEndTime_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Year                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetTournamentBeginTime_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_BreakDateTime_Year1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetTournamentEndTime_ReturnValue1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_BreakDateTime_Year2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetTournamentBeginTime_ReturnValue1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetTournamentEndTime_ReturnValue2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Year3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Year4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select1_Default                                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// class FText                        K2Node_Select2_Default                                           (None)
// struct FDateTime                   CallFunc_GetTournamentBeginTime_ReturnValue2                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Year5                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour5                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select3_Default                                           (None)
// class FText                        K2Node_Select4_Default                                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData4                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UShowdownTournamentPosterBack_C::GetTournamentDateText(class FText* TournamentDate, class FText Temp_text_Variable, class FText Temp_text_Variable1, bool Temp_bool_Variable, class FText Temp_text_Variable2, bool Temp_bool_Variable1, class FText Temp_text_Variable3, int32 Temp_int_Variable, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class FText Temp_text_Variable10, class FText Temp_text_Variable11, class FText Temp_text_Variable12, class FText Temp_text_Variable13, class FText Temp_text_Variable14, class FText Temp_text_Variable15, class FText Temp_text_Variable16, int32 Temp_int_Variable1, class FText Temp_text_Variable17, class FText Temp_text_Variable18, class FText Temp_text_Variable19, class FText Temp_text_Variable20, class FText Temp_text_Variable21, class FText Temp_text_Variable22, class FText Temp_text_Variable23, class FText Temp_text_Variable24, class FText Temp_text_Variable25, class FText Temp_text_Variable26, class FText Temp_text_Variable27, class FText Temp_text_Variable28, class FText Temp_text_Variable29, const struct FDateTime& CallFunc_GetTournamentEndTime_ReturnValue, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const struct FDateTime& CallFunc_GetTournamentBeginTime_ReturnValue, bool Temp_bool_Variable2, int32 CallFunc_BreakDateTime_Year1, int32 CallFunc_BreakDateTime_Month1, int32 CallFunc_BreakDateTime_Day1, int32 CallFunc_BreakDateTime_Hour1, int32 CallFunc_BreakDateTime_Minute1, int32 CallFunc_BreakDateTime_Second1, int32 CallFunc_BreakDateTime_Millisecond1, const struct FDateTime& CallFunc_GetTournamentEndTime_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_BreakDateTime_Year2, int32 CallFunc_BreakDateTime_Month2, int32 CallFunc_BreakDateTime_Day2, int32 CallFunc_BreakDateTime_Hour2, int32 CallFunc_BreakDateTime_Minute2, int32 CallFunc_BreakDateTime_Second2, int32 CallFunc_BreakDateTime_Millisecond2, class FText CallFunc_Conv_IntToText_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, const struct FDateTime& CallFunc_GetTournamentBeginTime_ReturnValue1, const struct FDateTime& CallFunc_GetTournamentEndTime_ReturnValue2, int32 CallFunc_BreakDateTime_Year3, int32 CallFunc_BreakDateTime_Month3, int32 CallFunc_BreakDateTime_Day3, int32 CallFunc_BreakDateTime_Hour3, int32 CallFunc_BreakDateTime_Minute3, int32 CallFunc_BreakDateTime_Second3, int32 CallFunc_BreakDateTime_Millisecond3, int32 CallFunc_BreakDateTime_Year4, int32 CallFunc_BreakDateTime_Month4, int32 CallFunc_BreakDateTime_Day4, int32 CallFunc_BreakDateTime_Hour4, int32 CallFunc_BreakDateTime_Minute4, int32 CallFunc_BreakDateTime_Second4, int32 CallFunc_BreakDateTime_Millisecond4, class FText CallFunc_Conv_IntToText_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue1, class FText K2Node_Select1_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class FText K2Node_Select2_Default, const struct FDateTime& CallFunc_GetTournamentBeginTime_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, int32 CallFunc_BreakDateTime_Year5, int32 CallFunc_BreakDateTime_Month5, int32 CallFunc_BreakDateTime_Day5, int32 CallFunc_BreakDateTime_Hour5, int32 CallFunc_BreakDateTime_Minute5, int32 CallFunc_BreakDateTime_Second5, int32 CallFunc_BreakDateTime_Millisecond5, class FText K2Node_Select3_Default, class FText K2Node_Select4_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownTournamentPosterBack_C", "GetTournamentDateText");

	Params::UShowdownTournamentPosterBack_C_GetTournamentDateText_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.Temp_text_Variable10 = Temp_text_Variable10;
	Parms.Temp_text_Variable11 = Temp_text_Variable11;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_text_Variable13 = Temp_text_Variable13;
	Parms.Temp_text_Variable14 = Temp_text_Variable14;
	Parms.Temp_text_Variable15 = Temp_text_Variable15;
	Parms.Temp_text_Variable16 = Temp_text_Variable16;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_text_Variable17 = Temp_text_Variable17;
	Parms.Temp_text_Variable18 = Temp_text_Variable18;
	Parms.Temp_text_Variable19 = Temp_text_Variable19;
	Parms.Temp_text_Variable20 = Temp_text_Variable20;
	Parms.Temp_text_Variable21 = Temp_text_Variable21;
	Parms.Temp_text_Variable22 = Temp_text_Variable22;
	Parms.Temp_text_Variable23 = Temp_text_Variable23;
	Parms.Temp_text_Variable24 = Temp_text_Variable24;
	Parms.Temp_text_Variable25 = Temp_text_Variable25;
	Parms.Temp_text_Variable26 = Temp_text_Variable26;
	Parms.Temp_text_Variable27 = Temp_text_Variable27;
	Parms.Temp_text_Variable28 = Temp_text_Variable28;
	Parms.Temp_text_Variable29 = Temp_text_Variable29;
	Parms.CallFunc_GetTournamentEndTime_ReturnValue = CallFunc_GetTournamentEndTime_ReturnValue;
	Parms.CallFunc_BreakDateTime_Year = CallFunc_BreakDateTime_Year;
	Parms.CallFunc_BreakDateTime_Month = CallFunc_BreakDateTime_Month;
	Parms.CallFunc_BreakDateTime_Day = CallFunc_BreakDateTime_Day;
	Parms.CallFunc_BreakDateTime_Hour = CallFunc_BreakDateTime_Hour;
	Parms.CallFunc_BreakDateTime_Minute = CallFunc_BreakDateTime_Minute;
	Parms.CallFunc_BreakDateTime_Second = CallFunc_BreakDateTime_Second;
	Parms.CallFunc_BreakDateTime_Millisecond = CallFunc_BreakDateTime_Millisecond;
	Parms.CallFunc_GetTournamentBeginTime_ReturnValue = CallFunc_GetTournamentBeginTime_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_BreakDateTime_Year1 = CallFunc_BreakDateTime_Year1;
	Parms.CallFunc_BreakDateTime_Month1 = CallFunc_BreakDateTime_Month1;
	Parms.CallFunc_BreakDateTime_Day1 = CallFunc_BreakDateTime_Day1;
	Parms.CallFunc_BreakDateTime_Hour1 = CallFunc_BreakDateTime_Hour1;
	Parms.CallFunc_BreakDateTime_Minute1 = CallFunc_BreakDateTime_Minute1;
	Parms.CallFunc_BreakDateTime_Second1 = CallFunc_BreakDateTime_Second1;
	Parms.CallFunc_BreakDateTime_Millisecond1 = CallFunc_BreakDateTime_Millisecond1;
	Parms.CallFunc_GetTournamentEndTime_ReturnValue1 = CallFunc_GetTournamentEndTime_ReturnValue1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BreakDateTime_Year2 = CallFunc_BreakDateTime_Year2;
	Parms.CallFunc_BreakDateTime_Month2 = CallFunc_BreakDateTime_Month2;
	Parms.CallFunc_BreakDateTime_Day2 = CallFunc_BreakDateTime_Day2;
	Parms.CallFunc_BreakDateTime_Hour2 = CallFunc_BreakDateTime_Hour2;
	Parms.CallFunc_BreakDateTime_Minute2 = CallFunc_BreakDateTime_Minute2;
	Parms.CallFunc_BreakDateTime_Second2 = CallFunc_BreakDateTime_Second2;
	Parms.CallFunc_BreakDateTime_Millisecond2 = CallFunc_BreakDateTime_Millisecond2;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.CallFunc_GetTournamentBeginTime_ReturnValue1 = CallFunc_GetTournamentBeginTime_ReturnValue1;
	Parms.CallFunc_GetTournamentEndTime_ReturnValue2 = CallFunc_GetTournamentEndTime_ReturnValue2;
	Parms.CallFunc_BreakDateTime_Year3 = CallFunc_BreakDateTime_Year3;
	Parms.CallFunc_BreakDateTime_Month3 = CallFunc_BreakDateTime_Month3;
	Parms.CallFunc_BreakDateTime_Day3 = CallFunc_BreakDateTime_Day3;
	Parms.CallFunc_BreakDateTime_Hour3 = CallFunc_BreakDateTime_Hour3;
	Parms.CallFunc_BreakDateTime_Minute3 = CallFunc_BreakDateTime_Minute3;
	Parms.CallFunc_BreakDateTime_Second3 = CallFunc_BreakDateTime_Second3;
	Parms.CallFunc_BreakDateTime_Millisecond3 = CallFunc_BreakDateTime_Millisecond3;
	Parms.CallFunc_BreakDateTime_Year4 = CallFunc_BreakDateTime_Year4;
	Parms.CallFunc_BreakDateTime_Month4 = CallFunc_BreakDateTime_Month4;
	Parms.CallFunc_BreakDateTime_Day4 = CallFunc_BreakDateTime_Day4;
	Parms.CallFunc_BreakDateTime_Hour4 = CallFunc_BreakDateTime_Hour4;
	Parms.CallFunc_BreakDateTime_Minute4 = CallFunc_BreakDateTime_Minute4;
	Parms.CallFunc_BreakDateTime_Second4 = CallFunc_BreakDateTime_Second4;
	Parms.CallFunc_BreakDateTime_Millisecond4 = CallFunc_BreakDateTime_Millisecond4;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1 = CallFunc_EqualEqual_IntInt_ReturnValue1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetTournamentBeginTime_ReturnValue2 = CallFunc_GetTournamentBeginTime_ReturnValue2;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.CallFunc_BreakDateTime_Year5 = CallFunc_BreakDateTime_Year5;
	Parms.CallFunc_BreakDateTime_Month5 = CallFunc_BreakDateTime_Month5;
	Parms.CallFunc_BreakDateTime_Day5 = CallFunc_BreakDateTime_Day5;
	Parms.CallFunc_BreakDateTime_Hour5 = CallFunc_BreakDateTime_Hour5;
	Parms.CallFunc_BreakDateTime_Minute5 = CallFunc_BreakDateTime_Minute5;
	Parms.CallFunc_BreakDateTime_Second5 = CallFunc_BreakDateTime_Second5;
	Parms.CallFunc_BreakDateTime_Millisecond5 = CallFunc_BreakDateTime_Millisecond5;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData4 = K2Node_MakeStruct_FormatArgumentData4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TournamentDate != nullptr)
		*TournamentDate = Parms.TournamentDate;

}


// Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UShowdownTournamentPosterBack_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownTournamentPosterBack_C", "RefreshDataBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShowdownTournamentPosterBack_C::EventColorize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownTournamentPosterBack_C", "EventColorize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.EventPopulateEventWindowData
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShowdownTournamentPosterBack_C::EventPopulateEventWindowData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownTournamentPosterBack_C", "EventPopulateEventWindowData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.ExecuteUbergraph_ShowdownTournamentPosterBack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTournamentDateEntry_C*      K2Node_DynamicCast_AsTournament_Date_Entry                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor1                                    (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor2                                    (None)
// class FString                      CallFunc_GetTournamentId_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_TextToUpper_ReturnValue1                                (None)
// class FText                        CallFunc_TextToUpper_ReturnValue2                                (None)
// class FText                        CallFunc_TextToUpper_ReturnValue3                                (None)
// class FText                        CallFunc_TextToUpper_ReturnValue4                                (None)
// TArray<class FString>              CallFunc_GetTournamentEvents_ReturnValue                         (ZeroConstructor, ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTournamentDateEntry_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownTournamentPosterBack_C::ExecuteUbergraph_ShowdownTournamentPosterBack(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UTournamentDateEntry_C* K2Node_DynamicCast_AsTournament_Date_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, const class FString& CallFunc_GetTournamentId_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1, class FText CallFunc_TextToUpper_ReturnValue2, class FText CallFunc_TextToUpper_ReturnValue3, class FText CallFunc_TextToUpper_ReturnValue4, TArray<class FString>& CallFunc_GetTournamentEvents_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class UTournamentDateEntry_C* CallFunc_Create_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable1, float K2Node_Select_Default, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, int32 K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownTournamentPosterBack_C", "ExecuteUbergraph_ShowdownTournamentPosterBack");

	Params::UShowdownTournamentPosterBack_C_ExecuteUbergraph_ShowdownTournamentPosterBack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsTournament_Date_Entry = K2Node_DynamicCast_AsTournament_Date_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor1 = K2Node_MakeStruct_SlateColor1;
	Parms.K2Node_MakeStruct_SlateColor2 = K2Node_MakeStruct_SlateColor2;
	Parms.CallFunc_GetTournamentId_ReturnValue = CallFunc_GetTournamentId_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue1 = CallFunc_TextToUpper_ReturnValue1;
	Parms.CallFunc_TextToUpper_ReturnValue2 = CallFunc_TextToUpper_ReturnValue2;
	Parms.CallFunc_TextToUpper_ReturnValue3 = CallFunc_TextToUpper_ReturnValue3;
	Parms.CallFunc_TextToUpper_ReturnValue4 = CallFunc_TextToUpper_ReturnValue4;
	Parms.CallFunc_GetTournamentEvents_ReturnValue = CallFunc_GetTournamentEvents_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}



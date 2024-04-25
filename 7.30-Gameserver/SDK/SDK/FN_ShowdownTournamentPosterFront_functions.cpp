#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C
// (None)

class UClass* UShowdownTournamentPosterFront_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShowdownTournamentPosterFront_C");

	return Clss;
}


// ShowdownTournamentPosterFront_C ShowdownTournamentPosterFront.Default__ShowdownTournamentPosterFront_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShowdownTournamentPosterFront_C* UShowdownTournamentPosterFront_C::GetDefaultObj()
{
	static class UShowdownTournamentPosterFront_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShowdownTournamentPosterFront_C*>(UShowdownTournamentPosterFront_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.GetTournamentDateText
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

void UShowdownTournamentPosterFront_C::GetTournamentDateText(class FText* TournamentDate, class FText Temp_text_Variable, class FText Temp_text_Variable1, bool Temp_bool_Variable, class FText Temp_text_Variable2, bool Temp_bool_Variable1, class FText Temp_text_Variable3, int32 Temp_int_Variable, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class FText Temp_text_Variable10, class FText Temp_text_Variable11, class FText Temp_text_Variable12, class FText Temp_text_Variable13, class FText Temp_text_Variable14, class FText Temp_text_Variable15, class FText Temp_text_Variable16, int32 Temp_int_Variable1, class FText Temp_text_Variable17, class FText Temp_text_Variable18, class FText Temp_text_Variable19, class FText Temp_text_Variable20, class FText Temp_text_Variable21, class FText Temp_text_Variable22, class FText Temp_text_Variable23, class FText Temp_text_Variable24, class FText Temp_text_Variable25, class FText Temp_text_Variable26, class FText Temp_text_Variable27, class FText Temp_text_Variable28, class FText Temp_text_Variable29, const struct FDateTime& CallFunc_GetTournamentEndTime_ReturnValue, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const struct FDateTime& CallFunc_GetTournamentBeginTime_ReturnValue, bool Temp_bool_Variable2, int32 CallFunc_BreakDateTime_Year1, int32 CallFunc_BreakDateTime_Month1, int32 CallFunc_BreakDateTime_Day1, int32 CallFunc_BreakDateTime_Hour1, int32 CallFunc_BreakDateTime_Minute1, int32 CallFunc_BreakDateTime_Second1, int32 CallFunc_BreakDateTime_Millisecond1, const struct FDateTime& CallFunc_GetTournamentEndTime_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_BreakDateTime_Year2, int32 CallFunc_BreakDateTime_Month2, int32 CallFunc_BreakDateTime_Day2, int32 CallFunc_BreakDateTime_Hour2, int32 CallFunc_BreakDateTime_Minute2, int32 CallFunc_BreakDateTime_Second2, int32 CallFunc_BreakDateTime_Millisecond2, class FText CallFunc_Conv_IntToText_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, const struct FDateTime& CallFunc_GetTournamentBeginTime_ReturnValue1, const struct FDateTime& CallFunc_GetTournamentEndTime_ReturnValue2, int32 CallFunc_BreakDateTime_Year3, int32 CallFunc_BreakDateTime_Month3, int32 CallFunc_BreakDateTime_Day3, int32 CallFunc_BreakDateTime_Hour3, int32 CallFunc_BreakDateTime_Minute3, int32 CallFunc_BreakDateTime_Second3, int32 CallFunc_BreakDateTime_Millisecond3, int32 CallFunc_BreakDateTime_Year4, int32 CallFunc_BreakDateTime_Month4, int32 CallFunc_BreakDateTime_Day4, int32 CallFunc_BreakDateTime_Hour4, int32 CallFunc_BreakDateTime_Minute4, int32 CallFunc_BreakDateTime_Second4, int32 CallFunc_BreakDateTime_Millisecond4, class FText CallFunc_Conv_IntToText_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue1, class FText K2Node_Select1_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class FText K2Node_Select2_Default, const struct FDateTime& CallFunc_GetTournamentBeginTime_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, int32 CallFunc_BreakDateTime_Year5, int32 CallFunc_BreakDateTime_Month5, int32 CallFunc_BreakDateTime_Day5, int32 CallFunc_BreakDateTime_Hour5, int32 CallFunc_BreakDateTime_Minute5, int32 CallFunc_BreakDateTime_Second5, int32 CallFunc_BreakDateTime_Millisecond5, class FText K2Node_Select3_Default, class FText K2Node_Select4_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownTournamentPosterFront_C", "GetTournamentDateText");

	Params::UShowdownTournamentPosterFront_C_GetTournamentDateText_Params Parms{};

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


// Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UShowdownTournamentPosterFront_C::BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownTournamentPosterFront_C", "BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UShowdownTournamentPosterFront_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownTournamentPosterFront_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShowdownTournamentPosterFront_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownTournamentPosterFront_C", "PreConstruct");

	Params::UShowdownTournamentPosterFront_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UShowdownTournamentPosterFront_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownTournamentPosterFront_C", "RefreshDataBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.ExecuteUbergraph_ShowdownTournamentPosterFront
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortShowdownEventState CallFunc_GetTournamentState_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetTournamentId_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor1                                    (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_TextToUpper_ReturnValue1                                (None)
// class FText                        CallFunc_TextToUpper_ReturnValue2                                (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShowdownTournamentPosterFront_C::ExecuteUbergraph_ShowdownTournamentPosterFront(int32 EntryPoint, enum class EFortShowdownEventState CallFunc_GetTournamentState_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool Temp_bool_Variable, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default, const class FString& CallFunc_GetTournamentId_ReturnValue, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable1, enum class ESlateVisibility K2Node_Select1_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1, class FText CallFunc_TextToUpper_ReturnValue2, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownTournamentPosterFront_C", "ExecuteUbergraph_ShowdownTournamentPosterFront");

	Params::UShowdownTournamentPosterFront_C_ExecuteUbergraph_ShowdownTournamentPosterFront_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTournamentState_ReturnValue = CallFunc_GetTournamentState_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetTournamentId_ReturnValue = CallFunc_GetTournamentId_ReturnValue;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor1 = K2Node_MakeStruct_SlateColor1;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue1 = CallFunc_TextToUpper_ReturnValue1;
	Parms.CallFunc_TextToUpper_ReturnValue2 = CallFunc_TextToUpper_ReturnValue2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}



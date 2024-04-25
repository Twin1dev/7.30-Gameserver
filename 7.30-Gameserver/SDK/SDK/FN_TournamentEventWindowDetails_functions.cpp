#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TournamentEventWindowDetails.TournamentEventWindowDetails_C
// (None)

class UClass* UTournamentEventWindowDetails_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TournamentEventWindowDetails_C");

	return Clss;
}


// TournamentEventWindowDetails_C TournamentEventWindowDetails.Default__TournamentEventWindowDetails_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTournamentEventWindowDetails_C* UTournamentEventWindowDetails_C::GetDefaultObj()
{
	static class UTournamentEventWindowDetails_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTournamentEventWindowDetails_C*>(UTournamentEventWindowDetails_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTournamentEventWindowDetails_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TournamentEventWindowDetails_C", "RefreshDataBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTournamentEventWindowDetails_C::EventColorize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TournamentEventWindowDetails_C", "EventColorize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTournamentEventWindowDetails_C::BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TournamentEventWindowDetails_C", "BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UTournamentEventWindowDetails_C_BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTournamentEventWindowDetails_C::BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TournamentEventWindowDetails_C", "BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UTournamentEventWindowDetails_C_BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTournamentEventWindowDetails_C::BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TournamentEventWindowDetails_C", "BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UTournamentEventWindowDetails_C_BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.ExecuteUbergraph_TournamentEventWindowDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable1                                              (None)
// class FText                        Temp_text_Variable2                                              (None)
// class FText                        Temp_text_Variable3                                              (None)
// enum class EFortShowdownMatchType  Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// enum class EFortShowdownEventState CallFunc_GetEventState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortShowdownMatchType  CallFunc_GetTournamentMatchType_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// int32                              Temp_int_Variable6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_GetText_ReturnValue1                                    (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              Temp_int_Variable8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue1                                (None)
// enum class EFortShowdownEventState Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortShowdownMatchType  CallFunc_GetTournamentMatchType_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTournamentPinUnlockScore_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_GetEventBeginTime_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEventTimeAsText_ReturnValue                          (None)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetEventEndTime_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetEventBeginTime_ReturnValue1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEventTimeAsText_ReturnValue1                         (None)
// class FText                        CallFunc_GetEventDateAsText_ReturnValue                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_NotEqual_TextText_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortShowdownEventBestResultsSummaryCallFunc_GetEventResultsSummary_ReturnValue                      (NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// int32                              CallFunc_GetTournamentMatchCap_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEventLeaderboardAvailable_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEventLeaderboardAvailable_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetTournamentId_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEventId_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTournamentEventWindowDetails_C::ExecuteUbergraph_TournamentEventWindowDetails(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable1, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, enum class EFortShowdownMatchType Temp_byte_Variable4, int32 Temp_int_Variable, bool Temp_bool_Variable2, int32 Temp_int_Variable1, int32 Temp_int_Variable2, int32 Temp_int_Variable3, int32 Temp_int_Variable4, int32 Temp_int_Variable5, class FText CallFunc_GetText_ReturnValue, enum class EFortShowdownEventState CallFunc_GetEventState_ReturnValue, enum class EFortShowdownMatchType CallFunc_GetTournamentMatchType_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText K2Node_Select_Default, int32 Temp_int_Variable6, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_GetText_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, int32 Temp_int_Variable7, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Variable8, class FText CallFunc_TextToUpper_ReturnValue1, enum class EFortShowdownEventState Temp_byte_Variable5, enum class EFortShowdownMatchType CallFunc_GetTournamentMatchType_ReturnValue1, int32 K2Node_Select1_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue, float Temp_float_Variable, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_GetTournamentPinUnlockScore_ReturnValue, bool Temp_bool_Variable3, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue, class FText CallFunc_GetEventTimeAsText_ReturnValue, float K2Node_Select2_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue3, const struct FDateTime& CallFunc_GetEventEndTime_ReturnValue, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue1, class FText CallFunc_GetEventTimeAsText_ReturnValue1, class FText CallFunc_GetEventDateAsText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, bool CallFunc_NotEqual_TextText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue1, const struct FFortShowdownEventBestResultsSummary& CallFunc_GetEventResultsSummary_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select3_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, int32 CallFunc_GetTournamentMatchCap_ReturnValue, float Temp_float_Variable1, bool Temp_bool_Variable4, class UCommonButton* K2Node_ComponentBoundEvent_Button2, bool CallFunc_IsEventLeaderboardAvailable_ReturnValue, bool CallFunc_IsEventLeaderboardAvailable_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, const class FString& CallFunc_GetTournamentId_ReturnValue, enum class ESlateVisibility K2Node_Select4_Default, const class FString& CallFunc_GetEventId_ReturnValue, float Temp_float_Variable2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, float CallFunc_PauseAnimation_ReturnValue2, float CallFunc_GetStartTime_ReturnValue1, float CallFunc_PauseAnimation_ReturnValue3, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue4, float CallFunc_GetEndTime_ReturnValue1, float CallFunc_PauseAnimation_ReturnValue4, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_GetStartTime_ReturnValue2, float K2Node_Select5_Default, bool CallFunc_LessEqual_FloatFloat_ReturnValue2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue5, float CallFunc_PauseAnimation_ReturnValue5, float CallFunc_GetEndTime_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue6, float K2Node_Select6_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TournamentEventWindowDetails_C", "ExecuteUbergraph_TournamentEventWindowDetails");

	Params::UTournamentEventWindowDetails_C_ExecuteUbergraph_TournamentEventWindowDetails_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.Temp_int_Variable5 = Temp_int_Variable5;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetEventState_ReturnValue = CallFunc_GetEventState_ReturnValue;
	Parms.CallFunc_GetTournamentMatchType_ReturnValue = CallFunc_GetTournamentMatchType_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Variable6 = Temp_int_Variable6;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue1 = CallFunc_GetText_ReturnValue1;
	Parms.CallFunc_PlayAnimation_ReturnValue1 = CallFunc_PlayAnimation_ReturnValue1;
	Parms.Temp_int_Variable7 = Temp_int_Variable7;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_int_Variable8 = Temp_int_Variable8;
	Parms.CallFunc_TextToUpper_ReturnValue1 = CallFunc_TextToUpper_ReturnValue1;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.CallFunc_GetTournamentMatchType_ReturnValue1 = CallFunc_GetTournamentMatchType_ReturnValue1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_PauseAnimation_ReturnValue = CallFunc_PauseAnimation_ReturnValue;
	Parms.CallFunc_GetStartTime_ReturnValue = CallFunc_GetStartTime_ReturnValue;
	Parms.CallFunc_PauseAnimation_ReturnValue1 = CallFunc_PauseAnimation_ReturnValue1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue2 = CallFunc_PlayAnimation_ReturnValue2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetTournamentPinUnlockScore_ReturnValue = CallFunc_GetTournamentPinUnlockScore_ReturnValue;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_GetEventBeginTime_ReturnValue = CallFunc_GetEventBeginTime_ReturnValue;
	Parms.CallFunc_GetEventTimeAsText_ReturnValue = CallFunc_GetEventTimeAsText_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_PlayAnimation_ReturnValue3 = CallFunc_PlayAnimation_ReturnValue3;
	Parms.CallFunc_GetEventEndTime_ReturnValue = CallFunc_GetEventEndTime_ReturnValue;
	Parms.CallFunc_GetEventBeginTime_ReturnValue1 = CallFunc_GetEventBeginTime_ReturnValue1;
	Parms.CallFunc_GetEventTimeAsText_ReturnValue1 = CallFunc_GetEventTimeAsText_ReturnValue1;
	Parms.CallFunc_GetEventDateAsText_ReturnValue = CallFunc_GetEventDateAsText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_NotEqual_TextText_ReturnValue1 = CallFunc_NotEqual_TextText_ReturnValue1;
	Parms.CallFunc_GetEventResultsSummary_ReturnValue = CallFunc_GetEventResultsSummary_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetTournamentMatchCap_ReturnValue = CallFunc_GetTournamentMatchCap_ReturnValue;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.CallFunc_IsEventLeaderboardAvailable_ReturnValue = CallFunc_IsEventLeaderboardAvailable_ReturnValue;
	Parms.CallFunc_IsEventLeaderboardAvailable_ReturnValue1 = CallFunc_IsEventLeaderboardAvailable_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_GetTournamentId_ReturnValue = CallFunc_GetTournamentId_ReturnValue;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_GetEventId_ReturnValue = CallFunc_GetEventId_ReturnValue;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_PauseAnimation_ReturnValue2 = CallFunc_PauseAnimation_ReturnValue2;
	Parms.CallFunc_GetStartTime_ReturnValue1 = CallFunc_GetStartTime_ReturnValue1;
	Parms.CallFunc_PauseAnimation_ReturnValue3 = CallFunc_PauseAnimation_ReturnValue3;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue1 = CallFunc_LessEqual_FloatFloat_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.CallFunc_PlayAnimation_ReturnValue4 = CallFunc_PlayAnimation_ReturnValue4;
	Parms.CallFunc_GetEndTime_ReturnValue1 = CallFunc_GetEndTime_ReturnValue1;
	Parms.CallFunc_PauseAnimation_ReturnValue4 = CallFunc_PauseAnimation_ReturnValue4;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1 = CallFunc_Subtract_FloatFloat_ReturnValue1;
	Parms.CallFunc_GetStartTime_ReturnValue2 = CallFunc_GetStartTime_ReturnValue2;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue2 = CallFunc_LessEqual_FloatFloat_ReturnValue2;
	Parms.CallFunc_PlayAnimation_ReturnValue5 = CallFunc_PlayAnimation_ReturnValue5;
	Parms.CallFunc_PauseAnimation_ReturnValue5 = CallFunc_PauseAnimation_ReturnValue5;
	Parms.CallFunc_GetEndTime_ReturnValue2 = CallFunc_GetEndTime_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.CallFunc_PlayAnimation_ReturnValue6 = CallFunc_PlayAnimation_ReturnValue6;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue7 = CallFunc_PlayAnimation_ReturnValue7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.ViewLeaderboard__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TournamentId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      EventId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UTournamentEventWindowDetails_C::ViewLeaderboard__DelegateSignature(const class FString& TournamentId, const class FString& EventId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TournamentEventWindowDetails_C", "ViewLeaderboard__DelegateSignature");

	Params::UTournamentEventWindowDetails_C_ViewLeaderboard__DelegateSignature_Params Parms{};

	Parms.TournamentId = TournamentId;
	Parms.EventId = EventId;

	UObject::ProcessEvent(Func, &Parms);

}

}



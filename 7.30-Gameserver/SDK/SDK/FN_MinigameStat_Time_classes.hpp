#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x188 - 0x188)
// BlueprintGeneratedClass MinigameStat_Time.MinigameStat_Time_C
class UMinigameStat_Time_C : public UFortMinigameStatFilter
{
public:

	static class UClass* StaticClass();
	static class UMinigameStat_Time_C* GetDefaultObj();

	int32 Compare(int32 FirstScore, int32 SecondScore, int32 CallFunc_Subtract_IntInt_ReturnValue);
	class FText FormatStat(int32 InCount, bool Temp_bool_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FTimespan& CallFunc_FromMilliseconds_ReturnValue, int32 CallFunc_GetMinutes_ReturnValue, float CallFunc_GetTotalMinutes_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_GetMilliseconds_ReturnValue, int32 CallFunc_GetSeconds_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, class FText CallFunc_Conv_IntToText_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue1, class FText K2Node_Select_Default);
};

}



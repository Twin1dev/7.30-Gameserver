#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x89 (0x629 - 0x5A0)
// WidgetBlueprintGeneratedClass ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C
class UShowdownTournamentPosterFront_C : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_PosterShadow;                                // 0x5A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownPin_C*                        ShowdownPin;                                       // 0x5B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TournamentDateText;                                // 0x5B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TournamentTitle1;                                  // 0x5C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TournamentTitle2;                                  // 0x5C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                           TitleColor;                                        // 0x5D0(0x28)(Edit, BlueprintVisible)
	bool                                         HiddenWhileLoading;                                // 0x5F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_573A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           SubColor;                                          // 0x600(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HidePin;                                           // 0x628(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UShowdownTournamentPosterFront_C* GetDefaultObj();

	void GetTournamentDateText(class FText* TournamentDate, class FText Temp_text_Variable, class FText Temp_text_Variable1, bool Temp_bool_Variable, class FText Temp_text_Variable2, bool Temp_bool_Variable1, class FText Temp_text_Variable3, int32 Temp_int_Variable, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class FText Temp_text_Variable10, class FText Temp_text_Variable11, class FText Temp_text_Variable12, class FText Temp_text_Variable13, class FText Temp_text_Variable14, class FText Temp_text_Variable15, class FText Temp_text_Variable16, int32 Temp_int_Variable1, class FText Temp_text_Variable17, class FText Temp_text_Variable18, class FText Temp_text_Variable19, class FText Temp_text_Variable20, class FText Temp_text_Variable21, class FText Temp_text_Variable22, class FText Temp_text_Variable23, class FText Temp_text_Variable24, class FText Temp_text_Variable25, class FText Temp_text_Variable26, class FText Temp_text_Variable27, class FText Temp_text_Variable28, class FText Temp_text_Variable29, const struct FDateTime& CallFunc_GetTournamentEndTime_ReturnValue, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const struct FDateTime& CallFunc_GetTournamentBeginTime_ReturnValue, bool Temp_bool_Variable2, int32 CallFunc_BreakDateTime_Year1, int32 CallFunc_BreakDateTime_Month1, int32 CallFunc_BreakDateTime_Day1, int32 CallFunc_BreakDateTime_Hour1, int32 CallFunc_BreakDateTime_Minute1, int32 CallFunc_BreakDateTime_Second1, int32 CallFunc_BreakDateTime_Millisecond1, const struct FDateTime& CallFunc_GetTournamentEndTime_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_BreakDateTime_Year2, int32 CallFunc_BreakDateTime_Month2, int32 CallFunc_BreakDateTime_Day2, int32 CallFunc_BreakDateTime_Hour2, int32 CallFunc_BreakDateTime_Minute2, int32 CallFunc_BreakDateTime_Second2, int32 CallFunc_BreakDateTime_Millisecond2, class FText CallFunc_Conv_IntToText_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, const struct FDateTime& CallFunc_GetTournamentBeginTime_ReturnValue1, const struct FDateTime& CallFunc_GetTournamentEndTime_ReturnValue2, int32 CallFunc_BreakDateTime_Year3, int32 CallFunc_BreakDateTime_Month3, int32 CallFunc_BreakDateTime_Day3, int32 CallFunc_BreakDateTime_Hour3, int32 CallFunc_BreakDateTime_Minute3, int32 CallFunc_BreakDateTime_Second3, int32 CallFunc_BreakDateTime_Millisecond3, int32 CallFunc_BreakDateTime_Year4, int32 CallFunc_BreakDateTime_Month4, int32 CallFunc_BreakDateTime_Day4, int32 CallFunc_BreakDateTime_Hour4, int32 CallFunc_BreakDateTime_Minute4, int32 CallFunc_BreakDateTime_Second4, int32 CallFunc_BreakDateTime_Millisecond4, class FText CallFunc_Conv_IntToText_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue1, class FText K2Node_Select1_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class FText K2Node_Select2_Default, const struct FDateTime& CallFunc_GetTournamentBeginTime_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, int32 CallFunc_BreakDateTime_Year5, int32 CallFunc_BreakDateTime_Month5, int32 CallFunc_BreakDateTime_Day5, int32 CallFunc_BreakDateTime_Hour5, int32 CallFunc_BreakDateTime_Minute5, int32 CallFunc_BreakDateTime_Second5, int32 CallFunc_BreakDateTime_Millisecond5, class FText K2Node_Select3_Default, class FText K2Node_Select4_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void RefreshDataBP();
	void ExecuteUbergraph_ShowdownTournamentPosterFront(int32 EntryPoint, enum class EFortShowdownEventState CallFunc_GetTournamentState_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool Temp_bool_Variable, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default, const class FString& CallFunc_GetTournamentId_ReturnValue, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable1, enum class ESlateVisibility K2Node_Select1_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1, class FText CallFunc_TextToUpper_ReturnValue2, bool K2Node_Event_IsDesignTime);
};

}



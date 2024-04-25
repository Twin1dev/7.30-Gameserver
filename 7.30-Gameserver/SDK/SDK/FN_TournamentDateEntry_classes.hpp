#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x5F9 - 0x5A0)
// WidgetBlueprintGeneratedClass TournamentDateEntry.TournamentDateEntry_C
class UTournamentDateEntry_C : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         CommonBorder_DateContent;                          // 0x5A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_Date;                              // 0x5B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_Time;                              // 0x5B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_Title;                             // 0x5C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_EntryType;                    // 0x5C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Strkethrough;                                // 0x5D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsTitle;                                           // 0x5D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Title;                                             // 0x5E0(0x18)(Edit, BlueprintVisible)
	bool                                         Two4HourFormat;                                    // 0x5F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UTournamentDateEntry_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void EventColor(struct FFortTournamentDisplayInfo& ShowdownData);
	void RefreshDataBP();
	void ExecuteUbergraph_TournamentDateEntry(int32 EntryPoint, const struct FDateTime& CallFunc_GetEventEndTime_ReturnValue, bool Temp_bool_Variable, class FText CallFunc_GetEventTimeAsText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable2, bool K2Node_Event_IsDesignTime, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_showdownData, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, enum class EFortShowdownEventState CallFunc_GetEventState_ReturnValue, int32 Temp_int_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, int32 Temp_int_Variable1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateColor& K2Node_Select1_Default, float CallFunc_RandomFloatInRange_ReturnValue, bool Temp_bool_Variable3, int32 K2Node_Select2_Default, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue, const struct FLinearColor& K2Node_Select3_Default, class FText CallFunc_GetEventDateAsText_ReturnValue, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue1, class FText CallFunc_GetEventTimeAsText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}



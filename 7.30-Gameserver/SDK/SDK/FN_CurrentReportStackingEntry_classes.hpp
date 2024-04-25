#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x298 - 0x228)
// WidgetBlueprintGeneratedClass CurrentReportStackingEntry.CurrentReportStackingEntry_C
class UCurrentReportStackingEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0x230(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      T_Type;                                            // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      T_Value;                                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EPlayerReportingStep              DisplayedStep;                                     // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4336[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TextValue;                                         // 0x250(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ReportedPlayerDisplayCategoryText;                 // 0x268(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ReportingReasonDisplayCategoryText;                // 0x280(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UCurrentReportStackingEntry_C* GetDefaultObj();

	void SetDisplayTextFields(enum class EPlayerReportingStep Temp_byte_Variable, class FText Temp_text_Variable, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1, class FText K2Node_Select_Default);
	void Construct();
	void InitStackingEntryFields(enum class EPlayerReportingStep DisplayedReportingStep, class FText DisplayText);
	void ExecuteUbergraph_CurrentReportStackingEntry(int32 EntryPoint, enum class EPlayerReportingStep K2Node_CustomEvent_DisplayedReportingStep, class FText K2Node_CustomEvent_DisplayText, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}



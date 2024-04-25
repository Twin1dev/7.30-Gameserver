#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xB78 - 0xB60)
// WidgetBlueprintGeneratedClass ReportablePlayerEntry.ReportablePlayerEntry_C
class UReportablePlayerEntry_C : public UFeedbackReportablePlayerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_0;                                           // 0xB68(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_0;                                     // 0xB70(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UReportablePlayerEntry_C* GetDefaultObj();

	void SetSelectionState(bool bIsSelected, bool bAnimateOnSelect);
	void ExecuteUbergraph_ReportablePlayerEntry(int32 EntryPoint, bool K2Node_Event_bIsSelected, bool K2Node_Event_bAnimateOnSelect);
};

}



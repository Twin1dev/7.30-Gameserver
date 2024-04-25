#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x5D0 - 0x5A0)
// WidgetBlueprintGeneratedClass ShowdownPosterViolator.ShowdownPosterViolator_C
class UShowdownPosterViolator_C : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonWidgetSwitcher*                 EventStateSwitcher;                                // 0x5A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         FutureEventViolator;                               // 0x5B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         LiveEventViolator;                                 // 0x5B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULiveViolator_C*                       LiveViolator;                                      // 0x5C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         NoViolator;                                        // 0x5C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UShowdownPosterViolator_C* GetDefaultObj();

	void RefreshDataBP();
	void ExecuteUbergraph_ShowdownPosterViolator(int32 EntryPoint, enum class EFortShowdownEventState Temp_byte_Variable, class UWidget* Temp_object_Variable, enum class EFortShowdownEventState CallFunc_GetTournamentState_ReturnValue, class UWidget* K2Node_Select_Default);
};

}



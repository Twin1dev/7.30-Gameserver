#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x258 - 0x238)
// WidgetBlueprintGeneratedClass JournalQuestRewardDetails.JournalQuestRewardDetails_C
class UJournalQuestRewardDetails_C : public UFortJournalQuestDetails
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         BorderBonusesBottomEdge;                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkDivider_C*                        PerkDivider;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestVerticalRewardInfo_C*            QuestVerticalRewardInfo;                           // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UJournalQuestRewardDetails_C* GetDefaultObj();

	void UpdatePanelInfo(class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, const struct FFortRewardInfo& CallFunc_GetRewardInfo_BP_ReturnValue);
	void UpdatePlayButtonState(bool CallFunc_CanGotoQuest_ReturnValue, bool CallFunc_CanPlayQuest_ReturnValue, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void UpdateButtonStates();
	void Setup();
	void Construct();
	void HandleCurrentQuestChangedBP();
	void ExecuteUbergraph_JournalQuestRewardDetails(int32 EntryPoint);
};

}



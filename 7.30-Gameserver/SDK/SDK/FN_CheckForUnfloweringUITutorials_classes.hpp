#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3A0 - 0x390)
// BlueprintGeneratedClass CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C
class ACheckForUnfloweringUITutorials_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACheckForUnfloweringUITutorials_C* GetDefaultObj();

	void CanRunTutorialQuests(bool* Result, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UDailyRewards_C* K2Node_DynamicCast_AsDaily_Rewards, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AreTutorialQuestsActive_ReturnValue, bool CallFunc_IsCurrentlyRunning_Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UserConstructionScript();
	void Execute(struct FFortScriptedActionParams& Params);
	void ExecuteUbergraph_CheckForUnfloweringUITutorials(int32 EntryPoint, const struct FFortScriptedActionParams& K2Node_Event_Params, bool CallFunc_CanRunTutorialQuests_Result);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x269 - 0x258)
// BlueprintGeneratedClass ToyOptionsComponent.ToyOptionsComponent_C
class UToyOptionsComponent_C : public UFortActorOptionsComponent
{
public:
	class UClass*                                OptionsWidgetClass;                                // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                MyIslandTabList;                                   // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMachine;                                         // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UToyOptionsComponent_C* GetDefaultObj();

	void OnLocalInteract(class AFortPlayerPawn* InteractingPawn, bool* bResult, class UFortMatchmakingKnobsModal** ModalWidget, class UFortMatchmakingKnobsModal* OutModalWidget, bool bInteractSuccess, class AFortPlayerController* InteractingPlayer, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class AActor* CallFunc_GetOwner_ReturnValue, class AMinigameSettingsMachine_C* K2Node_DynamicCast_AsMinigame_Settings_Machine, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_Create_ReturnValue, class UCreativeMyIslandModal_C* K2Node_DynamicCast_AsCreative_My_Island_Modal, bool K2Node_DynamicCast_bSuccess1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortMatchmakingKnobsModal* CallFunc_Create_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
};

}



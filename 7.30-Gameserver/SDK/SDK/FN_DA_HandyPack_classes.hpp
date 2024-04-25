#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xA38 - 0xA08)
// BlueprintGeneratedClass DA_HandyPack.DA_HandyPack_C
class ADA_HandyPack_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA08(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        MinHeldTime;                                       // 0xA10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6313[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          ButtonHeldTimer;                                   // 0xA18(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CanFire;                                           // 0xA20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AlreadyReleased;                                   // 0xA21(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6314[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Med_Pack_OverlapVolume_C*          OverlapVolume;                                     // 0xA28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetToKnock;                                     // 0xA30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADA_HandyPack_C* GetDefaultObj();

	void UserConstructionScript();
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void BPReleaseTrigger(class AFortDecoHelper* FortDecoHelper);
	void ExecuteUbergraph_DA_HandyPack(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortDecoHelper* K2Node_Event_FortDecoHelper1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetInstigator_ReturnValue1, class AFortDecoHelper* K2Node_Event_FortDecoHelper, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn1, bool K2Node_DynamicCast_bSuccess1);
};

}



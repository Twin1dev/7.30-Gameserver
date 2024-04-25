#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x940 - 0x938)
// BlueprintGeneratedClass GA_Trap_Ice_Freeze_Deimos.GA_Trap_Ice_Freeze_Deimos_C
class UGA_Trap_Ice_Freeze_Deimos_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x938(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Trap_Ice_Freeze_Deimos_C* GetDefaultObj();

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Trap_Ice_Freeze_Deimos(int32 EntryPoint, bool K2Node_Event_bWasCancelled, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn1, bool K2Node_DynamicCast_bSuccess1, class AAIController* CallFunc_GetAIController_ReturnValue);
};

}



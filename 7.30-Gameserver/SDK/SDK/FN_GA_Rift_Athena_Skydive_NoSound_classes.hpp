#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x84 (0x9BC - 0x938)
// BlueprintGeneratedClass GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C
class UGA_Rift_Athena_Skydive_NoSound_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x938(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                          FallingAnimation;                                  // 0x940(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Hangtimee;                                         // 0x948(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4379[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                VehicleSkelMesh;                                   // 0x950(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Hangtime;                                          // 0x958(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          EventTag;                                          // 0x978(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        KickFromVehicle_;                                  // 0x980(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                GameplayCueGE;                                     // 0x9A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHolstered;                                        // 0x9B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_437A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RiftSkydiveHolster;                                // 0x9B4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Rift_Athena_Skydive_NoSound_C* GetDefaultObj();

	void OnCancelled_860141E242B535E84A444690935DD5A3();
	void OnInterrupted_860141E242B535E84A444690935DD5A3();
	void OnBlendOut_860141E242B535E84A444690935DD5A3();
	void OnCompleted_860141E242B535E84A444690935DD5A3();
	void OnChange_76E5E8EE4057220AFF5C838FA07B504A(enum class EMovementMode NewMovementMode);
	void K2_ActivateAbility();
	void SetPlayerToSkydive();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Rift_Athena_Skydive_NoSound(int32 EntryPoint, enum class EMovementMode K2Node_CustomEvent_NewMovementMode, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EMovementMode Temp_byte_Variable, class UAbilityTask_WaitMovementModeChange* CallFunc_CreateWaitMovementModeChange_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue1, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_IsInAir_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue1, bool CallFunc_IsInVehicle_ReturnValue1, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_GetValueAtLevel_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, float CallFunc_GetValueAtLevel_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1, float CallFunc_GetValueAtLevel_ReturnValue2, bool Temp_bool_IsClosed_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, class APlayerController* CallFunc_GetPlayerController_ReturnValue2, class APlayerController* CallFunc_GetPlayerController_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, float CallFunc_GetValueAtLevel_ReturnValue3, bool K2Node_Event_bWasCancelled, float CallFunc_Add_FloatFloat_ReturnValue);
};

}



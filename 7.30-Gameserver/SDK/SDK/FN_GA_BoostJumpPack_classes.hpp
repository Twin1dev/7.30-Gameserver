#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x159 (0xAB1 - 0x958)
// BlueprintGeneratedClass GA_BoostJumpPack.GA_BoostJumpPack_C
class UGA_BoostJumpPack_C : public UFortGameplayAbility_JumpBoostPack
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x958(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Jump_Multiple;                                     // 0x960(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Basic_Jump_Z_Adjust;                               // 0x964(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FinalJumpHeight;                                   // 0x970(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_519A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    EventTriggerData;                                  // 0x980(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bJumpButtonHeld;                                   // 0xA28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bAtApex;                                           // 0xA29(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_519B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectHandle           JetpackEffectHandle;                               // 0xA2C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_519C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       FortPlayerPawn;                                    // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBoundToPawnLanded;                                // 0xA40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_519D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FuelFudge;                                         // 0xA44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           RegenEffectHandle;                                 // 0xA48(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bRegenEffectActive;                                // 0xA50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_519E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 ExecuteTags;                                       // 0xA58(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        JumpButtonHeldCount;                               // 0xA78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_519F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 ReleaseTags;                                       // 0xA80(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        TimeStartedHovering;                               // 0xAA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeStartedFalling;                                // 0xAA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EndHoverDelay;                                     // 0xAA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EndFallingDelay;                                   // 0xAAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasDied;                                          // 0xAB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UGA_BoostJumpPack_C* GetDefaultObj();

	void Handle_Jetpack_Equipped(float CallFunc_GetMaxFuel_MaxFuel, float CallFunc_GetFuel_Fuel, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters);
	bool Reasons_To_Reset_on_Transition(const struct FGameplayTag& Tag, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInGhostMode_ReturnValue, bool CallFunc_MatchesTag_ReturnValue1, bool CallFunc_MatchesTag_ReturnValue2, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_GetPendingSkydiveLaunch_ReturnValue, bool CallFunc_IsParachuteOpen_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue5, bool CallFunc_BooleanOR_ReturnValue6);
	class AFortPlayerPawn* Get_Player_Pawn(class UObject* Object, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess1, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue);
	bool IsCurrentlyDead(const struct FGameplayTag& TagOne, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_IsDBNO_ReturnValue, bool CallFunc_MatchesTag_ReturnValue1, bool CallFunc_MatchesTag_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2);
	void Reengage_Falling_Movement(bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Reengage_Hovering_Movement(bool CallFunc_IsFalling_ReturnValue);
	void SavePlayerPawn(const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void OnAbilityCanceled();
	void OnFuelIsEmpty();
	void OnFuelIsFull();
	void Reset_Toggle_Input_State(class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void ProcessTriggerData(const struct FGameplayTag& TagOne, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_IsMovingOnGround_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_MatchesAnyTags_ReturnValue, bool CallFunc_MatchesAnyTags_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue);
	void Stop_Regen_Effect();
	void Start_Regen_Effect(bool CallFunc_Not_PreBool_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	void Consider_Stopping_Regen_Effect(float CallFunc_GetMaxFuel_MaxFuel, float CallFunc_GetFuel_Fuel, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void Consider_Starting_Regen_Effect(float CallFunc_GetMaxFuel_MaxFuel, float CallFunc_GetFuel_Fuel, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	bool IsBoostAllowed(bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue);
	void K2_OnEndAbility(bool bWasCancelled);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, class AFortPlayerPawnAthena* PlayerPawn, const struct FGameplayTagContainer& ExplicitExecutionTags, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, class AFortPlayerPawn* CallFunc_Get_Player_Pawn_ReturnValue, class AFortPlayerPawn* CallFunc_Get_Player_Pawn_ReturnValue1, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_MatchesAnyTags_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue3);
	void GetMaxFuel(float* MaxFuel, bool Temp_bool_Variable, float Temp_float_Variable, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, float K2Node_Select_Default);
	void GetFuel(float* Fuel, bool Temp_bool_Variable, float Temp_float_Variable, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, float K2Node_Select_Default);
	void Setup_PlayerPawn(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	bool IsUsingJetpackEffectActive(int32 CallFunc_GetActiveGameplayEffectStackCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void HandleCurrentBoostStateChanged(enum class EJumpBoostPackState PreviousState, enum class EJumpBoostPackState CurrentState, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsUsingJetpackEffectActive_ReturnValue, bool CallFunc_IsUsingJetpackEffectActive_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	void SetCurrentBoostState(enum class EJumpBoostPackState NewState, enum class EJumpBoostPackState PreviousState, enum class Enum_BoostJumpStates PreviewBoostState);
	void PotentiallyEndHovering(bool bForceEndHovering, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Setup_Notify_at_Apex(bool bNotifyApex, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UFortMovementComp_CharacterAthena* K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena, bool K2Node_DynamicCast_bSuccess);
	void HandleIdle();
	void HandleFalling(float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_FMax_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void HandleHovering(float CallFunc_GetTimeSeconds_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_FMax_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue2);
	void ResetTransitionVariables(const struct FGameplayTag& TargetTag);
	void TransitionFromFalling(enum class Enum_BoostJumpStates* TargetBoostState, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetFuel_Fuel, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void TransitionFromHovering(enum class Enum_BoostJumpStates* TargetBoostState, float CallFunc_GetFuel_Fuel, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1);
	void TransitionFromBoost(enum class Enum_BoostJumpStates* TargetBoostState, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetFuel_Fuel, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void TransitionFromIdle(enum class Enum_BoostJumpStates* TargetBoostState, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsBoostAllowed_ReturnValue, float CallFunc_GetFuel_Fuel, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetFuel_Fuel1, float CallFunc_GetMaxFuel_MaxFuel, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void ProcessAbilityStateMachine(bool K2Node_SwitchEnum_CmpSuccess, enum class Enum_BoostJumpStates CallFunc_DetermineStateToTransitionTo_BoostState, bool K2Node_SwitchEnum1_CmpSuccess);
	void DetermineStateToTransitionTo(enum class Enum_BoostJumpStates* BoostState, bool K2Node_SwitchEnum_CmpSuccess, enum class Enum_BoostJumpStates CallFunc_TransitionFromFalling_TargetBoostState, enum class Enum_BoostJumpStates CallFunc_TransitionFromHovering_TargetBoostState, enum class Enum_BoostJumpStates CallFunc_TransitionFromBoost_TargetBoostState, enum class Enum_BoostJumpStates CallFunc_TransitionFromIdle_TargetBoostState);
	void SetupTransitionVariables(const struct FGameplayTag& Tag, const struct FGameplayTag& TargetTag, bool CallFunc_Reasons_To_Reset_on_Transition_ReturnValue, bool CallFunc_IsCurrentlyDead_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void HandleBoostJump(const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerPawn* CallFunc_SetJumpHeight_Pawn_Out, const struct FVector& CallFunc_SetJumpHeight_Jump_Height);
	void SetJumpHeight(class AFortPlayerPawn* Pawn, class AFortPlayerPawn** Pawn_Out, struct FVector* Jump_Height, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void On_Reached_Jump_Apex();
	void OnPawnLanded(struct FHitResult& Hit);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void OnCurrentStateChanged(enum class EJumpBoostPackState InPreviousState, enum class EJumpBoostPackState InCurrentState);
	void Delay_ProcessAbilityStateMachine();
	void ExecuteUbergraph_GA_BoostJumpPack(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FHitResult& K2Node_CustomEvent_Hit, const struct FGameplayEventData& K2Node_Event_EventData, enum class EJumpBoostPackState K2Node_Event_InPreviousState, enum class EJumpBoostPackState K2Node_Event_InCurrentState, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}



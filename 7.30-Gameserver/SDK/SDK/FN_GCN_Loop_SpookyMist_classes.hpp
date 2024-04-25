#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x9C0 - 0x880)
// BlueprintGeneratedClass GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C
class AGCN_Loop_SpookyMist_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x880(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 PostProcess;                                       // 0x888(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FadeInOut_Visbility_642089304BE20EFA276DDA9C98DD3C71; // 0x890(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FadeInOut__Direction_642089304BE20EFA276DDA9C98DD3C71; // 0x894(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FF3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FadeInOut;                                         // 0x898(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       TargetPlayer;                                      // 0x8A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExpirationSoundPeriod;                             // 0x8A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VelocityInterp;                                    // 0x8AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>      AttachedFX;                                        // 0x8B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>        PlayerSkeletalMeshes;                              // 0x8C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         FriendlyPlayer;                                    // 0x8D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FF4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          ExpireTellDelayTimer;                              // 0x8D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ExpirationSoundTimer;                              // 0x8E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        VisbilityLevel;                                    // 0x8E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WalkVisMultiplier;                                 // 0x8EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SprintVisMultiplier;                               // 0x8F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinFriendlyOpacity;                                // 0x8F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InteractVisibility;                                // 0x8F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FF5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        DataDuration;                                      // 0x900(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        DataTellDuration;                                  // 0x920(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        DataWalkVisMult;                                   // 0x940(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        DataSprintVisMult;                                 // 0x960(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        DataFriendlyVisMult;                               // 0x980(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        DataShadowPlaneOpacity;                            // 0x9A0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AGCN_Loop_SpookyMist_C* GetDefaultObj();

	void GetSkeletalMeshes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void UserConstructionScript();
	void FadeInOut__FinishedFunc();
	void FadeInOut__UpdateFunc();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ReceiveTick(float DeltaSeconds);
	void BeginExpireTell();
	void ClearExpireTell();
	void ExpireWarningTick();
	void UpdateTeamVisbility();
	void Audio_Tick(float Velocity);
	void StartedInteract();
	void EndedInteract();
	void ExecuteUbergraph_GCN_Loop_SpookyMist(int32 EntryPoint, bool CallFunc_GetIsBroadcastClient_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, int32 Temp_int_Array_Index_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable2, class AActor* K2Node_Event_MyTarget1, const struct FGameplayCueParameters& K2Node_Event_Parameters1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents1, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class UAudioComponent* CallFunc_Array_Get_Item, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn1, bool K2Node_DynamicCast_bSuccess1, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, bool CallFunc_OnSameTeam_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float K2Node_CustomEvent_Velocity, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UParticleSystemComponent* CallFunc_Array_Get_Item2, bool CallFunc_IsValid_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_GetIsPlayingReplay_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, bool CallFunc_BooleanOR_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_GetIsPlayingReplay_ReturnValue1, float CallFunc_Conv_BoolToFloat_ReturnValue1, bool CallFunc_IsLocallyControlled_ReturnValue1, float CallFunc_GetWorldDeltaSeconds_ReturnValue1, float CallFunc_Conv_BoolToFloat_ReturnValue2, class UParticleSystemComponent* CallFunc_Array_Get_Item3, class UParticleSystemComponent* CallFunc_Array_Get_Item4, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, class USkeletalMeshComponent* CallFunc_Array_Get_Item5, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, class USkeletalMeshComponent* CallFunc_Array_Get_Item6, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, float CallFunc_Conv_BoolToFloat_ReturnValue3, bool CallFunc_IsInVehicle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, float CallFunc_Conv_BoolToFloat_ReturnValue4, float CallFunc_Conv_BoolToFloat_ReturnValue5, float CallFunc_Multiply_FloatFloat_ReturnValue1, class UParticleSystemComponent* CallFunc_Array_Get_Item7, class UParticleSystemComponent* CallFunc_Array_Get_Item8, float CallFunc_GetScalarParameterValue_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue1, float CallFunc_Conv_BoolToFloat_ReturnValue6, float CallFunc_GetValueAtLevel_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_GetValueAtLevel_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_FClamp_ReturnValue, float CallFunc_FInterpTo_ReturnValue1, float CallFunc_GetValueAtLevel_ReturnValue4, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_GetValueAtLevel_ReturnValue5, float CallFunc_FClamp_ReturnValue1);
};

}



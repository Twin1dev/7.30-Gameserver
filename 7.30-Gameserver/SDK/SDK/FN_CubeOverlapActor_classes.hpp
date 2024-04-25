#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x860 - 0x790)
// BlueprintGeneratedClass CubeOverlapActor.CubeOverlapActor_C
class ACubeOverlapActor_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      Sphere;                                            // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        CubeBounceFlash_Offset_C4BEF74F49534998A43F64A7834C948F; // 0x7A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CubeBounceFlash_Flash_C4BEF74F49534998A43F64A7834C948F; // 0x7AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CubeBounceFlash__Direction_C4BEF74F49534998A43F64A7834C948F; // 0x7B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_589D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CubeBounceFlash;                                   // 0x7B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CubeRetaliationGlow_LookAround_C44E1C044FDF7590933373B1C37E2619; // 0x7C0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CubeRetaliationGlow_LookAt_C44E1C044FDF7590933373B1C37E2619; // 0x7CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CubeRetaliationGlow_Glow_C44E1C044FDF7590933373B1C37E2619; // 0x7D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CubeRetaliationGlow__Direction_C44E1C044FDF7590933373B1C37E2619; // 0x7D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_589E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CubeRetaliationGlow;                               // 0x7D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        Overlaps;                                          // 0x7E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                               CubeLookDirection;                                 // 0x7F0(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_589F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ZapTarget;                                         // 0x800(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DirectionToPlayer;                                 // 0x808(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TraceHitLocation;                                  // 0x814(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TraceHitNormal;                                    // 0x820(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TraceDown;                                         // 0x82C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       ZapInstigator;                                     // 0x830(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeBetweenRuneWubs;                               // 0x838(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        ShieldOverlapRadius;                               // 0x840(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ACubeOverlapActor_C* GetDefaultObj();

	void GetSocketClosestToTarget(class AActor* TargetPlayer, struct FVector* LookAtDirection, struct FVector* SocketLocation, const struct FVector& DirectionTOPlayerTemp, class FName ClosestSocket, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_VSize_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ACUBE_C* K2Node_DynamicCast_AsCUBE, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const class FString& CallFunc_Conv_ByteToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue1, class FName CallFunc_Array_Get_Item, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_VSize_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void UserConstructionScript(float CallFunc_GetValueAtLevel_ReturnValue);
	void CubeRetaliationGlow__FinishedFunc();
	void CubeRetaliationGlow__UpdateFunc();
	void CubeBounceFlash__FinishedFunc();
	void CubeBounceFlash__UpdateFunc();
	void ZapPlayer(class AFortPlayerPawn* InstigatingPlayer);
	void SpawnGC(class AActor* GCTarget, const struct FVector& Location, const struct FVector& Normal);
	void CubeRetaliationTelegraph();
	void CubeBounceFX(const struct FVector& Location, const struct FVector& Normal, class AActor* Target);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void TraceDownward();
	void ReceiveBeginPlay();
	void CubeRuneWub();
	void ZapVehicle(class AFortAthenaVehicle* Vehicle, const struct FVector& Normal, const struct FVector& Location);
	void ReceiveDestroyed();
	void ExecuteUbergraph_CubeOverlapActor(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AFortPlayerPawn* K2Node_CustomEvent_InstigatingPlayer, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue1, class AActor* CallFunc_GetClosestActorFromArray_ReturnValue, class AActor* K2Node_CustomEvent_GCTarget, const struct FVector& K2Node_CustomEvent_Location2, const struct FVector& K2Node_CustomEvent_Normal2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, const struct FVector_NetQuantizeNormal& K2Node_MakeStruct_Vector_NetQuantizeNormal, const struct FVector_NetQuantize10& K2Node_MakeStruct_Vector_NetQuantize10, class ACUBE_C* K2Node_DynamicCast_AsCUBE, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters, class AActor* CallFunc_GetOwner_ReturnValue1, class ACUBE_C* K2Node_DynamicCast_AsCUBE1, bool K2Node_DynamicCast_bSuccess1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue2, class ACUBE_C* K2Node_DynamicCast_AsCUBE2, bool K2Node_DynamicCast_bSuccess2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess3, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, bool CallFunc_IsInVehicle_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue3, class ACUBE_C* K2Node_DynamicCast_AsCUBE3, bool K2Node_DynamicCast_bSuccess4, const struct FVector& K2Node_CustomEvent_Location1, const struct FVector& K2Node_CustomEvent_Normal1, class AActor* K2Node_CustomEvent_Target, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, const struct FVector_NetQuantizeNormal& K2Node_MakeStruct_Vector_NetQuantizeNormal1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, const struct FVector_NetQuantize10& K2Node_MakeStruct_Vector_NetQuantize101, class AActor* CallFunc_GetOwner_ReturnValue4, TArray<class AActor*>& K2Node_MakeArray_Array, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent1, class AActor* K2Node_ComponentBoundEvent_OtherActor1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Normal_ReturnValue1, const struct FVector& CallFunc_GetSocketClosestToTarget_LookAtDirection, const struct FVector& CallFunc_GetSocketClosestToTarget_SocketLocation, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue1, const struct FVector& CallFunc_Normal_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue5, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue2, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess5, class AFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess6, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess7, bool CallFunc_BooleanOR_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters1, bool CallFunc_IsPlaying_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class ACUBE_C* K2Node_DynamicCast_AsCUBE4, bool K2Node_DynamicCast_bSuccess8, bool CallFunc_IsPlaying_ReturnValue1, const class FString& CallFunc_Conv_ByteToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class AFortAthenaVehicle* K2Node_CustomEvent_Vehicle, const struct FVector& K2Node_CustomEvent_Normal, const struct FVector& K2Node_CustomEvent_Location, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue7, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, class ACUBE_C* K2Node_DynamicCast_AsCUBE5, bool K2Node_DynamicCast_bSuccess9, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors1, int32 CallFunc_Array_Length_ReturnValue1, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue3);
};

}



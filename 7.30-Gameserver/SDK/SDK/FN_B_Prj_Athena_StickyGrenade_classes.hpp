#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x161 (0x9A1 - 0x840)
// BlueprintGeneratedClass B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C
class AB_Prj_Athena_StickyGrenade_C : public AFortAttachableProjectileBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x840(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              AttachedFuseBlink;                                 // 0x848(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x850(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow_Plunger;                                     // 0x858(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Trail;                                             // 0x860(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Beep;                                              // 0x868(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x870(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Fuse_Particle;                                     // 0x878(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       GrenadeFuse_AudioComponent;                        // 0x880(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        WobbleOnStick_WobbleCurve_1ED3EC4848E5A2B016AB61BA3779FA4E; // 0x888(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                WobbleOnStick__Direction_1ED3EC4848E5A2B016AB61BA3779FA4E; // 0x88C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6608[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    WobbleOnStick;                                     // 0x890(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_Explosion;                                       // 0x898(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_DistantSound;                                  // 0x8A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_CloseSound;                                    // 0x8A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExplosionRadius;                                   // 0x8B0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6609[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UForceFeedbackEffect*                  ExplosionForceFeedbackNear;                        // 0x8B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ExplosionForceFeedbackFar;                         // 0x8C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_Stick;                                         // 0x8C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Beacon_Streak_Color__Friendly_;                    // 0x8D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Beacon_Streak_Color__Enemy_;                       // 0x8E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDead_;                                           // 0x8F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_660A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Beacon_Core_Color__Friendly_;                      // 0x8F4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Beacon_Core_Color__Enemy_;                         // 0x904(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeBeforeExplode;                                 // 0x914(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OffsetDistanceFromBone;                            // 0x918(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitNormal;                                         // 0x91C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             StuckToPawn;                                       // 0x928(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Audio_StuckToEnvironment;                          // 0x930(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Audio_StuckToPlayer;                               // 0x938(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSelfStickDelayOver_;                             // 0x940(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_660B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SelfStickDelay;                                    // 0x944(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OffsetDistanceFromPhysicsMesh;                     // 0x948(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitLocation;                                       // 0x94C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasStopped;                                       // 0x958(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_660C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstance*                     EnemyMeshMaterial;                                 // 0x960(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     FriendlyMeshMaterial;                              // 0x968(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        NewVar_0;                                          // 0x970(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_ActorTagsThatShouldExplodeOnOverlap;            // 0x980(0x20)(Edit, BlueprintVisible)
	bool                                         bSimulationRunning;                                // 0x9A0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class AB_Prj_Athena_StickyGrenade_C* GetDefaultObj();

	void OnRep_bResumeSimulation(bool CallFunc_IsDedicatedServer_ReturnValue);
	void HandleHits(class UObject* Object, class UPrimitiveComponent* Component);
	void HandleHitSupplyDrop(class UObject* Object, class UPrimitiveComponent* Component, class AFortAthenaVehicle* LocalVehicle, class ABuildingWall* LocalWall, class AAthenaSupplyDrop_C* K2Node_DynamicCast_AsAthena_Supply_Drop, bool K2Node_DynamicCast_bSuccess, class AAthenaSupplyDropBalloon_C* K2Node_DynamicCast_AsAthena_Supply_Drop_Balloon, bool K2Node_DynamicCast_bSuccess1);
	void HandleHitVehicle(class UObject* Object, class UPrimitiveComponent* Component, class ABuildingWall* LocalWall, class AFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess);
	void HandleHitBuildingWall(class UObject* Object, class UPrimitiveComponent* Component, class ABuildingWall* LocalWall, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess, class ABuildingWall* K2Node_DynamicCast_AsBuilding_Wall, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsDoorComponent_ReturnValue);
	void PlayStickSound(const struct FVector& Location, class AActor* HitActor, bool Success, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue1, bool CallFunc_IsValid_ReturnValue1);
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue);
	void WobbleOnStick__FinishedFunc();
	void WobbleOnStick__UpdateFunc();
	void ReceiveBeginPlay();
	void Stop_Rotation();
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void Event_BuildingActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FHitResult& HitResult, bool bIsOverlap);
	void OnAttachedToDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void Event_TriggerExplosion();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void Event_Building_Actor_Destroyed();
	void RestartSimulating();
	void ReopenPawnCollision();
	void Event_OnVehicleDestroyed(class AActor* DestroyedActor);
	void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult);
	void SetBounceVelocity(const struct FVector& Velocity);
	void BounceOffNoStick();
	void ReceiveDestroyed();
	void Destroy();
	void ExecuteUbergraph_B_Prj_Athena_StickyGrenade(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, bool CallFunc_OnSameTeam_ReturnValue, bool Temp_bool_IsClosed_Variable, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_IsClosed_Variable1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable1, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FRotator& CallFunc_MakeRotator_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue4, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, class APlayerController* CallFunc_GetPlayerController_ReturnValue2, bool CallFunc_OnSameTeam_ReturnValue1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue2, class AActor* K2Node_Event_OtherActor, class UPrimitiveComponent* K2Node_Event_OtherComp, const struct FHitResult& K2Node_Event_HitResult, bool K2Node_Event_bIsOverlap, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_ComponentHasTag_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetInstigator_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_NegateVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class AActor* K2Node_Event_DamagedActor, float K2Node_Event_Damage, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FVector& K2Node_Event_HitLocation, class UPrimitiveComponent* K2Node_Event_FHitComponent, class FName K2Node_Event_BoneName, const struct FVector& K2Node_Event_Momentum, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool Temp_bool_Has_Been_Initd_Variable2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool Temp_bool_Has_Been_Initd_Variable3, bool Temp_bool_IsClosed_Variable2, bool CallFunc_OnSameTeam_ReturnValue2, const struct FLinearColor& CallFunc_SelectColor_ReturnValue2, bool Temp_bool_IsClosed_Variable3, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue3, bool CallFunc_OnSameTeam_ReturnValue3, class UMaterialInstance* CallFunc_SelectMaterialInstance_ReturnValue, TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, enum class EFortTeam CallFunc_GetActorTeam_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn1, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue5, enum class EFortTeam CallFunc_GetActorTeam_ReturnValue1, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable4, class AActor* K2Node_CustomEvent_DestroyedActor, bool CallFunc_HasAuthority_ReturnValue1, bool Temp_bool_Has_Been_Initd_Variable5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, bool Temp_bool_IsClosed_Variable4, const struct FHitResult& K2Node_ComponentBoundEvent_ImpactResult, bool CallFunc_BreakHitResult_bBlockingHit1, bool CallFunc_BreakHitResult_bInitialOverlap1, float CallFunc_BreakHitResult_Time1, float CallFunc_BreakHitResult_Distance1, const struct FVector& CallFunc_BreakHitResult_Location1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint1, const struct FVector& CallFunc_BreakHitResult_Normal1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat1, class AActor* CallFunc_BreakHitResult_HitActor1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent1, class FName CallFunc_BreakHitResult_HitBoneName1, int32 CallFunc_BreakHitResult_HitItem1, int32 CallFunc_BreakHitResult_FaceIndex1, const struct FVector& CallFunc_BreakHitResult_TraceStart1, const struct FVector& CallFunc_BreakHitResult_TraceEnd1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess3, class AFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess4, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess5, const struct FVector& K2Node_CustomEvent_Velocity, bool Temp_bool_IsClosed_Variable5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue6);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x870 - 0x790)
// BlueprintGeneratedClass B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C
class AB_BGA_Athena_EnvCampFire_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Cylinder;                                          // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       FireLoc;                                           // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Wood;                                              // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  FirePitEmpty;                                      // 0x7B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x7B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             InteractingPawn;                                   // 0x7C0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BeenUsed;                                          // 0x7C8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_174F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DousedSmokeLife;                                   // 0x7CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Row_DousedSmokeLife;                               // 0x7D0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HotfixedEnabled;                                   // 0x7F0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DestroyIfDisabled;                                 // 0x7F1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Destroyed;                                         // 0x7F2(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_1750[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Row_HotfixEnabled;                                 // 0x7F8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               TraceOffset;                                       // 0x818(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Season7Campfire;                                   // 0x824(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1751[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CustomSpecialS7Tags;                               // 0x828(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        SpecialS7FireTime;                                 // 0x848(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1752[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          DousedSmokeWispTimer;                              // 0x850(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       S7SuccessEmitter;                                  // 0x858(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            S7SuccessSound;                                    // 0x860(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BlockInteraction;                                  // 0x868(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1754[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LitRepBool;                                        // 0x86C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_BGA_Athena_EnvCampFire_C* GetDefaultObj();

	void OnRep_LitRepBool(bool CallFunc_Conv_IntToBool_ReturnValue);
	void OnRep_Destroyed();
	void CheckIfUserIsSpecialS7(class AFortPawn* PawnWhoLitFire, bool* UserIsSpecial, const struct FGameplayTagContainer& Temp_struct_Variable, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasAllTags_ReturnValue);
	bool RowToBool(struct FScalableFloat& Input, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void SetSheetValues(bool CallFunc_RowToBool_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue);
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2);
	void UserConstructionScript();
	void OnReady_9F4554BE40FCB41157835B9AD897EE69(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
	void ReceiveBeginPlay();
	void Start();
	void BuildingActorDestroyedCleanUp(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void BindToFloor();
	void HandleBoundDestroyed();
	void GoOut();
	void Light();
	void CheckDestroyDisabled();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn);
	void SpecialS7LightsFireAfterOut();
	void KillDouseSmokeWisp();
	void Server_QuestObjectiveUpdated(class AFortPlayerController* Controller, class UFortQuestItemDefinition* QuestDef, class FName BackendName, int32 CompletionCount, bool ObjectiveCompleted, bool QuestCompleted);
	void HandleCharacterVariantTransition(class AFortPawn* TransitioningPawn);
	void ExecuteUbergraph_B_BGA_Athena_EnvCampFire(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FGameplayTagContainer& Temp_struct_Variable, class UFortPlaylist* Temp_object_Variable, class AFortGameStateAthena* Temp_object_Variable1, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AFortPawn* K2Node_Event_InteractingPawn, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_CheckIfUserIsSpecialS7_UserIsSpecial, bool CallFunc_CheckIfUserIsSpecialS7_UserIsSpecial1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AFortPlayerController* K2Node_CustomEvent_Controller, class UFortQuestItemDefinition* K2Node_CustomEvent_QuestDef, class FName K2Node_CustomEvent_BackendName, int32 K2Node_CustomEvent_CompletionCount, bool K2Node_CustomEvent_ObjectiveCompleted, bool K2Node_CustomEvent_QuestCompleted, class AFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& CallFunc_GetPersistentName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, class AFortPawn* K2Node_CustomEvent_TransitioningPawn, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_CheckIfUserIsSpecialS7_UserIsSpecial2, class AController* CallFunc_GetController_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& Temp_object_Variable2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess1);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x2B88 - 0x2AD0)
// BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C
class AAthena_PlayerController_C : public AFortPlayerControllerAthena
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2AD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       ListenerOverride;                                  // 0x2AD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       VictoryRoyaleAudio;                                // 0x2AE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       VictoryRoyaleMusic;                                // 0x2AE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            VictoryRoyaleMenuMusicAsset;                       // 0x2AF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UFortWorldItemDefinition> CreativeTool;                                      // 0x2AF8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGameplayTagContainer                 BladeWielderTag;                                   // 0x2B20(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EFortItemType                     InteractingItemType;                               // 0x2B40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BD[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 InteractionTags;                                   // 0x2B48(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                  PawnPossessedDispatcher;                           // 0x2B68(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        PermissionRecheckTime;                             // 0x2B78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BE[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          PermissionsRecheckTimerHandle;                     // 0x2B80(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAthena_PlayerController_C* GetDefaultObj();

	void SetupPermissionRecheckTimer(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void LeftAllVolumes(bool* bLeftVolumes, bool InTempVolume, const TArray<class AFortVolume*>& ContainingVolumes, int32 Temp_int_Array_Index_Variable, class AFortVolume* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, bool CallFunc_IsDead_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_WillVolumeDeleteAfterActorSpawn_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AFortVolume*>& CallFunc_GetVolumesForLocation_Volumes, bool CallFunc_GetVolumesForLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UserConstructionScript();
	void OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D(class UObject* Loaded);
	void ReceiveBeginPlay();
	void PlayWinEffects(class APawn* FinisherPawn, class UFortWeaponItemDefinition* FinishingWeapon, enum class EDeathCause DeathCause);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void Start_Victory_Royale_Music();
	void OnMusicPackLoaded(class UAthenaMusicPackItemDefinition* NewMusicPack);
	void OnLeaveVolume(class AFortVolume* Volume);
	void OnEnterVolume(class AFortVolume* Volume);
	void HandlePermissions(class AFortVolume* Volume);
	void GrantItem(TSoftObjectPtr<class UFortWorldItemDefinition> Item);
	void RevokeItem(TSoftObjectPtr<class UFortWorldItemDefinition> Item);
	void PermissionsChanged();
	void OnLocalInteraction(class AActor* ReceivingActor);
	void RemoveItem();
	void RevokeCreativeTool();
	void ReactToPawnPossession(class APawn* PossessedPawn);
	void ExecuteUbergraph_Athena_PlayerController(int32 EntryPoint, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APawn* K2Node_Event_FinisherPawn, class UFortWeaponItemDefinition* K2Node_Event_FinishingWeapon, enum class EDeathCause K2Node_Event_DeathCause, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class UClass* CallFunc_GetWeaponActorClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsFort_Weapon_Ranged_Dual, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsB_Ranged_Generic, bool K2Node_ClassDynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_HasAuthority_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAthenaMusicPackItemDefinition* K2Node_CustomEvent_NewMusicPack, bool CallFunc_IsValid_ReturnValue1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue1, class AFortVolume* K2Node_Event_Volume1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AFortVolume* K2Node_Event_Volume, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess1, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, bool CallFunc_IsCreativeModePlaylist_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue1, bool CallFunc_LeftAllVolumes_bLeftVolumes, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena1, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsCreativeModePlaylist_ReturnValue1, class AFortVolume* K2Node_CustomEvent_Volume, bool CallFunc_IsReadOnly_ReturnValue, TArray<class UFortLevelSaveComponent*>& CallFunc_GetComponentsByClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, class UFortLevelSaveComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_DoesPlayerHavePermissionToEdit_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue4, bool CallFunc_IsValid_ReturnValue2, TSoftObjectPtr<class UFortWorldItemDefinition> K2Node_CustomEvent_Item1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition, bool K2Node_DynamicCast_bSuccess3, TSoftObjectPtr<class UFortWorldItemDefinition> K2Node_CustomEvent_Item, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue2, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition1, bool K2Node_DynamicCast_bSuccess4, class UObject* Temp_object_Variable, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition2, bool K2Node_DynamicCast_bSuccess5, class UObject* K2Node_CustomEvent_Loaded, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue, int32 CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AFortVolume* CallFunc_GetCurrentVolume_ReturnValue, class AActor* K2Node_Event_ReceivingActor, class AFortPickup* K2Node_DynamicCast_AsFort_Pickup, bool K2Node_DynamicCast_bSuccess6, class APawn* CallFunc_K2_GetPawn_ReturnValue1, const struct FFortItemEntry& CallFunc_GetItemEntry_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess7, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition3, bool K2Node_DynamicCast_bSuccess8, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess9, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_IsValid_ReturnValue3, class APawn* K2Node_CustomEvent_PossessedPawn, class AGameStateBase* CallFunc_GetGameState_ReturnValue2, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena2, bool K2Node_DynamicCast_bSuccess10, bool CallFunc_IsCreativeModePlaylist_ReturnValue2, bool CallFunc_K2_IsValidTimerHandle_ReturnValue1, class UFortMusicContext* CallFunc_GetContext_ReturnValue, class UAthenaMusicPackItemDefinition* CallFunc_GetEquippedMusicPack_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, bool CallFunc_K2_IsValidTimerHandle_ReturnValue2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue1, class USoundCue* CallFunc_GetVictoryMusic_ReturnValue, bool CallFunc_IsValid_ReturnValue4, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue2, bool CallFunc_IsValid_ReturnValue5);
	void PawnPossessedDispatcher__DelegateSignature(class APawn* PossessedPawn);
};

}



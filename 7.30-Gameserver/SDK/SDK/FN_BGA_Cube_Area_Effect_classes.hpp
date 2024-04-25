#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x7F9 - 0x790)
// BlueprintGeneratedClass BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C
class ABGA_Cube_Area_Effect_C : public AFortAthenaLowGravZone
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_Cube_Printing;                                   // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Cube_Rune_Volume;                                // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 PostProcess;                                       // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Cube_AoE_Volume;                                 // 0x7B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  AreaSphere;                                        // 0x7B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  RuneMesh;                                          // 0x7C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Effect_Area;                                       // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Gravity;                                           // 0x7D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  MeshComponent;                                     // 0x7D8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PrintingEffect;                                    // 0x7E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        RuneIndex;                                         // 0x7E8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         EnableRuneAmbientEffect;                           // 0x7E9(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_61A8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              RuneAmbientEffect;                                 // 0x7F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Printing;                                          // 0x7F8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABGA_Cube_Area_Effect_C* GetDefaultObj();

	void OnRep_Printing(class AActor* CallFunc_GetOwner_ReturnValue, class ACUBE_C* K2Node_DynamicCast_AsCUBE, bool K2Node_DynamicCast_bSuccess, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const class FString& CallFunc_Conv_ByteToString_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnRep_EnableRuneAmbientEffect(bool CallFunc_HasAuthority_ReturnValue);
	void OnRep_RuneIndex(class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class ACUBE_C* K2Node_DynamicCast_AsCUBE, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_Array_Get_Item, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult);
	void SetRuneMaterial(int32 Temp_int_Variable, class UMaterialInstance* Temp_object_Variable, class UMaterialInstance* Temp_object_Variable1, class UMaterialInstance* Temp_object_Variable2, class UMaterialInstance* Temp_object_Variable3, class UMaterialInstance* Temp_object_Variable4, class UMaterialInstance* Temp_object_Variable5, class UMaterialInstance* Temp_object_Variable6, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UMaterialInstance* K2Node_Select_Default);
	void UserConstructionScript(float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue1);
	void TrySpawnGlowEffect();
	void BndEvt__Effect_Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void DisableGlowEffect();
	void CubeNoLongerOnTop();
	void SpawnVolumeEffect();
	void ReceiveBeginPlay();
	void ReplayScrubbed();
	void ExecuteUbergraph_BGA_Cube_Area_Effect(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AActor* K2Node_Event_OtherActor, class AFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess, class AFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle1, bool K2Node_DynamicCast_bSuccess1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn1, bool K2Node_DynamicCast_bSuccess3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, uint8 CallFunc_Add_ByteByte_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ACUBE_C* K2Node_DynamicCast_AsCUBE, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortReplayContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x938 - 0x880)
// BlueprintGeneratedClass GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C
class AGCN_Loop_Ice_Wheels_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x880(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Duration;                                          // 0x888(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExpirationTellDuration;                            // 0x88C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ExpireTellDelayTimer;                              // 0x890(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ExpirationSoundTimer;                              // 0x898(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        DataTellDuration;                                  // 0x8A0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        ExpirationSoundPeriod;                             // 0x8C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Crack;                                             // 0x8C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>      LoopingEmitters;                                   // 0x8C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortCollisionAudioComponent*          CollisionAudioComp;                                // 0x8D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAudioComponent*>               SpawnedAudioComps;                                 // 0x8E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AFortAthenaSKVehicle*                  TargetVehicle;                                     // 0x8F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShoppingCart;                                      // 0x8F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5005[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          GolfSockets;                                       // 0x900(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                          ShoppingSockets;                                   // 0x910(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                          PlaneSockets;                                      // 0x920(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                          Timer_SoundModulation;                             // 0x930(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGCN_Loop_Ice_Wheels_C* GetDefaultObj();

	void SpawnEmittersAttachedToWheels(TArray<class FName>& Sockets, class USceneComponent* AttachToComponent, bool NoOffsets, class UParticleSystem* EmitterTemplate, float ScaleMult, TArray<class UParticleSystemComponent*>* SpawnedEmitters1, const TArray<class UParticleSystemComponent*>& SpawnedEmitters, float Temp_float_Variable, int32 CallFunc_Array_Length_ReturnValue, float Temp_float_Variable1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, float Temp_float_Variable2, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue1, float Temp_float_Variable3, int32 Temp_int_Variable, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void UserConstructionScript();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void BeginExpireTell();
	void ClearExpireTell();
	void ExpireWarningTick();
	void Event_ModulateSound();
	void ExecuteUbergraph_GCN_Loop_Ice_Wheels(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* K2Node_Event_MyTarget1, const struct FGameplayCueParameters& K2Node_Event_Parameters1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents1, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class AFortAthenaSKVehicle* K2Node_DynamicCast_AsFort_Athena_SKVehicle, bool K2Node_DynamicCast_bSuccess, class AFortAthenaSKVehicle* K2Node_DynamicCast_AsFort_Athena_SKVehicle1, bool K2Node_DynamicCast_bSuccess1, class AShoppingCartVehicleSK_C* K2Node_DynamicCast_AsShopping_Cart_Vehicle_SK, bool K2Node_DynamicCast_bSuccess2, int32 Temp_int_Loop_Counter_Variable1, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, int32 Temp_int_Array_Index_Variable1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class AFerretVehicle_C* K2Node_DynamicCast_AsFerret_Vehicle, bool K2Node_DynamicCast_bSuccess3, float CallFunc_Add_FloatFloat_ReturnValue, class AShoppingCartVehicleSK_C* K2Node_DynamicCast_AsShopping_Cart_Vehicle_SK1, bool K2Node_DynamicCast_bSuccess4, class UAudioComponent* CallFunc_Array_Get_Item, int32 Temp_int_Array_Index_Variable2, class UParticleSystemComponent* CallFunc_Array_Get_Item1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInAir_ReturnValue, TArray<class UParticleSystemComponent*>& CallFunc_SpawnEmittersAttachedToWheels_SpawnedEmitters1, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, TArray<class UParticleSystemComponent*>& CallFunc_SpawnEmittersAttachedToWheels_SpawnedEmitters11, float CallFunc_MapRangeClamped_ReturnValue, class UParticleSystemComponent* CallFunc_Array_Get_Item2, TArray<class UParticleSystemComponent*>& CallFunc_SpawnEmittersAttachedToWheels_SpawnedEmitters12, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, TArray<class UParticleSystemComponent*>& CallFunc_SpawnEmittersAttachedToWheels_SpawnedEmitters13, class UParticleSystemComponent* CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, TArray<class UParticleSystemComponent*>& CallFunc_SpawnEmittersAttachedToWheels_SpawnedEmitters14, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1);
};

}



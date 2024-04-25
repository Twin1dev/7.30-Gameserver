#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x8E0 - 0x880)
// BlueprintGeneratedClass GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C
class AGCN_Loop_Ice_Wheels_Environmental_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x880(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UParticleSystemComponent*>      LoopingEmitters;                                   // 0x888(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortCollisionAudioComponent*          CollisionAudioComp;                                // 0x898(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAudioComponent*>               SpawnedAudioComps;                                 // 0x8A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AFortAthenaSKVehicle*                  TargetVehicle;                                     // 0x8B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShoppingCart;                                      // 0x8B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          GolfSockets;                                       // 0x8C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                          ShoppingSockets;                                   // 0x8D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AGCN_Loop_Ice_Wheels_Environmental_C* GetDefaultObj();

	void SpawnEmittersAttachedToWheels(TArray<class FName>& Sockets, class USceneComponent* AttachToComponent, bool ShoppingCart, class UParticleSystem* EmitterTemplate, TArray<class UParticleSystemComponent*>* SpawnedEmitters1, const TArray<class UParticleSystemComponent*>& SpawnedEmitters, float Temp_float_Variable, float CallFunc_SelectFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float Temp_float_Variable1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, float Temp_float_Variable2, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue1, float Temp_float_Variable3, int32 Temp_int_Variable, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void UserConstructionScript();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_GCN_Loop_Ice_Wheels_Environmental(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* K2Node_Event_MyTarget1, const struct FGameplayCueParameters& K2Node_Event_Parameters1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents1, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class AFortAthenaSKVehicle* K2Node_DynamicCast_AsFort_Athena_SKVehicle, bool K2Node_DynamicCast_bSuccess, class AFortAthenaSKVehicle* K2Node_DynamicCast_AsFort_Athena_SKVehicle1, bool K2Node_DynamicCast_bSuccess1, class AShoppingCartVehicleSK_C* K2Node_DynamicCast_AsShopping_Cart_Vehicle_SK, bool K2Node_DynamicCast_bSuccess2, float K2Node_Event_DeltaSeconds, int32 Temp_int_Array_Index_Variable1, class UAudioComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class AShoppingCartVehicleSK_C* K2Node_DynamicCast_AsShopping_Cart_Vehicle_SK1, bool K2Node_DynamicCast_bSuccess3, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_IsInAir_ReturnValue, TArray<class UParticleSystemComponent*>& CallFunc_SpawnEmittersAttachedToWheels_SpawnedEmitters1, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, TArray<class UParticleSystemComponent*>& CallFunc_SpawnEmittersAttachedToWheels_SpawnedEmitters11, float CallFunc_MapRangeClamped_ReturnValue, class UParticleSystemComponent* CallFunc_Array_Get_Item1, TArray<class UParticleSystemComponent*>& CallFunc_SpawnEmittersAttachedToWheels_SpawnedEmitters12, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UParticleSystemComponent*>& CallFunc_SpawnEmittersAttachedToWheels_SpawnedEmitters13, int32 CallFunc_Array_Length_ReturnValue1, class UParticleSystemComponent* CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue1);
};

}



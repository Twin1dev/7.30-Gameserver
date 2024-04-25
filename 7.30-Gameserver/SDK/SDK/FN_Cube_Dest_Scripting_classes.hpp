#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x3A8 - 0x330)
// BlueprintGeneratedClass Cube_Dest_Scripting.Cube_Dest_Scripting_C
class ACube_Dest_Scripting_C : public AFortAthenaWater
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_Cube_Printing_540;                               // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_Athena_Water_C*                    LakeActor;                                         // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CubeSinking;                                       // 0x350(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         LakeTurnedOn;                                      // 0x351(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_6182[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACUBE_C*                               CubeRef;                                           // 0x358(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              SinkingWaterBoil;                                  // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_AmbientSplineActor_C*>      ShorelineAudioActors;                              // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABP_AmbientLakeAudioActor_C*>   LakeAudioActors;                                   // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class UAudioComponent*                       PropagateAudioLoop;                                // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LakeState;                                         // 0x390(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LakeCenter;                                        // 0x394(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayedPreSinkAudio;                                // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6183[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IsCubeSinking;                                     // 0x3A4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACube_Dest_Scripting_C* GetDefaultObj();

	void OnRep_IsCubeSinking(class ACUBE_C* K2Node_DynamicCast_AsCUBE, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, const class FString& CallFunc_Conv_ByteToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
	void OnRep_LakeState(bool K2Node_SwitchInteger_CmpSuccess);
	void UpdateCorruption(float PercentComplete, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ConvertLakeAudioActor(class ABP_AmbientLakeAudioActor_C* Lake);
	void CorruptRiverAudioActor(class ABP_AmbientSplineActor_C* River, class ABP_AmbientSplineActor_C* RiverL);
	void OnRep_LakeTurnedOn(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class ABP_AmbientLakeAudioActor_C* CallFunc_Array_Get_Item, class ABP_AmbientSplineActor_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1);
	void OnRep_CubeSinking(const class FString& CallFunc_Conv_ByteToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
	void UserConstructionScript();
	void CubeStartSinking();
	void CubeStopSinking();
	void CubeSplash();
	void LakeTurnOn();
	void ReceiveBeginPlay();
	void CubeDone(int32 CurrentIndex);
	void ExecuteUbergraph_Cube_Dest_Scripting(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, TArray<class ACUBE_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ACUBE_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 K2Node_CustomEvent_CurrentIndex, bool CallFunc_IsValid_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue1);
};

}



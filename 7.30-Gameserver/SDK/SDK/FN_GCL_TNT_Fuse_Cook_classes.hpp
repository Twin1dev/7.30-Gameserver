#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBC (0x93C - 0x880)
// BlueprintGeneratedClass GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C
class AGCL_TNT_Fuse_Cook_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x880(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Fuse_Stage_2_Timeline_Death_Warning_025671D240409D37FB3E82944DD6495A; // 0x888(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Fuse_Stage_2_Timeline__Direction_025671D240409D37FB3E82944DD6495A; // 0x88C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5087[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Fuse_Stage_2_Timeline;                             // 0x890(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Fuse_Stage_1_Timeline_Death_Warning_5DCFD1EA4B7DF5BB34E90FA720FC0410; // 0x898(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Fuse_Stage_1_Timeline__Direction_5DCFD1EA4B7DF5BB34E90FA720FC0410; // 0x89C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5088[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Fuse_Stage_1_Timeline;                             // 0x8A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Fuse_Movement_Material_Flash_342C86774E23CFA43C72E4B95A4B745E; // 0x8A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Fuse_Movement_Lerp_Control_342C86774E23CFA43C72E4B95A4B745E; // 0x8AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Fuse_Movement__Direction_342C86774E23CFA43C72E4B95A4B745E; // 0x8B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5089[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Fuse_Movement;                                     // 0x8B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FuseDuration;                                      // 0x8C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FuseElapsedTime;                                   // 0x8C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              DeathFX;                                           // 0x8C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_TNT_Athena_C*                       TNTBundle;                                         // 0x8D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Looping_Particle;                                  // 0x8D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Looping_Audio;                                     // 0x8E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PSys_Opacity;                                      // 0x8E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PSys_Color;                                        // 0x8EC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Psys_Size;                                         // 0x8F8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PSysSplineLoca;                                    // 0x904(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              PSysSplineRot;                                     // 0x910(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_508A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       DeathAudio;                                        // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Fuse_Change__;                                     // 0x928(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Fuse_2nd_Stage_Duration;                           // 0x92C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Emissive_Color;                                    // 0x930(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGCL_TNT_Fuse_Cook_C* GetDefaultObj();

	void WarningSetup(float Warning, float* Opacity, struct FVector* Color, struct FVector* Size, const struct FVector& Max_Possible_Size, const struct FVector& Final_Color, float Max_Possible_Opacity, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue1, float CallFunc_Lerp_ReturnValue);
	void Spline_Setup(float Alpha, struct FVector* Spline_Location, const TArray<struct FVector>& DynamicLocations, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float CallFunc_GetSplineLength_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue2, const struct FVector& CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue3, TArray<struct FVector>& K2Node_MakeArray_Array);
	void UserConstructionScript();
	void Fuse_Movement__FinishedFunc();
	void Fuse_Movement__UpdateFunc();
	void Fuse_Stage_1_Timeline__FinishedFunc();
	void Fuse_Stage_1_Timeline__UpdateFunc();
	void Fuse_Stage_2_Timeline__FinishedFunc();
	void Fuse_Stage_2_Timeline__UpdateFunc();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void Control_Stage_1_Fuse_Particles();
	void Control_Stage_2_Fuse_Particles();
	void ExecuteUbergraph_GCL_TNT_Fuse_Cook(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_IsValid_ReturnValue1, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class AB_TNT_Athena_C* K2Node_DynamicCast_AsB_TNT_Athena, bool K2Node_DynamicCast_bSuccess1, float CallFunc_Divide_FloatFloat_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool K2Node_SwitchEnum_CmpSuccess, class AActor* K2Node_Event_MyTarget1, const struct FGameplayCueParameters& K2Node_Event_Parameters1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents1, class UAudioComponent* CallFunc_Array_Get_Item, class UParticleSystemComponent* CallFunc_Array_Get_Item1, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena1, bool K2Node_DynamicCast_bSuccess2, class AB_TNT_Athena_C* K2Node_DynamicCast_AsB_TNT_Athena1, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, float CallFunc_WarningSetup_Opacity, const struct FVector& CallFunc_WarningSetup_Color, const struct FVector& CallFunc_WarningSetup_Size, float CallFunc_WarningSetup_Opacity1, const struct FVector& CallFunc_WarningSetup_Color1, const struct FVector& CallFunc_WarningSetup_Size1, const struct FVector& CallFunc_Spline_Setup_Spline_Location, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult1, float CallFunc_EvaluateCurveTableRow_OutXY1, bool K2Node_SwitchEnum1_CmpSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2);
};

}



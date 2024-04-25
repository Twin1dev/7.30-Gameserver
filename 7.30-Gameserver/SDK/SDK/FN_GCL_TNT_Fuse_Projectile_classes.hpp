#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC4 (0x944 - 0x880)
// BlueprintGeneratedClass GCL_TNT_Fuse_Projectile.GCL_TNT_Fuse_Projectile_C
class AGCL_TNT_Fuse_Projectile_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x880(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Stage_2_Fuse_Death_Warning_864F89AB4908B84538EE68B4DF0D26CE; // 0x888(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Stage_2_Fuse__Direction_864F89AB4908B84538EE68B4DF0D26CE; // 0x88C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_507A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Stage_2_Fuse;                                      // 0x890(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Stage_1_Fuse_Death_Warning_2FFFDFE8431CAC993AA46387580F7A84; // 0x898(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Stage_1_Fuse__Direction_2FFFDFE8431CAC993AA46387580F7A84; // 0x89C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_507B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Stage_1_Fuse;                                      // 0x8A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Fuse_Movement_Material_Flash_74AFF49A4CEE87DDE4FCD785AA920130; // 0x8A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Fuse_Movement_Lerp_Control_74AFF49A4CEE87DDE4FCD785AA920130; // 0x8AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Fuse_Movement__Direction_74AFF49A4CEE87DDE4FCD785AA920130; // 0x8B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_507C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Fuse_Movement;                                     // 0x8B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FuseDuration;                                      // 0x8C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FuseElapsedTime;                                   // 0x8C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_Prj_Athena_TNT_C*                   Projectile;                                        // 0x8C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Death_FX;                                          // 0x8D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Flare_Size;                                        // 0x8D8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PSysSplineLoca;                                    // 0x8E4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              PSysSplineRot;                                     // 0x8F0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        PSys_Opacity;                                      // 0x8FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PSys_Color;                                        // 0x900(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Psys_Size;                                         // 0x90C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              LoopingParticle;                                   // 0x918(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Looping_Audio;                                     // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       DeathAudio;                                        // 0x928(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Fuse_Change__;                                     // 0x930(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Twond_Stage_Fuse_Duration;                         // 0x934(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Emissive_Color;                                    // 0x938(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGCL_TNT_Fuse_Projectile_C* GetDefaultObj();

	void Warning_System_Setup(float Warning, float* Opacity, struct FVector* Color, struct FVector* Size, const struct FVector& Max_Possible_Size, const struct FVector& Final_Color, float Max_Possible_Opacity, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue1, float CallFunc_Lerp_ReturnValue);
	void Spline_Setup(float Alpha, struct FVector* Spline_Location, float CallFunc_GetSplineLength_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, const struct FVector& CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue3, TArray<struct FVector>& K2Node_MakeArray_Array);
	void UserConstructionScript();
	void Fuse_Movement__FinishedFunc();
	void Fuse_Movement__UpdateFunc();
	void Stage_1_Fuse__FinishedFunc();
	void Stage_1_Fuse__UpdateFunc();
	void Stage_2_Fuse__FinishedFunc();
	void Stage_2_Fuse__UpdateFunc();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void Control_Stage_1_Fuse_Particles();
	void Control_Stage_2_Fuse_Particles();
	void ExecuteUbergraph_GCL_TNT_Fuse_Projectile(int32 EntryPoint, float CallFunc_Divide_FloatFloat_ReturnValue, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool K2Node_SwitchEnum_CmpSuccess, class AActor* K2Node_Event_MyTarget1, const struct FGameplayCueParameters& K2Node_Event_Parameters1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents1, class UAudioComponent* CallFunc_Array_Get_Item, class UParticleSystemComponent* CallFunc_Array_Get_Item1, class AB_Prj_Athena_TNT_C* K2Node_DynamicCast_AsB_Prj_Athena_TNT, bool K2Node_DynamicCast_bSuccess, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_IsValid_ReturnValue1, float CallFunc_Warning_System_Setup_Opacity, const struct FVector& CallFunc_Warning_System_Setup_Color, const struct FVector& CallFunc_Warning_System_Setup_Size, float CallFunc_Warning_System_Setup_Opacity1, const struct FVector& CallFunc_Warning_System_Setup_Color1, const struct FVector& CallFunc_Warning_System_Setup_Size1, const struct FVector& CallFunc_Spline_Setup_Spline_Location, bool CallFunc_IsValid_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult1, float CallFunc_EvaluateCurveTableRow_OutXY1, bool K2Node_SwitchEnum1_CmpSuccess, const struct FVector& CallFunc_VLerp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue4, float CallFunc_Subtract_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue5);
};

}



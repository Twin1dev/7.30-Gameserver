#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x3F0 - 0x330)
// BlueprintGeneratedClass B_HookGunRope.B_HookGunRope_C
class AB_HookGunRope_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SM_Grappling_Hook_Projectile;                      // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Rope;                                              // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Tight_NewTrack_0_FFAA67BE44D4D10C00414E828FA9423F; // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Tight__Direction_FFAA67BE44D4D10C00414E828FA9423F; // 0x354(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6289[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Tight;                                             // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Reel_In_Tighten_22145CB34BE582F3E6C3B88B44E066FE;  // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Reel_In_Reel_Lerp_Controller_22145CB34BE582F3E6C3B88B44E066FE; // 0x364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Reel_In__Direction_22145CB34BE582F3E6C3B88B44E066FE; // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_628B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Reel_In;                                           // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Start_Rope;                                        // 0x378(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               End_Rope;                                          // 0x384(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Projectile_Gone;                                   // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_628D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AB_Prj_Hook_Athena_C*                  Projectile_Actor;                                  // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           RopeGE;                                            // 0x3A8(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class USoundBase*                            ReelSound;                                         // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ReattachSound;                                     // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          RopeActiveTag;                                     // 0x3C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          BlockIncomingPickups;                              // 0x3C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 Change_Equipment_Tag;                              // 0x3D0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AB_HookGunRope_C* GetDefaultObj();

	void UserConstructionScript();
	void Reel_In__FinishedFunc();
	void Reel_In__UpdateFunc();
	void Tight__FinishedFunc();
	void Tight__UpdateFunc();
	void End_Reel();
	void Set_Start_Point_of_Rope();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ReceiveTick(float DeltaSeconds);
	void TightenRope();
	void ExecuteUbergraph_B_HookGunRope(int32 EntryPoint, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float CallFunc_DistanceBetweenTwoVectors_Distance, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class AB_Hookgun_Athena_C* K2Node_DynamicCast_AsB_Hookgun_Athena, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_VLerp_ReturnValue, float CallFunc_DistanceBetweenTwoVectors_Distance1, float K2Node_Event_DeltaSeconds, float CallFunc_Divide_FloatFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue1, float CallFunc_Lerp_ReturnValue1, float CallFunc_Lerp_ReturnValue2, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult1, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult2, class AActor* CallFunc_GetOwner_ReturnValue1, bool CallFunc_IsValid_ReturnValue2);
};

}



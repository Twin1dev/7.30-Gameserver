#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3E0 (0x830 - 0x450)
// BlueprintGeneratedClass B_SoundIndicator_01.B_SoundIndicator_01_C
class AB_SoundIndicator_01_C : public AFortSoundCameraLensEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Chest;                                             // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FootstepsOrGlider;                                 // 0x459(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Gunshot;                                           // 0x45A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Plane;                                             // 0x45B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Generic;                                           // 0x45C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9F5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Gunshot_Falloff_Long_Range;                        // 0x460(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Chest_Falloff;                                     // 0x4E8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Footsteps_Falloff;                                 // 0x570(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Gunshot_Falloff_Mid_Range;                         // 0x5F8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Gunshot_Falloff_Melee;                             // 0x680(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        OppositeFacingGunshotStrength;                     // 0x708(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FacingGunshotExponentNear;                         // 0x70C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ForwardFacingGunshotStrength;                      // 0x710(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FacingGunshotExponentFar;                          // 0x714(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DistanceDivisor;                                   // 0x718(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9FB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Glider_Falloff;                                    // 0x720(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Plane_Falloff;                                     // 0x7A8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AB_SoundIndicator_01_C* GetDefaultObj();

	void CalculateFiringAngle(float* DotResult, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortWeaponRanged* K2Node_DynamicCast_AsFort_Weapon_Ranged, bool K2Node_DynamicCast_bSuccess1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue1, float CallFunc_Lerp_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue1);
	struct FRuntimeFloatCurve GetWeaponCurve(bool Temp_bool_Variable, bool Temp_bool_Variable1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FRuntimeFloatCurve& K2Node_Select_Default, const struct FRuntimeFloatCurve& K2Node_Select1_Default);
	void UpdateEmitterStates(float CallFunc_CalculateFiringAngle_DotResult);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnEffectActivated();
	void ExecuteUbergraph_B_SoundIndicator_01(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, const struct FRuntimeFloatCurve& CallFunc_GetWeaponCurve_ReturnValue);
};

}



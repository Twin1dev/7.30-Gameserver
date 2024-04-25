#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x930 - 0x880)
// BlueprintGeneratedClass WM_Camera.WM_Camera_C
class AWM_Camera_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x880(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        TL_CameraDeactivateAnim_OutCurve_73E7DC7546C4C2FD98109BAD51037AF1; // 0x888(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TL_CameraDeactivateAnim__Direction_73E7DC7546C4C2FD98109BAD51037AF1; // 0x88C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E73[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TL_CameraDeactivateAnim;                           // 0x890(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TL_CameraActivateAnim_NewTrack_4_ED6153E9442CF8BBFC62D28E1B56763B; // 0x898(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TL_CameraActivateAnim__Direction_ED6153E9442CF8BBFC62D28E1B56763B; // 0x89C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E74[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TL_CameraActivateAnim;                             // 0x8A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraNoise_Noise3_CAC0C7484A50FFB26B3B348FCDF148B0; // 0x8A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraNoise_Noise2_CAC0C7484A50FFB26B3B348FCDF148B0; // 0x8AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraNoise_Noise1_CAC0C7484A50FFB26B3B348FCDF148B0; // 0x8B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CameraNoise__Direction_CAC0C7484A50FFB26B3B348FCDF148B0; // 0x8B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E75[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CameraNoise;                                       // 0x8B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            InitialPosition;                                   // 0x8C0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            ZoomPosition;                                      // 0x8F0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class AWorldMapPin*>                  AllPinsArray;                                      // 0x920(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AWM_Camera_C* GetDefaultObj();

	void UserConstructionScript(const struct FTransform& CallFunc_GetTransform_ReturnValue);
	void TL_CameraActivateAnim__FinishedFunc();
	void TL_CameraActivateAnim__UpdateFunc();
	void TL_CameraDeactivateAnim__FinishedFunc();
	void TL_CameraDeactivateAnim__UpdateFunc();
	void CameraNoise__FinishedFunc();
	void CameraNoise__UpdateFunc();
	void CameraActivateAnim();
	void StopWiggle();
	void CameraDeactivateAnim();
	void CameraWiggle();
	void OnDeactivated();
	void OnActivated();
	void ExecuteUbergraph_WM_Camera(int32 EntryPoint, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_TLerp_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, float CallFunc_Subtract_FloatFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, const struct FTransform& CallFunc_TLerp_ReturnValue1, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, const struct FHitResult& CallFunc_K2_SetActorRelativeTransform_SweepHitResult, const struct FHitResult& CallFunc_K2_SetActorRelativeTransform_SweepHitResult1, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, TArray<class AWM_Lights_C*>& CallFunc_GetAllActorsOfClass_OutActors1, class AWM_Lights_C* CallFunc_Array_Get_Item1, TArray<class AWM_Lights_C*>& CallFunc_GetAllActorsOfClass_OutActors2, class AWM_Lights_C* CallFunc_Array_Get_Item2, class APlayerController* CallFunc_GetPlayerController_ReturnValue1);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x3C8 - 0x348)
// BlueprintGeneratedClass Frontend_Manage.Frontend_Manage_C
class AFrontend_Manage_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        CameraReturnTimeline_Time_0D4667ED46305C38079A1CBC63370268; // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CameraReturnTimeline__Direction_0D4667ED46305C38079A1CBC63370268; // 0x354(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F01[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CameraReturnTimeline;                              // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraLerpTimeline_Time_7CA36CE24B5A1E4FAE3F248C4EAB6495; // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CameraLerpTimeline__Direction_7CA36CE24B5A1E4FAE3F248C4EAB6495; // 0x364(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F02[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CameraLerpTimeline;                                // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFrontend_Manage_Camera_C*             Camera;                                            // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F03[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CameraStartingTransform;                           // 0x380(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTimerHandle                          CameraReturnTimer;                                 // 0x3B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CAMERA_Sensei_ExecuteUbergraph_Frontend_Manage_RefProperty; // 0x3B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CAMERA_Director_ExecuteUbergraph_Frontend_Manage_RefProperty; // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFrontend_Manage_C* GetDefaultObj();

	void CameraReturnTimeline__FinishedFunc();
	void CameraReturnTimeline__UpdateFunc();
	void CameraLerpTimeline__FinishedFunc();
	void CameraLerpTimeline__UpdateFunc();
	void ManageCameraSelected(bool IsSensei);
	void CameraReturn();
	void LerpCamera(bool IsSensei);
	void CameraDeselected();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Frontend_Manage(int32 EntryPoint, bool K2Node_CustomEvent_IsSensei1, const struct FTransform& CallFunc_GetTransform_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool Temp_bool_Variable, const struct FTransform& CallFunc_GetTransform_ReturnValue1, const struct FTransform& CallFunc_TLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue2, const struct FTransform& CallFunc_GetTransform_ReturnValue3, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, bool K2Node_CustomEvent_IsSensei, class AActor* CallFunc_Array_Get_Item, class AFrontend_Manage_Camera_C* K2Node_DynamicCast_AsFrontend_Manage_Camera, bool K2Node_DynamicCast_bSuccess, const struct FTransform& K2Node_Select_Default, const struct FTransform& CallFunc_TLerp_ReturnValue1, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult1, bool CallFunc_K2_SetActorTransform_ReturnValue1);
};

}



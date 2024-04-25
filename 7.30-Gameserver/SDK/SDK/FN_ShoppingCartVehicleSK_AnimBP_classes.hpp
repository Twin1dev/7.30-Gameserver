#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10A0 (0x1308 - 0x268)
// AnimBlueprintGeneratedClass ShoppingCartVehicleSK_AnimBP.ShoppingCartVehicleSK_AnimBP_C
class UShoppingCartVehicleSK_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_2931[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_8FDF89204E958A5F299D6C81CC05AEC0; // 0x278(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_F89D0F4F47020ADDE62FB5919F7EECC0; // 0x298(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2EB7C951424DBBEA5313F78EBCA54D4E; // 0x2B8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_293BD4664A42001B01053FAFD13526BA; // 0x3C0(0x108)(None)
	uint8                                        Pad_2932[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_02FB628C4E1C416029F3FC8C0A2F6265; // 0x4D0(0x550)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_DE585B894EEDCED6D97829830D1FC06C; // 0xA20(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_D64F465247EA5F954458BF995216BCE2; // 0xB28(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_E3A0212F42252A3B35E387BD4E915843; // 0xC30(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_89E126974E81E2145D3B3991782D45BD; // 0xD38(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_F1D8E9314864DADDBE8742B1B63F1178; // 0xE40(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_C91EA21B47AF3D14096DFFBF9DAB1219; // 0xF48(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_E647C0094FE076130E619996120F88BA; // 0x1050(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1B1D442A4E63EB172E7CF2ADCD71EAC5; // 0x1158(0x108)(None)
	struct FTransform                            TruckTransformF;                                   // 0x1260(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            TruckTransformB;                                   // 0x1290(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        WheelSpinFR;                                       // 0x12C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WheelSpinFL;                                       // 0x12C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WheelSpinBR;                                       // 0x12C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WheelSpinBL;                                       // 0x12CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WheelRotationFR;                                   // 0x12D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WheelRotationFL;                                   // 0x12D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              SeatCoverRotation;                                 // 0x12D8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               SeatCoverForce;                                    // 0x12E4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SeatBasePosition;                                  // 0x12F0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              SeatBaseRotation;                                  // 0x12FC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UShoppingCartVehicleSK_AnimBP_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_293BD4664A42001B01053FAFD13526BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_E3A0212F42252A3B35E387BD4E915843();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_2EB7C951424DBBEA5313F78EBCA54D4E();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_89E126974E81E2145D3B3991782D45BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_F1D8E9314864DADDBE8742B1B63F1178();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_C91EA21B47AF3D14096DFFBF9DAB1219();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_DE585B894EEDCED6D97829830D1FC06C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_D64F465247EA5F954458BF995216BCE2();
	void ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue1, const struct FRotator& CallFunc_MakeRotator_ReturnValue2, const struct FRotator& CallFunc_MakeRotator_ReturnValue3, const struct FRotator& CallFunc_TransformRotation_ReturnValue, const struct FRotator& CallFunc_TransformRotation_ReturnValue1, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue1, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AFortAthenaSKPushVehicle* K2Node_DynamicCast_AsFort_Athena_SKPush_Vehicle, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetPreviousLinearVelocity_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_TransformToBoneSpace_OutPosition, const struct FRotator& CallFunc_TransformToBoneSpace_OutRotation, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue4, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FRotator& CallFunc_MakeRotator_ReturnValue5, const struct FRotator& CallFunc_MakeRotator_ReturnValue6, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FRotator& CallFunc_MakeRotator_ReturnValue7, const struct FRotator& CallFunc_MakeRotator_ReturnValue8, const struct FRotator& CallFunc_MakeRotator_ReturnValue9);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B0 (0x518 - 0x268)
// AnimBlueprintGeneratedClass BP_Soldier_Minigun.BP_Soldier_Minigun_C
class UBP_Soldier_Minigun_C : public UAnimInstance
{
public:
	uint8                                        Pad_63C1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_5BEDD1AF46E640F37CCC9FAA8DF7F6DC; // 0x278(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_15839C374918416DF8289BAE7466DE11; // 0x298(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_CDE861E049ED25F9468E1596307CE0F7; // 0x2E0(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2E6915294401BD03648F4689C8817592; // 0x3E8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_580B6AC241C93B1B43A2A4ACEF5528AD; // 0x408(0x20)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_43BD42EB42C5FE9A4147628D6467C8A7; // 0x428(0x48)(None)
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_23F81C024704537420FC1492A49C0F7B; // 0x470(0xA0)(None)
	float                                        MinigunRotation;                                   // 0x510(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxMinigunRotSpeed;                                // 0x514(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Soldier_Minigun_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Soldier_Minigun_AnimGraphNode_ModifyBone_CDE861E049ED25F9468E1596307CE0F7();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_BP_Soldier_Minigun(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AB_Ranged_Generic_C* K2Node_DynamicCast_AsB_Ranged_Generic, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue);
};

}



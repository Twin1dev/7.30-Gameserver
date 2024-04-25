#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x608 (0x870 - 0x268)
// AnimBlueprintGeneratedClass TNT_Bundle_Skeleton_AnimBlueprint.TNT_Bundle_Skeleton_AnimBlueprint_C
class UTNT_Bundle_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_1483[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_0E80607941CA5A58311D7BA7D9236346; // 0x278(0x20)(None)
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_32C7856A4D26D995F6C882A32CC23B8A; // 0x298(0x48)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_BD65FF0045636DFF1FF3C7B74BBDF795; // 0x2E0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_70244CF849E450BB78DF9998D765E8BA; // 0x300(0x20)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_6FB8161844712FE393C4D1B1C2EB894D; // 0x320(0x550)(None)

	static class UClass* StaticClass();
	static class UTNT_Bundle_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void ExecuteUbergraph_TNT_Bundle_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}



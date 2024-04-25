#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E38 (0x2218 - 0x3E0)
// AnimBlueprintGeneratedClass SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C
class USK_M_Med_Soldier_04_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance_Soldier
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_78EB935A430054ADF5E2E89005D9D000; // 0x3E8(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_D3F10A774DCEBBC7CF6FACA843FAA56D; // 0x408(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_F50D097B4AF8FD409EBDB7A56995EB71; // 0x428(0x20)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_5984D2B3487D5E3495C1419E61FA91AE; // 0x448(0x138)(ContainsInstancedReference)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_AF49CEBA41A86A5239B445ACCA2A35D2; // 0x580(0x310)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_E019B8DC42D4A76813488292D50D4442; // 0x890(0x310)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_53B6F76442E1E5367E83198574A7E337; // 0xBA0(0x310)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_3B49A128489AAE9305B9BEACDF5446C4; // 0xEB0(0x310)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_01F0D350476ED069A3D9B380171159E1; // 0x11C0(0x310)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_49D024DD4CCCDA28D4E6A4B218DA8C95; // 0x14D0(0x310)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_1252AA6E4C48E209E99F5A858FD09EF0; // 0x17E0(0x310)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_5645113E4C1291E8D49232A713F4ACB6; // 0x1AF0(0x310)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_C22827054B8FE020B6B60AB10AA0C297; // 0x1E00(0x310)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_C8CC101648C448C945ABF096C5D87637; // 0x2110(0x108)(None)

	static class UClass* StaticClass();
	static class USK_M_Med_Soldier_04_Skeleton_AnimBP_C* GetDefaultObj();

	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2F8 - 0x268)
// AnimBlueprintGeneratedClass SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C
class USK_MachineGun_Clip_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_3A3D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_3869FE004A7A40326F179A99947D40FD; // 0x278(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_42C4DC6D490B221E6A9F9A92B3FEA82E; // 0x298(0x48)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_844915D14C4D660AA45FB1B5C63743BF; // 0x2E0(0x18)(None)

	static class UClass* StaticClass();
	static class USK_MachineGun_Clip_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void ExecuteUbergraph_SK_MachineGun_Clip_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2F8 - 0x268)
// AnimBlueprintGeneratedClass SK_Assault_Bullpup_01_Skeleton_AnimBlueprint.SK_Assault_Bullpup_01_Skeleton_AnimBlueprint_C
class USK_Assault_Bullpup_01_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_4B82[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_92D36F244BA6D80A4E58C2B6BE684A28; // 0x278(0x20)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_438D38E44093076D3022318F9361AB01; // 0x298(0x18)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_BAF2D87E4290896A23024E8C2A5D11AB; // 0x2B0(0x48)(None)

	static class UClass* StaticClass();
	static class USK_Assault_Bullpup_01_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void ExecuteUbergraph_SK_Assault_Bullpup_01_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}



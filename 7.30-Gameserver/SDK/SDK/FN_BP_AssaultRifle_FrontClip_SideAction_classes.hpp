#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2F8 - 0x268)
// AnimBlueprintGeneratedClass BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C
class UBP_AssaultRifle_FrontClip_SideAction_C : public UAnimInstance
{
public:
	uint8                                        Pad_55D6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_BA9A03134DBA089D49100DBE71EF86F5; // 0x278(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4E27AC5C48BE291AEB818BA0DAEA04EB; // 0x298(0x48)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_B63DE5144515FA5CE71B26B8581D7149; // 0x2E0(0x18)(None)

	static class UClass* StaticClass();
	static class UBP_AssaultRifle_FrontClip_SideAction_C* GetDefaultObj();

	void ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction(int32 EntryPoint);
};

}



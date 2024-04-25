#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2F8 - 0x268)
// AnimBlueprintGeneratedClass BP_Launcher_FrontAction.BP_Launcher_FrontAction_C
class UBP_Launcher_FrontAction_C : public UAnimInstance
{
public:
	uint8                                        Pad_6308[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_497F340240F0CC64E94B6DAF83B9813F; // 0x278(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_90E8D6E744D2D9DA5DE75A8AA3FAEEDC; // 0x298(0x48)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_509BFA8742C047DE9209E1B642963779; // 0x2E0(0x18)(None)

	static class UClass* StaticClass();
	static class UBP_Launcher_FrontAction_C* GetDefaultObj();

	void ExecuteUbergraph_BP_Launcher_FrontAction(int32 EntryPoint);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x358 - 0x268)
// AnimBlueprintGeneratedClass RC_Rocket_BP.RC_Rocket_BP_C
class URC_Rocket_BP_C : public UAnimInstance
{
public:
	uint8                                        Pad_F54[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_08FAFFB0444865FC64D0C0BFEBA059B9; // 0x278(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_956D7C7B47E114589BA5ADB878BAB261; // 0x298(0x78)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_02FBD1D3400F785868D3B9AD8C664EA4; // 0x310(0x48)(None)

	static class UClass* StaticClass();
	static class URC_Rocket_BP_C* GetDefaultObj();

	void ExecuteUbergraph_RC_Rocket_BP(int32 EntryPoint);
};

}



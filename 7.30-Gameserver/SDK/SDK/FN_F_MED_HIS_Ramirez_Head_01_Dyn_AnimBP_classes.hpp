#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1191 (0x1561 - 0x3D0)
// AnimBlueprintGeneratedClass F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C
class UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_966722F040605A529996238D427F43D4; // 0x3D8(0x20)(None)
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_706F137147C60FF00343D1942C15960B; // 0x3F8(0x48)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_18FA112E46ABA0D05274AA95C741D095; // 0x440(0x310)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6B89CDA04ED040E5B4E7049182772646; // 0x750(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2F8266E641D30F638E18F9AD63452CB2; // 0x770(0x20)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_20B56F374DE380A7E12409AE93F8D7F9; // 0x790(0x310)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_8B2A53064649ECCBE2C488A1BFAA1ABC; // 0xAA0(0x310)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_912B846445FBAD349FA22EBCF5DB5505; // 0xDB0(0x310)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_A51E3A934B8D907BC2DA37A7CE8355D3; // 0x10C0(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_E6FD1209434285325183BFB8C8B047D7; // 0x1178(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_90E87AEB4216ABCCD1A7C288696B4405; // 0x11A0(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_890553D14E92A2709A57D6913EA2991E; // 0x1240(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_67B8CD8B4C9B959DED2F5E89ACE6FB1C; // 0x1268(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4881F0674D460CEDDEC22E99FDCBD724; // 0x1370(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1A528F7A47B3D4714707ED96B298D1D0; // 0x1390(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3077CAF64E1F65744AFBB18F63376A75; // 0x13B0(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4DCAC5274BDE487C996AF2AFD9A6ABD9; // 0x1450(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_90029CC74EF407C0DD580FA80F444EA3; // 0x1478(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8B1399FF43838183D1B4EAA73C086674; // 0x1530(0x28)(None)
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x1558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GetPlayerListUsesCustomCharacterParts;             // 0x1560(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C* GetDefaultObj();

	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP(int32 EntryPoint, bool CallFunc_GetPlaylistUsesCustomCharacterParts_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}



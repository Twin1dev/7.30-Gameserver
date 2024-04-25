#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xDA9 (0x1189 - 0x3E0)
// AnimBlueprintGeneratedClass Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C
class UFortnite_Base_Head_Export_Skeleton_AnimBP_C : public UHeadPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_PoseBlendNode               AnimGraphNode_PoseBlendNode_0E491F3A4C933A03AAE42DA602295362; // 0x3E8(0x88)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_C9D648834AA29F5B677902BB5A9DC15C; // 0x470(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_94E41D364E86D3FFC2D042845913D0EE; // 0x490(0x78)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_9AC0772D481A4B85CE045AA17CE0F79E; // 0x508(0x138)(ContainsInstancedReference)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_B0BAEC37412A3BDE897683AA32FAE4E1; // 0x640(0xB8)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_3971854A46E6B529767EA2AB708A8D46; // 0x6F8(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_D687C7FB4A07645ECE24DBB182B71823; // 0x7C0(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_19E6568A48732F90AD2036B56ECA0D46; // 0x878(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_C898D19D46B0E9723DD75AA4710C2707; // 0x8A0(0x28)(None)
	struct FAnimNode_LiveLinkPose                AnimGraphNode_LiveLinkPose_67AFEC6E4E43108E1E699081080B9448; // 0x8C8(0x38)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_E8FB05504628ECA52ADD038CBD818957; // 0x900(0xB8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_91F05C994C7B4758BA35D2B1F94A7663; // 0x9B8(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_53F166F14732C8ECBEC8C0A540192456; // 0xA70(0x28)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_BF175D4149F235AF8059B38CB3517406; // 0xA98(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3D1C5A1541A1147D684D99B42EDBAB8C; // 0xB60(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_59950130431F160E70FA618201DA0ED0; // 0xB88(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4B2D173F4261FBC709962B837E22DAA7; // 0xBD0(0xB8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_C50053764A5016625E742C8401AAD202; // 0xC88(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_540FAC8A423311B343A66CBDD1A68E4E; // 0xD40(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5C0CA1E44DCE78D6CEF568B89CA4B27B; // 0xD68(0x28)(None)
	struct FAnimNode_LiveLinkPose                AnimGraphNode_LiveLinkPose_6913BAFA4C4379EAA3AC1DB317D3D22A; // 0xD90(0x38)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_5D3A84014E3E741C952271A3DBDD1421; // 0xDC8(0xC8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_C5BEAB564689BE7F396B479553755894; // 0xE90(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_F7D256644C446D0E0E7A1FAE450C7158; // 0xF98(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_E876E3114CDEF692F73DBF884F9BD650; // 0xFB8(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_17658B34440A047EB64B94A7175013F1; // 0xFD8(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_04405D3D4F8BCFD02C681D8D229C0D2E; // 0x1090(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_C68E6B0E407D0454643482B1A7183F5B; // 0x10B8(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_EDDAFEAC483866651C7E3FAC553065FD; // 0x1158(0x28)(None)
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x1180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GetPlayerListUsesCustomCharacterParts;             // 0x1188(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UFortnite_Base_Head_Export_Skeleton_AnimBP_C* GetDefaultObj();

	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP(int32 EntryPoint, bool CallFunc_GetPlaylistUsesCustomCharacterParts_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}



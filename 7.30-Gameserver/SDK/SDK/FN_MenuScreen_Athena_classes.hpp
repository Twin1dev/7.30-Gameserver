#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD88 (0x1088 - 0x300)
// AnimBlueprintGeneratedClass MenuScreen_Athena.MenuScreen_Athena_C
class UMenuScreen_Athena_C : public UFrontendAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_BC9F551249E266FA43BC349FC345F1FC; // 0x308(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_CFAAC90A46FD25342F35449196AB843E; // 0x328(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2D7030A140A7B9E5EEB43E92FB2BC715; // 0x348(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_DB45EF5942BB99048E7C2C8416282A57; // 0x368(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_38DE62F34079A9ED5E5B85BBCBAD2C22; // 0x3B0(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_233187314408126920AC14A42BA98CE8; // 0x460(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_D368A9B74AE8F039DA6720801BDD62D5; // 0x4D8(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_653C5A294667E7945D69729979692D20; // 0x550(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_DF33F517431A2AB6E430309E29277E98; // 0x5C8(0x78)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_6443F71D474774C8ECFB2A9F1ACC1D7A; // 0x640(0xA0)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_287AF5964C1BE390191EF89CB53D768D; // 0x6E0(0xA0)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_3BACE47B4A5EF86B449B81BE7045ADA2; // 0x780(0xF8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_AE51F624415A5BC37D7F2FABCBE3FBE1; // 0x878(0x108)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_7340818D479943947A1DCCA16CFCAD54; // 0x980(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_8D2B60D44BBADFD01AC9A6BF39472D0B; // 0x9C8(0xB8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_E3A91A3649B6A1ABC9AC3B97A7AF4134; // 0xA80(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_93498E3D45EEA3CEA9E5EA88BB757C3B; // 0xB38(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_F237E66D4F1546A501C2548E2EB67224; // 0xB60(0x28)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_FCD7422A4E3CE397C446C0A397266FEA; // 0xB88(0xF8)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_4C554C3D4E078CDC75B08E9CEF8DED1C; // 0xC80(0xF0)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_0A8F4F2D443AA18F68E37A8C2921091A; // 0xD70(0xF0)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_E5DB5C2C4C7A35E4ACBEDD9FA10C6F14; // 0xE60(0xF0)(None)
	struct FAnimNode_LiveLinkPose                AnimGraphNode_LiveLinkPose_C178B0A941409C93F9B0D49EFE49B884; // 0xF50(0x38)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_E7A0FD13426A65CF5F44E4AF16FF9CE4; // 0xF88(0xC8)(None)
	UMulticastDelegateProperty_                  MenuScreenDispatcher;                              // 0x1050(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         HasBeenSelected;                                   // 0x1060(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PoseInt;                                           // 0x1064(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OffsetTranslate;                                   // 0x1068(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              OffsetRotate;                                      // 0x1074(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class APlayerPawn_Athena_C*                  PawnOwner;                                         // 0x1080(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMenuScreen_Athena_C* GetDefaultObj();

	void UserFocus();
	void AnimNotify_LeftB();
	void AnimNotify_playFacialAnim();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_MenuScreen_Athena(int32 EntryPoint, float CallFunc_GetCurveValue_ReturnValue, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_DontCrossArms_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_Contains_ReturnValue, bool Temp_bool_IsClosed_Variable);
	void MenuScreenDispatcher__DelegateSignature();
};

}



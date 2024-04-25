#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x8C - 0x80)
// BlueprintGeneratedClass GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C
class UGCNS_GM_OnDisplayChatEmoji_C : public UFortGameplayCueNotify_Simple
{
public:
	struct FVector                               ParticleRelativeOffset;                            // 0x80(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGCNS_GM_OnDisplayChatEmoji_C* GetDefaultObj();

	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortLiveBroadcastController* K2Node_DynamicCast_AsFort_Live_Broadcast_Controller, bool K2Node_DynamicCast_bSuccess, class UAthenaEmojiItemDefinition* K2Node_DynamicCast_AsAthena_Emoji_Item_Definition, bool K2Node_DynamicCast_bSuccess1, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, class UAthenaEmojiItemDefinition* K2Node_DynamicCast_AsAthena_Emoji_Item_Definition1, bool K2Node_DynamicCast_bSuccess2, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x428 - 0x428)
// BlueprintGeneratedClass GCN_NPC_Lightning.GCN_NPC_Lightning_C
class AGCN_NPC_Lightning_C : public AFortGameplayCueNotify_Looping
{
public:

	static class UClass* StaticClass();
	static class AGCN_NPC_Lightning_C* GetDefaultObj();

	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsDedicatedServer_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class AFortPawn_Flinger* K2Node_DynamicCast_AsFort_Pawn_Flinger, bool K2Node_DynamicCast_bSuccess1, bool Temp_bool_Variable);
	void UserConstructionScript();
};

}



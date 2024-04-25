#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x430 - 0x428)
// BlueprintGeneratedClass GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C
class AGCNL_IsUsingRemoteControlPawn_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AGCNL_IsUsingRemoteControlPawn_C* GetDefaultObj();

	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
	void UserConstructionScript();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveDestroyed();
	void ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}



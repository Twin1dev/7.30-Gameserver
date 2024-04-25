#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x810 - 0x790)
// BlueprintGeneratedClass B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C
class AB_BGA_BotTurret_Parent_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              ExplosionBuildUP_Flashes;                          // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Bot_Self_Destruct_Beep;                            // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_Bot_Turret;                                     // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x7B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  BotFired;                                          // 0x7B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AFortAIPawn*                           Target;                                            // 0x7C8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFBotTurretData                       BotData;                                           // 0x7D0(0x15)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Left_Right_Gun;                                    // 0x7E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  BotExplosionWarning;                               // 0x7F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  BotExplode;                                        // 0x800(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class AB_BGA_BotTurret_Parent_C* GetDefaultObj();

	void GetPlayerPawn(class AFortPlayerPawn** AsFort_Player_Pawn, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void OnRep_BotData();
	void LeftOrRightGunFired(int32 A);
	void SetGunSpawnRotFromSocket(class FName SocketName, const struct FVector& InVect);
	void UserConstructionScript();
	void PassBotInfo(float WarmupTime, float BotDuration, float FireRate, float Radius, float RadiusDefault, bool ExplosionUpgrade);
	void SetTarget(class AFortAIPawn* Target);
	void Ready();
	void Destroyed(class AActor* DestroyedActor);
	void BindOnDestroyed();
	void ExecuteUbergraph_B_BGA_BotTurret_Parent(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AFortAIPawn* K2Node_CustomEvent_Target, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float K2Node_CustomEvent_WarmUpTime, float K2Node_CustomEvent_BotDuration, float K2Node_CustomEvent_FireRate, float K2Node_CustomEvent_Radius, float K2Node_CustomEvent_RadiusDefault, bool K2Node_CustomEvent_ExplosionUpgrade, const struct FFBotTurretData& K2Node_MakeStruct_FBotTurretData, bool CallFunc_HasAuthority_ReturnValue1, class AFortPlayerPawn* CallFunc_GetPlayerPawn_AsFort_Player_Pawn, class AFortPlayerPawn* CallFunc_GetPlayerPawn_AsFort_Player_Pawn1, class AActor* K2Node_CustomEvent_DestroyedActor, class AFortPlayerPawn* CallFunc_GetPlayerPawn_AsFort_Player_Pawn2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void BotExplode__DelegateSignature();
	void BotExplosionWarning__DelegateSignature();
	void BotFired__DelegateSignature(int32 Left);
};

}



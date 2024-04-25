#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x1D0 - 0x190)
// BlueprintGeneratedClass BP_AmbientAudioController.BP_AmbientAudioController_C
class UBP_AmbientAudioController_C : public UFortAmbientAudioController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x190(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       AmbientMixA;                                       // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AmbientMixB;                                       // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Loop_Indoors;                                      // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CheckFrequency;                                    // 0x1B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsInsidePrevious;                                 // 0x1B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsInsideCurrent;                                  // 0x1B5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B69[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       AmbientMixIndoor;                                  // 0x1B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetLPFFreq;                                     // 0x1C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentLPFFreq;                                    // 0x1C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InsideLPFFreq;                                     // 0x1C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OutsideLPFFreq;                                    // 0x1CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AmbientAudioController_C* GetDefaultObj();

	void SetTargetLPFFreq(float Target);
	void SetIndoorMixEnabled(bool Enabled, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
	bool Trace(const struct FVector& Start, const struct FVector& Direction, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnCheckIfSurrounded();
	void Evaluate_Inside_State();
	void ReceiveTick(float DeltaSeconds);
	void On_Game_Phase_Change(enum class EAthenaGamePhase GamePhase);
	void On_Game_Phase_Step_Change(enum class EAthenaGamePhaseStep GamePhaseStep);
	void Set_Storm_Amb_Layer_Enabled(bool Enabled);
	void ExecuteUbergraph_BP_AmbientAudioController(int32 EntryPoint, class AActor* CallFunc_GetViewTarget_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Trace_ReturnValue, bool CallFunc_Trace_ReturnValue1, bool CallFunc_Trace_ReturnValue2, bool CallFunc_Trace_ReturnValue3, bool CallFunc_Trace_ReturnValue4, bool CallFunc_IsValid_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, enum class EAthenaGamePhase K2Node_CustomEvent_GamePhase, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool K2Node_SwitchEnum_CmpSuccess, enum class EAthenaGamePhaseStep K2Node_CustomEvent_GamePhaseStep, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool K2Node_SwitchEnum1_CmpSuccess, bool K2Node_CustomEvent_Enabled, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsBROnly_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue1, bool CallFunc_IsValid_ReturnValue3);
};

}



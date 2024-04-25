#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x5F0 - 0x538)
// BlueprintGeneratedClass SafeZoneIndicator.SafeZoneIndicator_C
class ASafeZoneIndicator_C : public AFortSafeZoneIndicator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x538(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Pre_Damage_Audio_Ramp_Intensity_05A077AD4FED08F2426E5CA16BD41D7C; // 0x540(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Pre_Damage_Audio_Ramp__Direction_05A077AD4FED08F2426E5CA16BD41D7C; // 0x544(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Pre_Damage_Audio_Ramp;                             // 0x548(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StormFadeTimeline_StormFadeIn_6FB75EFB416FB419D85F8797DEDD058C; // 0x550(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                StormFadeTimeline__Direction_6FB75EFB416FB419D85F8797DEDD058C; // 0x554(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    StormFadeTimeline;                                 // 0x558(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ShieldBoundaryAudio;                               // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ShieldBoundaryLoopSound;                           // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLocalPlayerOutside;                               // 0x570(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AudioCrossfade;                                    // 0x574(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AudioPitchMod;                                     // 0x578(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            HoldingLoopSound;                                  // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       HoldingAudio;                                      // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAthena_GameState_C*                   GameState;                                         // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoldingStartTime;                                  // 0x598(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            HoldingLoopTickSound;                              // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       HoldingTickAudio;                                  // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              SafeZoneMID;                                       // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AudioLowPassValue;                                 // 0x5B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AudioStormFade;                                    // 0x5BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HugeMovementFade;                                  // 0x5C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NextSafeZoneSweepSpeed;                            // 0x5C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          MegaStormDamageTimer;                              // 0x5C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        MegastormAudioDuration;                            // 0x5D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MegastormAudioIntensity;                           // 0x5D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bMegastormAudioActive;                             // 0x5D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1ED[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnSafeZoneStateChangeDispatcher;                   // 0x5E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ASafeZoneIndicator_C* GetDefaultObj();

	void GetAthenaGameState(class AAthena_GameState_C** AthenaGS, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess);
	void UpdateAudioComponentLocations(bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult);
	void HandleInsideOutsideMix();
	void InitClosestPointAudio(class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2);
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void StormFadeTimeline__FinishedFunc();
	void StormFadeTimeline__UpdateFunc();
	void Pre_Damage_Audio_Ramp__FinishedFunc();
	void Pre_Damage_Audio_Ramp__UpdateFunc();
	void OnSafeZoneStateChange(enum class EFortSafeZoneState NewState, bool bInitial);
	void ReceiveTick(float DeltaSeconds);
	void Apply_Lowpass_to_Audio();
	void ResetSafeZoneScale();
	void ReceiveBeginPlay();
	void Stormy(float NewParam);
	void ReceiveDestroyed();
	void OnBeginStartingStateEffectsEvent();
	void Megastorm_Pre_Damage_Tell();
	void Start_Megastorm_Audio();
	void ExecuteUbergraph_SafeZoneIndicator(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsPlaying_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable1, enum class EFortSafeZoneState K2Node_Event_NewState, bool K2Node_Event_bInitial, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_AreAnyListenersWithinRange_ReturnValue, float K2Node_Select_Default, float CallFunc_FInterpTo_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue, float K2Node_CustomEvent_NewParam, class AAthena_GameState_C* CallFunc_GetAthenaGameState_AthenaGS, class AAthena_GameState_C* CallFunc_GetAthenaGameState_AthenaGS1, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_GetTimeSinceSafeZonesStart_ReturnValue, float CallFunc_GetMovementAudioCurveValues_CrossfadeValue, float CallFunc_GetMovementAudioCurveValues_PitchModValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue2, class AAthena_GameState_C* CallFunc_GetAthenaGameState_AthenaGS2, float CallFunc_Subtract_FloatFloat_ReturnValue3, float CallFunc_GetServerWorldTimeSeconds_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue2, float K2Node_Select1_Default, float CallFunc_GetClockTickingAudioCurveValues_VolumeModValue, float CallFunc_GetClockTickingAudioCurveValues_PitchModValue, float CallFunc_MapRangeUnclamped_ReturnValue);
	void OnSafeZoneStateChangeDispatcher__DelegateSignature(enum class EFortSafeZoneState SafeZoneState);
};

}



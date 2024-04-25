#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SafeZoneIndicator.SafeZoneIndicator_C
// (Actor)

class UClass* ASafeZoneIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SafeZoneIndicator_C");

	return Clss;
}


// SafeZoneIndicator_C SafeZoneIndicator.Default__SafeZoneIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASafeZoneIndicator_C* ASafeZoneIndicator_C::GetDefaultObj()
{
	static class ASafeZoneIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASafeZoneIndicator_C*>(ASafeZoneIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.GetAthenaGameState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AAthena_GameState_C*         AthenaGS                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_GameState_C*         K2Node_DynamicCast_AsAthena_Game_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASafeZoneIndicator_C::GetAthenaGameState(class AAthena_GameState_C** AthenaGS, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "GetAthenaGameState");

	Params::ASafeZoneIndicator_C_GetAthenaGameState_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Game_State = K2Node_DynamicCast_AsAthena_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AthenaGS != nullptr)
		*AthenaGS = Parms.AthenaGS;

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.UpdateAudioComponentLocations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ASafeZoneIndicator_C::UpdateAudioComponentLocations(bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "UpdateAudioComponentLocations");

	Params::ASafeZoneIndicator_C_UpdateAudioComponentLocations_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.HandleInsideOutsideMix
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::HandleInsideOutsideMix()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "HandleInsideOutsideMix");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.InitClosestPointAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASafeZoneIndicator_C::InitClosestPointAudio(class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "InitClosestPointAudio");

	Params::ASafeZoneIndicator_C_InitClosestPointAudio_Params Parms{};

	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue1 = CallFunc_SpawnSoundAttached_ReturnValue1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue2 = CallFunc_SpawnSoundAttached_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASafeZoneIndicator_C::UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "UserConstructionScript");

	Params::ASafeZoneIndicator_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.StormFadeTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::StormFadeTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "StormFadeTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.StormFadeTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::StormFadeTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "StormFadeTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Pre Damage Audio Ramp__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::Pre_Damage_Audio_Ramp__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "Pre Damage Audio Ramp__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Pre Damage Audio Ramp__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::Pre_Damage_Audio_Ramp__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "Pre Damage Audio Ramp__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortSafeZoneState      NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bInitial                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASafeZoneIndicator_C::OnSafeZoneStateChange(enum class EFortSafeZoneState NewState, bool bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "OnSafeZoneStateChange");

	Params::ASafeZoneIndicator_C_OnSafeZoneStateChange_Params Parms{};

	Parms.NewState = NewState;
	Parms.bInitial = bInitial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASafeZoneIndicator_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "ReceiveTick");

	Params::ASafeZoneIndicator_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Apply Lowpass to Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::Apply_Lowpass_to_Audio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "Apply Lowpass to Audio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ResetSafeZoneScale
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::ResetSafeZoneScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "ResetSafeZoneScale");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.stormy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASafeZoneIndicator_C::Stormy(float NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "stormy");

	Params::ASafeZoneIndicator_C_Stormy_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.OnBeginStartingStateEffectsEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::OnBeginStartingStateEffectsEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "OnBeginStartingStateEffectsEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Megastorm Pre Damage Tell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::Megastorm_Pre_Damage_Tell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "Megastorm Pre Damage Tell");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Start Megastorm Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::Start_Megastorm_Audio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "Start Megastorm Audio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ExecuteUbergraph_SafeZoneIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortSafeZoneState      K2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInitial                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AreAnyListenersWithinRange_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimelineLength_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_GameState_C*         CallFunc_GetAthenaGameState_AthenaGS                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_GameState_C*         CallFunc_GetAthenaGameState_AthenaGS1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetServerWorldTimeSeconds_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetServerWorldTimeSeconds_ReturnValue1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSinceSafeZonesStart_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMovementAudioCurveValues_CrossfadeValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMovementAudioCurveValues_PitchModValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_GameState_C*         CallFunc_GetAthenaGameState_AthenaGS2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetServerWorldTimeSeconds_ReturnValue2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetClockTickingAudioCurveValues_VolumeModValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetClockTickingAudioCurveValues_PitchModValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASafeZoneIndicator_C::ExecuteUbergraph_SafeZoneIndicator(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsPlaying_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable1, enum class EFortSafeZoneState K2Node_Event_NewState, bool K2Node_Event_bInitial, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_AreAnyListenersWithinRange_ReturnValue, float K2Node_Select_Default, float CallFunc_FInterpTo_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue, float K2Node_CustomEvent_NewParam, class AAthena_GameState_C* CallFunc_GetAthenaGameState_AthenaGS, class AAthena_GameState_C* CallFunc_GetAthenaGameState_AthenaGS1, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_GetTimeSinceSafeZonesStart_ReturnValue, float CallFunc_GetMovementAudioCurveValues_CrossfadeValue, float CallFunc_GetMovementAudioCurveValues_PitchModValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue2, class AAthena_GameState_C* CallFunc_GetAthenaGameState_AthenaGS2, float CallFunc_Subtract_FloatFloat_ReturnValue3, float CallFunc_GetServerWorldTimeSeconds_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue2, float K2Node_Select1_Default, float CallFunc_GetClockTickingAudioCurveValues_VolumeModValue, float CallFunc_GetClockTickingAudioCurveValues_PitchModValue, float CallFunc_MapRangeUnclamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "ExecuteUbergraph_SafeZoneIndicator");

	Params::ASafeZoneIndicator_C_ExecuteUbergraph_SafeZoneIndicator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsPlaying_ReturnValue1 = CallFunc_IsPlaying_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.K2Node_Event_bInitial = K2Node_Event_bInitial;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_AreAnyListenersWithinRange_ReturnValue = CallFunc_AreAnyListenersWithinRange_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_GetTimelineLength_ReturnValue = CallFunc_GetTimelineLength_ReturnValue;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.CallFunc_GetAthenaGameState_AthenaGS = CallFunc_GetAthenaGameState_AthenaGS;
	Parms.CallFunc_GetAthenaGameState_AthenaGS1 = CallFunc_GetAthenaGameState_AthenaGS1;
	Parms.CallFunc_GetServerWorldTimeSeconds_ReturnValue = CallFunc_GetServerWorldTimeSeconds_ReturnValue;
	Parms.CallFunc_GetServerWorldTimeSeconds_ReturnValue1 = CallFunc_GetServerWorldTimeSeconds_ReturnValue1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_GetTimeSinceSafeZonesStart_ReturnValue = CallFunc_GetTimeSinceSafeZonesStart_ReturnValue;
	Parms.CallFunc_GetMovementAudioCurveValues_CrossfadeValue = CallFunc_GetMovementAudioCurveValues_CrossfadeValue;
	Parms.CallFunc_GetMovementAudioCurveValues_PitchModValue = CallFunc_GetMovementAudioCurveValues_PitchModValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1 = CallFunc_Subtract_FloatFloat_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.CallFunc_GetAthenaGameState_AthenaGS2 = CallFunc_GetAthenaGameState_AthenaGS2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue3 = CallFunc_Subtract_FloatFloat_ReturnValue3;
	Parms.CallFunc_GetServerWorldTimeSeconds_ReturnValue2 = CallFunc_GetServerWorldTimeSeconds_ReturnValue2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1 = CallFunc_Greater_FloatFloat_ReturnValue1;
	Parms.CallFunc_MapRangeClamped_ReturnValue1 = CallFunc_MapRangeClamped_ReturnValue1;
	Parms.CallFunc_MapRangeClamped_ReturnValue2 = CallFunc_MapRangeClamped_ReturnValue2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_GetClockTickingAudioCurveValues_VolumeModValue = CallFunc_GetClockTickingAudioCurveValues_VolumeModValue;
	Parms.CallFunc_GetClockTickingAudioCurveValues_PitchModValue = CallFunc_GetClockTickingAudioCurveValues_PitchModValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChangeDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortSafeZoneState      SafeZoneState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASafeZoneIndicator_C::OnSafeZoneStateChangeDispatcher__DelegateSignature(enum class EFortSafeZoneState SafeZoneState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneIndicator_C", "OnSafeZoneStateChangeDispatcher__DelegateSignature");

	Params::ASafeZoneIndicator_C_OnSafeZoneStateChangeDispatcher__DelegateSignature_Params Parms{};

	Parms.SafeZoneState = SafeZoneState;

	UObject::ProcessEvent(Func, &Parms);

}

}



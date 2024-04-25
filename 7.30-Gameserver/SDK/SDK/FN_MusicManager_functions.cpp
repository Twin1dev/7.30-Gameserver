#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MusicManager.MusicManager_C
// (Actor)

class UClass* AMusicManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MusicManager_C");

	return Clss;
}


// MusicManager_C MusicManager.Default__MusicManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMusicManager_C* AMusicManager_C::GetDefaultObj()
{
	static class AMusicManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMusicManager_C*>(AMusicManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MusicManager.MusicManager_C.ResetMusicBools
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::ResetMusicBools()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "ResetMusicBools");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MusicManager.MusicManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerFrontEnd*K2Node_DynamicCast_AsFort_Player_Controller_Front_End            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerFrontEnd*K2Node_DynamicCast_AsFort_Player_Controller_Front_End1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMusicManager_C::UserConstructionScript(class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End1, bool K2Node_DynamicCast_bSuccess1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "UserConstructionScript");

	Params::AMusicManager_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Front_End = K2Node_DynamicCast_AsFort_Player_Controller_Front_End;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Front_End1 = K2Node_DynamicCast_AsFort_Player_Controller_Front_End1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Gameplay Music Fader__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AMusicManager_C::Gameplay_Music_Fader__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "Gameplay Music Fader__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MusicManager.MusicManager_C.Gameplay Music Fader__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AMusicManager_C::Gameplay_Music_Fader__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "Gameplay Music Fader__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MusicManager.MusicManager_C.Stop Boss Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::Stop_Boss_Music()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "Stop Boss Music");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MusicManager.MusicManager_C.Play Boss Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Play_Boss_Music(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "Play Boss Music");

	Params::AMusicManager_C_Play_Boss_Music_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Start Boss DBNO Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Start_Boss_DBNO_Music(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "Start Boss DBNO Music");

	Params::AMusicManager_C_Start_Boss_DBNO_Music_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Stop Boss DBNO Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::Stop_Boss_DBNO_Music()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "Stop Boss DBNO Music");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MusicManager.MusicManager_C.Player Fighting Boss DBNO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::Player_Fighting_Boss_DBNO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "Player Fighting Boss DBNO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MusicManager.MusicManager_C.Start Weak Point Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Start_Weak_Point_Music(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "Start Weak Point Music");

	Params::AMusicManager_C_Start_Weak_Point_Music_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Stop Weakpoint Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::Stop_Weakpoint_Music()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "Stop Weakpoint Music");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MusicManager.MusicManager_C.OnDayPhaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortDayPhase           CurrentDayPhase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           PreviousDayPhase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAtCreation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMusicManager_C::OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "OnDayPhaseChanged");

	Params::AMusicManager_C_OnDayPhaseChanged_Params Parms{};

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.OnUpdateMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::OnUpdateMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "OnUpdateMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MusicManager.MusicManager_C.PlayAmbientMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::PlayAmbientMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "PlayAmbientMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MusicManager.MusicManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMusicManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MusicManager.MusicManager_C.On Music Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::On_Music_Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "On Music Tick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MusicManager.MusicManager_C.PlayStinger
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMusicAsset*             NewMusicAsset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::PlayStinger(class UFortMusicAsset* NewMusicAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "PlayStinger");

	Params::AMusicManager_C_PlayStinger_Params Parms{};

	Parms.NewMusicAsset = NewMusicAsset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Music Fade In
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Music_Fade_In(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "Music Fade In");

	Params::AMusicManager_C_Music_Fade_In_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Music Fade Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Music_Fade_Out(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "Music Fade Out");

	Params::AMusicManager_C_Music_Fade_Out_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.On Stinger Completed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMusicVoice*             Voice                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::On_Stinger_Completed(class UFortMusicVoice* Voice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "On Stinger Completed");

	Params::AMusicManager_C_On_Stinger_Completed_Params Parms{};

	Parms.Voice = Voice;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Gather Combat Graph Tresholds
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::Gather_Combat_Graph_Tresholds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "Gather Combat Graph Tresholds");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MusicManager.MusicManager_C.OnMusicBankChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortMusicManagerBank*       NewBank                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::OnMusicBankChanged(class UFortMusicManagerBank* NewBank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "OnMusicBankChanged");

	Params::AMusicManager_C_OnMusicBankChanged_Params Parms{};

	Parms.NewBank = NewBank;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.OnPlayerDowned
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport      DeathReport                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AMusicManager_C::OnPlayerDowned(struct FFortPlayerDeathReport& DeathReport)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "OnPlayerDowned");

	Params::AMusicManager_C_OnPlayerDowned_Params Parms{};

	Parms.DeathReport = DeathReport;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Play Countdown Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Counter                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Play_Countdown_Music(float Counter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "Play Countdown Music");

	Params::AMusicManager_C_Play_Countdown_Music_Params Parms{};

	Parms.Counter = Counter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Play Mission Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Play_Mission_Music(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "Play Mission Music");

	Params::AMusicManager_C_Play_Mission_Music_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Stop Mission Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             Mission_Music                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Stop_Mission_Music(class UAudioComponent* Mission_Music)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "Stop Mission Music");

	Params::AMusicManager_C_Stop_Mission_Music_Params Parms{};

	Parms.Mission_Music = Mission_Music;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.ExecuteUbergraph_MusicManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicManagerBank*       CallFunc_GetMusicBank_ReturnValue                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicManagerBank*       CallFunc_GetMusicBank_ReturnValue1                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicManagerBank*       CallFunc_GetMusicBank_ReturnValue2                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue7                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_CustomEvent_Sound3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_Sound2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_Sound1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicManagerBank*       CallFunc_GetMusicBank_ReturnValue3                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicAsset*             CallFunc_GetAssetFromDayPhase_ReturnValue                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             CallFunc_ChangePrimaryMusic_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           K2Node_Event_CurrentDayPhase                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           K2Node_Event_PreviousDayPhase                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bAtCreation                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearActiveEncounters_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicManagerBank*       CallFunc_GetMusicBank_ReturnValue4                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicAsset*             CallFunc_GetAssetFromDayPhase_ReturnValue1                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             CallFunc_ChangePrimaryMusic_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicAsset*             K2Node_Event_NewMusicAsset                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             CallFunc_PlayMusicVoice_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Time1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Time                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             K2Node_CustomEvent_Voice                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicAsset*             CallFunc_GetAssetFromCombatIntensity_ReturnValue                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicAsset*             CallFunc_GetAssetFromCombatIntensity_ReturnValue1                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             CallFunc_ChangePrimaryMusic_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             CallFunc_ChangePrimaryMusic_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicManagerBank*       CallFunc_GetMusicBank_ReturnValue5                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue7                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue8                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue9                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue10                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicManagerBank*       K2Node_Event_NewBank                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicAsset*             CallFunc_GetAssetFromCombatIntensity_ReturnValue2                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             CallFunc_ChangePrimaryMusic_ReturnValue4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPlayerDeathReport      K2Node_Event_DeathReport                                         (ConstParm)
// class UFortMusicVoice*             CallFunc_ChangePrimaryMusic_ReturnValue5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Counter                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicAsset*             CallFunc_GetAssetFromCombatIntensity_ReturnValue3                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             CallFunc_ChangePrimaryMusic_ReturnValue6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue11                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetPlayerPawn_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_Sound                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             K2Node_CustomEvent_Mission_Music                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEventHeatPercent_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue12                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEventHeatPercent_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue13                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue14                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEventHeatPercent_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue15                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue16                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEventHeatPercent_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue17                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue10                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue11                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue13                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue6                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue7                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::ExecuteUbergraph_MusicManager(int32 EntryPoint, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, float Temp_float_Variable, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue1, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue3, float Temp_float_Variable1, float CallFunc_GetGameTimeInSeconds_ReturnValue4, float CallFunc_Subtract_FloatFloat_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue2, float CallFunc_GetGameTimeInSeconds_ReturnValue5, float CallFunc_GetGameTimeInSeconds_ReturnValue6, bool Temp_bool_Variable, float CallFunc_GetGameTimeInSeconds_ReturnValue7, float CallFunc_Subtract_FloatFloat_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue4, bool CallFunc_Greater_FloatFloat_ReturnValue4, bool CallFunc_NotEqual_IntInt_ReturnValue1, float Temp_float_Variable2, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_EqualEqual_NameName_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue3, float Temp_float_Variable3, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue4, bool CallFunc_EqualEqual_NameName_ReturnValue5, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool Temp_bool_Variable1, float CallFunc_GetWorldDeltaSeconds_ReturnValue1, float CallFunc_GetWorldDeltaSeconds_ReturnValue2, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue2, float Temp_float_Variable4, bool Temp_bool_IsClosed_Variable, float CallFunc_GetWorldDeltaSeconds_ReturnValue3, float Temp_float_Variable5, bool CallFunc_EqualEqual_NameName_ReturnValue6, bool CallFunc_EqualEqual_NameName_ReturnValue7, bool Temp_bool_Variable2, bool Temp_bool_IsClosed_Variable1, bool Temp_bool_Has_Been_Initd_Variable1, bool CallFunc_NotEqual_IntInt_ReturnValue2, bool Temp_bool_IsClosed_Variable2, bool Temp_bool_Has_Been_Initd_Variable2, class USoundBase* K2Node_CustomEvent_Sound3, class USoundBase* K2Node_CustomEvent_Sound2, float Temp_float_Variable6, float CallFunc_GetGameTimeInSeconds_ReturnValue8, class USoundBase* K2Node_CustomEvent_Sound1, float CallFunc_Subtract_FloatFloat_ReturnValue5, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue5, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue3, class UFortMusicAsset* CallFunc_GetAssetFromDayPhase_ReturnValue, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable3, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue9, enum class EFortDayPhase K2Node_Event_CurrentDayPhase, enum class EFortDayPhase K2Node_Event_PreviousDayPhase, bool K2Node_Event_bAtCreation, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable3, float Temp_float_Variable7, bool CallFunc_IsNearActiveEncounters_ReturnValue, bool Temp_bool_Variable3, bool CallFunc_Not_PreBool_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue10, float CallFunc_Subtract_FloatFloat_ReturnValue6, bool CallFunc_Greater_FloatFloat_ReturnValue6, bool CallFunc_NotEqual_IntInt_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_IsValid_ReturnValue1, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue4, class UFortMusicAsset* CallFunc_GetAssetFromDayPhase_ReturnValue1, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue1, class UFortMusicAsset* K2Node_Event_NewMusicAsset, class UFortMusicVoice* CallFunc_PlayMusicVoice_ReturnValue, float K2Node_CustomEvent_Time1, float K2Node_CustomEvent_Time, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, class UFortMusicVoice* K2Node_CustomEvent_Voice, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue1, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue1, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue1, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue2, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue3, bool Temp_bool_Variable5, bool CallFunc_Not_PreBool_ReturnValue3, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue5, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue7, bool CallFunc_Greater_FloatFloat_ReturnValue8, bool CallFunc_Less_FloatFloat_ReturnValue2, bool CallFunc_Less_FloatFloat_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue9, bool CallFunc_Greater_FloatFloat_ReturnValue10, class UFortMusicManagerBank* K2Node_Event_NewBank, uint8 CallFunc_MakeLiteralByte_ReturnValue2, int32 CallFunc_Conv_ByteToInt_ReturnValue2, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue2, int32 CallFunc_MakeLiteralInt_ReturnValue2, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue4, bool CallFunc_Greater_IntInt_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, const struct FFortPlayerDeathReport& K2Node_Event_DeathReport, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue5, uint8 CallFunc_MakeLiteralByte_ReturnValue3, float K2Node_CustomEvent_Counter, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue3, int32 CallFunc_MakeLiteralInt_ReturnValue3, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue3, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue6, bool CallFunc_Greater_IntInt_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue4, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue11, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue7, bool CallFunc_Greater_FloatFloat_ReturnValue11, bool CallFunc_IsValid_ReturnValue3, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue1, class USoundBase* K2Node_CustomEvent_Sound, bool CallFunc_IsValid_ReturnValue4, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue2, bool CallFunc_IsDead_ReturnValue, class UAudioComponent* K2Node_CustomEvent_Mission_Music, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2, float CallFunc_GetEventHeatPercent_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue12, float CallFunc_GetEventHeatPercent_ReturnValue1, float CallFunc_GetEventHeatPercent_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue13, bool CallFunc_Greater_FloatFloat_ReturnValue14, float CallFunc_GetEventHeatPercent_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue15, bool CallFunc_BooleanOR_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue5, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_GetEventHeatPercent_ReturnValue4, bool CallFunc_Less_FloatFloat_ReturnValue4, bool CallFunc_Greater_FloatFloat_ReturnValue16, float CallFunc_GetEventHeatPercent_ReturnValue5, float K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue17, float CallFunc_FInterpTo_ReturnValue, bool CallFunc_BooleanOR_ReturnValue6, float CallFunc_Conv_BoolToFloat_ReturnValue1, float CallFunc_GetEventHeatPercent_ReturnValue6, float CallFunc_GetEventHeatPercent_ReturnValue7, float CallFunc_GetEventHeatPercent_ReturnValue8, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetEventHeatPercent_ReturnValue9, bool CallFunc_Less_FloatFloat_ReturnValue5, bool Temp_bool_Variable6, bool CallFunc_Not_PreBool_ReturnValue4, float K2Node_Select1_Default, float CallFunc_FInterpTo_ReturnValue1, float CallFunc_GetEventHeatPercent_ReturnValue10, float CallFunc_GetEventHeatPercent_ReturnValue11, float CallFunc_GetEventHeatPercent_ReturnValue12, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_GetEventHeatPercent_ReturnValue13, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue4, bool CallFunc_Less_FloatFloat_ReturnValue6, bool CallFunc_Less_FloatFloat_ReturnValue7, float K2Node_Select2_Default, float K2Node_Select3_Default, float CallFunc_FInterpTo_ReturnValue2, float CallFunc_FInterpTo_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "ExecuteUbergraph_MusicManager");

	Params::AMusicManager_C_ExecuteUbergraph_MusicManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue1 = CallFunc_GetGameTimeInSeconds_ReturnValue1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetMusicBank_ReturnValue = CallFunc_GetMusicBank_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue2 = CallFunc_GetGameTimeInSeconds_ReturnValue2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1 = CallFunc_Subtract_FloatFloat_ReturnValue1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1 = CallFunc_Greater_FloatFloat_ReturnValue1;
	Parms.CallFunc_GetMusicBank_ReturnValue1 = CallFunc_GetMusicBank_ReturnValue1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue3 = CallFunc_GetGameTimeInSeconds_ReturnValue3;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue4 = CallFunc_GetGameTimeInSeconds_ReturnValue4;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue2 = CallFunc_Greater_FloatFloat_ReturnValue2;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue5 = CallFunc_GetGameTimeInSeconds_ReturnValue5;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue6 = CallFunc_GetGameTimeInSeconds_ReturnValue6;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue7 = CallFunc_GetGameTimeInSeconds_ReturnValue7;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue3 = CallFunc_Subtract_FloatFloat_ReturnValue3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue3 = CallFunc_Greater_FloatFloat_ReturnValue3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue4 = CallFunc_Subtract_FloatFloat_ReturnValue4;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue4 = CallFunc_Greater_FloatFloat_ReturnValue4;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue1 = CallFunc_NotEqual_IntInt_ReturnValue1;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue1 = CallFunc_EqualEqual_NameName_ReturnValue1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue2 = CallFunc_EqualEqual_NameName_ReturnValue2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue3 = CallFunc_EqualEqual_NameName_ReturnValue3;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue4 = CallFunc_EqualEqual_NameName_ReturnValue4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue5 = CallFunc_EqualEqual_NameName_ReturnValue5;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue1 = CallFunc_GetWorldDeltaSeconds_ReturnValue1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue2 = CallFunc_GetWorldDeltaSeconds_ReturnValue2;
	Parms.CallFunc_GetMusicBank_ReturnValue2 = CallFunc_GetMusicBank_ReturnValue2;
	Parms.Temp_float_Variable4 = Temp_float_Variable4;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue3 = CallFunc_GetWorldDeltaSeconds_ReturnValue3;
	Parms.Temp_float_Variable5 = Temp_float_Variable5;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue6 = CallFunc_EqualEqual_NameName_ReturnValue6;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue7 = CallFunc_EqualEqual_NameName_ReturnValue7;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_IsClosed_Variable1 = Temp_bool_IsClosed_Variable1;
	Parms.Temp_bool_Has_Been_Initd_Variable1 = Temp_bool_Has_Been_Initd_Variable1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue2 = CallFunc_NotEqual_IntInt_ReturnValue2;
	Parms.Temp_bool_IsClosed_Variable2 = Temp_bool_IsClosed_Variable2;
	Parms.Temp_bool_Has_Been_Initd_Variable2 = Temp_bool_Has_Been_Initd_Variable2;
	Parms.K2Node_CustomEvent_Sound3 = K2Node_CustomEvent_Sound3;
	Parms.K2Node_CustomEvent_Sound2 = K2Node_CustomEvent_Sound2;
	Parms.Temp_float_Variable6 = Temp_float_Variable6;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue8 = CallFunc_GetGameTimeInSeconds_ReturnValue8;
	Parms.K2Node_CustomEvent_Sound1 = K2Node_CustomEvent_Sound1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue5 = CallFunc_Subtract_FloatFloat_ReturnValue5;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue5 = CallFunc_Greater_FloatFloat_ReturnValue5;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetMusicBank_ReturnValue3 = CallFunc_GetMusicBank_ReturnValue3;
	Parms.CallFunc_GetAssetFromDayPhase_ReturnValue = CallFunc_GetAssetFromDayPhase_ReturnValue;
	Parms.CallFunc_ChangePrimaryMusic_ReturnValue = CallFunc_ChangePrimaryMusic_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable3 = Temp_bool_Has_Been_Initd_Variable3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue9 = CallFunc_GetGameTimeInSeconds_ReturnValue9;
	Parms.K2Node_Event_CurrentDayPhase = K2Node_Event_CurrentDayPhase;
	Parms.K2Node_Event_PreviousDayPhase = K2Node_Event_PreviousDayPhase;
	Parms.K2Node_Event_bAtCreation = K2Node_Event_bAtCreation;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable3 = Temp_bool_IsClosed_Variable3;
	Parms.Temp_float_Variable7 = Temp_float_Variable7;
	Parms.CallFunc_IsNearActiveEncounters_ReturnValue = CallFunc_IsNearActiveEncounters_ReturnValue;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue10 = CallFunc_GetGameTimeInSeconds_ReturnValue10;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue6 = CallFunc_Subtract_FloatFloat_ReturnValue6;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue6 = CallFunc_Greater_FloatFloat_ReturnValue6;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue3 = CallFunc_NotEqual_IntInt_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetMusicBank_ReturnValue4 = CallFunc_GetMusicBank_ReturnValue4;
	Parms.CallFunc_GetAssetFromDayPhase_ReturnValue1 = CallFunc_GetAssetFromDayPhase_ReturnValue1;
	Parms.CallFunc_ChangePrimaryMusic_ReturnValue1 = CallFunc_ChangePrimaryMusic_ReturnValue1;
	Parms.K2Node_Event_NewMusicAsset = K2Node_Event_NewMusicAsset;
	Parms.CallFunc_PlayMusicVoice_ReturnValue = CallFunc_PlayMusicVoice_ReturnValue;
	Parms.K2Node_CustomEvent_Time1 = K2Node_CustomEvent_Time1;
	Parms.K2Node_CustomEvent_Time = K2Node_CustomEvent_Time;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1 = CallFunc_Divide_FloatFloat_ReturnValue1;
	Parms.K2Node_CustomEvent_Voice = K2Node_CustomEvent_Voice;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue1 = CallFunc_MakeLiteralByte_ReturnValue1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue1 = CallFunc_Conv_ByteToInt_ReturnValue1;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue1 = CallFunc_MakeLiteralInt_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_GetAssetFromCombatIntensity_ReturnValue = CallFunc_GetAssetFromCombatIntensity_ReturnValue;
	Parms.CallFunc_GetAssetFromCombatIntensity_ReturnValue1 = CallFunc_GetAssetFromCombatIntensity_ReturnValue1;
	Parms.CallFunc_ChangePrimaryMusic_ReturnValue2 = CallFunc_ChangePrimaryMusic_ReturnValue2;
	Parms.CallFunc_ChangePrimaryMusic_ReturnValue3 = CallFunc_ChangePrimaryMusic_ReturnValue3;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.CallFunc_Not_PreBool_ReturnValue3 = CallFunc_Not_PreBool_ReturnValue3;
	Parms.CallFunc_GetMusicBank_ReturnValue5 = CallFunc_GetMusicBank_ReturnValue5;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue1 = CallFunc_Less_FloatFloat_ReturnValue1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue7 = CallFunc_Greater_FloatFloat_ReturnValue7;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue8 = CallFunc_Greater_FloatFloat_ReturnValue8;
	Parms.CallFunc_Less_FloatFloat_ReturnValue2 = CallFunc_Less_FloatFloat_ReturnValue2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue3 = CallFunc_Less_FloatFloat_ReturnValue3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue9 = CallFunc_Greater_FloatFloat_ReturnValue9;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue10 = CallFunc_Greater_FloatFloat_ReturnValue10;
	Parms.K2Node_Event_NewBank = K2Node_Event_NewBank;
	Parms.CallFunc_MakeLiteralByte_ReturnValue2 = CallFunc_MakeLiteralByte_ReturnValue2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue2 = CallFunc_Conv_ByteToInt_ReturnValue2;
	Parms.CallFunc_GetAssetFromCombatIntensity_ReturnValue2 = CallFunc_GetAssetFromCombatIntensity_ReturnValue2;
	Parms.CallFunc_MakeLiteralInt_ReturnValue2 = CallFunc_MakeLiteralInt_ReturnValue2;
	Parms.CallFunc_ChangePrimaryMusic_ReturnValue4 = CallFunc_ChangePrimaryMusic_ReturnValue4;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.K2Node_Event_DeathReport = K2Node_Event_DeathReport;
	Parms.CallFunc_ChangePrimaryMusic_ReturnValue5 = CallFunc_ChangePrimaryMusic_ReturnValue5;
	Parms.CallFunc_MakeLiteralByte_ReturnValue3 = CallFunc_MakeLiteralByte_ReturnValue3;
	Parms.K2Node_CustomEvent_Counter = K2Node_CustomEvent_Counter;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue3 = CallFunc_Conv_ByteToInt_ReturnValue3;
	Parms.CallFunc_MakeLiteralInt_ReturnValue3 = CallFunc_MakeLiteralInt_ReturnValue3;
	Parms.CallFunc_GetAssetFromCombatIntensity_ReturnValue3 = CallFunc_GetAssetFromCombatIntensity_ReturnValue3;
	Parms.CallFunc_ChangePrimaryMusic_ReturnValue6 = CallFunc_ChangePrimaryMusic_ReturnValue6;
	Parms.CallFunc_Greater_IntInt_ReturnValue3 = CallFunc_Greater_IntInt_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue4;
	Parms.CallFunc_SpawnSound2D_ReturnValue1 = CallFunc_SpawnSound2D_ReturnValue1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue11 = CallFunc_GetGameTimeInSeconds_ReturnValue11;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue7 = CallFunc_Subtract_FloatFloat_ReturnValue7;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue11 = CallFunc_Greater_FloatFloat_ReturnValue11;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetPlayerPawn_ReturnValue1 = CallFunc_GetPlayerPawn_ReturnValue1;
	Parms.K2Node_CustomEvent_Sound = K2Node_CustomEvent_Sound;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_SpawnSound2D_ReturnValue2 = CallFunc_SpawnSound2D_ReturnValue2;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.K2Node_CustomEvent_Mission_Music = K2Node_CustomEvent_Mission_Music;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue = CallFunc_GetEventHeatPercent_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue12 = CallFunc_Greater_FloatFloat_ReturnValue12;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue1 = CallFunc_GetEventHeatPercent_ReturnValue1;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue2 = CallFunc_GetEventHeatPercent_ReturnValue2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue13 = CallFunc_Greater_FloatFloat_ReturnValue13;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue14 = CallFunc_Greater_FloatFloat_ReturnValue14;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue3 = CallFunc_GetEventHeatPercent_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue15 = CallFunc_Greater_FloatFloat_ReturnValue15;
	Parms.CallFunc_BooleanOR_ReturnValue4 = CallFunc_BooleanOR_ReturnValue4;
	Parms.CallFunc_BooleanOR_ReturnValue5 = CallFunc_BooleanOR_ReturnValue5;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue4 = CallFunc_GetEventHeatPercent_ReturnValue4;
	Parms.CallFunc_Less_FloatFloat_ReturnValue4 = CallFunc_Less_FloatFloat_ReturnValue4;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue16 = CallFunc_Greater_FloatFloat_ReturnValue16;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue5 = CallFunc_GetEventHeatPercent_ReturnValue5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue17 = CallFunc_Greater_FloatFloat_ReturnValue17;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue6 = CallFunc_BooleanOR_ReturnValue6;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue1 = CallFunc_Conv_BoolToFloat_ReturnValue1;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue6 = CallFunc_GetEventHeatPercent_ReturnValue6;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue7 = CallFunc_GetEventHeatPercent_ReturnValue7;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue8 = CallFunc_GetEventHeatPercent_ReturnValue8;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue9 = CallFunc_GetEventHeatPercent_ReturnValue9;
	Parms.CallFunc_Less_FloatFloat_ReturnValue5 = CallFunc_Less_FloatFloat_ReturnValue5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.CallFunc_Not_PreBool_ReturnValue4 = CallFunc_Not_PreBool_ReturnValue4;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_FInterpTo_ReturnValue1 = CallFunc_FInterpTo_ReturnValue1;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue10 = CallFunc_GetEventHeatPercent_ReturnValue10;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue11 = CallFunc_GetEventHeatPercent_ReturnValue11;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue12 = CallFunc_GetEventHeatPercent_ReturnValue12;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue13 = CallFunc_GetEventHeatPercent_ReturnValue13;
	Parms.CallFunc_Add_FloatFloat_ReturnValue3 = CallFunc_Add_FloatFloat_ReturnValue3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue4 = CallFunc_Add_FloatFloat_ReturnValue4;
	Parms.CallFunc_Less_FloatFloat_ReturnValue6 = CallFunc_Less_FloatFloat_ReturnValue6;
	Parms.CallFunc_Less_FloatFloat_ReturnValue7 = CallFunc_Less_FloatFloat_ReturnValue7;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_FInterpTo_ReturnValue2 = CallFunc_FInterpTo_ReturnValue2;
	Parms.CallFunc_FInterpTo_ReturnValue3 = CallFunc_FInterpTo_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}

}



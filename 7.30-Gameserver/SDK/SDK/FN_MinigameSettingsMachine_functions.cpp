#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinigameSettingsMachine.MinigameSettingsMachine_C
// (Actor)

class UClass* AMinigameSettingsMachine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinigameSettingsMachine_C");

	return Clss;
}


// MinigameSettingsMachine_C MinigameSettingsMachine.Default__MinigameSettingsMachine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMinigameSettingsMachine_C* AMinigameSettingsMachine_C::GetDefaultObj()
{
	static class AMinigameSettingsMachine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMinigameSettingsMachine_C*>(AMinigameSettingsMachine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateEndConditions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortMinigameStatQuery>EndConditions                                                    (Edit, BlueprintVisible, ZeroConstructor)
// class AFortMinigame*               Minigame                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortMinigameStatQuery      K2Node_MakeStruct_FortMinigameStatQuery                          (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::UpdateEndConditions(const TArray<struct FFortMinigameStatQuery>& EndConditions, class AFortMinigame* Minigame, bool CallFunc_HasAuthority_ReturnValue, const struct FFortMinigameStatQuery& K2Node_MakeStruct_FortMinigameStatQuery, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateEndConditions");

	Params::AMinigameSettingsMachine_C_UpdateEndConditions_Params Parms{};

	Parms.EndConditions = EndConditions;
	Parms.Minigame = Minigame;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_MakeStruct_FortMinigameStatQuery = K2Node_MakeStruct_FortMinigameStatQuery;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTeamToMoveToWhenOutOfSpawns
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*               Minigame                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Subtract_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Add_ByteByte_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMinigameSettingsMachine_C::UpdateTeamToMoveToWhenOutOfSpawns(class AFortMinigame* Minigame, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_Subtract_ByteByte_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, uint8 CallFunc_Add_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateTeamToMoveToWhenOutOfSpawns");

	Params::AMinigameSettingsMachine_C_UpdateTeamToMoveToWhenOutOfSpawns_Params Parms{};

	Parms.Minigame = Minigame;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Subtract_ByteByte_ReturnValue = CallFunc_Subtract_ByteByte_ReturnValue;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_Add_ByteByte_ReturnValue = CallFunc_Add_ByteByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateAutoEndTeamThreshold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*               Minigame                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::UpdateAutoEndTeamThreshold(class AFortMinigame* Minigame, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateAutoEndTeamThreshold");

	Params::AMinigameSettingsMachine_C_UpdateAutoEndTeamThreshold_Params Parms{};

	Parms.Minigame = Minigame;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdatePlayerLives
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*               NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::UpdatePlayerLives(class AFortMinigame* NewLocalVar_0, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdatePlayerLives");

	Params::AMinigameSettingsMachine_C_UpdatePlayerLives_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdatePostGameSpawnLocationSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*               CurrentMinigame                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::UpdatePostGameSpawnLocationSetting(class AFortMinigame* CurrentMinigame, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdatePostGameSpawnLocationSetting");

	Params::AMinigameSettingsMachine_C_UpdatePostGameSpawnLocationSetting_Params Parms{};

	Parms.CurrentMinigame = CurrentMinigame;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintGetFailedInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText AMinigameSettingsMachine_C::BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "BlueprintGetFailedInteractionString");

	Params::AMinigameSettingsMachine_C_BlueprintGetFailedInteractionString_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTeamSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMinigame_PlayerCreated_C*   K2Node_DynamicCast_AsMinigame_Player_Created                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::UpdateTeamSetting(bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, class AMinigame_PlayerCreated_C* K2Node_DynamicCast_AsMinigame_Player_Created, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateTeamSetting");

	Params::AMinigameSettingsMachine_C_UpdateTeamSetting_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.K2Node_DynamicCast_AsMinigame_Player_Created = K2Node_DynamicCast_AsMinigame_Player_Created;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateSpawnLocationSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*               CurrentMinigame                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::UpdateSpawnLocationSetting(class AFortMinigame* CurrentMinigame, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateSpawnLocationSetting");

	Params::AMinigameSettingsMachine_C_UpdateSpawnLocationSetting_Params Parms{};

	Parms.CurrentMinigame = CurrentMinigame;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetCurrentMinigame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortMinigame*               Minigame                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMinigameVolumeComponent*LinkedVolumeComp                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortVolume*                 LinkedVolume                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortMinigame*               CurrentMinigame                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMinigameVolumeComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortVolume*                 CallFunc_GetLinkedVolume_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::GetCurrentMinigame(class AFortMinigame** Minigame, class UFortMinigameVolumeComponent* LinkedVolumeComp, class AFortVolume* LinkedVolume, class AFortMinigame* CurrentMinigame, bool CallFunc_IsValid_ReturnValue, class UFortMinigameVolumeComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class AFortVolume* CallFunc_GetLinkedVolume_ReturnValue, bool CallFunc_IsValid_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "GetCurrentMinigame");

	Params::AMinigameSettingsMachine_C_GetCurrentMinigame_Params Parms{};

	Parms.LinkedVolumeComp = LinkedVolumeComp;
	Parms.LinkedVolume = LinkedVolume;
	Parms.CurrentMinigame = CurrentMinigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetLinkedVolume_ReturnValue = CallFunc_GetLinkedVolume_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (Minigame != nullptr)
		*Minigame = Parms.Minigame;

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTimeLimit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*               CurrentMinigame                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::UpdateTimeLimit(class AFortMinigame* CurrentMinigame, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateTimeLimit");

	Params::AMinigameSettingsMachine_C_UpdateTimeLimit_Params Parms{};

	Parms.CurrentMinigame = CurrentMinigame;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateGameMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::UpdateGameMode(class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateGameMode");

	Params::AMinigameSettingsMachine_C_UpdateGameMode_Params Parms{};

	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.HasMinigameStarted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bHasStarted                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasStarted_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::HasMinigameStarted(bool* bHasStarted, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasStarted_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "HasMinigameStarted");

	Params::AMinigameSettingsMachine_C_HasMinigameStarted_Params Parms{};

	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasStarted_ReturnValue = CallFunc_HasStarted_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bHasStarted != nullptr)
		*bHasStarted = Parms.bHasStarted;

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.IsValidGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bCanStartGame                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::IsValidGame(bool* bCanStartGame, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "IsValidGame");

	Params::AMinigameSettingsMachine_C_IsValidGame_Params Parms{};

	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCanStartGame != nullptr)
		*bCanStartGame = Parms.bCanStartGame;

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetPickupSpawnLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     SpawnLocation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMinigameSettingsMachine_C::GetPickupSpawnLocation(struct FVector* SpawnLocation, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "GetPickupSpawnLocation");

	Params::AMinigameSettingsMachine_C_GetPickupSpawnLocation_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue = CallFunc_Multiply_VectorInt_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue1 = CallFunc_Add_VectorVector_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnLocation != nullptr)
		*SpawnLocation = std::move(Parms.SpawnLocation);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintOnLocalInteract
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnLocalInteract_bResult                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMatchmakingKnobsModal*  CallFunc_OnLocalInteract_ModalWidget                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCreativeMinigameGameKnobsModal_C*K2Node_DynamicCast_AsCreative_Minigame_Game_Knobs_Modal          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AMinigameSettingsMachine_C::BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn, bool CallFunc_OnLocalInteract_bResult, class UFortMatchmakingKnobsModal* CallFunc_OnLocalInteract_ModalWidget, class UCreativeMinigameGameKnobsModal_C* K2Node_DynamicCast_AsCreative_Minigame_Game_Knobs_Modal, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "BlueprintOnLocalInteract");

	Params::AMinigameSettingsMachine_C_BlueprintOnLocalInteract_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.CallFunc_OnLocalInteract_bResult = CallFunc_OnLocalInteract_bResult;
	Parms.CallFunc_OnLocalInteract_ModalWidget = CallFunc_OnLocalInteract_ModalWidget;
	Parms.K2Node_DynamicCast_AsCreative_Minigame_Game_Knobs_Modal = K2Node_DynamicCast_AsCreative_Minigame_Game_Knobs_Modal;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText AMinigameSettingsMachine_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "BlueprintGetInteractionString");

	Params::AMinigameSettingsMachine_C_BlueprintGetInteractionString_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CanInteract                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortVolume*                 CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AMinigameSettingsMachine_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, bool CanInteract, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue1, class AFortVolume* CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume, bool CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "BlueprintCanInteract");

	Params::AMinigameSettingsMachine_C_BlueprintCanInteract_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.CanInteract = CanInteract;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume = CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume;
	Parms.CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue = CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMinigameSettingsMachine_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMinigameSettingsMachine_C::BlueprintOnInteract(class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "BlueprintOnInteract");

	Params::AMinigameSettingsMachine_C_BlueprintOnInteract_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMinigameSettingsMachine_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.OnGameSettingsUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMinigameSettingsMachine_C::OnGameSettingsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "OnGameSettingsUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.StartMinigameHelper
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMinigameSettingsMachine_C::StartMinigameHelper()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "StartMinigameHelper");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.AbandonMinigameHelper
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMinigameSettingsMachine_C::AbandonMinigameHelper()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "AbandonMinigameHelper");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.SetGameModeToDeathmatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMinigameSettingsMachine_C::SetGameModeToDeathmatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "SetGameModeToDeathmatch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.ExecuteUbergraph_MinigameSettingsMachine
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   K2Node_Event_InteractingPawn                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue1              (ZeroConstructor, ReferenceParm)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void AMinigameSettingsMachine_C::ExecuteUbergraph_MinigameSettingsMachine(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class AFortPawn* K2Node_Event_InteractingPawn, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue1, class AFortPlayerController* CallFunc_Array_Get_Item, class AFortPlayerController* CallFunc_Array_Get_Item1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena1, bool K2Node_DynamicCast_bSuccess1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "ExecuteUbergraph_MinigameSettingsMachine");

	Params::AMinigameSettingsMachine_C_ExecuteUbergraph_MinigameSettingsMachine_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_InteractingPawn = K2Node_Event_InteractingPawn;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue1 = CallFunc_GetLocalFortPlayerControllers_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena1 = K2Node_DynamicCast_AsFort_Player_Controller_Athena1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}



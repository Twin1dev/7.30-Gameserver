#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ReadyUp_Interact.BP_ReadyUp_Interact_C
// (Actor)

class UClass* ABP_ReadyUp_Interact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ReadyUp_Interact_C");

	return Clss;
}


// BP_ReadyUp_Interact_C BP_ReadyUp_Interact.Default__BP_ReadyUp_Interact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ReadyUp_Interact_C* ABP_ReadyUp_Interact_C::GetDefaultObj()
{
	static class ABP_ReadyUp_Interact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ReadyUp_Interact_C*>(ABP_ReadyUp_Interact_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ReturnBluGloToPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IFortInventoryOwnerInterface>InventoryOwner                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NumberBGtoReturn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ReadyUp_Interact_C::ReturnBluGloToPlayer(TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner, int32 NumberBGtoReturn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "ReturnBluGloToPlayer");

	Params::ABP_ReadyUp_Interact_C_ReturnBluGloToPlayer_Params Parms{};

	Parms.InventoryOwner = InventoryOwner;
	Parms.NumberBGtoReturn = NumberBGtoReturn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.TakeBluGloFromPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumberBGtoTake                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_K2_RemoveItemFromPlayer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ReadyUp_Interact_C::TakeBluGloFromPlayer(class AFortPlayerController* PlayerController, int32 NumberBGtoTake, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "TakeBluGloFromPlayer");

	Params::ABP_ReadyUp_Interact_C_TakeBluGloFromPlayer_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.NumberBGtoTake = NumberBGtoTake;
	Parms.CallFunc_K2_RemoveItemFromPlayer_ReturnValue = CallFunc_K2_RemoveItemFromPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnRep_CanInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::OnRep_CanInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OnRep_CanInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ReadyUp_Interact_C::ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "ShouldDie");

	Params::ABP_ReadyUp_Interact_C_ShouldDie_Params Parms{};

	Parms.Damage = Damage;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText ABP_ReadyUp_Interact_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "BlueprintGetInteractionString");

	Params::ABP_ReadyUp_Interact_C_BlueprintGetInteractionString_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ReadyUp_Interact_C::BlueprintCanInteract(class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "BlueprintCanInteract");

	Params::ABP_ReadyUp_Interact_C_BlueprintCanInteract_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnCanceled_1ED02ED748A4140AEF73B29E96DDE83A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::OnCanceled_1ED02ED748A4140AEF73B29E96DDE83A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OnCanceled_1ED02ED748A4140AEF73B29E96DDE83A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E96DDE83A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::OnAllClientsReady_1ED02ED748A4140AEF73B29E96DDE83A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OnAllClientsReady_1ED02ED748A4140AEF73B29E96DDE83A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnCanceled_1ED02ED748A4140AEF73B29EC94AD234
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::OnCanceled_1ED02ED748A4140AEF73B29EC94AD234()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OnCanceled_1ED02ED748A4140AEF73B29EC94AD234");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EC94AD234
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::OnAllClientsReady_1ED02ED748A4140AEF73B29EC94AD234()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OnAllClientsReady_1ED02ED748A4140AEF73B29EC94AD234");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ReadyUp_Interact_C::OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE");

	Params::ABP_ReadyUp_Interact_C_OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OpenMissionControl
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::OpenMissionControl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OpenMissionControl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ReadyUp_Interact_C::BlueprintOnInteract(class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "BlueprintOnInteract");

	Params::ABP_ReadyUp_Interact_C_BlueprintOnInteract_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.VoteCalled
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortVoteStatus         VoteStatus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              VoteResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVoter>              Voters                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_ReadyUp_Interact_C::VoteCalled(enum class EFortVoteType VoteType, enum class EFortVoteStatus VoteStatus, int32 VoteResult, TArray<struct FVoter>& Voters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "VoteCalled");

	Params::ABP_ReadyUp_Interact_C_VoteCalled_Params Parms{};

	Parms.VoteType = VoteType;
	Parms.VoteStatus = VoteStatus;
	Parms.VoteResult = VoteResult;
	Parms.Voters = Voters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.DisableDifficultyVoting
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::DisableDifficultyVoting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "DisableDifficultyVoting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.AtlasUnsupported
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::AtlasUnsupported()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "AtlasUnsupported");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.HandleMissionEvent_Supported
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       InMissionGuid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ObjectiveHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortMissionEventParams*     Params                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  EventContent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GenericInt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GenericFloat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        GenericText                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer       GameplayTags                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortMissionEvent           MissionEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ReadyUp_Interact_C::HandleMissionEvent_Supported(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "HandleMissionEvent_Supported");

	Params::ABP_ReadyUp_Interact_C_HandleMissionEvent_Supported_Params Parms{};

	Parms.InMissionGuid = InMissionGuid;
	Parms.ObjectiveHandle = ObjectiveHandle;
	Parms.Params = Params;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = GenericText;
	Parms.GameplayTags = GameplayTags;
	Parms.MissionEvent = MissionEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.HandleMissionEvent_UnSupported
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       InMissionGuid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ObjectiveHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortMissionEventParams*     Params                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  EventContent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GenericInt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GenericFloat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        GenericText                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer       GameplayTags                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortMissionEvent           MissionEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ReadyUp_Interact_C::HandleMissionEvent_UnSupported(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "HandleMissionEvent_UnSupported");

	Params::ABP_ReadyUp_Interact_C_HandleMissionEvent_UnSupported_Params Parms{};

	Parms.InMissionGuid = InMissionGuid;
	Parms.ObjectiveHandle = ObjectiveHandle;
	Parms.Params = Params;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = GenericText;
	Parms.GameplayTags = GameplayTags;
	Parms.MissionEvent = MissionEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.HandleMissionEvent_ActivatePrimary
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       InMissionGuid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ObjectiveHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortMissionEventParams*     Params                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  EventContent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GenericInt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GenericFloat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        GenericText                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer       GameplayTags                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortMissionEvent           MissionEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ReadyUp_Interact_C::HandleMissionEvent_ActivatePrimary(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "HandleMissionEvent_ActivatePrimary");

	Params::ABP_ReadyUp_Interact_C_HandleMissionEvent_ActivatePrimary_Params Parms{};

	Parms.InMissionGuid = InMissionGuid;
	Parms.ObjectiveHandle = ObjectiveHandle;
	Parms.Params = Params;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = GenericText;
	Parms.GameplayTags = GameplayTags;
	Parms.MissionEvent = MissionEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ExecuteUbergraph_BP_ReadyUp_Interact
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAnnounce_Gen_Basic_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsUser_Widget                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue1                              (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AAnnounce_Gen_Basic_C*       CallFunc_FinishSpawningActor_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class AFortPawn*                   K2Node_Event_InteractingPawn                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortInitializeFromObjectInterface>K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortVoteType           K2Node_CustomEvent_VoteType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortVoteStatus         K2Node_CustomEvent_VoteStatus                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_VoteResult                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVoter>              K2Node_CustomEvent_Voters                                        (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortInventoryOwnerInterface>CallFunc_ReturnBluGloToPlayer_InventoryOwner_CastInput           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateZone*          K2Node_DynamicCast_AsFort_Game_State_Zone                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_MultiGate_FirstRun                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_Data                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_ScratchBool                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_ScratchIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortInventoryOwnerInterface>CallFunc_ReturnBluGloToPlayer_InventoryOwner1_CastInput          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMission*                CallFunc_GetMission_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// struct FFortClientAnnouncementData_BasicK2Node_MakeStruct_FortClientAnnouncementData_Basic               (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue1                       (None)
// struct FGuid                       K2Node_HandleMissionEvent_InMissionGuid2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_ObjectiveHandle2                       (None)
// class UFortMissionEventParams*     K2Node_HandleMissionEvent_Params2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleMissionEvent_EventFocus2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  K2Node_HandleMissionEvent_EventContent2                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_HandleMissionEvent_EventInstigator2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_HandleMissionEvent_GenericInt2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_HandleMissionEvent_GenericFloat2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_HandleMissionEvent_GenericText2                           (ConstParm)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_GameplayTags2                          (None)
// struct FFortMissionEvent           K2Node_HandleMissionEvent_MissionEvent2                          (ConstParm)
// struct FFortClientAnnouncementData_BasicK2Node_MakeStruct_FortClientAnnouncementData_Basic1              (None)
// struct FGuid                       K2Node_HandleMissionEvent_InMissionGuid1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_ObjectiveHandle1                       (None)
// class UFortMissionEventParams*     K2Node_HandleMissionEvent_Params1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW1    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleMissionEvent_EventFocus1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  K2Node_HandleMissionEvent_EventContent1                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_HandleMissionEvent_EventInstigator1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_HandleMissionEvent_GenericInt1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_HandleMissionEvent_GenericFloat1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_HandleMissionEvent_GenericText1                           (ConstParm)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_GameplayTags1                          (None)
// struct FFortMissionEvent           K2Node_HandleMissionEvent_MissionEvent1                          (ConstParm)
// struct FGuid                       K2Node_HandleMissionEvent_InMissionGuid                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_ObjectiveHandle                        (None)
// class UFortMissionEventParams*     K2Node_HandleMissionEvent_Params                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleMissionEvent_EventFocus                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  K2Node_HandleMissionEvent_EventContent                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_HandleMissionEvent_EventInstigator                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_HandleMissionEvent_GenericInt                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_HandleMissionEvent_GenericFloat                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_HandleMissionEvent_GenericText                            (ConstParm)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_GameplayTags                           (None)
// struct FFortMissionEvent           K2Node_HandleMissionEvent_MissionEvent                           (ConstParm)

void ABP_ReadyUp_Interact_C::ExecuteUbergraph_BP_ReadyUp_Interact(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AAnnounce_Gen_Basic_C* CallFunc_FinishSpawningActor_ReturnValue, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UClass* K2Node_CustomEvent_Loaded, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AAnnounce_Gen_Basic_C* CallFunc_FinishSpawningActor_ReturnValue1, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue1, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array1, bool CallFunc_IsDedicatedServer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AFortPawn* K2Node_Event_InteractingPawn, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_Create_ReturnValue, class AController* CallFunc_GetController_ReturnValue, TScriptInterface<class IFortInitializeFromObjectInterface> K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface, bool K2Node_DynamicCast_bSuccess1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess2, enum class EFortVoteType K2Node_CustomEvent_VoteType, enum class EFortVoteStatus K2Node_CustomEvent_VoteStatus, int32 K2Node_CustomEvent_VoteResult, TArray<struct FVoter>& K2Node_CustomEvent_Voters, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum1_CmpSuccess, bool K2Node_SwitchEnum2_CmpSuccess, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_ReturnBluGloToPlayer_InventoryOwner_CastInput, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_ReturnBluGloToPlayer_InventoryOwner1_CastInput, class AFortMission* CallFunc_GetMission_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FFortClientAnnouncementData_Basic& K2Node_MakeStruct_FortClientAnnouncementData_Basic, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue1, const struct FGuid& K2Node_HandleMissionEvent_InMissionGuid2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle2, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params2, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2, class UObject* K2Node_HandleMissionEvent_EventFocus2, class UDataAsset* K2Node_HandleMissionEvent_EventContent2, class AActor* K2Node_HandleMissionEvent_EventInstigator2, int32 K2Node_HandleMissionEvent_GenericInt2, float K2Node_HandleMissionEvent_GenericFloat2, class FText K2Node_HandleMissionEvent_GenericText2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags2, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent2, const struct FFortClientAnnouncementData_Basic& K2Node_MakeStruct_FortClientAnnouncementData_Basic1, const struct FGuid& K2Node_HandleMissionEvent_InMissionGuid1, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle1, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params1, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW1, class UObject* K2Node_HandleMissionEvent_EventFocus1, class UDataAsset* K2Node_HandleMissionEvent_EventContent1, class AActor* K2Node_HandleMissionEvent_EventInstigator1, int32 K2Node_HandleMissionEvent_GenericInt1, float K2Node_HandleMissionEvent_GenericFloat1, class FText K2Node_HandleMissionEvent_GenericText1, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags1, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent1, const struct FGuid& K2Node_HandleMissionEvent_InMissionGuid, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* K2Node_HandleMissionEvent_EventFocus, class UDataAsset* K2Node_HandleMissionEvent_EventContent, class AActor* K2Node_HandleMissionEvent_EventInstigator, int32 K2Node_HandleMissionEvent_GenericInt, float K2Node_HandleMissionEvent_GenericFloat, class FText K2Node_HandleMissionEvent_GenericText, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "ExecuteUbergraph_BP_ReadyUp_Interact");

	Params::ABP_ReadyUp_Interact_C_ExecuteUbergraph_BP_ReadyUp_Interact_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue = CallFunc_WaitForClientAnnouncement_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsUser_Widget = K2Node_ClassDynamicCast_AsUser_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeTransform_ReturnValue1 = CallFunc_MakeTransform_ReturnValue1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_FinishSpawningActor_ReturnValue1 = CallFunc_FinishSpawningActor_ReturnValue1;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue1 = CallFunc_WaitForClientAnnouncement_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_Event_InteractingPawn = K2Node_Event_InteractingPawn;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface = K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_CustomEvent_VoteType = K2Node_CustomEvent_VoteType;
	Parms.K2Node_CustomEvent_VoteStatus = K2Node_CustomEvent_VoteStatus;
	Parms.K2Node_CustomEvent_VoteResult = K2Node_CustomEvent_VoteResult;
	Parms.K2Node_CustomEvent_Voters = K2Node_CustomEvent_Voters;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1 = CallFunc_EqualEqual_IntInt_ReturnValue1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.CallFunc_ReturnBluGloToPlayer_InventoryOwner_CastInput = CallFunc_ReturnBluGloToPlayer_InventoryOwner_CastInput;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Zone = K2Node_DynamicCast_AsFort_Game_State_Zone;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_MultiGate_FirstRun = K2Node_MultiGate_FirstRun;
	Parms.K2Node_MultiGate_Data = K2Node_MultiGate_Data;
	Parms.K2Node_MultiGate_ScratchBool = K2Node_MultiGate_ScratchBool;
	Parms.K2Node_MultiGate_ScratchIndex = K2Node_MultiGate_ScratchIndex;
	Parms.CallFunc_ReturnBluGloToPlayer_InventoryOwner1_CastInput = CallFunc_ReturnBluGloToPlayer_InventoryOwner1_CastInput;
	Parms.CallFunc_GetMission_ReturnValue = CallFunc_GetMission_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Basic = K2Node_MakeStruct_FortClientAnnouncementData_Basic;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue1 = CallFunc_MakeBrushFromTexture_ReturnValue1;
	Parms.K2Node_HandleMissionEvent_InMissionGuid2 = K2Node_HandleMissionEvent_InMissionGuid2;
	Parms.K2Node_HandleMissionEvent_ObjectiveHandle2 = K2Node_HandleMissionEvent_ObjectiveHandle2;
	Parms.K2Node_HandleMissionEvent_Params2 = K2Node_HandleMissionEvent_Params2;
	Parms.K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2 = K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2;
	Parms.K2Node_HandleMissionEvent_EventFocus2 = K2Node_HandleMissionEvent_EventFocus2;
	Parms.K2Node_HandleMissionEvent_EventContent2 = K2Node_HandleMissionEvent_EventContent2;
	Parms.K2Node_HandleMissionEvent_EventInstigator2 = K2Node_HandleMissionEvent_EventInstigator2;
	Parms.K2Node_HandleMissionEvent_GenericInt2 = K2Node_HandleMissionEvent_GenericInt2;
	Parms.K2Node_HandleMissionEvent_GenericFloat2 = K2Node_HandleMissionEvent_GenericFloat2;
	Parms.K2Node_HandleMissionEvent_GenericText2 = K2Node_HandleMissionEvent_GenericText2;
	Parms.K2Node_HandleMissionEvent_GameplayTags2 = K2Node_HandleMissionEvent_GameplayTags2;
	Parms.K2Node_HandleMissionEvent_MissionEvent2 = K2Node_HandleMissionEvent_MissionEvent2;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Basic1 = K2Node_MakeStruct_FortClientAnnouncementData_Basic1;
	Parms.K2Node_HandleMissionEvent_InMissionGuid1 = K2Node_HandleMissionEvent_InMissionGuid1;
	Parms.K2Node_HandleMissionEvent_ObjectiveHandle1 = K2Node_HandleMissionEvent_ObjectiveHandle1;
	Parms.K2Node_HandleMissionEvent_Params1 = K2Node_HandleMissionEvent_Params1;
	Parms.K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW1 = K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW1;
	Parms.K2Node_HandleMissionEvent_EventFocus1 = K2Node_HandleMissionEvent_EventFocus1;
	Parms.K2Node_HandleMissionEvent_EventContent1 = K2Node_HandleMissionEvent_EventContent1;
	Parms.K2Node_HandleMissionEvent_EventInstigator1 = K2Node_HandleMissionEvent_EventInstigator1;
	Parms.K2Node_HandleMissionEvent_GenericInt1 = K2Node_HandleMissionEvent_GenericInt1;
	Parms.K2Node_HandleMissionEvent_GenericFloat1 = K2Node_HandleMissionEvent_GenericFloat1;
	Parms.K2Node_HandleMissionEvent_GenericText1 = K2Node_HandleMissionEvent_GenericText1;
	Parms.K2Node_HandleMissionEvent_GameplayTags1 = K2Node_HandleMissionEvent_GameplayTags1;
	Parms.K2Node_HandleMissionEvent_MissionEvent1 = K2Node_HandleMissionEvent_MissionEvent1;
	Parms.K2Node_HandleMissionEvent_InMissionGuid = K2Node_HandleMissionEvent_InMissionGuid;
	Parms.K2Node_HandleMissionEvent_ObjectiveHandle = K2Node_HandleMissionEvent_ObjectiveHandle;
	Parms.K2Node_HandleMissionEvent_Params = K2Node_HandleMissionEvent_Params;
	Parms.K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW = K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.K2Node_HandleMissionEvent_EventFocus = K2Node_HandleMissionEvent_EventFocus;
	Parms.K2Node_HandleMissionEvent_EventContent = K2Node_HandleMissionEvent_EventContent;
	Parms.K2Node_HandleMissionEvent_EventInstigator = K2Node_HandleMissionEvent_EventInstigator;
	Parms.K2Node_HandleMissionEvent_GenericInt = K2Node_HandleMissionEvent_GenericInt;
	Parms.K2Node_HandleMissionEvent_GenericFloat = K2Node_HandleMissionEvent_GenericFloat;
	Parms.K2Node_HandleMissionEvent_GenericText = K2Node_HandleMissionEvent_GenericText;
	Parms.K2Node_HandleMissionEvent_GameplayTags = K2Node_HandleMissionEvent_GameplayTags;
	Parms.K2Node_HandleMissionEvent_MissionEvent = K2Node_HandleMissionEvent_MissionEvent;

	UObject::ProcessEvent(Func, &Parms);

}

}



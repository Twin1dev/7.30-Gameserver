#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass JournalQuestRewardDetails.JournalQuestRewardDetails_C
// (None)

class UClass* UJournalQuestRewardDetails_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JournalQuestRewardDetails_C");

	return Clss;
}


// JournalQuestRewardDetails_C JournalQuestRewardDetails.Default__JournalQuestRewardDetails_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJournalQuestRewardDetails_C* UJournalQuestRewardDetails_C::GetDefaultObj()
{
	static class UJournalQuestRewardDetails_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJournalQuestRewardDetails_C*>(UJournalQuestRewardDetails_C::StaticClass()->DefaultObject);

	return Default;
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdatePanelInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRewardInfo             CallFunc_GetRewardInfo_BP_ReturnValue                            (None)

void UJournalQuestRewardDetails_C::UpdatePanelInfo(class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, const struct FFortRewardInfo& CallFunc_GetRewardInfo_BP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JournalQuestRewardDetails_C", "UpdatePanelInfo");

	Params::UJournalQuestRewardDetails_C_UpdatePanelInfo_Params Parms{};

	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue = CallFunc_GetQuestDefinitionBP_ReturnValue;
	Parms.CallFunc_GetRewardInfo_BP_ReturnValue = CallFunc_GetRewardInfo_BP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdatePlayButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CanGotoQuest_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanPlayQuest_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortQuestState         CallFunc_GetQuestState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UJournalQuestRewardDetails_C::UpdatePlayButtonState(bool CallFunc_CanGotoQuest_ReturnValue, bool CallFunc_CanPlayQuest_ReturnValue, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JournalQuestRewardDetails_C", "UpdatePlayButtonState");

	Params::UJournalQuestRewardDetails_C_UpdatePlayButtonState_Params Parms{};

	Parms.CallFunc_CanGotoQuest_ReturnValue = CallFunc_CanGotoQuest_ReturnValue;
	Parms.CallFunc_CanPlayQuest_ReturnValue = CallFunc_CanPlayQuest_ReturnValue;
	Parms.CallFunc_GetQuestState_ReturnValue = CallFunc_GetQuestState_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdateButtonStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJournalQuestRewardDetails_C::UpdateButtonStates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JournalQuestRewardDetails_C", "UpdateButtonStates");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJournalQuestRewardDetails_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JournalQuestRewardDetails_C", "Setup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UJournalQuestRewardDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JournalQuestRewardDetails_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleCurrentQuestChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UJournalQuestRewardDetails_C::HandleCurrentQuestChangedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JournalQuestRewardDetails_C", "HandleCurrentQuestChangedBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.ExecuteUbergraph_JournalQuestRewardDetails
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJournalQuestRewardDetails_C::ExecuteUbergraph_JournalQuestRewardDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JournalQuestRewardDetails_C", "ExecuteUbergraph_JournalQuestRewardDetails");

	Params::UJournalQuestRewardDetails_C_ExecuteUbergraph_JournalQuestRewardDetails_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



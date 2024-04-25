#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C
// (Actor)

class UClass* ACheckForUnfloweringUITutorials_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheckForUnfloweringUITutorials_C");

	return Clss;
}


// CheckForUnfloweringUITutorials_C CheckForUnfloweringUITutorials.Default__CheckForUnfloweringUITutorials_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACheckForUnfloweringUITutorials_C* ACheckForUnfloweringUITutorials_C::GetDefaultObj()
{
	static class ACheckForUnfloweringUITutorials_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACheckForUnfloweringUITutorials_C*>(ACheckForUnfloweringUITutorials_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.CanRunTutorialQuests
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDailyRewards_C*             K2Node_DynamicCast_AsDaily_Rewards                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AreTutorialQuestsActive_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentlyRunning_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckForUnfloweringUITutorials_C::CanRunTutorialQuests(bool* Result, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UDailyRewards_C* K2Node_DynamicCast_AsDaily_Rewards, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AreTutorialQuestsActive_ReturnValue, bool CallFunc_IsCurrentlyRunning_Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckForUnfloweringUITutorials_C", "CanRunTutorialQuests");

	Params::ACheckForUnfloweringUITutorials_C_CanRunTutorialQuests_Params Parms{};

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsDaily_Rewards = K2Node_DynamicCast_AsDaily_Rewards;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AreTutorialQuestsActive_ReturnValue = CallFunc_AreTutorialQuestsActive_ReturnValue;
	Parms.CallFunc_IsCurrentlyRunning_Result = CallFunc_IsCurrentlyRunning_Result;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACheckForUnfloweringUITutorials_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckForUnfloweringUITutorials_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.Execute
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams   Params                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ACheckForUnfloweringUITutorials_C::Execute(struct FFortScriptedActionParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckForUnfloweringUITutorials_C", "Execute");

	Params::ACheckForUnfloweringUITutorials_C_Execute_Params Parms{};

	Parms.Params = Params;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.ExecuteUbergraph_CheckForUnfloweringUITutorials
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortScriptedActionParams   K2Node_Event_Params                                              (ConstParm, NoDestructor)
// bool                               CallFunc_CanRunTutorialQuests_Result                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckForUnfloweringUITutorials_C::ExecuteUbergraph_CheckForUnfloweringUITutorials(int32 EntryPoint, const struct FFortScriptedActionParams& K2Node_Event_Params, bool CallFunc_CanRunTutorialQuests_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckForUnfloweringUITutorials_C", "ExecuteUbergraph_CheckForUnfloweringUITutorials");

	Params::ACheckForUnfloweringUITutorials_C_ExecuteUbergraph_CheckForUnfloweringUITutorials_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Params = K2Node_Event_Params;
	Parms.CallFunc_CanRunTutorialQuests_Result = CallFunc_CanRunTutorialQuests_Result;

	UObject::ProcessEvent(Func, &Parms);

}

}



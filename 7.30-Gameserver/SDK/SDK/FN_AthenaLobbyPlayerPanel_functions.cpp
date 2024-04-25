#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C
// (None)

class UClass* UAthenaLobbyPlayerPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaLobbyPlayerPanel_C");

	return Clss;
}


// AthenaLobbyPlayerPanel_C AthenaLobbyPlayerPanel.Default__AthenaLobbyPlayerPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaLobbyPlayerPanel_C* UAthenaLobbyPlayerPanel_C::GetDefaultObj()
{
	static class UAthenaLobbyPlayerPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaLobbyPlayerPanel_C*>(UAthenaLobbyPlayerPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Cancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobbyPlayerPanel_C::Cancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "Cancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnTeamMemberStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         TeamMemberInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_AreUniqueIDsIdentical_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanel_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_AreUniqueIDsIdentical_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "OnTeamMemberStateChanged");

	Params::UAthenaLobbyPlayerPanel_C_OnTeamMemberStateChanged_Params Parms{};

	Parms.TeamMemberInfo = TeamMemberInfo;
	Parms.CallFunc_AreUniqueIDsIdentical_ReturnValue = CallFunc_AreUniqueIDsIdentical_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanel_C::InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "InitializeContextEvents");

	Params::UAthenaLobbyPlayerPanel_C_InitializeContextEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasValidActions_bHasValidActions                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanel_C::Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_HasValidActions_bHasValidActions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "Focus");

	Params::UAthenaLobbyPlayerPanel_C_Focus_Params Parms{};

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_HasValidActions_bHasValidActions = CallFunc_HasValidActions_bHasValidActions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobbyPlayerPanel_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.SetTeamMemberInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         TeamMemberInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanel_C::SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "SetTeamMemberInfo");

	Params::UAthenaLobbyPlayerPanel_C_SetTeamMemberInfo_Params Parms{};

	Parms.TeamMemberInfo = TeamMemberInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobbyPlayerPanel_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaLobbyPlayerPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.ExecuteUbergraph_AthenaLobbyPlayerPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UAthenaLobbyPlayerPanel_C::ExecuteUbergraph_AthenaLobbyPlayerPanel(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "ExecuteUbergraph_AthenaLobbyPlayerPanel");

	Params::UAthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobbyPlayerPanel_C::OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "OnClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnGadgetsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobbyPlayerPanel_C::OnGadgetsClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "OnGadgetsClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}



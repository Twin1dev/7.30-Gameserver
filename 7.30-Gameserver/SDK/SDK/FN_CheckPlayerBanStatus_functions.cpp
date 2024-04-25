#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CheckPlayerBanStatus.CheckPlayerBanStatus_C
// (Actor)

class UClass* ACheckPlayerBanStatus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheckPlayerBanStatus_C");

	return Clss;
}


// CheckPlayerBanStatus_C CheckPlayerBanStatus.Default__CheckPlayerBanStatus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACheckPlayerBanStatus_C* ACheckPlayerBanStatus_C::GetDefaultObj()
{
	static class ACheckPlayerBanStatus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACheckPlayerBanStatus_C*>(ACheckPlayerBanStatus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.OnActionCompleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACheckPlayerBanStatus_C::OnActionCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckPlayerBanStatus_C", "OnActionCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.ShowBan
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        BanInformation                                                   (Edit, BlueprintVisible)
// struct FMcpBanInfo                 BanInfo                                                          (Edit, BlueprintVisible)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMcpBanInfo                 CallFunc_GetBanInfo_ReturnValue                                  (ConstParm)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUserCurrentlyBanned_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerBannedModal_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckPlayerBanStatus_C::ShowBan(class FText BanInformation, const struct FMcpBanInfo& BanInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, const struct FMcpBanInfo& CallFunc_GetBanInfo_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUserCurrentlyBanned_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, bool CallFunc_IsInViewport_ReturnValue, class UPlayerBannedModal_C* CallFunc_Create_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckPlayerBanStatus_C", "ShowBan");

	Params::ACheckPlayerBanStatus_C_ShowBan_Params Parms{};

	Parms.BanInformation = BanInformation;
	Parms.BanInfo = BanInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetBanInfo_ReturnValue = CallFunc_GetBanInfo_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsUserCurrentlyBanned_ReturnValue = CallFunc_IsUserCurrentlyBanned_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue1 = CallFunc_GetUIManagerWidget_ReturnValue1;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACheckPlayerBanStatus_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckPlayerBanStatus_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.Execute
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams   Params                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ACheckPlayerBanStatus_C::Execute(struct FFortScriptedActionParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckPlayerBanStatus_C", "Execute");

	Params::ACheckPlayerBanStatus_C_Execute_Params Parms{};

	Parms.Params = Params;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.ExecuteUbergraph_CheckPlayerBanStatus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortScriptedActionParams   K2Node_Event_Params                                              (ConstParm, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPendingLogout_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckPlayerBanStatus_C::ExecuteUbergraph_CheckPlayerBanStatus(int32 EntryPoint, const struct FFortScriptedActionParams& K2Node_Event_Params, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsPendingLogout_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckPlayerBanStatus_C", "ExecuteUbergraph_CheckPlayerBanStatus");

	Params::ACheckPlayerBanStatus_C_ExecuteUbergraph_CheckPlayerBanStatus_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Params = K2Node_Event_Params;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsPendingLogout_ReturnValue = CallFunc_IsPendingLogout_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



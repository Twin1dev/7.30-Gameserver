#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Snow_Ambient_Lobby.BP_Snow_Ambient_Lobby_C
// (Actor)

class UClass* ABP_Snow_Ambient_Lobby_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Snow_Ambient_Lobby_C");

	return Clss;
}


// BP_Snow_Ambient_Lobby_C BP_Snow_Ambient_Lobby.Default__BP_Snow_Ambient_Lobby_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Snow_Ambient_Lobby_C* ABP_Snow_Ambient_Lobby_C::GetDefaultObj()
{
	static class ABP_Snow_Ambient_Lobby_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Snow_Ambient_Lobby_C*>(ABP_Snow_Ambient_Lobby_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Snow_Ambient_Lobby.BP_Snow_Ambient_Lobby_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Snow_Ambient_Lobby_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Snow_Ambient_Lobby_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Snow_Ambient_Lobby.BP_Snow_Ambient_Lobby_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Snow_Ambient_Lobby_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Snow_Ambient_Lobby_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Snow_Ambient_Lobby.BP_Snow_Ambient_Lobby_C.UpdateGameSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Snow_Ambient_Lobby_C::UpdateGameSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Snow_Ambient_Lobby_C", "UpdateGameSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Snow_Ambient_Lobby.BP_Snow_Ambient_Lobby_C.ExecuteUbergraph_BP_Snow_Ambient_Lobby
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Snow_Ambient_Lobby_C::ExecuteUbergraph_BP_Snow_Ambient_Lobby(int32 EntryPoint, bool CallFunc_IsActive_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Snow_Ambient_Lobby_C", "ExecuteUbergraph_BP_Snow_Ambient_Lobby");

	Params::ABP_Snow_Ambient_Lobby_C_ExecuteUbergraph_BP_Snow_Ambient_Lobby_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



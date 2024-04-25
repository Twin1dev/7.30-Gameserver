#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C
// (Actor)

class UClass* AGCNL_Generic_BotTurret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_Generic_BotTurret_C");

	return Clss;
}


// GCNL_Generic_BotTurret_C GCNL_Generic_BotTurret.Default__GCNL_Generic_BotTurret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCNL_Generic_BotTurret_C* AGCNL_Generic_BotTurret_C::GetDefaultObj()
{
	static class AGCNL_Generic_BotTurret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCNL_Generic_BotTurret_C*>(AGCNL_Generic_BotTurret_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AB_BGA_BotTurret_Parent_C*   K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGCNL_Generic_BotTurret_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AB_BGA_BotTurret_Parent_C* K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "OnActive");

	Params::AGCNL_Generic_BotTurret_C_OnActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent = K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCNL_Generic_BotTurret_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "OnRemove");

	Params::AGCNL_Generic_BotTurret_C_OnRemove_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Generic_BotTurret_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BotFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Left                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Generic_BotTurret_C::BotFired(int32 Left)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "BotFired");

	Params::AGCNL_Generic_BotTurret_C_BotFired_Params Parms{};

	Parms.Left = Left;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.Activated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Generic_BotTurret_C::Activated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "Activated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BindBotFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Generic_BotTurret_C::BindBotFired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "BindBotFired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BindBotExplosionWarning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Generic_BotTurret_C::BindBotExplosionWarning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "BindBotExplosionWarning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BotExplosionWarning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Generic_BotTurret_C::BotExplosionWarning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "BotExplosionWarning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.ExecuteUbergraph_GCNL_Generic_BotTurret
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Left                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void AGCNL_Generic_BotTurret_C::ExecuteUbergraph_GCNL_Generic_BotTurret(int32 EntryPoint, int32 K2Node_CustomEvent_Left, bool K2Node_SwitchInteger_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "ExecuteUbergraph_GCNL_Generic_BotTurret");

	Params::AGCNL_Generic_BotTurret_C_ExecuteUbergraph_GCNL_Generic_BotTurret_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Left = K2Node_CustomEvent_Left;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}

}



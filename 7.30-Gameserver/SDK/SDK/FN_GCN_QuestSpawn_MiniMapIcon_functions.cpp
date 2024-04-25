#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C
// (Actor)

class UClass* AGCN_QuestSpawn_MiniMapIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_QuestSpawn_MiniMapIcon_C");

	return Clss;
}


// GCN_QuestSpawn_MiniMapIcon_C GCN_QuestSpawn_MiniMapIcon.Default__GCN_QuestSpawn_MiniMapIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_QuestSpawn_MiniMapIcon_C* AGCN_QuestSpawn_MiniMapIcon_C::GetDefaultObj()
{
	static class AGCN_QuestSpawn_MiniMapIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_QuestSpawn_MiniMapIcon_C*>(AGCN_QuestSpawn_MiniMapIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCN_QuestSpawn_MiniMapIcon_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_QuestSpawn_MiniMapIcon_C", "OnRemove");

	Params::AGCN_QuestSpawn_MiniMapIcon_C_OnRemove_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.HideMiniBossGCN
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_QuestSpawn_MiniMapIcon_C::HideMiniBossGCN()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_QuestSpawn_MiniMapIcon_C", "HideMiniBossGCN");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_QuestSpawn_MiniMapIcon_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_QuestSpawn_MiniMapIcon_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGCN_QuestSpawn_MiniMapIcon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_QuestSpawn_MiniMapIcon_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_QuestSpawn_MiniMapIcon_C::ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_QuestSpawn_MiniMapIcon_C", "ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon");

	Params::AGCN_QuestSpawn_MiniMapIcon_C_ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



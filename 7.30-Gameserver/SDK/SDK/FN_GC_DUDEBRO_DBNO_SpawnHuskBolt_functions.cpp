#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_DUDEBRO_DBNO_SpawnHuskBolt.GC_DUDEBRO_DBNO_SpawnHuskBolt_C
// (None)

class UClass* UGC_DUDEBRO_DBNO_SpawnHuskBolt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_DUDEBRO_DBNO_SpawnHuskBolt_C");

	return Clss;
}


// GC_DUDEBRO_DBNO_SpawnHuskBolt_C GC_DUDEBRO_DBNO_SpawnHuskBolt.Default__GC_DUDEBRO_DBNO_SpawnHuskBolt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_DUDEBRO_DBNO_SpawnHuskBolt_C* UGC_DUDEBRO_DBNO_SpawnHuskBolt_C::GetDefaultObj()
{
	static class UGC_DUDEBRO_DBNO_SpawnHuskBolt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_DUDEBRO_DBNO_SpawnHuskBolt_C*>(UGC_DUDEBRO_DBNO_SpawnHuskBolt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_DUDEBRO_DBNO_SpawnHuskBolt.GC_DUDEBRO_DBNO_SpawnHuskBolt_C.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGC_DUDEBRO_DBNO_SpawnHuskBolt_C::K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_DUDEBRO_DBNO_SpawnHuskBolt_C", "K2_HandleGameplayCue");

	Params::UGC_DUDEBRO_DBNO_SpawnHuskBolt_C_K2_HandleGameplayCue_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_TrapBuild_MountedTurret.GA_TrapBuild_MountedTurret_C
// (None)

class UClass* UGA_TrapBuild_MountedTurret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_TrapBuild_MountedTurret_C");

	return Clss;
}


// GA_TrapBuild_MountedTurret_C GA_TrapBuild_MountedTurret.Default__GA_TrapBuild_MountedTurret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_TrapBuild_MountedTurret_C* UGA_TrapBuild_MountedTurret_C::GetDefaultObj()
{
	static class UGA_TrapBuild_MountedTurret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_TrapBuild_MountedTurret_C*>(UGA_TrapBuild_MountedTurret_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_TrapBuild_MountedTurret.GA_TrapBuild_MountedTurret_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_TrapBuild_MountedTurret_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_TrapBuild_MountedTurret_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_TrapBuild_MountedTurret.GA_TrapBuild_MountedTurret_C.ExecuteUbergraph_GA_TrapBuild_MountedTurret
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_ApplyGameplayEffectContainer_ReturnValue                (ConstParm, ZeroConstructor, ReferenceParm)

void UGA_TrapBuild_MountedTurret_C::ExecuteUbergraph_GA_TrapBuild_MountedTurret(int32 EntryPoint, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_TrapBuild_MountedTurret_C", "ExecuteUbergraph_GA_TrapBuild_MountedTurret");

	Params::UGA_TrapBuild_MountedTurret_C_ExecuteUbergraph_GA_TrapBuild_MountedTurret_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ApplyGameplayEffectContainer_ReturnValue = CallFunc_ApplyGameplayEffectContainer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



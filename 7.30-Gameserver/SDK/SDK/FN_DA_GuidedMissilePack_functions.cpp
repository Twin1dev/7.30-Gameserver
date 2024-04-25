#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_GuidedMissilePack.DA_GuidedMissilePack_C
// (Actor)

class UClass* ADA_GuidedMissilePack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_GuidedMissilePack_C");

	return Clss;
}


// DA_GuidedMissilePack_C DA_GuidedMissilePack.Default__DA_GuidedMissilePack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADA_GuidedMissilePack_C* ADA_GuidedMissilePack_C::GetDefaultObj()
{
	static class ADA_GuidedMissilePack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADA_GuidedMissilePack_C*>(ADA_GuidedMissilePack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DA_GuidedMissilePack.DA_GuidedMissilePack_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADA_GuidedMissilePack_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DA_GuidedMissilePack_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DA_GuidedMissilePack.DA_GuidedMissilePack_C.BPPressTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*             FortDecoHelper                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_GuidedMissilePack_C::BPPressTrigger(class AFortDecoHelper* FortDecoHelper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DA_GuidedMissilePack_C", "BPPressTrigger");

	Params::ADA_GuidedMissilePack_C_BPPressTrigger_Params Parms{};

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DA_GuidedMissilePack.DA_GuidedMissilePack_C.ExecuteUbergraph_DA_GuidedMissilePack
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortDecoHelper*             K2Node_Event_FortDecoHelper                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_GuidedMissilePack_C::ExecuteUbergraph_DA_GuidedMissilePack(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortDecoHelper* K2Node_Event_FortDecoHelper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DA_GuidedMissilePack_C", "ExecuteUbergraph_DA_GuidedMissilePack");

	Params::ADA_GuidedMissilePack_C_ExecuteUbergraph_DA_GuidedMissilePack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_Event_FortDecoHelper = K2Node_Event_FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);

}

}



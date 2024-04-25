#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FrontendCamera_Inspect.FrontendCamera_Inspect_C
// (Actor)

class UClass* AFrontendCamera_Inspect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FrontendCamera_Inspect_C");

	return Clss;
}


// FrontendCamera_Inspect_C FrontendCamera_Inspect.Default__FrontendCamera_Inspect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontendCamera_Inspect_C* AFrontendCamera_Inspect_C::GetDefaultObj()
{
	static class AFrontendCamera_Inspect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontendCamera_Inspect_C*>(AFrontendCamera_Inspect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontendCamera_Inspect_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FrontendCamera_Inspect_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFrontendCamera_Inspect_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FrontendCamera_Inspect_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFrontendCamera_Inspect_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FrontendCamera_Inspect_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.ExecuteUbergraph_FrontendCamera_Inspect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATVPostProcessBP_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AVaultCharacterLightingBP_C*>CallFunc_GetAllActorsOfClass_OutActors1                          (ZeroConstructor, ReferenceParm)
// class AVaultCharacterLightingBP_C* CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AVaultCharacterLightingBP_C*>CallFunc_GetAllActorsOfClass_OutActors2                          (ZeroConstructor, ReferenceParm)
// class AVaultCharacterLightingBP_C* CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontendCamera_Inspect_C::ExecuteUbergraph_FrontendCamera_Inspect(int32 EntryPoint, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, TArray<class AVaultCharacterLightingBP_C*>& CallFunc_GetAllActorsOfClass_OutActors1, class AVaultCharacterLightingBP_C* CallFunc_Array_Get_Item1, TArray<class AVaultCharacterLightingBP_C*>& CallFunc_GetAllActorsOfClass_OutActors2, class AVaultCharacterLightingBP_C* CallFunc_Array_Get_Item2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FrontendCamera_Inspect_C", "ExecuteUbergraph_FrontendCamera_Inspect");

	Params::AFrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAllActorsOfClass_OutActors1 = CallFunc_GetAllActorsOfClass_OutActors1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors2 = CallFunc_GetAllActorsOfClass_OutActors2;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;

	UObject::ProcessEvent(Func, &Parms);

}

}



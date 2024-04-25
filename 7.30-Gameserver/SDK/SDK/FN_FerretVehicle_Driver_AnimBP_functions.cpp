#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass FerretVehicle_Driver_AnimBP.FerretVehicle_Driver_AnimBP_C
// (None)

class UClass* UFerretVehicle_Driver_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FerretVehicle_Driver_AnimBP_C");

	return Clss;
}


// FerretVehicle_Driver_AnimBP_C FerretVehicle_Driver_AnimBP.Default__FerretVehicle_Driver_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFerretVehicle_Driver_AnimBP_C* UFerretVehicle_Driver_AnimBP_C::GetDefaultObj()
{
	static class UFerretVehicle_Driver_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFerretVehicle_Driver_AnimBP_C*>(UFerretVehicle_Driver_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FerretVehicle_Driver_AnimBP.FerretVehicle_Driver_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FerretVehicle_Driver_AnimBP_AnimGraphNode_BlendSpacePlayer_609985344D1CCFBA3BEFA2896F65910F
// (BlueprintEvent)
// Parameters:

void UFerretVehicle_Driver_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FerretVehicle_Driver_AnimBP_AnimGraphNode_BlendSpacePlayer_609985344D1CCFBA3BEFA2896F65910F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FerretVehicle_Driver_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FerretVehicle_Driver_AnimBP_AnimGraphNode_BlendSpacePlayer_609985344D1CCFBA3BEFA2896F65910F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FerretVehicle_Driver_AnimBP.FerretVehicle_Driver_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UFerretVehicle_Driver_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FerretVehicle_Driver_AnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FerretVehicle_Driver_AnimBP.FerretVehicle_Driver_AnimBP_C.ExecuteUbergraph_FerretVehicle_Driver_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFerretVehicle_Driver_AnimBP_C::ExecuteUbergraph_FerretVehicle_Driver_AnimBP(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FerretVehicle_Driver_AnimBP_C", "ExecuteUbergraph_FerretVehicle_Driver_AnimBP");

	Params::UFerretVehicle_Driver_AnimBP_C_ExecuteUbergraph_FerretVehicle_Driver_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}



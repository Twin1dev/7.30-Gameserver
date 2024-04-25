#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Biplane_AnimBP_Base.Biplane_AnimBP_Base_C
// (None)

class UClass* UBiplane_AnimBP_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Biplane_AnimBP_Base_C");

	return Clss;
}


// Biplane_AnimBP_Base_C Biplane_AnimBP_Base.Default__Biplane_AnimBP_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBiplane_AnimBP_Base_C* UBiplane_AnimBP_Base_C::GetDefaultObj()
{
	static class UBiplane_AnimBP_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBiplane_AnimBP_Base_C*>(UBiplane_AnimBP_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Biplane_AnimBP_Base.Biplane_AnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Biplane_AnimBP_Base_AnimGraphNode_BlendSpacePlayer_023EFCCF40996F7BD1C2F38037B5D986
// (BlueprintEvent)
// Parameters:

void UBiplane_AnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Biplane_AnimBP_Base_AnimGraphNode_BlendSpacePlayer_023EFCCF40996F7BD1C2F38037B5D986()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Biplane_AnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Biplane_AnimBP_Base_AnimGraphNode_BlendSpacePlayer_023EFCCF40996F7BD1C2F38037B5D986");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Biplane_AnimBP_Base.Biplane_AnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Biplane_AnimBP_Base_AnimGraphNode_ModifyBone_3A257325491B43197BEFCB9BDFC866C0
// (BlueprintEvent)
// Parameters:

void UBiplane_AnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Biplane_AnimBP_Base_AnimGraphNode_ModifyBone_3A257325491B43197BEFCB9BDFC866C0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Biplane_AnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Biplane_AnimBP_Base_AnimGraphNode_ModifyBone_3A257325491B43197BEFCB9BDFC866C0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Biplane_AnimBP_Base.Biplane_AnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Biplane_AnimBP_Base_AnimGraphNode_ModifyBone_D3F5900A4CB6AA04961791BE6B92910E
// (BlueprintEvent)
// Parameters:

void UBiplane_AnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Biplane_AnimBP_Base_AnimGraphNode_ModifyBone_D3F5900A4CB6AA04961791BE6B92910E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Biplane_AnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Biplane_AnimBP_Base_AnimGraphNode_ModifyBone_D3F5900A4CB6AA04961791BE6B92910E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Biplane_AnimBP_Base.Biplane_AnimBP_Base_C.ExecuteUbergraph_Biplane_AnimBP_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_NegateVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBiplane_AnimBP_Base_C::ExecuteUbergraph_Biplane_AnimBP_Base(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_NegateVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FRotator& CallFunc_NegateRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Biplane_AnimBP_Base_C", "ExecuteUbergraph_Biplane_AnimBP_Base");

	Params::UBiplane_AnimBP_Base_C_ExecuteUbergraph_Biplane_AnimBP_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_NegateVector_ReturnValue = CallFunc_NegateVector_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_NegateRotator_ReturnValue = CallFunc_NegateRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



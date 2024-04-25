#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass QuestMapNodeLayout-1-1-1-1.QuestMapNodeLayout-1-1-1-1_C
// (None)

class UClass* UQuestMapNodeLayoutMinus1Minus1Minus1Minus1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestMapNodeLayout-1-1-1-1_C");

	return Clss;
}


// QuestMapNodeLayout-1-1-1-1_C QuestMapNodeLayout-1-1-1-1.Default__QuestMapNodeLayout-1-1-1-1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQuestMapNodeLayoutMinus1Minus1Minus1Minus1_C* UQuestMapNodeLayoutMinus1Minus1Minus1Minus1_C::GetDefaultObj()
{
	static class UQuestMapNodeLayoutMinus1Minus1Minus1Minus1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestMapNodeLayoutMinus1Minus1Minus1Minus1_C*>(UQuestMapNodeLayoutMinus1Minus1Minus1Minus1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestMapNodeLayout-1-1-1-1.QuestMapNodeLayout-1-1-1-1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuestMapNodeLayoutMinus1Minus1Minus1Minus1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestMapNodeLayout-1-1-1-1_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestMapNodeLayout-1-1-1-1.QuestMapNodeLayout-1-1-1-1_C.ExecuteUbergraph_QuestMapNodeLayout-1-1-1-1
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestMapNodeLayoutMinus1Minus1Minus1Minus1_C::ExecuteUbergraph_QuestMapNodeLayoutMinus1Minus1Minus1Minus1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestMapNodeLayout-1-1-1-1_C", "ExecuteUbergraph_QuestMapNodeLayout-1-1-1-1");

	Params::UQuestMapNodeLayoutMinus1Minus1Minus1Minus1_C_ExecuteUbergraph_QuestMapNodeLayoutMinus1Minus1Minus1Minus1_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass QuestMapNodeLayout1-1.QuestMapNodeLayout1-1_C
// (None)

class UClass* UQuestMapNodeLayout1Minus1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestMapNodeLayout1-1_C");

	return Clss;
}


// QuestMapNodeLayout1-1_C QuestMapNodeLayout1-1.Default__QuestMapNodeLayout1-1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQuestMapNodeLayout1Minus1_C* UQuestMapNodeLayout1Minus1_C::GetDefaultObj()
{
	static class UQuestMapNodeLayout1Minus1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestMapNodeLayout1Minus1_C*>(UQuestMapNodeLayout1Minus1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestMapNodeLayout1-1.QuestMapNodeLayout1-1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuestMapNodeLayout1Minus1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestMapNodeLayout1-1_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestMapNodeLayout1-1.QuestMapNodeLayout1-1_C.ExecuteUbergraph_QuestMapNodeLayout1-1
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestMapNodeLayout1Minus1_C::ExecuteUbergraph_QuestMapNodeLayout1Minus1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestMapNodeLayout1-1_C", "ExecuteUbergraph_QuestMapNodeLayout1-1");

	Params::UQuestMapNodeLayout1Minus1_C_ExecuteUbergraph_QuestMapNodeLayout1Minus1_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C
// (Actor)

class UClass* AAnnounce_Gen_Quest_Conversation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Announce_Gen_Quest_Conversation_C");

	return Clss;
}


// Announce_Gen_Quest_Conversation_C Announce_Gen_Quest_Conversation.Default__Announce_Gen_Quest_Conversation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnnounce_Gen_Quest_Conversation_C* AAnnounce_Gen_Quest_Conversation_C::GetDefaultObj()
{
	static class AAnnounce_Gen_Quest_Conversation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnnounce_Gen_Quest_Conversation_C*>(AAnnounce_Gen_Quest_Conversation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnnounce_Gen_Quest_Conversation_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_Gen_Quest_Conversation_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.OnConversationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence   FinishingSentence                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              FinishingSentenceSentenceIndex                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_Gen_Quest_Conversation_C::OnConversationFinished(const struct FFortConversationSentence& FinishingSentence, int32 FinishingSentenceSentenceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_Gen_Quest_Conversation_C", "OnConversationFinished");

	Params::AAnnounce_Gen_Quest_Conversation_C_OnConversationFinished_Params Parms{};

	Parms.FinishingSentence = FinishingSentence;
	Parms.FinishingSentenceSentenceIndex = FinishingSentenceSentenceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.ExecuteUbergraph_Announce_Gen_Quest_Conversation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortConversationSentence   K2Node_Event_FinishingSentence                                   (None)
// int32                              K2Node_Event_FinishingSentenceSentenceIndex                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_Gen_Quest_Conversation_C::ExecuteUbergraph_Announce_Gen_Quest_Conversation(int32 EntryPoint, const struct FFortConversationSentence& K2Node_Event_FinishingSentence, int32 K2Node_Event_FinishingSentenceSentenceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_Gen_Quest_Conversation_C", "ExecuteUbergraph_Announce_Gen_Quest_Conversation");

	Params::AAnnounce_Gen_Quest_Conversation_C_ExecuteUbergraph_Announce_Gen_Quest_Conversation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_FinishingSentence = K2Node_Event_FinishingSentence;
	Parms.K2Node_Event_FinishingSentenceSentenceIndex = K2Node_Event_FinishingSentenceSentenceIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}



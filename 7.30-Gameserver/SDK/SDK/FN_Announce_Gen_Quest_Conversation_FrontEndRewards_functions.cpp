#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C
// (Actor)

class UClass* AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Announce_Gen_Quest_Conversation_FrontEndRewards_C");

	return Clss;
}


// Announce_Gen_Quest_Conversation_FrontEndRewards_C Announce_Gen_Quest_Conversation_FrontEndRewards.Default__Announce_Gen_Quest_Conversation_FrontEndRewards_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C* AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::GetDefaultObj()
{
	static class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C*>(AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.StopCurrentConversation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::StopCurrentConversation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "StopCurrentConversation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.PlayCurrentConversation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_PlayConversation_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::PlayCurrentConversation(bool CallFunc_PlayConversation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "PlayCurrentConversation");

	Params::AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_PlayCurrentConversation_Params Parms{};

	Parms.CallFunc_PlayConversation_ReturnValue = CallFunc_PlayConversation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnConversationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence   FinishingSentence                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              FinishingSentenceSentenceIndex                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::OnConversationFinished(const struct FFortConversationSentence& FinishingSentence, int32 FinishingSentenceSentenceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "OnConversationFinished");

	Params::AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_OnConversationFinished_Params Parms{};

	Parms.FinishingSentence = FinishingSentence;
	Parms.FinishingSentenceSentenceIndex = FinishingSentenceSentenceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnSentenceStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence   Sentence                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              SentenceIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::OnSentenceStarted(struct FFortConversationSentence& Sentence, int32 SentenceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "OnSentenceStarted");

	Params::AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_OnSentenceStarted_Params Parms{};

	Parms.Sentence = Sentence;
	Parms.SentenceIndex = SentenceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortConversationSentence   K2Node_Event_FinishingSentence                                   (None)
// int32                              K2Node_Event_FinishingSentenceSentenceIndex                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortConversationSentence   K2Node_Event_Sentence                                            (ConstParm)
// int32                              K2Node_Event_SentenceIndex                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards(int32 EntryPoint, const struct FFortConversationSentence& K2Node_Event_FinishingSentence, int32 K2Node_Event_FinishingSentenceSentenceIndex, const struct FFortConversationSentence& K2Node_Event_Sentence, int32 K2Node_Event_SentenceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards");

	Params::AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_FinishingSentence = K2Node_Event_FinishingSentence;
	Parms.K2Node_Event_FinishingSentenceSentenceIndex = K2Node_Event_FinishingSentenceSentenceIndex;
	Parms.K2Node_Event_Sentence = K2Node_Event_Sentence;
	Parms.K2Node_Event_SentenceIndex = K2Node_Event_SentenceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnCurrentConversationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::OnCurrentConversationFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "OnCurrentConversationFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnNewSentence__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence   Sentence                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::OnNewSentence__DelegateSignature(const struct FFortConversationSentence& Sentence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "OnNewSentence__DelegateSignature");

	Params::AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_OnNewSentence__DelegateSignature_Params Parms{};

	Parms.Sentence = Sentence;

	UObject::ProcessEvent(Func, &Parms);

}

}



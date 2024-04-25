#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x438 - 0x410)
// BlueprintGeneratedClass Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C
class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C : public AFortClientAnnouncement_Conversation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	UMulticastDelegateProperty_                  OnNewSentence;                                     // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnCurrentConversationFinished;                     // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C* GetDefaultObj();

	void StopCurrentConversation();
	void PlayCurrentConversation(bool CallFunc_PlayConversation_ReturnValue);
	void UserConstructionScript();
	void OnConversationFinished(const struct FFortConversationSentence& FinishingSentence, int32 FinishingSentenceSentenceIndex);
	void OnSentenceStarted(struct FFortConversationSentence& Sentence, int32 SentenceIndex);
	void ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards(int32 EntryPoint, const struct FFortConversationSentence& K2Node_Event_FinishingSentence, int32 K2Node_Event_FinishingSentenceSentenceIndex, const struct FFortConversationSentence& K2Node_Event_Sentence, int32 K2Node_Event_SentenceIndex);
	void OnCurrentConversationFinished__DelegateSignature();
	void OnNewSentence__DelegateSignature(const struct FFortConversationSentence& Sentence);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x378 - 0x330)
// BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
class AFort_Entry_Music_Controller_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Enter_Menu_Loop;                                   // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MenuMusic_B;                                       // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MenuMusic_A;                                       // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       LoginMusic;                                        // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOutTime;                                       // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AE1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            CurrentMusic;                                      // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Music_Activate_Override;                        // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaMusicPackItemDefinition*        MusicPackToPlayLater;                              // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFort_Entry_Music_Controller_BP_C* GetDefaultObj();

	void UserConstructionScript();
	void Change_Music(class USoundBase* New_Music);
	void ListenToMusicPacks();
	void OnMusicPackChanged(class UAthenaMusicPackItemDefinition* NewMusicPack);
	void Lobby_Music_Override(bool Lobby_Music_Activate, class USoundBase* New_Music);
	void MakeNextMusicPackStartFromBeginning();
	void DelayedPlayMusicPack(class UAthenaMusicPackItemDefinition* MusicPackToPlayLater);
	void ClearDelayedPlayMusicPack();
	void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32 EntryPoint, class USoundBase* K2Node_CustomEvent_New_Music1, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UAthenaMusicPackItemDefinition* K2Node_CustomEvent_NewMusicPack, bool K2Node_CustomEvent_Lobby_Music_Activate, class USoundBase* K2Node_CustomEvent_New_Music, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPlaying_ReturnValue, class UFortMusicContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, class UAthenaMusicPackItemDefinition* CallFunc_GetEquippedMusicPack_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAthenaMusicPackItemDefinition* K2Node_CustomEvent_MusicPackToPlayLater, class UFortMusicContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsValid_ReturnValue);
};

}



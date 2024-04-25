#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x360 - 0x348)
// BlueprintGeneratedClass Frontend_Lobby_Layout2.Frontend_Lobby_Layout2_C
class AFrontend_Lobby_Layout2_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  CurrentBackgroundLevelName;                        // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NewBackgroundLevelName;                            // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFrontend_Lobby_Layout2_C* GetDefaultObj();

	void OnBackgroundChanged();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Frontend_Lobby_Layout2(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class FName CallFunc_GetLobbyBackgroundLevelName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}



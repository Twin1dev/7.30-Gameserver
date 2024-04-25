#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x3D8 - 0x390)
// BlueprintGeneratedClass CheckPlayerBanStatus.CheckPlayerBanStatus_C
class ACheckPlayerBanStatus_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlayerBannedModal_C*                  BannedModal;                                       // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMcpBanInfo                           CurrBanInfo;                                       // 0x3A8(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ACheckPlayerBanStatus_C* GetDefaultObj();

	void OnActionCompleted();
	void ShowBan(class FText BanInformation, const struct FMcpBanInfo& BanInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, const struct FMcpBanInfo& CallFunc_GetBanInfo_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUserCurrentlyBanned_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, bool CallFunc_IsInViewport_ReturnValue, class UPlayerBannedModal_C* CallFunc_Create_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void UserConstructionScript();
	void Execute(struct FFortScriptedActionParams& Params);
	void ExecuteUbergraph_CheckPlayerBanStatus(int32 EntryPoint, const struct FFortScriptedActionParams& K2Node_Event_Params, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsPendingLogout_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}



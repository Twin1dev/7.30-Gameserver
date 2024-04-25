#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x450 - 0x3F8)
// BlueprintGeneratedClass CommandRoomItemPedestal.CommandRoomItemPedestal_C
class ACommandRoomItemPedestal_C : public AFortCommandRoomPedestal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       Arrow;                                             // 0x400(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagQuery                     Animation_Tag_Query_Idle;                          // 0x408(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ACommandRoomItemPedestal_C* GetDefaultObj();

	void UserConstructionScript();
	void OnHeroPawnSetupCompleted();
	void ExecuteUbergraph_CommandRoomItemPedestal(int32 EntryPoint, TScriptInterface<class ICustomCharacterPartOwnerInterface> CallFunc_PlayAnimationsMatchingQuery_self_CastInput);
};

}



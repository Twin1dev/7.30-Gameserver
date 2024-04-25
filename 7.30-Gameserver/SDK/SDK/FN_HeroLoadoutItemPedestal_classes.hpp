#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x4D0 - 0x418)
// BlueprintGeneratedClass HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C
class AHeroLoadoutItemPedestal_C : public AFortHeroLoadoutPedestal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x418(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       Arrow;                                             // 0x420(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagQuery                     AnimationTagQuery_Idle;                            // 0x428(0x48)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FTransform                            CommandScreenTransform;                            // 0x470(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            HeroLoadoutScreenTransform;                        // 0x4A0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AHeroLoadoutItemPedestal_C* GetDefaultObj();

	void UserConstructionScript();
	void HandleSlotFocusInUIChanged();
	void OnHeroPawnSetupCompleted();
	void ExecuteUbergraph_HeroLoadoutItemPedestal(int32 EntryPoint, const struct FTransform& CallFunc_GetTransform_ReturnValue, TScriptInterface<class ICustomCharacterPartOwnerInterface> K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

}



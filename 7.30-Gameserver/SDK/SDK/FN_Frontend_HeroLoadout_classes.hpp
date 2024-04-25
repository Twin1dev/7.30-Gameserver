#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x3C8 - 0x348)
// BlueprintGeneratedClass Frontend_HeroLoadout.Frontend_HeroLoadout_C
class AFrontend_HeroLoadout_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTransform                            Transform_Minus_HeroLoadOut;                       // 0x350(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            Transform_Minus_Command;                           // 0x380(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AHeroLoadoutItemPedestal_C*            HLMinusPedestal;                                   // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CommandMinusPedestalMinusPlacement_ExecuteUbergraph_Frontend_HeroLoadout_RefProperty; // 0x3B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                HeroLoadoutMinusPedestalMinusPlacement_ExecuteUbergraph_Frontend_HeroLoadout_RefProperty; // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFrontend_HeroLoadout_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void HeroLoadout_Minus_Transfrom();
	void Command_Minus_Transform();
	void HandleFrontendCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera);
	void ExecuteUbergraph_Frontend_HeroLoadout(int32 EntryPoint, const struct FTransform& CallFunc_GetTransform_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FTransform& CallFunc_GetTransform_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, class UFortFrontEndContext* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, enum class EFrontEndCamera K2Node_CustomEvent_NewCamera, enum class EFrontEndCamera K2Node_CustomEvent_OldCamera, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult1, bool K2Node_SwitchEnum_CmpSuccess);
};

}



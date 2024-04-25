#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x940 - 0x938)
// BlueprintGeneratedClass GA_TrapBuild_MountedTurret.GA_TrapBuild_MountedTurret_C
class UGA_TrapBuild_MountedTurret_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x938(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_TrapBuild_MountedTurret_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_TrapBuild_MountedTurret(int32 EntryPoint, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue);
};

}



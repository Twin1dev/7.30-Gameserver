#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass InterfacePlayerPawn.InterfacePlayerPawn_C
class IInterfacePlayerPawn_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterfacePlayerPawn_C* GetDefaultObj();

	void FootStepRight();
	void FootStepLeft();
	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void MeleeSwingLeft();
	void MeleeSwingRight();
};

}



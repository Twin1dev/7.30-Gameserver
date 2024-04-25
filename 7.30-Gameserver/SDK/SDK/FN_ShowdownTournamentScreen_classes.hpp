#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x380 - 0x340)
// WidgetBlueprintGeneratedClass ShowdownTournamentScreen.ShowdownTournamentScreen_C
class UShowdownTournamentScreen_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_BG;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentDetails_C*          ShowdownTournamentDetails;                         // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Input_ShowAbout;                                   // 0x360(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   Input_Back;                                        // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UShowdownTournamentScreen_C* GetDefaultObj();

	void SetTournamentToRepresent(const class FString& TournamentId, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void Handle_Back(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_Handle_Back_PassThrough);
	void Construct();
	void OnActivated();
	void BndEvt__ShowdownTournamentDetails_K2Node_ComponentBoundEvent_0_BackActionSelected__DelegateSignature();
	void ExecuteUbergraph_ShowdownTournamentScreen(int32 EntryPoint, bool CallFunc_Handle_Back_PassThrough, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}



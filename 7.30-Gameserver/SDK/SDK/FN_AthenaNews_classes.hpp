#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2D0 - 0x280)
// WidgetBlueprintGeneratedClass AthenaNews.AthenaNews_C
class UAthenaNews_C : public UFortAthenaNewsWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAthenaNewsTile_C*                     AthenaNewsTile;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaNewsTile_C*                     AthenaNewsTile_1;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaNewsTile_C*                     AthenaNewsTile_2;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaNewsTile_Spotlight_C*           AthenaNewsTile_Spotlight;                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SpecialEventSubHeader;                             // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_MoTD_Layout;                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  UpdateStyle;                                       // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UAthenaNews_C* GetDefaultObj();

	void BeginIntroSequence();
	void SingleItemConfiguration();
	void ResetViewConfiguration();
	void HandleNewsStyle(enum class EAthenaNewsStyle NewsStyle);
	void ExecuteUbergraph_AthenaNews(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, enum class EAthenaNewsStyle K2Node_Event_NewsStyle, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateStyle__DelegateSignature(enum class EAthenaNewsStyle NewStyle);
};

}



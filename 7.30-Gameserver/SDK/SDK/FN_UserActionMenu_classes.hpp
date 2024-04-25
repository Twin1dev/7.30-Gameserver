#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x3A8 - 0x2D8)
// WidgetBlueprintGeneratedClass UserActionMenu.UserActionMenu_C
class UUserActionMenu_C : public UFortSocialInteractionMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ConfirmationOpened;                                // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Opened;                                            // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Arrow;                                             // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_OnlineStatusIndicator;                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               EntryBorder;                                       // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              HoverBubble;                                       // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserActionMenuInputButton_C*          UserActionMenuInputButton;                         // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          Online;                                            // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Away;                                              // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Offline;                                           // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          bLocked;                                           // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           UserNameOnline;                                    // 0x358(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           UserNameAwayOfflineBlocked;                        // 0x380(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUserActionMenu_C* GetDefaultObj();

	void HandleOnlineIndicatorView(enum class EOnlineStatus OnlineStatus, enum class EOnlineStatus Temp_byte_Variable, enum class EOnlineStatus Temp_byte_Variable1, const struct FSlateColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default);
	void OnSocialContextSet();
	void OnToggleConfirmation(bool bIsVisible);
	void OnUserPresenceChanged(enum class EOnlineStatus OnlineStatus);
	void OnEnableBackButtonDisplay(bool bEnableBackButtonDisplay);
	void ExecuteUbergraph_UserActionMenu(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UWidget* CallFunc_GetFirstEntryToCenter_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUINavigationManager* CallFunc_GetNavigationManager_ReturnValue, bool K2Node_Event_bIsVisible, enum class EOnlineStatus K2Node_Event_OnlineStatus, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UWidget* CallFunc_GetFirstEntryToCenter_ReturnValue1, bool Temp_bool_Variable, bool Temp_bool_Variable1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, class UWidget* K2Node_Select_Default, bool K2Node_Event_bEnableBackButtonDisplay, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default);
};

}



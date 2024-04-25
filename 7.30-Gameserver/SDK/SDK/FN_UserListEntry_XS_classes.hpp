#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x124 (0xC8C - 0xB68)
// WidgetBlueprintGeneratedClass UserListEntry_XS.UserListEntry_XS_C
class UUserListEntry_XS_C : public UFortSocialUserListEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Selected;                                          // 0xB70(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hovered;                                           // 0xB78(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               AnimatedInputBorder;                               // 0xB80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Arrow;                                             // 0xB88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_OnlineStatusIndicator;                      // 0xB90(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     EmptyButtonToEatOneMouseUpEvent;                   // 0xB98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               EntryBorder;                                       // 0xBA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_EncourageEpicFriend;                         // 0xBA8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          Online;                                            // 0xBB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Offline;                                           // 0xBC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Away;                                              // 0xBD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          bLocked;                                           // 0xBE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           UserNameOnline;                                    // 0xBF0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           UserNameOfflineAway;                               // 0xC18(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           UserNameBlocked;                                   // 0xC40(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsPlatOnlyFriend;                                  // 0xC68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5266[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          EncourageEpicFriend_IdleColor;                     // 0xC6C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          EncourageEpicFriend_HoveredColor;                  // 0xC7C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUserListEntry_XS_C* GetDefaultObj();

	void HandleOnlineIndicatorView(enum class EOnlineStatus OnlineStatus, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, const struct FLinearColor& Temp_struct_Variable2, enum class EOnlineStatus Temp_byte_Variable, enum class EOnlineStatus Temp_byte_Variable1, enum class EOnlineStatus Temp_byte_Variable2, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable1, class UMaterialInterface* Temp_object_Variable2, class UMaterialInterface* Temp_object_Variable3, enum class EOnlineStatus Temp_byte_Variable3, class UMaterialInterface* K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& Temp_struct_Variable3, const struct FSlateColor& K2Node_Select1_Default, const struct FSlateColor& K2Node_Select2_Default, enum class EOnlineStatus Temp_byte_Variable4, const struct FLinearColor& K2Node_Select3_Default, const struct FLinearColor& K2Node_Select4_Default);
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnUserPresenceChanged(enum class EOnlineStatus OnlineStatus);
	void BP_OnUnhovered();
	void BP_OnHovered();
	void ExecuteUbergraph_UserListEntry_XS(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool K2Node_ComponentBoundEvent_bIsOpen, enum class ESlateVisibility K2Node_Select_Default, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, bool CallFunc_IsAnimationPlaying_ReturnValue, class UObject* K2Node_Event_ListItemObject, bool CallFunc_IsPlatformOnlyFriend_ReturnValue, enum class EOnlineStatus K2Node_Event_OnlineStatus, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue3, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_GetEnableSocialPanelAddEpicFriendsBang_ReturnValue);
};

}



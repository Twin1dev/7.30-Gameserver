#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xB38 - 0xB28)
// Class SocialUMG.SocialChatChannelTab
class USocialChatChannelTab : public UCommonButton
{
public:
	class USocialChatChannel*                    ChatChannel;                                       // 0xB28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      CommonText_ChannelName;                            // 0xB30(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialChatChannelTab* GetDefaultObj();

};

// 0x58 (0x280 - 0x228)
// Class SocialUMG.SocialChatContainer
class USocialChatContainer : public UUserWidget
{
public:
	class USocialChatManager*                    ChatManager;                                       // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class USocialChatChannel*>            JoinedChannels;                                    // 0x230(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class USocialChatChannel*                    ActiveChannel;                                     // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonGroup*                    TabButtonGroup;                                    // 0x248(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_867[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialChatMessageList*                ChatList_Messages;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditableText*                         EditableText_MessageEntry;                         // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_SendMessage;                                // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_JoinedChannels;                           // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                            ScrollBox_Channels;                                // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialChatContainer* GetDefaultObj();

	void SendCurrentMessage();
	void OnChatOpenChanged(bool bShouldBeOpen);
	void HandleRightTabPressed();
	void HandleLeftTabPressed();
	void FocusEditableText();
	void DynamicHandleMessageTextCommitted(class FText& MessageText, enum class ETextCommit CommitMethod);
};

// 0x168 (0x390 - 0x228)
// Class SocialUMG.SocialChatMessageEntry
class USocialChatMessageEntry : public UUserWidget
{
public:
	uint8                                        Pad_873[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSocialChatMessageEntryStyle          DefaultStyle;                                      // 0x240(0x120)(Edit, Protected, NativeAccessSpecifierProtected)
	class UTextBlock*                            Text_Message;                                      // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                            Text_SenderName;                                   // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                            Text_ChannelName;                                  // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                            Text_Timestamp;                                    // 0x378(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                        HorizontalBox_Header;                              // 0x380(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UButton*                               Button_MessageButton;                              // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialChatMessageEntry* GetDefaultObj();

	void OnMessageSet();
	bool CanInteract();
};

// 0xD8 (0x2E0 - 0x208)
// Class SocialUMG.SocialChatMessageList
class USocialChatMessageList : public UListViewBase
{
public:
	uint8                                        Pad_87A[0xA8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsFocusable;                                      // 0x2B0(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_87C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialChatChannel*                    ActiveChannel;                                     // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_87D[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialChatMessageList* GetDefaultObj();

};

// 0x60 (0xB88 - 0xB28)
// Class SocialUMG.SocialInteractionButton
class USocialInteractionButton : public UCommonButton
{
public:
	struct FLinearColor                          DefaultIndicatorColor;                             // 0xB28(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          AlertingIndicatorColor;                            // 0xB38(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_883[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_InteractionName;                              // 0xB78(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBorder*                               Border_InteractionIndicator;                       // 0xB80(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialInteractionButton* GetDefaultObj();

	void OnInteractionSet();
	bool IsPlatformOnlyFriend();
	class FName GetInteractionName();
};

// 0x80 (0x2A8 - 0x228)
// Class SocialUMG.SocialInteractionMenu
class USocialInteractionMenu : public UUserWidget
{
public:
	class UObject*                               SocialContext;                                     // 0x228(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_88D[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicEntryBox*                      EntryBox_PositiveInteractions;                     // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_NegativeInteractions;                     // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpacer*                               Spacer_InteractionSeparator;                       // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonWidgetSwitcher*                 Switcher_Confirmation;                             // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                            Text_ConfirmationLabel;                            // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Confirm;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Decline;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialInteractionMenu* GetDefaultObj();

	void OnToggleConfirmation(bool bIsVisible);
	void OnSocialContextSet();
	class UWidget* GetFirstEntryToCenter();
};

// 0x68 (0x150 - 0xE8)
// Class SocialUMG.DesignerPreviewChatChannel
class UDesignerPreviewChatChannel : public USocialChatChannel
{
public:
	uint8                                        Pad_893[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDesignerPreviewChatChannel* GetDefaultObj();

};

// 0x18 (0xB40 - 0xB28)
// Class SocialUMG.SocialListEntry
class USocialListEntry : public UCommonButton
{
public:
	uint8                                        Pad_89D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            Text_UserName;                                     // 0xB30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                           MenuAnchor_Actions;                                // 0xB38(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialListEntry* GetDefaultObj();

	class UWidget* HandleGetMenuContent();
};

// 0x10 (0xB50 - 0xB40)
// Class SocialUMG.SocialUserListEntry
class USocialUserListEntry : public USocialListEntry
{
public:
	class USocialUser*                           SocialUser;                                        // 0xB40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            Text_RichPresence;                                 // 0xB48(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialUserListEntry* GetDefaultObj();

	void OnUserPresenceChanged(enum class EOnlineStatus OnlineStatus);
};

// 0x8 (0xB48 - 0xB40)
// Class SocialUMG.SocialInviteListEntry
class USocialInviteListEntry : public USocialListEntry
{
public:
	class USocialInvite*                         SocialInvite;                                      // 0xB40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialInviteListEntry* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class SocialUMG.SocialUserListHeader
class USocialUserListHeader : public UObject
{
public:
	uint8                                        Pad_8AF[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialUserListHeader* GetDefaultObj();

};

// 0x18 (0x80 - 0x68)
// Class SocialUMG.SocialInviteListHeader
class USocialInviteListHeader : public USocialUserListHeader
{
public:
	uint8                                        Pad_8BA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USocialInvite*>                 SocialInvites;                                     // 0x70(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialInviteListHeader* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class SocialUMG.SocialInvite
class USocialInvite : public UObject
{
public:
	class USocialUser*                           OtherUser;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialInvite* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class SocialUMG.SocialFriendInvite
class USocialFriendInvite : public USocialInvite
{
public:

	static class UClass* StaticClass();
	static class USocialFriendInvite* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class SocialUMG.SocialPartyInvite
class USocialPartyInvite : public USocialInvite
{
public:

	static class UClass* StaticClass();
	static class USocialPartyInvite* GetDefaultObj();

};

// 0x20 (0xB48 - 0xB28)
// Class SocialUMG.SocialUserListHeaderEntry
class USocialUserListHeaderEntry : public UCommonButton
{
public:
	uint8                                        Pad_8D1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialUserListHeader*                 ListHeader;                                        // 0xB30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            Text_ListName;                                     // 0xB38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                            Text_NumEntries;                                   // 0xB40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialUserListHeaderEntry* GetDefaultObj();

};

// 0x30 (0x3B8 - 0x388)
// Class SocialUMG.SocialUserTreeView
class USocialUserTreeView : public UTreeView
{
public:
	TSubclassOf<class USocialUserListEntry>      UserEntryWidgetClass;                              // 0x388(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USocialInviteListEntry>    InviteEntryWidgetClass;                            // 0x390(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USocialInteractionMenu>    ActionMenuClass;                                   // 0x398(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USocialInteractionMenu*                ActionMenu;                                        // 0x3A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8D4[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialUserTreeView* GetDefaultObj();

};

}



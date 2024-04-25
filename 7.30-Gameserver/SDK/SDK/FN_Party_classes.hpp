#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class Party.Chatroom
class UChatroom : public UObject
{
public:
	class FString                                CurrentChatRoomId;                                 // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxChatRoomRetries;                                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumChatRoomRetries;                                // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46E[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChatroom* GetDefaultObj();

};

// 0x168 (0x190 - 0x28)
// Class Party.SocialManager
class USocialManager : public UObject
{
public:
	uint8                                        Pad_471[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USocialToolkit*>                SocialToolkits;                                    // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_472[0x140];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialManager* GetDefaultObj();

};

// 0x238 (0x260 - 0x28)
// Class Party.SocialParty
class USocialParty : public UObject
{
public:
	uint8                                        Pad_478[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class APartyBeaconClient>        ReservationBeaconClientClass;                      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_479[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      OwningLocalUserId;                                 // 0x70(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      CurrentLeaderId;                                   // 0x98(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FUniqueNetIdRepl, class UPartyMember*> PartyMembersById;                                  // 0xC0(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_47A[0x80];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APartyBeaconClient*                    ReservationBeaconClient;                           // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_47B[0xC8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialParty* GetDefaultObj();

};

// 0xB0 (0xD8 - 0x28)
// Class Party.PartyMember
class UPartyMember : public UObject
{
public:
	uint8                                        Pad_47E[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialUser*                           SocialUser;                                        // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_47F[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPartyMember* GetDefaultObj();

};

// 0x1A0 (0x1C8 - 0x28)
// Class Party.SocialToolkit
class USocialToolkit : public UObject
{
public:
	uint8                                        Pad_482[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialUser*                           LocalUser;                                         // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USocialUser*>                   AllUsers;                                          // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_484[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULocalPlayer*                          LocalPlayerOwner;                                  // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USocialChatManager*                    SocialChatManager;                                 // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_485[0xF0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialToolkit* GetDefaultObj();

};

// 0x150 (0x178 - 0x28)
// Class Party.SocialChatManager
class USocialChatManager : public UObject
{
public:
	TMap<TWeakObjectPtr<class USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser;                        // 0x28(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FString, class USocialChatRoom*>  ChatRoomsById;                                     // 0x78(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FString, class USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName;                     // 0xC8(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_48D[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialChatManager* GetDefaultObj();

};

// 0xC0 (0xE8 - 0x28)
// Class Party.SocialChatChannel
class USocialChatChannel : public UObject
{
public:
	uint8                                        Pad_48E[0xC0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialChatChannel* GetDefaultObj();

};

// 0x10 (0xF8 - 0xE8)
// Class Party.SocialChatRoom
class USocialChatRoom : public USocialChatChannel
{
public:
	uint8                                        Pad_490[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialChatRoom* GetDefaultObj();

};

// 0x0 (0xF8 - 0xF8)
// Class Party.SocialPartyChatRoom
class USocialPartyChatRoom : public USocialChatRoom
{
public:

	static class UClass* StaticClass();
	static class USocialPartyChatRoom* GetDefaultObj();

};

// 0x8 (0xF0 - 0xE8)
// Class Party.SocialPrivateMessageChannel
class USocialPrivateMessageChannel : public USocialChatChannel
{
public:
	class USocialUser*                           TargetUser;                                        // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialPrivateMessageChannel* GetDefaultObj();

};

// 0x0 (0xE8 - 0xE8)
// Class Party.SocialReadOnlyChatChannel
class USocialReadOnlyChatChannel : public USocialChatChannel
{
public:

	static class UClass* StaticClass();
	static class USocialReadOnlyChatChannel* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Party.SocialSettings
class USocialSettings : public UObject
{
public:
	TArray<class FName>                          OssNamesWithEnvironmentIdPrefix;                   // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	int32                                        DefaultMaxPartySize;                               // 0x38(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPreferPlatformInvites;                            // 0x3C(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_498[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialSettings* GetDefaultObj();

};

// 0x110 (0x138 - 0x28)
// Class Party.SocialUser
class USocialUser : public UObject
{
public:
	uint8                                        Pad_49B[0x110];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialUser* GetDefaultObj();

};

}



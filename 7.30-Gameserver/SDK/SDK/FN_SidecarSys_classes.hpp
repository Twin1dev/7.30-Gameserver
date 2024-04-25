#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0xD8 - 0x28)
// Class SidecarSys.SidecarSys
class USidecarSys : public UObject
{
public:
	TMap<class FString, struct FSidecarFileInfo> FileInfoMap;                                       // 0x28(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                DssDownloadUrl;                                    // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                DssCheckoutUrl;                                    // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                DssUploadUrl;                                      // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                DssRestoreUrl;                                     // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                DssCheckinUrl;                                     // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D8C[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USidecarSys* GetDefaultObj();

};

}



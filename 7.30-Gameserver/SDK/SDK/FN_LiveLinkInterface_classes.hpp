#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkSourceFactory
class ULiveLinkSourceFactory : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkSourceFactory* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class LiveLinkInterface.LiveLinkSourceSettings
class ULiveLinkSourceSettings : public UObject
{
public:
	enum class ELiveLinkSourceMode               Mode;                                              // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLiveLinkInterpolationSettings        InterpolationSettings;                             // 0x2C(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLiveLinkTimeSynchronizationSettings  TimeSynchronizationSettings;                       // 0x30(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULiveLinkSourceSettings* GetDefaultObj();

};

}



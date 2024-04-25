#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x80 - 0x80)
// Class LiveStreamVoice.LiveStreamVoiceChannel
class ULiveStreamVoiceChannel : public UVoiceChannel
{
public:

	static class UClass* StaticClass();
	static class ULiveStreamVoiceChannel* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class LiveStreamVoice.LiveStreamVoiceSubsystem
class ULiveStreamVoiceSubsystem : public UGameInstanceSubsystem
{
public:
	struct FVoiceSettings                        PlaybackSettings;                                  // 0x28(0x18)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ULiveStreamVoiceSubsystem* GetDefaultObj();

	void SetVoiceSettings(struct FVoiceSettings& InSettings);
	void EnableLocalVoiceProcessing(uint8 LocalUserNum, bool bEnable);
	void ClearVoiceSettings();
};

}



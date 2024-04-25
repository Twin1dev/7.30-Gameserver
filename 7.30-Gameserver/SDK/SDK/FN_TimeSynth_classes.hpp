#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class TimeSynth.TimeSynthVolumeGroup
class UTimeSynthVolumeGroup : public UObject
{
public:
	float                                        DefaultVolume;                                     // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_892[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTimeSynthVolumeGroup* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class TimeSynth.TimeSynthClip
class UTimeSynthClip : public UObject
{
public:
	TArray<struct FTimeSynthClipSound>           Sounds;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                             VolumeScaleDb;                                     // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PitchScaleSemitones;                               // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimeSynthTimeDef                     FadeInTime;                                        // 0x48(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bApplyFadeOut;                                     // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_895[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimeSynthTimeDef                     FadeOutTime;                                       // 0x54(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTimeSynthTimeDef                     ClipDuration;                                      // 0x5C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class ETimeSynthEventClipQuantization   ClipQuantization;                                  // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_896[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTimeSynthClip* GetDefaultObj();

};

// 0x9A0 (0xFB0 - 0x610)
// Class TimeSynth.TimeSynthComponent
class UTimeSynthComponent : public USynthComponent
{
public:
	struct FTimeSynthQuantizationSettings        QuantizationSettings;                              // 0x610(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bEnableSpectralAnalysis : 1;                       // Mask: 0x1, PropSize: 0x10x624(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_5D : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_8DF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                FrequenciesToAnalyze;                              // 0x628(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ETimeSynthFFTSize                 FFTSize;                                           // 0x638(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnPlaybackTime;                                    // 0x640(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        bIsFilterAEnabled : 1;                             // Mask: 0x1, PropSize: 0x10x650(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsFilterBEnabled : 1;                             // Mask: 0x2, PropSize: 0x10x650(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_5E : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_8E2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimeSynthFilterSettings              FilterASettings;                                   // 0x654(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTimeSynthFilterSettings              FilterBSettings;                                   // 0x660(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bIsEnvelopeFollowerEnabled : 1;                    // Mask: 0x1, PropSize: 0x10x66C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_5F : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_8E4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimeSynthEnvelopeFollowerSettings    EnvelopeFollowerSettings;                          // 0x670(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E5[0x934];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTimeSynthComponent* GetDefaultObj();

	void StopSoundsOnVolumeGroupWithFadeOverride(class UTimeSynthVolumeGroup* InVolumeGroup, enum class ETimeSynthEventClipQuantization EventQuantization, struct FTimeSynthTimeDef& FadeTime);
	void StopSoundsOnVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, enum class ETimeSynthEventClipQuantization EventQuantization);
	void StopClipWithFadeOverride(const struct FTimeSynthClipHandle& InClipHandle, enum class ETimeSynthEventClipQuantization EventQuantization, struct FTimeSynthTimeDef& FadeTime);
	void StopClip(const struct FTimeSynthClipHandle& InClipHandle, enum class ETimeSynthEventClipQuantization EventQuantization);
	void SetVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec);
	void SetSeed(int32 InSeed);
	void SetQuantizationSettings(struct FTimeSynthQuantizationSettings& InQuantizationSettings);
	void SetFilterSettings(enum class ETimeSynthFilter Filter, struct FTimeSynthFilterSettings& InSettings);
	void SetFilterEnabled(enum class ETimeSynthFilter Filter, bool bIsEnabled);
	void SetFFTSize(enum class ETimeSynthFFTSize InFFTSize);
	void SetEnvelopeFollowerSettings(struct FTimeSynthEnvelopeFollowerSettings& InSettings);
	void SetEnvelopeFollowerEnabled(bool bInIsEnabled);
	void SetBPM(float BeatsPerMinute);
	void ResetSeed();
	struct FTimeSynthClipHandle PlayClip(class UTimeSynthClip* InClip, class UTimeSynthVolumeGroup* InVolumeGroup);
	TArray<struct FTimeSynthSpectralData> GetSpectralData();
	float GetEnvelopeFollowerValue();
	int32 GetBPM();
	void AddQuantizationEventDelegate(enum class ETimeSynthEventQuantization QuantizationType, UDelegateProperty_& OnQuantizationEvent);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass MovieWidget.MovieWidget_C
class UMovieWidget_C : public UFortMovieWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Video_Image;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             Video_ScaleBox;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Shouldloop;                                        // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         AutoPlay;                                          // 0x279(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         MaintainAspectRatio;                               // 0x27A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_505D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnMediaReadyToPlay;                                // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnMediaFailedToOpen;                               // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UMovieWidget_C* GetDefaultObj();

	void SetDelayedContentValues(bool Temp_bool_Variable, enum class EStretch Temp_byte_Variable, enum class EStretch Temp_byte_Variable1, enum class EStretch K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMediaTexture* CallFunc_GetMediaTexture_ReturnValue);
	void Play(bool ShouldRewind);
	void StopPlaying();
	void Init(class UMediaSource* InMediaSource, class UObject* InMediaSoundWave, int32 AudioTrack, const struct FMediaPlayerTrackOptions& K2Node_MakeStruct_MediaPlayerTrackOptions, bool CallFunc_HasPlayerForSource_ReturnValue, const struct FMediaPlayerOptions& K2Node_MakeStruct_MediaPlayerOptions, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_SetMediaSource_ReturnValue, bool CallFunc_SetMediaSource_ReturnValue1);
	void Destruct();
	void MediaDimensionsUpdated(float NewWidth, float NewHeight);
	void OnMediaLoaded();
	void ExecuteUbergraph_MovieWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_NewWidth, float K2Node_Event_NewHeight, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void OnMediaFailedToOpen__DelegateSignature();
	void OnMediaReadyToPlay__DelegateSignature();
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x3B1 - 0x358)
// WidgetBlueprintGeneratedClass Cinematic.Cinematic_C
class UCinematic_C : public UFortUIStateWidget_NUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                            LocalizedAudioOnlyMovieSlot;                       // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetStack*                    MainContentStack;                                  // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            MovieSlot;                                         // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayMovieOverlay;                               // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USubtitles_C*                          Subtitles;                                         // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTeamMicStack_C*                       TeamMicStack;                                      // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuildWatermark_C*                     Widget_BuildWatermark;                             // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovieWidget_C*                        MovieWidget;                                       // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMediaSubtitlesPlayer*             SubtitlesPlayer;                                   // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CinematicMediaSoundWave;                           // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFinished;                                         // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCinematic_C* GetDefaultObj();

	void GetAudioTrackIndex(int32* AudioTrack, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, TArray<class FString>& CallFunc_GetPreferredLanguages_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, const class FString& CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, const struct FCinematicLanuageToTrackStruct& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1);
	void StopAndClearSubtitles(bool CallFunc_IsValid_ReturnValue);
	void ClearOldSubtitlesIfNecessary(bool NewSubtitlesExist, class UFortMediaSubtitlesPlayer* NewSubtitles, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable1, bool Temp_bool_Variable, const class FString& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
	void SetMoviePlaying(bool MoviePlaying);
	void ClearMovieWidget(class UFortMovieWidget*& MovieWidgetToClear, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void ClearMovieSlot(class UPanelWidget*& MovieSlotToClear);
	class UWidget* PopContentWidgetInternal(const struct FContentPushState& State, class UWidget* CallFunc_PopWidget_ReturnValue);
	void SkipMovie(class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_Pause_ReturnValue);
	void ClearMovie();
	void ShowMovie(class UMediaSource* MediaSource, class UNamedSlot*& MovieSlot, class UMovieWidget_C*& MovieWidget, int32 CallFunc_GetAudioTrackIndex_AudioTrack, class UPanelSlot* CallFunc_AddChild_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue, class UMovieWidget_C* CallFunc_Create_ReturnValue);
	void Construct();
	void HandleClientEvent_QueueCinematic(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void Destruct();
	void HandleEndReached();
	void HandleClientEvent_SkipCinematic(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State);
	void OnEnterState(enum class EFortUIState PreviousUIState);
	void OnExitState(enum class EFortUIState NextUIState);
	void ExecuteUbergraph_Cinematic(int32 EntryPoint, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, class UObject* K2Node_HandleClientEvent_EventSource1, class UObject* K2Node_HandleClientEvent_EventFocus1, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent1, class UFortMediaSubtitlesPlayer* K2Node_DynamicCast_AsFort_Media_Subtitles_Player, bool K2Node_DynamicCast_bSuccess, class UMediaSource* K2Node_DynamicCast_AsMedia_Source, bool K2Node_DynamicCast_bSuccess1, class UWidget* K2Node_Event_Widget, const struct FContentPushState& K2Node_Event_State, enum class EFortUIState K2Node_Event_PreviousUIState, enum class EFortUIState K2Node_Event_NextUIState, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, bool CallFunc_IsValid_ReturnValue, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue1, bool CallFunc_IsPreparing_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
};

}



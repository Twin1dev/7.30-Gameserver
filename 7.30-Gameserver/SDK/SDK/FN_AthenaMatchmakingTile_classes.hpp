#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14C (0xD44 - 0xBF8)
// WidgetBlueprintGeneratedClass AthenaMatchmakingTile.AthenaMatchmakingTile_C
class UAthenaMatchmakingTile_C : public UFortAthenaMatchmakingTile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FlareName;                                         // 0xC00(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      NewModeIntro_1_Setup;                              // 0xC08(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      NewModeIntro_0;                                    // 0xC10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      NewModeSetup;                                      // 0xC18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      NewModeIntro;                                      // 0xC20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      GameModeSelection_NoOpacity;                       // 0xC28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      IntroAndOutro;                                     // 0xC30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ConfirmSelection;                                  // 0xC38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      GameModeSelection;                                 // 0xC40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 AdSpaceSwitcher;                                   // 0xC48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ConfirmSelectionFlash;                             // 0xC50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ConfirmSelectionShine;                             // 0xC58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DisabledGray;                                      // 0xC60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Fill;                                              // 0xC68(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                GameModeGlow;                                      // 0xC70(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                GameModeIcon;                                      // 0xC78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             GameModeImageScale;                                // 0xC80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              GameModeSB;                                        // 0xC88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              HeistLTMTileBacking;                               // 0xC90(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               IconSpacer;                                        // 0xC98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_4;                                           // 0xCA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageMinusFlareMinusBtm;                           // 0xCA8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LoadingImage;                                      // 0xCB0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              LoadingImageOvr;                                   // 0xCB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 LoadSwitcher;                                      // 0xCC0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LTMModeSubIcon;                                    // 0xCC8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Tile;                                      // 0xCD0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         SpecialAdSpace;                                    // 0xCD8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SpecialLTMUnderlay;                                // 0xCE0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        SubGameModeNameHB;                                 // 0xCE8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               TileReveal;                                        // 0xCF0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                UnhoveredVignette;                                 // 0xCF8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               MyPlaylist;                                        // 0xD00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasTileReveal;                                    // 0xD08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F22[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlaylistFrontEndData                 RepresentedPlaylist;                               // 0xD10(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        NumTilesInRow;                                     // 0xD40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaMatchmakingTile_C* GetDefaultObj();

	void PlayIntroOrOutro(bool PlayIntro, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1);
	void BP_OnSelected();
	void BP_OnDeselected();
	void SetTileSize(int32 NumRowTiles);
	void PlaylistChanged(struct FPlaylistFrontEndData& PlaylistToRepresent);
	void TilePlaylistSetAsMatchmakingPlaylist();
	void OnImageLoadingComplete();
	void BP_OnHovered();
	void Construct();
	void SetDefaultImage();
	void BP_OnClicked();
	void OnCMSDataUpdated();
	void PlayTileReveal();
	void UpdateTileAvailability(bool Available);
	void ExecuteUbergraph_AthenaMatchmakingTile(int32 EntryPoint, int32 CallFunc_Clamp_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, enum class EPlaylistAdvertisementType Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class EPlaylistAdvertisementType Temp_byte_Variable6, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, enum class EFortMatchmakingTileStyle Temp_byte_Variable7, class UWidget* Temp_object_Variable, enum class EFortMatchmakingTileStyle Temp_byte_Variable8, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility Temp_byte_Variable10, enum class ESlateVisibility Temp_byte_Variable11, enum class ESlateVisibility Temp_byte_Variable12, enum class EFortMatchmakingTileStyle Temp_byte_Variable13, class UWidgetAnimation* Temp_object_Variable1, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable14, enum class ESlateVisibility Temp_byte_Variable15, class UCMSContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable2, bool CallFunc_IsNewPlaylistInformationAvailable_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable1, float Temp_float_Variable, float Temp_float_Variable1, float Temp_float_Variable2, float Temp_float_Variable3, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable16, enum class ESlateVisibility Temp_byte_Variable17, bool Temp_bool_Variable4, enum class ESlateVisibility Temp_byte_Variable18, enum class ESlateVisibility Temp_byte_Variable19, bool Temp_bool_Variable5, float Temp_float_Variable4, float Temp_float_Variable5, int32 Temp_int_Variable2, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector2D& Temp_struct_Variable, int32 K2Node_Select_Default, const struct FVector2D& Temp_struct_Variable1, float K2Node_Select1_Default, const struct FVector2D& Temp_struct_Variable2, bool Temp_bool_Variable6, int32 Temp_int_Variable3, int32 K2Node_Event_NumRowTiles, const struct FPlaylistFrontEndData& K2Node_Event_PlaylistToRepresent, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, class FText K2Node_Select3_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1, bool CallFunc_TextIsEmpty_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue1, bool Temp_bool_Variable7, enum class ESlateVisibility Temp_byte_Variable20, enum class ESlateVisibility Temp_byte_Variable21, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable8, enum class ESlateVisibility Temp_byte_Variable22, enum class ESlateVisibility K2Node_Select4_Default, class UWidget* K2Node_Select5_Default, enum class ESlateVisibility Temp_byte_Variable23, class UWidgetAnimation* K2Node_Select6_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue3, bool K2Node_Event_Available, enum class ESlateVisibility K2Node_Select7_Default, enum class ESlateVisibility K2Node_Select8_Default, bool Temp_bool_Variable9, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue5, float Temp_float_Variable6, float Temp_float_Variable7, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, class UClass* K2Node_Select9_Default, bool Temp_bool_Variable10, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue1, int32 CallFunc_Len_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Select10_Default, enum class ESlateVisibility K2Node_Select11_Default, bool CallFunc_EqualEqual_StrStr_ReturnValue2, enum class ESlateVisibility K2Node_Select12_Default, bool CallFunc_EqualEqual_StrStr_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue4, bool CallFunc_TextIsEmpty_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue1, enum class ESlateVisibility K2Node_Select13_Default, int32 K2Node_Select14_Default, enum class ESlateVisibility K2Node_Select15_Default, const struct FVector2D& K2Node_Select16_Default, float K2Node_Select17_Default);
};

}



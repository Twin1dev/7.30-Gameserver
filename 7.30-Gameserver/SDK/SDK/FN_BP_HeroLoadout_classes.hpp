#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x398 - 0x330)
// BlueprintGeneratedClass BP_HeroLoadout.BP_HeroLoadout_C
class ABP_HeroLoadout_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                     DirectionLight;                                    // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkyLight*                             SkyLight;                                          // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APointLight*>                   Pointlights;                                       // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class AExponentialHeightFog*                 ExponentialHeightFog;                              // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                     DirectionalLight_LowDetailMode;                    // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AEmitter*>                      ParticleSystems;                                   // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                         IsActive;                                          // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DebugLOWQualityLighting;                           // 0x381(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ASkyLight*                             SkyLight_LowDetailMode;                            // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExponentialHeightFog*                 ExponentialHeightfog_LowDetailMode;                // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_HeroLoadout_C* GetDefaultObj();

	void SetVisiblityofDetailSpecificMeshes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, TArray<class ABP_DetailLevelMesh_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_GetShadowQuality_ReturnValue, class ABP_DetailLevelMesh_C* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, class ABP_DetailLevelMesh_C* K2Node_DynamicCast_AsBP_Detail_Level_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetVisiblityofSceneLighting(bool Activate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsMobilePlatform_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue4, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_IsValid_ReturnValue6, bool CallFunc_IsValid_ReturnValue7, bool CallFunc_IsMobilePlatform_ReturnValue1, bool CallFunc_IsValid_ReturnValue8, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue1, bool CallFunc_IsValid_ReturnValue9, int32 CallFunc_GetShadowQuality_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_IsValid_ReturnValue10, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_IsMobilePlatform_ReturnValue2, bool CallFunc_IsValid_ReturnValue11, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_IsValid_ReturnValue13, bool CallFunc_IsValid_ReturnValue14, bool CallFunc_IsValid_ReturnValue15, bool CallFunc_IsValid_ReturnValue16, bool CallFunc_IsValid_ReturnValue17, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue2, int32 CallFunc_GetShadowQuality_ReturnValue2, class AEmitter* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue2, bool CallFunc_IsValid_ReturnValue18, bool CallFunc_BooleanOR_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue5, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue19, class APointLight* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_IsValid_ReturnValue20, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_IsValid_ReturnValue21, bool CallFunc_IsValid_ReturnValue22);
	void UserConstructionScript();
	void DisableLobbySetLighting();
	void UpdateSettings();
	void EnableLobbySetLighting();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_HeroLoadout(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
};

}



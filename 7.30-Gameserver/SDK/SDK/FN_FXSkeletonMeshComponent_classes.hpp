#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xBE0 - 0xBE0)
// BlueprintGeneratedClass FXSkeletonMeshComponent.FXSkeletonMeshComponent_C
class UFXSkeletonMeshComponent_C : public UFortFXSkeletonMeshComponent
{
public:

	static class UClass* StaticClass();
	static class UFXSkeletonMeshComponent_C* GetDefaultObj();

	void ApplyAwakenEffect();
	void ApplyEffect(class UMaterialInterface* SourceMaterial, float FadeInTime, float Duration, float FadeOutTime, class UMaterialInstanceDynamic* Effect_MID, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 Temp_int_Variable, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, int32 CallFunc_GetNumMaterials_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void ApplyBuildingHitEffect(class UMaterialInstanceDynamic* Effect_MID);
};

}



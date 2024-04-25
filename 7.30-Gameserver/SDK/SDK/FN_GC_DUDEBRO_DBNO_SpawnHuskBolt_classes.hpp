#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1A0 - 0x1A0)
// BlueprintGeneratedClass GC_DUDEBRO_DBNO_SpawnHuskBolt.GC_DUDEBRO_DBNO_SpawnHuskBolt_C
class UGC_DUDEBRO_DBNO_SpawnHuskBolt_C : public UFortGameplayCueNotify_Burst
{
public:

	static class UClass* StaticClass();
	static class UGC_DUDEBRO_DBNO_SpawnHuskBolt_C* GetDefaultObj();

	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
};

}



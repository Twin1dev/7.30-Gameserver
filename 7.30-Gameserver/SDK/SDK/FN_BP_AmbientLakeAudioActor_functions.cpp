#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AmbientLakeAudioActor.BP_AmbientLakeAudioActor_C
// (Actor)

class UClass* ABP_AmbientLakeAudioActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AmbientLakeAudioActor_C");

	return Clss;
}


// BP_AmbientLakeAudioActor_C BP_AmbientLakeAudioActor.Default__BP_AmbientLakeAudioActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AmbientLakeAudioActor_C* ABP_AmbientLakeAudioActor_C::GetDefaultObj()
{
	static class ABP_AmbientLakeAudioActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AmbientLakeAudioActor_C*>(ABP_AmbientLakeAudioActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AmbientLakeAudioActor.BP_AmbientLakeAudioActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AmbientLakeAudioActor_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AmbientLakeAudioActor_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}



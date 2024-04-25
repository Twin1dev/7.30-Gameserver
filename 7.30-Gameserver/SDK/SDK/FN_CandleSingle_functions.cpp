#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CandleSingle.CandleSingle_C
// (Actor)

class UClass* ACandleSingle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CandleSingle_C");

	return Clss;
}


// CandleSingle_C CandleSingle.Default__CandleSingle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACandleSingle_C* ACandleSingle_C::GetDefaultObj()
{
	static class ACandleSingle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACandleSingle_C*>(ACandleSingle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CandleSingle.CandleSingle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACandleSingle_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CandleSingle_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}



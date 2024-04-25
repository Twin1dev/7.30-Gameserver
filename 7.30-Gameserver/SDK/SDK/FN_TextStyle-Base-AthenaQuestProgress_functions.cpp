#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-AthenaQuestProgress.TextStyle-Base-AthenaQuestProgress_C
// (None)

class UClass* UTextStyleMinusBaseMinusAthenaQuestProgress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-AthenaQuestProgress_C");

	return Clss;
}


// TextStyle-Base-AthenaQuestProgress_C TextStyle-Base-AthenaQuestProgress.Default__TextStyle-Base-AthenaQuestProgress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusAthenaQuestProgress_C* UTextStyleMinusBaseMinusAthenaQuestProgress_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusAthenaQuestProgress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusAthenaQuestProgress_C*>(UTextStyleMinusBaseMinusAthenaQuestProgress_C::StaticClass()->DefaultObject);

	return Default;
}

}



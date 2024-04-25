#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B-AthenaXP.TextStyle-Base-S-B-AthenaXP_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBMinusAthenaXP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B-AthenaXP_C");

	return Clss;
}


// TextStyle-Base-S-B-AthenaXP_C TextStyle-Base-S-B-AthenaXP.Default__TextStyle-Base-S-B-AthenaXP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBMinusAthenaXP_C* UTextStyleMinusBaseMinusSMinusBMinusAthenaXP_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBMinusAthenaXP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBMinusAthenaXP_C*>(UTextStyleMinusBaseMinusSMinusBMinusAthenaXP_C::StaticClass()->DefaultObject);

	return Default;
}

}



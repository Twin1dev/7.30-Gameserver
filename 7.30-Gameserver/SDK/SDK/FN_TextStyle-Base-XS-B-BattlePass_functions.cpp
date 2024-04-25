#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-BattlePass.TextStyle-Base-XS-B-BattlePass_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusBattlePass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-BattlePass_C");

	return Clss;
}


// TextStyle-Base-XS-B-BattlePass_C TextStyle-Base-XS-B-BattlePass.Default__TextStyle-Base-XS-B-BattlePass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusBattlePass_C* UTextStyleMinusBaseMinusXSMinusBMinusBattlePass_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusBattlePass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusBattlePass_C*>(UTextStyleMinusBaseMinusXSMinusBMinusBattlePass_C::StaticClass()->DefaultObject);

	return Default;
}

}



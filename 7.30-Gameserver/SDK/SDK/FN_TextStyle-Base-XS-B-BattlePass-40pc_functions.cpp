#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-BattlePass-40pc.TextStyle-Base-XS-B-BattlePass-40pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusBattlePassMinus40pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-BattlePass-40pc_C");

	return Clss;
}


// TextStyle-Base-XS-B-BattlePass-40pc_C TextStyle-Base-XS-B-BattlePass-40pc.Default__TextStyle-Base-XS-B-BattlePass-40pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusBattlePassMinus40pc_C* UTextStyleMinusBaseMinusXSMinusBMinusBattlePassMinus40pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusBattlePassMinus40pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusBattlePassMinus40pc_C*>(UTextStyleMinusBaseMinusXSMinusBMinusBattlePassMinus40pc_C::StaticClass()->DefaultObject);

	return Default;
}

}



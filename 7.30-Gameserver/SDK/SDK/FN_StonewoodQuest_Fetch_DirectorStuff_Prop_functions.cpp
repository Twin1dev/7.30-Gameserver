#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StonewoodQuest_Fetch_DirectorStuff_Prop.StonewoodQuest_Fetch_DirectorStuff_Prop_C
// (Actor)

class UClass* AStonewoodQuest_Fetch_DirectorStuff_Prop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StonewoodQuest_Fetch_DirectorStuff_Prop_C");

	return Clss;
}


// StonewoodQuest_Fetch_DirectorStuff_Prop_C StonewoodQuest_Fetch_DirectorStuff_Prop.Default__StonewoodQuest_Fetch_DirectorStuff_Prop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStonewoodQuest_Fetch_DirectorStuff_Prop_C* AStonewoodQuest_Fetch_DirectorStuff_Prop_C::GetDefaultObj()
{
	static class AStonewoodQuest_Fetch_DirectorStuff_Prop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStonewoodQuest_Fetch_DirectorStuff_Prop_C*>(AStonewoodQuest_Fetch_DirectorStuff_Prop_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tree_Medium_03.Tree_Medium_03_C
// (Actor)

class UClass* ATree_Medium_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tree_Medium_03_C");

	return Clss;
}


// Tree_Medium_03_C Tree_Medium_03.Default__Tree_Medium_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATree_Medium_03_C* ATree_Medium_03_C::GetDefaultObj()
{
	static class ATree_Medium_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATree_Medium_03_C*>(ATree_Medium_03_C::StaticClass()->DefaultObject);

	return Default;
}

}



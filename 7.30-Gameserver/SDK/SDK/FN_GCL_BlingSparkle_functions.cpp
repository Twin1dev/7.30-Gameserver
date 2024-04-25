#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCL_BlingSparkle.GCL_BlingSparkle_C
// (Actor)

class UClass* AGCL_BlingSparkle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCL_BlingSparkle_C");

	return Clss;
}


// GCL_BlingSparkle_C GCL_BlingSparkle.Default__GCL_BlingSparkle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCL_BlingSparkle_C* AGCL_BlingSparkle_C::GetDefaultObj()
{
	static class AGCL_BlingSparkle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCL_BlingSparkle_C*>(AGCL_BlingSparkle_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CubeDamageResponse.GE_CubeDamageResponse_C
// (None)

class UClass* UGE_CubeDamageResponse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CubeDamageResponse_C");

	return Clss;
}


// GE_CubeDamageResponse_C GE_CubeDamageResponse.Default__GE_CubeDamageResponse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CubeDamageResponse_C* UGE_CubeDamageResponse_C::GetDefaultObj()
{
	static class UGE_CubeDamageResponse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CubeDamageResponse_C*>(UGE_CubeDamageResponse_C::StaticClass()->DefaultObject);

	return Default;
}

}



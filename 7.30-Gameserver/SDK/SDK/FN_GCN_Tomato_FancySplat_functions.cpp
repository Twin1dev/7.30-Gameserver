#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Tomato_FancySplat.GCN_Tomato_FancySplat_C
// (None)

class UClass* UGCN_Tomato_FancySplat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Tomato_FancySplat_C");

	return Clss;
}


// GCN_Tomato_FancySplat_C GCN_Tomato_FancySplat.Default__GCN_Tomato_FancySplat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Tomato_FancySplat_C* UGCN_Tomato_FancySplat_C::GetDefaultObj()
{
	static class UGCN_Tomato_FancySplat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Tomato_FancySplat_C*>(UGCN_Tomato_FancySplat_C::StaticClass()->DefaultObject);

	return Default;
}

}



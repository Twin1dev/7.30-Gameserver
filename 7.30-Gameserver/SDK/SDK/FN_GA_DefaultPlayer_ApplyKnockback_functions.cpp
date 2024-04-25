#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_DefaultPlayer_ApplyKnockback.GA_DefaultPlayer_ApplyKnockback_C
// (None)

class UClass* UGA_DefaultPlayer_ApplyKnockback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_DefaultPlayer_ApplyKnockback_C");

	return Clss;
}


// GA_DefaultPlayer_ApplyKnockback_C GA_DefaultPlayer_ApplyKnockback.Default__GA_DefaultPlayer_ApplyKnockback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_DefaultPlayer_ApplyKnockback_C* UGA_DefaultPlayer_ApplyKnockback_C::GetDefaultObj()
{
	static class UGA_DefaultPlayer_ApplyKnockback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_DefaultPlayer_ApplyKnockback_C*>(UGA_DefaultPlayer_ApplyKnockback_C::StaticClass()->DefaultObject);

	return Default;
}

}



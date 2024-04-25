#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-ProgressBar-Collections.Border-ProgressBar-Collections_C
// (None)

class UClass* UBorderMinusProgressBarMinusCollections_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-ProgressBar-Collections_C");

	return Clss;
}


// Border-ProgressBar-Collections_C Border-ProgressBar-Collections.Default__Border-ProgressBar-Collections_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusProgressBarMinusCollections_C* UBorderMinusProgressBarMinusCollections_C::GetDefaultObj()
{
	static class UBorderMinusProgressBarMinusCollections_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusProgressBarMinusCollections_C*>(UBorderMinusProgressBarMinusCollections_C::StaticClass()->DefaultObject);

	return Default;
}

}



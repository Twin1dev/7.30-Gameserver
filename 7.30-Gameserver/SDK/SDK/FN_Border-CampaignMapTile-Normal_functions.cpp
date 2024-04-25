#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-CampaignMapTile-Normal.Border-CampaignMapTile-Normal_C
// (None)

class UClass* UBorderMinusCampaignMapTileMinusNormal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-CampaignMapTile-Normal_C");

	return Clss;
}


// Border-CampaignMapTile-Normal_C Border-CampaignMapTile-Normal.Default__Border-CampaignMapTile-Normal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusCampaignMapTileMinusNormal_C* UBorderMinusCampaignMapTileMinusNormal_C::GetDefaultObj()
{
	static class UBorderMinusCampaignMapTileMinusNormal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusCampaignMapTileMinusNormal_C*>(UBorderMinusCampaignMapTileMinusNormal_C::StaticClass()->DefaultObject);

	return Default;
}

}



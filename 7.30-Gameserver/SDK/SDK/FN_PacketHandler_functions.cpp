#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PacketHandler.HandlerComponentFactory
// (None)

class UClass* UHandlerComponentFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HandlerComponentFactory");

	return Clss;
}


// HandlerComponentFactory PacketHandler.Default__HandlerComponentFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UHandlerComponentFactory* UHandlerComponentFactory::GetDefaultObj()
{
	static class UHandlerComponentFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UHandlerComponentFactory*>(UHandlerComponentFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class PacketHandler.NetAnalyticsAggregatorConfig
// (None)

class UClass* UNetAnalyticsAggregatorConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetAnalyticsAggregatorConfig");

	return Clss;
}


// NetAnalyticsAggregatorConfig PacketHandler.Default__NetAnalyticsAggregatorConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetAnalyticsAggregatorConfig* UNetAnalyticsAggregatorConfig::GetDefaultObj()
{
	static class UNetAnalyticsAggregatorConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetAnalyticsAggregatorConfig*>(UNetAnalyticsAggregatorConfig::StaticClass()->DefaultObject);

	return Default;
}

}



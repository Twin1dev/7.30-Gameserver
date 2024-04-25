#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x3E8 - 0x3B0)
// Class MeshNetwork.MeshBeaconClient
class AMeshBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_669[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bConnectedToRoot;                                  // 0x3D0(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_66A[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMeshBeaconClient* GetDefaultObj();

	void ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo>& LevelVisibilities);
	void ServerUpdateLevelVisibility(class FName PackageName, bool bIsVisible);
	void OnRep_ConnectedToRoot();
};

// 0x8 (0x420 - 0x418)
// Class MeshNetwork.MeshBeaconHost
class AMeshBeaconHost : public AOnlineBeaconHost
{
public:
	int32                                        MaxConnections;                                    // 0x418(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_66E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMeshBeaconHost* GetDefaultObj();

};

// 0x8 (0x360 - 0x358)
// Class MeshNetwork.MeshBeaconHostObject
class AMeshBeaconHostObject : public AOnlineBeaconHostObject
{
public:
	uint8                                        Pad_66F[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMeshBeaconHostObject* GetDefaultObj();

};

// 0x0 (0x1990 - 0x1990)
// Class MeshNetwork.MeshConnection
class UMeshConnection : public UIpConnection
{
public:

	static class UClass* StaticClass();
	static class UMeshConnection* GetDefaultObj();

};

// 0x0 (0x768 - 0x768)
// Class MeshNetwork.MeshNetDriver
class UMeshNetDriver : public UIpNetDriver
{
public:

	static class UClass* StaticClass();
	static class UMeshNetDriver* GetDefaultObj();

};

// 0xA8 (0x1A0 - 0xF8)
// Class MeshNetwork.MeshNetworkComponent
class UMeshNetworkComponent : public UActorComponent
{
public:
	enum class EMeshNetworkRelevancy             MeshRelevancy;                                     // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_678[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, double>                    AggregationTimeouts;                               // 0x100(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, struct FAggregatedFunction> AggregatedFunctions;                               // 0x150(0x50)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMeshNetworkComponent* GetDefaultObj();

	enum class EMeshNetworkNodeType GetMeshNetworkNodeType();
};

// 0x70 (0x98 - 0x28)
// Class MeshNetwork.MeshNetworkSubsystem
class UMeshNetworkSubsystem : public UGameInstanceSubsystem
{
public:
	UMulticastDelegateProperty_                  OnMeshNodeTypeChanged;                             // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnConnectedToRootChanged;                          // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnGameServerNodeTypeChanged;                       // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMeshMetaDataUpdated;                             // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_697[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMeshNetworkNodeType              NodeType;                                          // 0x80(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMeshNetworkNodeType              GameServerNodeType;                                // 0x81(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bConnectedToRoot;                                  // 0x82(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_698[0x15];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshNetworkSubsystem* GetDefaultObj();

	void SetMetaData(struct FMeshMetaDataStruct& MetaData);
	void GetMetadata(struct FMeshMetaDataStruct& MetaData);
	enum class EMeshNetworkNodeType GetMeshNetworkNodeType();
	enum class EMeshNetworkNodeType GetGameServerNodeType();
	bool GetConnectedToRoot();
};

// 0x8 (0x460 - 0x458)
// Class MeshNetwork.MeshReplicationGraph
class UMeshReplicationGraph : public UReplicationGraph
{
public:
	class UReplicationGraphNode_ActorList*       AlwaysRelevantNode;                                // 0x458(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMeshReplicationGraph* GetDefaultObj();

};

}



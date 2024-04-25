#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x58 - 0x50)
// ScriptStruct AnimationSharing.TickAnimationSharingFunction
struct FTickAnimationSharingFunction : public FTickFunction
{
public:
	uint8                                        Pad_3D[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimationSharing.AnimationSharingScalability
struct FAnimationSharingScalability
{
public:
	struct FPerPlatformBool                      UseBlendTransitions;                               // 0x0(0x1)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_42[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerPlatformFloat                     BlendSignificanceValue;                            // 0x4(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformInt                       MaximumNumberConcurrentBlends;                     // 0x8(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformFloat                     TickSignificanceValue;                             // 0xC(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct AnimationSharing.AnimationSetup
struct FAnimationSetup
{
public:
	TSubclassOf<class UAnimSharingStateInstance> AnimBlueprint;                                     // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          AnimSequence;                                      // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerPlatformInt                       NumRandomizedInstances;                            // 0x30(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformBool                      Enabled;                                           // 0x34(0x1)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_43[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimationSharing.AnimationStateEntry
struct FAnimationStateEntry
{
public:
	uint8                                        State;                                             // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAnimationSetup>               AnimationSetups;                                   // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bOnDemand;                                         // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAdditive;                                         // 0x19(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendTime;                                         // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReturnToPreviousState;                            // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetNextState;                                     // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NextState;                                         // 0x22(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerPlatformInt                       MaximumNumberOfConcurrentInstances;                // 0x24(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        WiggleTimePercentage;                              // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequiresCurves;                                   // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
struct FPerSkeletonAnimationSharingSetup
{
public:
	TSoftObjectPtr<class USkeleton>              Skeleton;                                          // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimationStateEntry>          AnimationStates;                                   // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimationSharingStateProcessor> StateProcessorClass;                               // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          SkeletalMesh;                                      // 0x40(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimSharingTransitionInstance> BlendAnimBlueprint;                                // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimSharingAdditiveInstance> AdditiveAnimBlueprint;                             // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}



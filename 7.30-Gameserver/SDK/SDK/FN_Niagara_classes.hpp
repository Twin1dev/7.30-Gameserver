#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x68 - 0x58)
// Class Niagara.MovieSceneNiagaraTrack
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x58(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraTrack* GetDefaultObj();

};

// 0x30 (0x98 - 0x68)
// Class Niagara.MovieSceneNiagaraParameterTrack
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
	struct FNiagaraVariable                      Parameter;                                         // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraParameterTrack* GetDefaultObj();

};

// 0x0 (0x98 - 0x98)
// Class Niagara.MovieSceneNiagaraBoolParameterTrack
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraBoolParameterTrack* GetDefaultObj();

};

// 0x0 (0x98 - 0x98)
// Class Niagara.MovieSceneNiagaraColorParameterTrack
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraColorParameterTrack* GetDefaultObj();

};

// 0x0 (0x98 - 0x98)
// Class Niagara.MovieSceneNiagaraFloatParameterTrack
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraFloatParameterTrack* GetDefaultObj();

};

// 0x0 (0x98 - 0x98)
// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraIntegerParameterTrack* GetDefaultObj();

};

// 0x0 (0xE0 - 0xE0)
// Class Niagara.MovieSceneNiagaraSystemSpawnSection
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraSystemSpawnSection* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class Niagara.MovieSceneNiagaraSystemTrack
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraSystemTrack* GetDefaultObj();

};

// 0x8 (0xA0 - 0x98)
// Class Niagara.MovieSceneNiagaraVectorParameterTrack
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	int32                                        ChannelsUsed;                                      // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_770[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraVectorParameterTrack* GetDefaultObj();

};

// 0x8 (0x338 - 0x330)
// Class Niagara.NiagaraActor
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x330(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ANiagaraActor* GetDefaultObj();

};

// 0x180 (0x6F0 - 0x570)
// Class Niagara.NiagaraComponent
class UNiagaraComponent : public UPrimitiveComponent
{
public:
	class UNiagaraSystem*                        Asset;                                             // 0x570(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraParameterStore                OverrideParameters;                                // 0x578(0xE0)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        bForceSolo : 1;                                    // Mask: 0x1, PropSize: 0x10x658(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_4F : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_7D6[0x27];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x680(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bRenderingEnabled : 1;                             // Mask: 0x2, PropSize: 0x10x680(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAutoManageAttachment : 1;                         // Mask: 0x4, PropSize: 0x10x680(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_50 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_7D7[0x1F];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class USceneComponent>        AutoAttachParent;                                  // 0x6A0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AutoAttachSocketName;                              // 0x6A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AutoAttachLocationRule;                            // 0x6B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AutoAttachRotationRule;                            // 0x6B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AutoAttachScaleRule;                               // 0x6B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D9[0x3D];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraComponent* GetDefaultObj();

	void SetSeekDelta(float InSeekDelta);
	void SetRenderingEnabled(bool bInRenderingEnabled);
	void SetPaused(bool bInPaused);
	void SetNiagaraVariableVec4(const class FString& InVariableName, struct FVector4& InValue);
	void SetNiagaraVariableVec3(const class FString& InVariableName, const struct FVector& InValue);
	void SetNiagaraVariableVec2(const class FString& InVariableName, const struct FVector2D& InValue);
	void SetNiagaraVariableQuat(const class FString& InVariableName, struct FQuat& InValue);
	void SetNiagaraVariableLinearColor(const class FString& InVariableName, struct FLinearColor& InValue);
	void SetNiagaraVariableInt(const class FString& InVariableName, int32 InValue);
	void SetNiagaraVariableFloat(const class FString& InVariableName, float InValue);
	void SetNiagaraVariableBool(const class FString& InVariableName, bool InValue);
	void SetNiagaraVariableActor(const class FString& InVariableName, class AActor* Actor);
	void SetMaxSimTime(float InMaxTime);
	void SetForceSolo(bool bInForceSolo);
	void SetDesiredAge(float InDesiredAge);
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
	void SetAutoDestroy(bool bInAutoDestroy);
	void SetAutoAttachmentParameters(class USceneComponent* Parent, class FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule);
	void SetAsset(class UNiagaraSystem* InAsset);
	void SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode);
	void SeekToDesiredAge(float InDesiredAge);
	void ResetSystem();
	void ReinitializeSystem();
	bool IsPaused();
	float GetSeekDelta();
	TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(const class FString& InEmitterName, const class FString& InValueName);
	TArray<float> GetNiagaraParticleValues_DebugOnly(const class FString& InEmitterName, const class FString& InValueName);
	TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(const class FString& InEmitterName);
	float GetMaxSimTime();
	bool GetForceSolo();
	float GetDesiredAge();
	class UNiagaraSystem* GetAsset();
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode();
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
	void AdvanceSimulation(int32 TickCount, float TickDeltaSeconds);
};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraDataInterface
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterface* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class Niagara.NiagaraDataInterfaceCurveBase
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:
	bool                                         GPUBufferDirty;                                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                ShaderLUT;                                         // 0x30(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        LUTMinTime;                                        // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LUTMaxTime;                                        // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LUTInvTimeRange;                                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bUseLUT : 1;                                       // Mask: 0x1, PropSize: 0x10x4C(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EA[0x1B];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCurveBase* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Niagara.NiagaraDataInterfaceCollisionQuery
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:
	uint8                                        Pad_7EC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCollisionQuery* GetDefaultObj();

};

// 0x200 (0x268 - 0x68)
// Class Niagara.NiagaraDataInterfaceColorCurve
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            RedCurve;                                          // 0x68(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            GreenCurve;                                        // 0xE8(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            BlueCurve;                                         // 0x168(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            AlphaCurve;                                        // 0x1E8(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceColorCurve* GetDefaultObj();

};

// 0x13338 (0x13360 - 0x28)
// Class Niagara.NiagaraDataInterfaceCurlNoise
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:
	uint8                                        Pad_7F1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       Seed;                                              // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F3[0x13330];                                  // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCurlNoise* GetDefaultObj();

};

// 0x80 (0xE8 - 0x68)
// Class Niagara.NiagaraDataInterfaceCurve
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            Curve;                                             // 0x68(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCurve* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraDataInterfaceSimpleCounter
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSimpleCounter* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class Niagara.NiagaraDataInterfaceSkeletalMesh
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
public:
	class USkeletalMesh*                         DefaultMesh;                                       // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Source;                                            // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDISkeletalMesh_SkinningMode     SkinningMode;                                      // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          SamplingRegions;                                   // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        WholeMeshLOD;                                      // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          SpecificBones;                                     // 0x58(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          SpecificSockets;                                   // 0x68(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseTriangleSampling;                              // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseVertexSampling;                                // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSkeletonSampling;                              // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FB[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSkeletalMesh* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Niagara.NiagaraDataInterfaceSpline
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	class AActor*                                Source;                                            // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSpline* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class Niagara.NiagaraDataInterfaceStaticMesh
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	class UStaticMesh*                           DefaultMesh;                                       // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Source;                                            // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNDIStaticMeshSectionFilter           SectionFilter;                                     // 0x38(0x10)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceStaticMesh* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraDataInterfaceTexture
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
public:
	uint8                                        Pad_800[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Texture;                                           // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceTexture* GetDefaultObj();

};

// 0x100 (0x168 - 0x68)
// Class Niagara.NiagaraDataInterfaceVector2DCurve
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            XCurve;                                            // 0x68(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            YCurve;                                            // 0xE8(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVector2DCurve* GetDefaultObj();

};

// 0x200 (0x268 - 0x68)
// Class Niagara.NiagaraDataInterfaceVector4Curve
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            XCurve;                                            // 0x68(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            YCurve;                                            // 0xE8(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            ZCurve;                                            // 0x168(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            WCurve;                                            // 0x1E8(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVector4Curve* GetDefaultObj();

};

// 0x180 (0x1E8 - 0x68)
// Class Niagara.NiagaraDataInterfaceVectorCurve
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            XCurve;                                            // 0x68(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            YCurve;                                            // 0xE8(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            ZCurve;                                            // 0x168(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVectorCurve* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class Niagara.NiagaraDataInterfaceVectorField
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
public:
	class UVectorField*                          Field;                                             // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTileX;                                            // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTileY;                                            // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTileZ;                                            // 0x32(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_809[0x55];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVectorField* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEditorDataBase
class UNiagaraEditorDataBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraEditorDataBase* GetDefaultObj();

};

// 0x110 (0x138 - 0x28)
// Class Niagara.NiagaraEmitter
class UNiagaraEmitter : public UObject
{
public:
	bool                                         bLocalSpace;                                       // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraEmitterScriptProperties       UpdateScriptProps;                                 // 0x30(0x28)(NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties       SpawnScriptProps;                                  // 0x58(0x28)(NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties       EmitterSpawnScriptProps;                           // 0x80(0x28)(NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties       EmitterUpdateScriptProps;                          // 0xA8(0x28)(NativeAccessSpecifierPublic)
	enum class ENiagaraSimTarget                 SimTarget;                                         // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  FixedBounds;                                       // 0xD4(0x1C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MinDetailLevel;                                    // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDetailLevel;                                    // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInterpolatedSpawning : 1;                         // Mask: 0x1, PropSize: 0x10xF8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFixedBounds : 1;                                  // Mask: 0x2, PropSize: 0x10xF8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMinDetailLevel : 1;                            // Mask: 0x4, PropSize: 0x10xF8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMaxDetailLevel : 1;                            // Mask: 0x8, PropSize: 0x10xF8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresPersistentIDs : 1;                        // Mask: 0x10, PropSize: 0x10xF8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_55 : 3;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_813[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UniqueEmitterName;                                 // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraRendererProperties*>    RendererProperties;                                // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps;                           // 0x120(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class UNiagaraScript*                        GPUComputeScript;                                  // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraEmitter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEventReceiverEmitterAction
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraEventReceiverEmitterAction* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32                                       NumParticles;                                      // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraEventReceiverEmitterAction_SpawnParticles* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraFunctionLibrary
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraFunctionLibrary* GetDefaultObj();

	class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy);
	class UNiagaraComponent* SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy);
	class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
};

// 0x8 (0x30 - 0x28)
// Class Niagara.NiagaraRendererProperties
class UNiagaraRendererProperties : public UNiagaraMergeable
{
public:
	int32                                        SortOrderHint;                                     // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_868[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraRendererProperties* GetDefaultObj();

};

// 0x1C0 (0x1F0 - 0x30)
// Class Niagara.NiagaraLightRendererProperties
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
public:
	float                                        RadiusScale;                                       // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ColorAdd;                                          // 0x34(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x40(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0xD0(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RadiusBinding;                                     // 0x160(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraLightRendererProperties* GetDefaultObj();

};

// 0x6F0 (0x720 - 0x30)
// Class Niagara.NiagaraMeshRendererProperties
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
public:
	class UStaticMesh*                           ParticleMesh;                                      // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSortMode                  SortMode;                                          // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_871[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bOverrideMaterials : 1;                            // Mask: 0x1, PropSize: 0x10x3C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSortOnlyWhenTranslucent : 1;                      // Mask: 0x2, PropSize: 0x10x3C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_59 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_874[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ENiagaraMeshFacingMode            FacingMode;                                        // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_875[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x58(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0xE8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      VelocityBinding;                                   // 0x178(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MeshOrientationBinding;                            // 0x208(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ScaleBinding;                                      // 0x298(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterialBinding;                            // 0x328(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial1Binding;                           // 0x3B8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial2Binding;                           // 0x448(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial3Binding;                           // 0x4D8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MaterialRandomBinding;                             // 0x568(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      CustomSortingBinding;                              // 0x5F8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      NormalizedAgeBinding;                              // 0x688(0x90)(Edit, NativeAccessSpecifierPublic)
	int32                                        SyncId;                                            // 0x718(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_879[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraMeshRendererProperties* GetDefaultObj();

};

// 0xF8 (0x120 - 0x28)
// Class Niagara.NiagaraParameterCollectionInstance
class UNiagaraParameterCollectionInstance : public UObject
{
public:
	class UNiagaraParameterCollection*           Collection;                                        // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>              OverridenParameters;                               // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraParameterStore                ParameterStorage;                                  // 0x40(0xE0)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraParameterCollectionInstance* GetDefaultObj();

	void SetVectorParameter(const class FString& InVariableName, const struct FVector& InValue);
	void SetVector4Parameter(const class FString& InVariableName, struct FVector4& InValue);
	void SetVector2DParameter(const class FString& InVariableName, const struct FVector2D& InValue);
	void SetQuatParameter(const class FString& InVariableName, struct FQuat& InValue);
	void SetIntParameter(const class FString& InVariableName, int32 InValue);
	void SetFloatParameter(const class FString& InVariableName, float InValue);
	void SetColorParameter(const class FString& InVariableName, const struct FLinearColor& InValue);
	void SetBoolParameter(const class FString& InVariableName, bool InValue);
	struct FVector GetVectorParameter(const class FString& InVariableName);
	struct FVector4 GetVector4Parameter(const class FString& InVariableName);
	struct FVector2D GetVector2DParameter(const class FString& InVariableName);
	struct FQuat GetQuatParameter(const class FString& InVariableName);
	int32 GetIntParameter(const class FString& InVariableName);
	float GetFloatParameter(const class FString& InVariableName);
	struct FLinearColor GetColorParameter(const class FString& InVariableName);
	bool GetBoolParameter(const class FString& InVariableName);
};

// 0x30 (0x58 - 0x28)
// Class Niagara.NiagaraParameterCollection
class UNiagaraParameterCollection : public UObject
{
public:
	class FName                                  Namespace;                                         // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNiagaraVariable>              Parameters;                                        // 0x30(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UNiagaraParameterCollectionInstance*   DefaultInstance;                                   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 CompileId;                                         // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraParameterCollection* GetDefaultObj();

};

// 0x828 (0x858 - 0x30)
// Class Niagara.NiagaraRibbonRendererProperties
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                    Material;                                          // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonFacingMode          FacingMode;                                        // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UV0TilingDistance;                                 // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV0Scale;                                          // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV0Offset;                                         // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonAgeOffsetMode       UV0AgeOffsetMode;                                  // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UV1TilingDistance;                                 // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV1Scale;                                          // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV1Offset;                                         // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonAgeOffsetMode       UV1AgeOffsetMode;                                  // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonDrawDirection       DrawDirection;                                     // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E9[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x70(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0x100(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      VelocityBinding;                                   // 0x190(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      NormalizedAgeBinding;                              // 0x220(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonTwistBinding;                                // 0x2B0(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonWidthBinding;                                // 0x340(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonFacingBinding;                               // 0x3D0(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonIdBinding;                                   // 0x460(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonLinkOrderBinding;                            // 0x4F0(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MaterialRandomBinding;                             // 0x580(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterialBinding;                            // 0x610(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial1Binding;                           // 0x6A0(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial2Binding;                           // 0x730(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial3Binding;                           // 0x7C0(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	int32                                        SyncId;                                            // 0x850(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8EC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraRibbonRendererProperties* GetDefaultObj();

};

// 0x6A8 (0x6D0 - 0x28)
// Class Niagara.NiagaraScript
class UNiagaraScript : public UObject
{
public:
	enum class ENiagaraScriptUsage               Usage;                                             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UsageIndex;                                        // 0x2C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 UsageId;                                           // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ModuleUsageBitmask;                                // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraParameterStore                RapidIterationParameters;                          // 0x48(0xE0)(NativeAccessSpecifierPublic)
	enum class ENiagaraNumericOutputTypeSelectionMode NumericOutputTypeSelectionMode;                    // 0x128(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStoreCPU;                      // 0x130(0x100)(Transient, NativeAccessSpecifierPrivate)
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStoreGPU;                      // 0x230(0x100)(Transient, NativeAccessSpecifierPrivate)
	struct FNiagaraVMExecutableDataId            CachedScriptVMId;                                  // 0x330(0x68)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraVMExecutableDataId            LastGeneratedVMId;                                 // 0x398(0x68)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8F7[0x148];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraVMExecutableData              CachedScriptVM;                                    // 0x548(0x168)(NativeAccessSpecifierPrivate)
	TArray<class UNiagaraParameterCollection*>   CachedParameterCollectionReferences;               // 0x6B0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;                       // 0x6C0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraScript* GetDefaultObj();

	void OnCompilationComplete();
};

// 0x20 (0x48 - 0x28)
// Class Niagara.NiagaraScriptSourceBase
class UNiagaraScriptSourceBase : public UObject
{
public:
	uint8                                        Pad_8FA[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraScriptSourceBase* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraSettings
class UNiagaraSettings : public UDeveloperSettings
{
public:
	TArray<struct FSoftObjectPath>               AdditionalParameterTypes;                          // 0x38(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>               AdditionalPayloadTypes;                            // 0x48(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>               AdditionalParameterEnums;                          // 0x58(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraSettings* GetDefaultObj();

};

// 0x9D0 (0xA00 - 0x30)
// Class Niagara.NiagaraSpriteRendererProperties
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                    Material;                                          // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSpriteAlignment           Alignment;                                         // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSpriteFacingMode          FacingMode;                                        // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_902[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CustomFacingVectorMask;                            // 0x3C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PivotInUVSpace;                                    // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSortMode                  SortMode;                                          // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_904[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             SubImageSize;                                      // 0x54(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSubImageBlend : 1;                                // Mask: 0x1, PropSize: 0x10x5C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRemoveHMDRollInVR : 1;                            // Mask: 0x2, PropSize: 0x10x5C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSortOnlyWhenTranslucent : 1;                      // Mask: 0x4, PropSize: 0x10x5C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_61 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_907[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinFacingCameraBlendDistance;                      // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFacingCameraBlendDistance;                      // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x68(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0xF8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      VelocityBinding;                                   // 0x188(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SpriteRotationBinding;                             // 0x218(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SpriteSizeBinding;                                 // 0x2A8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SpriteFacingBinding;                               // 0x338(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SpriteAlignmentBinding;                            // 0x3C8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SubImageIndexBinding;                              // 0x458(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterialBinding;                            // 0x4E8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial1Binding;                           // 0x578(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial2Binding;                           // 0x608(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial3Binding;                           // 0x698(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      CameraOffsetBinding;                               // 0x728(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      UVScaleBinding;                                    // 0x7B8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MaterialRandomBinding;                             // 0x848(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      CustomSortingBinding;                              // 0x8D8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      NormalizedAgeBinding;                              // 0x968(0x90)(Edit, NativeAccessSpecifierPublic)
	int32                                        SyncId;                                            // 0x9F8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraSpriteRendererProperties* GetDefaultObj();

};

// 0x150 (0x178 - 0x28)
// Class Niagara.NiagaraSystem
class UNiagaraSystem : public UObject
{
public:
	bool                                         bDumpDebugSystemInfo;                              // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDumpDebugEmitterInfo;                             // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_911[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraEmitterHandle>         EmitterHandles;                                    // 0x30(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                      // 0x40(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FNiagaraSystemCompileRequest>  ActiveCompilations;                                // 0x50(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UNiagaraScript*                        SystemSpawnScript;                                 // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraScript*                        SystemUpdateScript;                                // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNiagaraEmitterSpawnAttributes> EmitterSpawnAttributes;                            // 0x70(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FNiagaraParameterStore                ExposedParameters;                                 // 0x80(0xE0)(Protected, NativeAccessSpecifierProtected)
	bool                                         bAutoDeactivate;                                   // 0x160(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_913[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WarmupTime;                                        // 0x164(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        WarmupTickCount;                                   // 0x168(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WarmupTickDelta;                                   // 0x16C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bSolo : 1;                                         // Mask: 0x1, PropSize: 0x10x170(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_915[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraSystem* GetDefaultObj();

};

}



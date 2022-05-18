#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709                    = 0,
	HCGM_P3DCI                     = 1,
	HCGM_Rec2020                   = 2,
	HCGM_ACES                      = 3,
	HCGM_ACEScg                    = 4,
	HCGM_Linear                    = 5,
	HCGM_MAX                       = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneCapture.CaptureProtocolID
// 0x0008
struct FCaptureProtocolID
{
	struct FName                                       Identifier;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct MovieSceneCapture.CaptureResolution
// 0x0008
struct FCaptureResolution
{
	uint32_t                                           ResX;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ResY;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// 0x0048
struct FMovieSceneCaptureSettings
{
	struct FDirectoryPath                              OutputDirectory;                                          // 0x0000(0x0010) (Edit, Config)
	class UClass*                                      GameModeOverride;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     OutputFormat;                                             // 0x0018(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bOverwriteExisting;                                       // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseRelativeFrameNumbers;                                 // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                HandleFrames;                                             // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      ZeroPadFrameNumbers;                                      // 0x0030(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                FrameRate;                                                // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FCaptureResolution                          Resolution;                                               // 0x0038(0x0008) (Edit, Config)
	bool                                               bEnableTextureStreaming;                                  // 0x0040(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCinematicEngineScalability;                              // 0x0041(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCinematicMode;                                           // 0x0042(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowMovement;                                           // 0x0043(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowTurning;                                            // 0x0044(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShowPlayer;                                              // 0x0045(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShowHUD;                                                 // 0x0046(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0047(0x0001) MISSED OFFSET
};

// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// 0x0010
struct FCompositionGraphCapturePasses
{
	TArray<struct FString>                             Value;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ImagePlate.ImagePlateParameters
// 0x0038
struct FImagePlateParameters
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TextureParameterName;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFillScreen;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FVector2D                                   FillScreenAmount;                                         // 0x0014(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   FixedSize;                                                // 0x001C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UTexture*                                    RenderTexture;                                            // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ImagePlate.MovieSceneImagePlateSectionParams
// 0x0018
struct FMovieSceneImagePlateSectionParams
{
	struct FFrameNumber                                SectionStartTime;                                         // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UImagePlateFileSequence*                     FileSequence;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bReuseExistingTexture;                                    // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ImagePlate.MovieSceneImagePlateSectionTemplate
// 0x0040 (0x0060 - 0x0020)
struct FMovieSceneImagePlateSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                             // 0x0020(0x0028)
	struct FMovieSceneImagePlateSectionParams          Params;                                                   // 0x0048(0x0018)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

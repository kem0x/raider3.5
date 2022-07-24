#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ImagePlate.ImagePlate
// 0x0008 (0x0330 - 0x0328)
class AImagePlate : public AActor
{
public:
	class UImagePlateComponent*                        ImagePlate;                                               // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ImagePlate.ImagePlate");
		return ptr;
	}

};


// Class ImagePlate.ImagePlateComponent
// 0x00D0 (0x0630 - 0x0560)
class UImagePlateComponent : public UPrimitiveComponent
{
public:
	struct FImagePlateParameters                       Plate;                                                    // 0x0560(0x0038) (Edit)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0598(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ImagePlate.ImagePlateComponent");
		return ptr;
	}


	void SetImagePlate(const struct FImagePlateParameters& Plate);
	void OnRenderTextureChanged();
	struct FImagePlateParameters GetPlate();
};


// Class ImagePlate.ImagePlateSettings
// 0x0010 (0x0038 - 0x0028)
class UImagePlateSettings : public UObject
{
public:
	struct FString                                     ProxyName;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ImagePlate.ImagePlateSettings");
		return ptr;
	}

};


// Class ImagePlate.ImagePlateFileSequence
// 0x0028 (0x0050 - 0x0028)
class UImagePlateFileSequence : public UObject
{
public:
	struct FDirectoryPath                              SequencePath;                                             // 0x0028(0x0010) (Edit)
	struct FString                                     FileWildcard;                                             // 0x0038(0x0010) (Edit, ZeroConstructor)
	float                                              FrameRate;                                                // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ImagePlate.ImagePlateFileSequence");
		return ptr;
	}

};


// Class ImagePlate.ImagePlateFrustumComponent
// 0x0000 (0x0560 - 0x0560)
class UImagePlateFrustumComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ImagePlate.ImagePlateFrustumComponent");
		return ptr;
	}

};


// Class ImagePlate.MovieSceneImagePlateSection
// 0x0010 (0x00F0 - 0x00E0)
class UMovieSceneImagePlateSection : public UMovieSceneSection
{
public:
	class UImagePlateFileSequence*                     FileSequence;                                             // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReuseExistingTexture;                                    // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ImagePlate.MovieSceneImagePlateSection");
		return ptr;
	}

};


// Class ImagePlate.MovieSceneImagePlateTrack
// 0x0000 (0x0080 - 0x0080)
class UMovieSceneImagePlateTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ImagePlate.MovieSceneImagePlateTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

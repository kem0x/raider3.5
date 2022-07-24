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

// Class LiveLink.LiveLinkDrivenComponent
// 0x0020 (0x0110 - 0x00F0)
class ULiveLinkDrivenComponent : public UActorComponent
{
public:
	struct FLiveLinkSubjectName                        SubjectName;                                              // 0x00F0(0x0008) (Edit)
	struct FName                                       ActorTransformBone;                                       // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bModifyActorTransform;                                    // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSetRelativeLocation;                                     // 0x0101(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0102(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkDrivenComponent");
		return ptr;
	}

};


// Class LiveLink.LiveLinkInstance
// 0x0000 (0x0360 - 0x0360)
class ULiveLinkInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkInstance");
		return ptr;
	}

};


// Class LiveLink.LiveLinkRetargetAsset
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkRetargetAsset : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkRetargetAsset");
		return ptr;
	}

};


// Class LiveLink.LiveLinkRemapAsset
// 0x00A8 (0x00D0 - 0x0028)
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkRemapAsset");
		return ptr;
	}


	void RemapCurveElements(TMap<struct FName, float>* CurveItems);
	struct FName GetRemappedCurveName(const struct FName& CurveName);
	struct FName GetRemappedBoneName(const struct FName& BoneName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// ScriptStruct LiveLink.AnimNode_LiveLinkPose
// 0x0028 (0x0058 - 0x0030)
struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
	struct FName                                       SubjectName;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RetargetAsset;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData)
	class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                     // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

// ScriptStruct LiveLink.LiveLinkInstanceProxy
// 0x0060 (0x0640 - 0x05E0)
struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x05E0(0x0060) MISSED OFFSET
};

// ScriptStruct LiveLink.LiveLinkRetargetAssetReference
// 0x0008
struct FLiveLinkRetargetAssetReference
{
	class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct LiveLink.LiveLinkVirtualSubject
// 0x0060
struct FLiveLinkVirtualSubject
{
	TArray<struct FName>                               Subjects;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
	struct FGuid                                       Source;                                                   // 0x0020(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0030(0x0030) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Enum EpicCMSUIFramework.EDateType
enum class EDateType : uint8_t
{
	None                           = 0,
	Coming                         = 1,
	Ending                         = 2,
	EDateType_MAX                  = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EpicCMSUIFramework.SlotDescription
// 0x0018
struct FSlotDescription
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ColumnCount;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RowCount;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFeaturedTextStyle;                                    // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAutoScroll;                                        // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct EpicCMSUIFramework.EpicCMSTileTypeMapping
// 0x0028 (0x0030 - 0x0008)
struct FEpicCMSTileTypeMapping : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty EpicCMSUIFramework.EpicCMSTileTypeMapping.TileClass
};

// ScriptStruct EpicCMSUIFramework.EpicCMSLayoutTypeMapping
// 0x0028 (0x0030 - 0x0008)
struct FEpicCMSLayoutTypeMapping : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty EpicCMSUIFramework.EpicCMSLayoutTypeMapping.LayoutType
};

// ScriptStruct EpicCMSUIFramework.TileDefinition
// 0x0088
struct FTileDefinition
{
	struct FString                                     TypeString;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Title;                                                    // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Subtitle;                                                 // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Eyebrow;                                                  // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Link;                                                     // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     GroupID;                                                  // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FDateTime                                   Countdown;                                                // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly)
	EDateType                                          CountdownType;                                            // 0x0068(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FString                                     MediaUrl;                                                 // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               IsVisible;                                                // 0x0080(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

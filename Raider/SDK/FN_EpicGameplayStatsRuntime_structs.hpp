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

// Enum EpicGameplayStatsRuntime.EEpicLeaderboardUpdateFunction
enum class EEpicLeaderboardUpdateFunction : uint8_t
{
	Min                            = 0,
	Max                            = 1,
	Sum                            = 2,
	MostRecent                     = 3
};


// Enum EpicGameplayStatsRuntime.EEpicLeaderboardTimeWindow
enum class EEpicLeaderboardTimeWindow : uint8_t
{
	Daily                          = 0,
	Weekly                         = 1,
	Monthly                        = 2,
	AllTime                        = 3,
	EEpicLeaderboardTimeWindow_MAX = 4
};


// Enum EpicGameplayStatsRuntime.EEpicLeaderboardDataType
enum class EEpicLeaderboardDataType : uint8_t
{
	Integer                        = 0,
	Double                         = 1,
	EEpicLeaderboardDataType_MAX   = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EpicGameplayStatsRuntime.GameplayStatTag
// 0x0008 (0x0010 - 0x0008)
struct FGameplayStatTag : public FGameplayTag
{
	struct FGameplayTag                                Tag;                                                      // 0x0008(0x0008)
};

// ScriptStruct EpicGameplayStatsRuntime.ManagedGameplayTagDataTableItem
// 0x0010
struct FManagedGameplayTagDataTableItem
{
	struct FGameplayTag                                RootTag;                                                  // 0x0000(0x0008) (Edit, EditConst)
	class UDataTable*                                  DataTable;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EpicGameplayStatsRuntime.GameplayStatMetadataTableRow
// 0x0088 (0x0090 - 0x0008)
struct FGameplayStatMetadataTableRow : public FTableRowBase
{
	struct FString                                     BackendName;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FText                                       DisplayName;                                              // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<EEpicLeaderboardTimeWindow>                 Windows;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EEpicLeaderboardUpdateFunction                     Metric;                                                   // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EEpicLeaderboardDataType                           DataType;                                                 // 0x0041(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPublish;                                                 // 0x0042(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0043(0x0001) MISSED OFFSET
	int                                                WeeklyRefreshInterval;                                    // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bExportToBackEnd;                                         // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowInFrontEnd;                                          // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	struct FGameplayTagReferenceHelper                 ReferenceHelper;                                          // 0x0050(0x0040) (Edit)
};

// ScriptStruct EpicGameplayStatsRuntime.TagTableManagerHelper
// 0x0001
struct FTagTableManagerHelper
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

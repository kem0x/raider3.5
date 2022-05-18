#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DynamicQuestUpdateInfo.DynamicQuestUpdateInfo
// 0x001D
struct FDynamicQuestUpdateInfo
{
	int                                                LastNotifiedCount_2_0F77AC33401CB8426EAEFE9B7A6BA3CF;     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AchievedCount_4_D769733A4EAE28644D6AFDB4BC3EB027;         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortQuestItem*                              QuestItem_11_3D49559C46BFAA72DF4BEBBC53D09EC3;            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortQuestObjectiveInfo*                     QuestObjective_13_DD90737247F2659E162C58B4258EAEAF;       // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TweenTimeRemaining_21_BE81ABC64DF8EDBD1C0476ADDB3D4541;   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasUpdateStarted_20_619FFE6348FDB23D6A4253BFCFB0DF57;    // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ScoreBadgeProviderMission.ScoreBadgeProviderMission_C
// 0x0000 (0x0028 - 0x0028)
class UScoreBadgeProviderMission_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ScoreBadgeProviderMission.ScoreBadgeProviderMission_C");
		return ptr;
	}


	void GetTotalScore(EStatCategory ScoreCategory, int* Score);
	void GetScoreBadgeInfos(EStatCategory ScoreCategory, TArray<struct FCollectionMissionBadgeDisplayInfo>* BadgeInfos);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

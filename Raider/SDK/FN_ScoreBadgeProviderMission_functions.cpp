// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScoreBadgeProviderMission.ScoreBadgeProviderMission_C.GetTotalScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EStatCategory                  ScoreCategory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScoreBadgeProviderMission_C::GetTotalScore(EStatCategory ScoreCategory, int* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBadgeProviderMission.ScoreBadgeProviderMission_C.GetTotalScore");

	UScoreBadgeProviderMission_C_GetTotalScore_Params params;
	params.ScoreCategory = ScoreCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Score != nullptr)
		*Score = params.Score;
}


// Function ScoreBadgeProviderMission.ScoreBadgeProviderMission_C.GetScoreBadgeInfos
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EStatCategory                  ScoreCategory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FCollectionMissionBadgeDisplayInfo> BadgeInfos                     (Parm, OutParm, ZeroConstructor)

void UScoreBadgeProviderMission_C::GetScoreBadgeInfos(EStatCategory ScoreCategory, TArray<struct FCollectionMissionBadgeDisplayInfo>* BadgeInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBadgeProviderMission.ScoreBadgeProviderMission_C.GetScoreBadgeInfos");

	UScoreBadgeProviderMission_C_GetScoreBadgeInfos_Params params;
	params.ScoreCategory = ScoreCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BadgeInfos != nullptr)
		*BadgeInfos = params.BadgeInfos;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

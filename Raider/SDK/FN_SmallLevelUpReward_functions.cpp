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

// Function SmallLevelUpReward.SmallLevelUpReward_C.SetupReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasReward                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortItemInstanceQuantityPair RewardItem                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            LevelRewarded                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USmallLevelUpReward_C::SetupReward(bool HasReward, const struct FFortItemInstanceQuantityPair& RewardItem, int LevelRewarded)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallLevelUpReward.SmallLevelUpReward_C.SetupReward");

	USmallLevelUpReward_C_SetupReward_Params params;
	params.HasReward = HasReward;
	params.RewardItem = RewardItem;
	params.LevelRewarded = LevelRewarded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

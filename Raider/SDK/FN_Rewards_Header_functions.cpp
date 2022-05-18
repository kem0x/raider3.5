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

// Function Rewards_Header.Rewards_Header_C.SkipFadeInSubHeaderAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void URewards_Header_C::SkipFadeInSubHeaderAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_Header.Rewards_Header_C.SkipFadeInSubHeaderAnimation");

	URewards_Header_C_SkipFadeInSubHeaderAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_Header.Rewards_Header_C.SetQuestNameText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewards_Header_C::SetQuestNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_Header.Rewards_Header_C.SetQuestNameText");

	URewards_Header_C_SetQuestNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_Header.Rewards_Header_C.PopulateFromRewardType
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndRewardType            Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECollectionBookRewardType      CollectionBookRewardType       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   RewardDetailText               (BlueprintVisible, BlueprintReadOnly, Parm)

void URewards_Header_C::PopulateFromRewardType(EFrontEndRewardType Selection, ECollectionBookRewardType CollectionBookRewardType, const struct FText& RewardDetailText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_Header.Rewards_Header_C.PopulateFromRewardType");

	URewards_Header_C_PopulateFromRewardType_Params params;
	params.Selection = Selection;
	params.CollectionBookRewardType = CollectionBookRewardType;
	params.RewardDetailText = RewardDetailText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_Header.Rewards_Header_C.ResetSubHeader
// (Public, BlueprintCallable, BlueprintEvent)

void URewards_Header_C::ResetSubHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_Header.Rewards_Header_C.ResetSubHeader");

	URewards_Header_C_ResetSubHeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_Header.Rewards_Header_C.FadeInSubHeader
// (Public, BlueprintCallable, BlueprintEvent)

void URewards_Header_C::FadeInSubHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_Header.Rewards_Header_C.FadeInSubHeader");

	URewards_Header_C_FadeInSubHeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_Header.Rewards_Header_C.SetMissionLootLevelText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewards_Header_C::SetMissionLootLevelText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_Header.Rewards_Header_C.SetMissionLootLevelText");

	URewards_Header_C_SetMissionLootLevelText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_Header.Rewards_Header_C.PopulateFromReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData* InReward                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewards_Header_C::PopulateFromReward(class UFortRewardNotificationData* InReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_Header.Rewards_Header_C.PopulateFromReward");

	URewards_Header_C_PopulateFromReward_Params params;
	params.InReward = InReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_Header.Rewards_Header_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewards_Header_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_Header.Rewards_Header_C.PreConstruct");

	URewards_Header_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_Header.Rewards_Header_C.ExecuteUbergraph_Rewards_Header
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewards_Header_C::ExecuteUbergraph_Rewards_Header(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_Header.Rewards_Header_C.ExecuteUbergraph_Rewards_Header");

	URewards_Header_C_ExecuteUbergraph_Rewards_Header_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

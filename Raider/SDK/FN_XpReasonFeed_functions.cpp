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

// Function XpReasonFeed.XpReasonFeed_C.ShowAllXpRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXpReasonFeed_C::ShowAllXpRewards(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpReasonFeed.XpReasonFeed_C.ShowAllXpRewards");

	UXpReasonFeed_C_ShowAllXpRewards_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpReasonFeed.XpReasonFeed_C.SetXpRewards
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAthenaMatchXpReward> XpRewards                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UXpReasonFeed_C::SetXpRewards(TArray<struct FAthenaMatchXpReward>* XpRewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpReasonFeed.XpReasonFeed_C.SetXpRewards");

	UXpReasonFeed_C_SetXpRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XpRewards != nullptr)
		*XpRewards = params.XpRewards;
}


// Function XpReasonFeed.XpReasonFeed_C.IsReadyForNextXpReward
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ready                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UXpReasonFeed_C::IsReadyForNextXpReward(bool* Ready)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpReasonFeed.XpReasonFeed_C.IsReadyForNextXpReward");

	UXpReasonFeed_C_IsReadyForNextXpReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ready != nullptr)
		*Ready = params.Ready;
}


// Function XpReasonFeed.XpReasonFeed_C.Play Xp Reward
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthenaMatchXpReward    Reward                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UXpReasonFeed_C::Play_Xp_Reward(const struct FAthenaMatchXpReward& Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpReasonFeed.XpReasonFeed_C.Play Xp Reward");

	UXpReasonFeed_C_Play_Xp_Reward_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpReasonFeed.XpReasonFeed_C.Reset Feed
// (BlueprintCallable, BlueprintEvent)

void UXpReasonFeed_C::Reset_Feed()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpReasonFeed.XpReasonFeed_C.Reset Feed");

	UXpReasonFeed_C_Reset_Feed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpReasonFeed.XpReasonFeed_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXpReasonFeed_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpReasonFeed.XpReasonFeed_C.Destruct");

	UXpReasonFeed_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpReasonFeed.XpReasonFeed_C.ExecuteUbergraph_XpReasonFeed
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXpReasonFeed_C::ExecuteUbergraph_XpReasonFeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpReasonFeed.XpReasonFeed_C.ExecuteUbergraph_XpReasonFeed");

	UXpReasonFeed_C_ExecuteUbergraph_XpReasonFeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

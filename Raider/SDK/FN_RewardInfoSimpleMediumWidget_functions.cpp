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

// Function RewardInfoSimpleMediumWidget.RewardInfoSimpleMediumWidget_C.GetDisplayName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   DisplayName                    (Parm, OutParm)

void URewardInfoSimpleMediumWidget_C::GetDisplayName(struct FText* DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardInfoSimpleMediumWidget.RewardInfoSimpleMediumWidget_C.GetDisplayName");

	URewardInfoSimpleMediumWidget_C_GetDisplayName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;
}


// Function RewardInfoSimpleMediumWidget.RewardInfoSimpleMediumWidget_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)

void URewardInfoSimpleMediumWidget_C::HandleDifferentItemOrQuantitySetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardInfoSimpleMediumWidget.RewardInfoSimpleMediumWidget_C.HandleDifferentItemOrQuantitySetBP");

	URewardInfoSimpleMediumWidget_C_HandleDifferentItemOrQuantitySetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardInfoSimpleMediumWidget.RewardInfoSimpleMediumWidget_C.ExecuteUbergraph_RewardInfoSimpleMediumWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewardInfoSimpleMediumWidget_C::ExecuteUbergraph_RewardInfoSimpleMediumWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardInfoSimpleMediumWidget.RewardInfoSimpleMediumWidget_C.ExecuteUbergraph_RewardInfoSimpleMediumWidget");

	URewardInfoSimpleMediumWidget_C_ExecuteUbergraph_RewardInfoSimpleMediumWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

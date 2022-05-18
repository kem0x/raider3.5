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

// Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.GetDisplayName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   DisplayName                    (Parm, OutParm)

void URewardInfoSimpleWidget_C::GetDisplayName(struct FText* DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.GetDisplayName");

	URewardInfoSimpleWidget_C_GetDisplayName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;
}


// Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)

void URewardInfoSimpleWidget_C::HandleDifferentItemOrQuantitySetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.HandleDifferentItemOrQuantitySetBP");

	URewardInfoSimpleWidget_C_HandleDifferentItemOrQuantitySetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.ExecuteUbergraph_RewardInfoSimpleWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewardInfoSimpleWidget_C::ExecuteUbergraph_RewardInfoSimpleWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.ExecuteUbergraph_RewardInfoSimpleWidget");

	URewardInfoSimpleWidget_C_ExecuteUbergraph_RewardInfoSimpleWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

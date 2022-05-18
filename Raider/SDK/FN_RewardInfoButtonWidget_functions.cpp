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

// Function RewardInfoButtonWidget.RewardInfoButtonWidget_C.GetDisplayName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   DisplayName                    (Parm, OutParm)

void URewardInfoButtonWidget_C::GetDisplayName(struct FText* DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardInfoButtonWidget.RewardInfoButtonWidget_C.GetDisplayName");

	URewardInfoButtonWidget_C_GetDisplayName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;
}


// Function RewardInfoButtonWidget.RewardInfoButtonWidget_C.SetShowDescriptionBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bInShowDescription             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewardInfoButtonWidget_C::SetShowDescriptionBP(bool* bInShowDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardInfoButtonWidget.RewardInfoButtonWidget_C.SetShowDescriptionBP");

	URewardInfoButtonWidget_C_SetShowDescriptionBP_Params params;
	params.bInShowDescription = bInShowDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardInfoButtonWidget.RewardInfoButtonWidget_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)

void URewardInfoButtonWidget_C::HandleDifferentItemOrQuantitySetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardInfoButtonWidget.RewardInfoButtonWidget_C.HandleDifferentItemOrQuantitySetBP");

	URewardInfoButtonWidget_C_HandleDifferentItemOrQuantitySetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardInfoButtonWidget.RewardInfoButtonWidget_C.ExecuteUbergraph_RewardInfoButtonWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewardInfoButtonWidget_C::ExecuteUbergraph_RewardInfoButtonWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardInfoButtonWidget.RewardInfoButtonWidget_C.ExecuteUbergraph_RewardInfoButtonWidget");

	URewardInfoButtonWidget_C_ExecuteUbergraph_RewardInfoButtonWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

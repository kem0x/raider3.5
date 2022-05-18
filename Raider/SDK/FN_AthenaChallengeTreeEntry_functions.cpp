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

// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.GetRewardToShow
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFortItem* UAthenaChallengeTreeEntry_C::GetRewardToShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.GetRewardToShow");

	UAthenaChallengeTreeEntry_C_GetRewardToShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.UpdateReward
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaChallengeTreeEntry_C::UpdateReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.UpdateReward");

	UAthenaChallengeTreeEntry_C_UpdateReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.UpdateBundleData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortChallengeBundleInfo* BundleInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaChallengeTreeEntry_C::UpdateBundleData(class UFortChallengeBundleInfo* BundleInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.UpdateBundleData");

	UAthenaChallengeTreeEntry_C_UpdateBundleData_Params params;
	params.BundleInfo = BundleInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.UpdateBundleStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortChallengeBundleInfo* BundleInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaChallengeTreeEntry_C::UpdateBundleStyle(class UFortChallengeBundleInfo* BundleInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.UpdateBundleStyle");

	UAthenaChallengeTreeEntry_C_UpdateBundleStyle_Params params;
	params.BundleInfo = BundleInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.UpdateHeaderCategoryStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortChallengeBundleCategoryInfo* CategoryInfo                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaChallengeTreeEntry_C::UpdateHeaderCategoryStyle(class UFortChallengeBundleCategoryInfo* CategoryInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.UpdateHeaderCategoryStyle");

	UAthenaChallengeTreeEntry_C_UpdateHeaderCategoryStyle_Params params;
	params.CategoryInfo = CategoryInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.SetupAsChallengeBundleSchedule
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortChallengeBundleCategoryInfo** Schedule                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaChallengeTreeEntry_C::SetupAsChallengeBundleSchedule(class UFortChallengeBundleCategoryInfo** Schedule)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.SetupAsChallengeBundleSchedule");

	UAthenaChallengeTreeEntry_C_SetupAsChallengeBundleSchedule_Params params;
	params.Schedule = Schedule;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.SetupAsChallengeBundle
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortChallengeBundleInfo** Bundle                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaChallengeTreeEntry_C::SetupAsChallengeBundle(class UFortChallengeBundleInfo** Bundle)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.SetupAsChallengeBundle");

	UAthenaChallengeTreeEntry_C_SetupAsChallengeBundle_Params params;
	params.Bundle = Bundle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.ExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bExpanded                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaChallengeTreeEntry_C::ExpansionChanged(bool* bExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.ExpansionChanged");

	UAthenaChallengeTreeEntry_C_ExpansionChanged_Params params;
	params.bExpanded = bExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UAthenaChallengeTreeEntry_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.OnHovered");

	UAthenaChallengeTreeEntry_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.ExecuteUbergraph_AthenaChallengeTreeEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaChallengeTreeEntry_C::ExecuteUbergraph_AthenaChallengeTreeEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.ExecuteUbergraph_AthenaChallengeTreeEntry");

	UAthenaChallengeTreeEntry_C_ExecuteUbergraph_AthenaChallengeTreeEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

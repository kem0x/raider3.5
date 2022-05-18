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

// Function MatchStatsGrid.MatchStatsGrid_C.SetStats
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthenaMatchStats       AthenaMatchStats               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMatchStatsGrid_C::SetStats(struct FAthenaMatchStats* AthenaMatchStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchStatsGrid.MatchStatsGrid_C.SetStats");

	UMatchStatsGrid_C_SetStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AthenaMatchStats != nullptr)
		*AthenaMatchStats = params.AthenaMatchStats;
}


// Function MatchStatsGrid.MatchStatsGrid_C.SetStat (Integer)
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonNumericTextBlock* Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchStatsGrid_C::SetStat__Integer_(class UCommonNumericTextBlock* Target, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchStatsGrid.MatchStatsGrid_C.SetStat (Integer)");

	UMatchStatsGrid_C_SetStat__Integer__Params params;
	params.Target = Target;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchStatsGrid.MatchStatsGrid_C.SetStat (Float)
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonNumericTextBlock* Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchStatsGrid_C::SetStat__Float_(class UCommonNumericTextBlock* Target, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchStatsGrid.MatchStatsGrid_C.SetStat (Float)");

	UMatchStatsGrid_C_SetStat__Float__Params params;
	params.Target = Target;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

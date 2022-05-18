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

// Function MissionPanelContent.MissionPanelContent_C.Setup Mission Rewards
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>       Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<ERewardListEntryType> RewardType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionPanelContent_C::Setup_Mission_Rewards(TEnumAsByte<ERewardListEntryType> RewardType, TArray<class UFortItem*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionPanelContent.MissionPanelContent_C.Setup Mission Rewards");

	UMissionPanelContent_C_Setup_Mission_Rewards_Params params;
	params.RewardType = RewardType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function MissionPanelContent.MissionPanelContent_C.UpdateOverviewObjectives
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionPanelContent_C::UpdateOverviewObjectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionPanelContent.MissionPanelContent_C.UpdateOverviewObjectives");

	UMissionPanelContent_C_UpdateOverviewObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionPanelContent.MissionPanelContent_C.UpdateMissionRewards
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionPanelContent_C::UpdateMissionRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionPanelContent.MissionPanelContent_C.UpdateMissionRewards");

	UMissionPanelContent_C_UpdateMissionRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionPanelContent.MissionPanelContent_C.UpdateMissionDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionPanelContent_C::UpdateMissionDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionPanelContent.MissionPanelContent_C.UpdateMissionDisplay");

	UMissionPanelContent_C_UpdateMissionDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionPanelContent.MissionPanelContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionPanelContent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionPanelContent.MissionPanelContent_C.Construct");

	UMissionPanelContent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionPanelContent.MissionPanelContent_C.ExecuteUbergraph_MissionPanelContent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionPanelContent_C::ExecuteUbergraph_MissionPanelContent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionPanelContent.MissionPanelContent_C.ExecuteUbergraph_MissionPanelContent");

	UMissionPanelContent_C_ExecuteUbergraph_MissionPanelContent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionRewardDeltaWidget.MissionRewardDeltaWidget_C.Rewind IntroAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionRewardDeltaWidget_C::Rewind_IntroAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionRewardDeltaWidget.MissionRewardDeltaWidget_C.Rewind IntroAnim");

	UMissionRewardDeltaWidget_C_Rewind_IntroAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionRewardDeltaWidget.MissionRewardDeltaWidget_C.Reset IntroAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionRewardDeltaWidget_C::Reset_IntroAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionRewardDeltaWidget.MissionRewardDeltaWidget_C.Reset IntroAnim");

	UMissionRewardDeltaWidget_C_Reset_IntroAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionRewardDeltaWidget.MissionRewardDeltaWidget_C.IntroAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionRewardDeltaWidget_C::IntroAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionRewardDeltaWidget.MissionRewardDeltaWidget_C.IntroAnim");

	UMissionRewardDeltaWidget_C_IntroAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionRewardDeltaWidget.MissionRewardDeltaWidget_C.SetDeltaReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortItemDelta          DeltaReward                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UMissionRewardDeltaWidget_C::SetDeltaReward(const struct FFortItemDelta& DeltaReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionRewardDeltaWidget.MissionRewardDeltaWidget_C.SetDeltaReward");

	UMissionRewardDeltaWidget_C_SetDeltaReward_Params params;
	params.DeltaReward = DeltaReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

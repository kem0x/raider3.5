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

// Function TopBarSkillPoints.TopBarSkillPoints_C.HandleItemCountChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*     Definition                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopBarSkillPoints_C::HandleItemCountChanged(class UFortItemDefinition* Definition, int Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.HandleItemCountChanged");

	UTopBarSkillPoints_C_HandleItemCountChanged_Params params;
	params.Definition = Definition;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.HandleLocalAccountInfoChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPrivateAccountInfo NewInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UTopBarSkillPoints_C::HandleLocalAccountInfoChanged(const struct FFortPrivateAccountInfo& NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.HandleLocalAccountInfoChanged");

	UTopBarSkillPoints_C_HandleLocalAccountInfoChanged_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.GetMissionRewardBadgeTooltipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UTopBarSkillPoints_C::GetMissionRewardBadgeTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.GetMissionRewardBadgeTooltipWidget");

	UTopBarSkillPoints_C_GetMissionRewardBadgeTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.Has Mission Reward Boost
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTopBarSkillPoints_C::Has_Mission_Reward_Boost(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.Has Mission Reward Boost");

	UTopBarSkillPoints_C_Has_Mission_Reward_Boost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.GetFounderBadgetTooltipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UTopBarSkillPoints_C::GetFounderBadgetTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.GetFounderBadgetTooltipWidget");

	UTopBarSkillPoints_C_GetFounderBadgetTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.GetMonthlyVIPBadgetTooltipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UTopBarSkillPoints_C::GetMonthlyVIPBadgetTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.GetMonthlyVIPBadgetTooltipWidget");

	UTopBarSkillPoints_C_GetMonthlyVIPBadgetTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.Has VIP Badge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTopBarSkillPoints_C::Has_VIP_Badge(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.Has VIP Badge");

	UTopBarSkillPoints_C_Has_VIP_Badge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.Has Founder Badge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTopBarSkillPoints_C::Has_Founder_Badge(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.Has Founder Badge");

	UTopBarSkillPoints_C_Has_Founder_Badge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.HandleRemotePlayerRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RemovedIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopBarSkillPoints_C::HandleRemotePlayerRemoved(int RemovedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.HandleRemotePlayerRemoved");

	UTopBarSkillPoints_C_HandleRemotePlayerRemoved_Params params;
	params.RemovedIndex = RemovedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.HandleOnTeamMemberStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewMemberState                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UTopBarSkillPoints_C::HandleOnTeamMemberStateChanged(const struct FFortTeamMemberInfo& NewMemberState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.HandleOnTeamMemberStateChanged");

	UTopBarSkillPoints_C_HandleOnTeamMemberStateChanged_Params params;
	params.NewMemberState = NewMemberState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.Unbind Party Delegates
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBarSkillPoints_C::Unbind_Party_Delegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.Unbind Party Delegates");

	UTopBarSkillPoints_C_Unbind_Party_Delegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.Bind Party Delegates
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBarSkillPoints_C::Bind_Party_Delegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.Bind Party Delegates");

	UTopBarSkillPoints_C_Bind_Party_Delegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.BoostExperiencePercentOfLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTopBarSkillPoints_C::BoostExperiencePercentOfLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.BoostExperiencePercentOfLevel");

	UTopBarSkillPoints_C_BoostExperiencePercentOfLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.RestExperencePercentOfLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTopBarSkillPoints_C::RestExperencePercentOfLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.RestExperencePercentOfLevel");

	UTopBarSkillPoints_C_RestExperencePercentOfLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.GetBonusExperienceDescription
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Result                         (Parm, OutParm)

void UTopBarSkillPoints_C::GetBonusExperienceDescription(struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.GetBonusExperienceDescription");

	UTopBarSkillPoints_C_GetBonusExperienceDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.GetSkillPointsTooltipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UTopBarSkillPoints_C::GetSkillPointsTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.GetSkillPointsTooltipWidget");

	UTopBarSkillPoints_C_GetSkillPointsTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.GetBonusExperienceTooltipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UTopBarSkillPoints_C::GetBonusExperienceTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.GetBonusExperienceTooltipWidget");

	UTopBarSkillPoints_C_GetBonusExperienceTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.Update Boosts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTopBarSkillPoints_C::Update_Boosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.Update Boosts");

	UTopBarSkillPoints_C_Update_Boosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.UpdateAccountInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo  Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTopBarSkillPoints_C::UpdateAccountInfo(const struct FFortPublicAccountInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.UpdateAccountInfo");

	UTopBarSkillPoints_C_UpdateAccountInfo_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTopBarSkillPoints_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.Construct");

	UTopBarSkillPoints_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.Xp Boost Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BoostAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopBarSkillPoints_C::Xp_Boost_Changed(int BoostAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.Xp Boost Changed");

	UTopBarSkillPoints_C_Xp_Boost_Changed_Params params;
	params.BoostAmount = BoostAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTopBarSkillPoints_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature");

	UTopBarSkillPoints_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.On Party Left
// (BlueprintCallable, BlueprintEvent)

void UTopBarSkillPoints_C::On_Party_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.On Party Left");

	UTopBarSkillPoints_C_On_Party_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.On Party Joined
// (BlueprintCallable, BlueprintEvent)

void UTopBarSkillPoints_C::On_Party_Joined()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.On Party Joined");

	UTopBarSkillPoints_C_On_Party_Joined_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.Founder Changed
// (BlueprintCallable, BlueprintEvent)

void UTopBarSkillPoints_C::Founder_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.Founder Changed");

	UTopBarSkillPoints_C_Founder_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTopBarSkillPoints_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.Destruct");

	UTopBarSkillPoints_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarSkillPoints.TopBarSkillPoints_C.ExecuteUbergraph_TopBarSkillPoints
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopBarSkillPoints_C::ExecuteUbergraph_TopBarSkillPoints(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarSkillPoints.TopBarSkillPoints_C.ExecuteUbergraph_TopBarSkillPoints");

	UTopBarSkillPoints_C_ExecuteUbergraph_TopBarSkillPoints_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function AthenaSeasonReward.AthenaSeasonReward_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Claimed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Locked                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LevelAchieved                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonReward_C::SetState(bool Claimed, bool Locked, bool LevelAchieved)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.SetState");

	UAthenaSeasonReward_C_SetState_Params params;
	params.Claimed = Claimed;
	params.Locked = Locked;
	params.LevelAchieved = LevelAchieved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               ItemToRepresent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Claimed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Locked                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LevelAchieved                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonReward_C::Setup(class UFortItem* ItemToRepresent, bool Claimed, bool Locked, bool LevelAchieved)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.Setup");

	UAthenaSeasonReward_C_Setup_Params params;
	params.ItemToRepresent = ItemToRepresent;
	params.Claimed = Claimed;
	params.Locked = Locked;
	params.LevelAchieved = LevelAchieved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UAthenaSeasonReward_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.OnHovered");

	UAthenaSeasonReward_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.PlayIntro
// (BlueprintCallable, BlueprintEvent)

void UAthenaSeasonReward_C::PlayIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.PlayIntro");

	UAthenaSeasonReward_C_PlayIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.ViewItem
// (BlueprintCallable, BlueprintEvent)

void UAthenaSeasonReward_C::ViewItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.ViewItem");

	UAthenaSeasonReward_C_ViewItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.OnClicked
// (Event, Protected, BlueprintEvent)

void UAthenaSeasonReward_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.OnClicked");

	UAthenaSeasonReward_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.ExecuteUbergraph_AthenaSeasonReward
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonReward_C::ExecuteUbergraph_AthenaSeasonReward(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.ExecuteUbergraph_AthenaSeasonReward");

	UAthenaSeasonReward_C_ExecuteUbergraph_AthenaSeasonReward_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

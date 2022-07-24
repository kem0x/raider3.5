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

// Function AthenaSeasonReward.AthenaSeasonReward_C.ViewInVault
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonReward_C::ViewInVault()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.ViewInVault");

	UAthenaSeasonReward_C_ViewInVault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.SetSecondaryItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               SecondaryItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonReward_C::SetSecondaryItem(class UFortItem* SecondaryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.SetSecondaryItem");

	UAthenaSeasonReward_C_SetSecondaryItem_Params params;
	params.SecondaryItem = SecondaryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.EnableRarityFlare
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonReward_C::EnableRarityFlare()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.EnableRarityFlare");

	UAthenaSeasonReward_C_EnableRarityFlare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.SetViewOnHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldViewOnHover              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonReward_C::SetViewOnHover(bool ShouldViewOnHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.SetViewOnHover");

	UAthenaSeasonReward_C_SetViewOnHover_Params params;
	params.ShouldViewOnHover = ShouldViewOnHover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


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
// EFortItemCardSize              ItemCardSize                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonReward_C::Setup(class UFortItem* ItemToRepresent, bool Claimed, bool Locked, bool LevelAchieved, EFortItemCardSize ItemCardSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.Setup");

	UAthenaSeasonReward_C_Setup_Params params;
	params.ItemToRepresent = ItemToRepresent;
	params.Claimed = Claimed;
	params.Locked = Locked;
	params.LevelAchieved = LevelAchieved;
	params.ItemCardSize = ItemCardSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UAthenaSeasonReward_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.BP_OnHovered");

	UAthenaSeasonReward_C_BP_OnHovered_Params params;

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


// Function AthenaSeasonReward.AthenaSeasonReward_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UAthenaSeasonReward_C::BP_OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.BP_OnClicked");

	UAthenaSeasonReward_C_BP_OnClicked_Params params;

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

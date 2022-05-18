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

// Function HeroSquadBonus.HeroSquadBonus_C.Get_ToolTipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UHeroSquadBonus_C::Get_ToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonus.HeroSquadBonus_C.Get_ToolTipWidget");

	UHeroSquadBonus_C_Get_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeroSquadBonus.HeroSquadBonus_C.SetBackgroundGlow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           GlowBackground                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroSquadBonus_C::SetBackgroundGlow(bool GlowBackground)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonus.HeroSquadBonus_C.SetBackgroundGlow");

	UHeroSquadBonus_C_SetBackgroundGlow_Params params;
	params.GlowBackground = GlowBackground;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadBonus.HeroSquadBonus_C.UpdateSquadBonusIconState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHeroSquadBonus_C::UpdateSquadBonusIconState()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonus.HeroSquadBonus_C.UpdateSquadBonusIconState");

	UHeroSquadBonus_C_UpdateSquadBonusIconState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadBonus.HeroSquadBonus_C.UpdateBonusPerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHeroSquadBonus_C::UpdateBonusPerk()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonus.HeroSquadBonus_C.UpdateBonusPerk");

	UHeroSquadBonus_C_UpdateBonusPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadBonus.HeroSquadBonus_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroSquadBonus_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonus.HeroSquadBonus_C.PreConstruct");

	UHeroSquadBonus_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadBonus.HeroSquadBonus_C.OnPerkUpdated
// (Event, Public, BlueprintEvent)

void UHeroSquadBonus_C::OnPerkUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonus.HeroSquadBonus_C.OnPerkUpdated");

	UHeroSquadBonus_C_OnPerkUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadBonus.HeroSquadBonus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHeroSquadBonus_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonus.HeroSquadBonus_C.Construct");

	UHeroSquadBonus_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadBonus.HeroSquadBonus_C.OnCombinedTooltipDescriptionReady
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Description                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHeroSquadBonus_C::OnCombinedTooltipDescriptionReady(struct FText* Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonus.HeroSquadBonus_C.OnCombinedTooltipDescriptionReady");

	UHeroSquadBonus_C_OnCombinedTooltipDescriptionReady_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadBonus.HeroSquadBonus_C.ExecuteUbergraph_HeroSquadBonus
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroSquadBonus_C::ExecuteUbergraph_HeroSquadBonus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonus.HeroSquadBonus_C.ExecuteUbergraph_HeroSquadBonus");

	UHeroSquadBonus_C_ExecuteUbergraph_HeroSquadBonus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

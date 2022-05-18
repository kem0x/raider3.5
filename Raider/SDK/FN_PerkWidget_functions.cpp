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

// Function PerkWidget.PerkWidget_C.CreateToolTipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UPerkWidget_C::CreateToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.CreateToolTipWidget");

	UPerkWidget_C_CreateToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PerkWidget.PerkWidget_C.InitializeTextInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidget_C::InitializeTextInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.InitializeTextInfo");

	UPerkWidget_C_InitializeTextInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.HighlightBadge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidget_C::HighlightBadge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.HighlightBadge");

	UPerkWidget_C_HighlightBadge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.GetPerkStat
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTooltipStat            TooltipStat                    (Parm, OutParm)

void UPerkWidget_C::GetPerkStat(struct FTooltipStat* TooltipStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.GetPerkStat");

	UPerkWidget_C_GetPerkStat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TooltipStat != nullptr)
		*TooltipStat = params.TooltipStat;
}


// Function PerkWidget.PerkWidget_C.ShowTierImage
// (Public, BlueprintCallable, BlueprintEvent)

void UPerkWidget_C::ShowTierImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.ShowTierImage");

	UPerkWidget_C_ShowTierImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.SetupBadge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidget_C::SetupBadge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.SetupBadge");

	UPerkWidget_C_SetupBadge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.InitializeHeroBonusIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidget_C::InitializeHeroBonusIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.InitializeHeroBonusIcon");

	UPerkWidget_C_InitializeHeroBonusIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.InitializeTextOnlyPerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidget_C::InitializeTextOnlyPerk()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.InitializeTextOnlyPerk");

	UPerkWidget_C_InitializeTextOnlyPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.ShouldFadePerk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPerkWidget_C::ShouldFadePerk(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.ShouldFadePerk");

	UPerkWidget_C_ShouldFadePerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PerkWidget.PerkWidget_C.GetHighlightColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UPerkWidget_C::GetHighlightColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.GetHighlightColor");

	UPerkWidget_C_GetHighlightColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function PerkWidget.PerkWidget_C.GetTierAbilityBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             SlateBrush                     (Parm, OutParm)

void UPerkWidget_C::GetTierAbilityBrush(struct FSlateBrush* SlateBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.GetTierAbilityBrush");

	UPerkWidget_C_GetTierAbilityBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlateBrush != nullptr)
		*SlateBrush = params.SlateBrush;
}


// Function PerkWidget.PerkWidget_C.InitializeAbilityPerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidget_C::InitializeAbilityPerk()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.InitializeAbilityPerk");

	UPerkWidget_C_InitializeAbilityPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.InitializeBasicPerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidget_C::InitializeBasicPerk()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.InitializeBasicPerk");

	UPerkWidget_C_InitializeBasicPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPerkWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.PreConstruct");

	UPerkWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPerkWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.Construct");

	UPerkWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.OnPerkUpdated
// (Event, Public, BlueprintEvent)

void UPerkWidget_C::OnPerkUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.OnPerkUpdated");

	UPerkWidget_C_OnPerkUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.OnTooltipDescriptionReady
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FText>*          DescriptionList                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPerkWidget_C::OnTooltipDescriptionReady(TArray<struct FText>* DescriptionList)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.OnTooltipDescriptionReady");

	UPerkWidget_C_OnTooltipDescriptionReady_Params params;
	params.DescriptionList = DescriptionList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.ExecuteUbergraph_PerkWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPerkWidget_C::ExecuteUbergraph_PerkWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.ExecuteUbergraph_PerkWidget");

	UPerkWidget_C_ExecuteUbergraph_PerkWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

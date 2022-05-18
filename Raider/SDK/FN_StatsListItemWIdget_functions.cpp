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

// Function StatsListItemWIdget.StatsListItemWIdget_C.SetTextAndBorderHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHightlight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatsListItemWIdget_C::SetTextAndBorderHighlight(bool bHightlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.SetTextAndBorderHighlight");

	UStatsListItemWIdget_C_SetTextAndBorderHighlight_Params params;
	params.bHightlight = bHightlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.GetListItemTooltipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UStatsListItemWIdget_C::GetListItemTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.GetListItemTooltipWidget");

	UStatsListItemWIdget_C_GetListItemTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.SetStatIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UStatsListItemWIdget_C::SetStatIcon(const struct FSlateBrush& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.SetStatIcon");

	UStatsListItemWIdget_C_SetStatIcon_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBuffArrows
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute   CurrentAttribute               (BlueprintVisible, BlueprintReadOnly, Parm)

void UStatsListItemWIdget_C::UpdateBuffArrows(const struct FFortDisplayAttribute& CurrentAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBuffArrows");

	UStatsListItemWIdget_C_UpdateBuffArrows_Params params;
	params.CurrentAttribute = CurrentAttribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBasicPairLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute   CurrentAttribute               (BlueprintVisible, BlueprintReadOnly, Parm)

void UStatsListItemWIdget_C::UpdateBasicPairLabel(const struct FFortDisplayAttribute& CurrentAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBasicPairLabel");

	UStatsListItemWIdget_C_UpdateBasicPairLabel_Params params;
	params.CurrentAttribute = CurrentAttribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateValueText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute   CurrentAttribute               (BlueprintVisible, BlueprintReadOnly, Parm)

void UStatsListItemWIdget_C::UpdateValueText(const struct FFortDisplayAttribute& CurrentAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateValueText");

	UStatsListItemWIdget_C_UpdateValueText_Params params;
	params.CurrentAttribute = CurrentAttribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute   CurrentAttribute               (BlueprintVisible, BlueprintReadOnly, Parm)

void UStatsListItemWIdget_C::UpdateType(const struct FFortDisplayAttribute& CurrentAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateType");

	UStatsListItemWIdget_C_UpdateType_Params params;
	params.CurrentAttribute = CurrentAttribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute   CurrentAttribute               (BlueprintVisible, BlueprintReadOnly, Parm)

void UStatsListItemWIdget_C::UpdateColors(const struct FFortDisplayAttribute& CurrentAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateColors");

	UStatsListItemWIdget_C_UpdateColors_Params params;
	params.CurrentAttribute = CurrentAttribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStatsListItemWIdget_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.Update");

	UStatsListItemWIdget_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.ValueChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatsListItemWIdget_C::ValueChanged(float* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.ValueChanged");

	UStatsListItemWIdget_C_ValueChanged_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStatsListItemWIdget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.Construct");

	UStatsListItemWIdget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.PreviewEnded
// (Event, Public, BlueprintEvent)

void UStatsListItemWIdget_C::PreviewEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.PreviewEnded");

	UStatsListItemWIdget_C_PreviewEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.PreviewStarted
// (Event, Public, BlueprintEvent)

void UStatsListItemWIdget_C::PreviewStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.PreviewStarted");

	UStatsListItemWIdget_C_PreviewStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.DisplayAttributeChanged
// (Event, Public, BlueprintEvent)

void UStatsListItemWIdget_C::DisplayAttributeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.DisplayAttributeChanged");

	UStatsListItemWIdget_C_DisplayAttributeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.ExecuteUbergraph_StatsListItemWIdget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatsListItemWIdget_C::ExecuteUbergraph_StatsListItemWIdget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.ExecuteUbergraph_StatsListItemWIdget");

	UStatsListItemWIdget_C_ExecuteUbergraph_StatsListItemWIdget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

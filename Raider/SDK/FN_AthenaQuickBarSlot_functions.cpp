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

// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.UpdateJetpackFuelGaugeVisiblity
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickBarSlot_C::UpdateJetpackFuelGaugeVisiblity()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.UpdateJetpackFuelGaugeVisiblity");

	UAthenaQuickBarSlot_C_UpdateJetpackFuelGaugeVisiblity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.ShowJetpackFuelGauge
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickBarSlot_C::ShowJetpackFuelGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.ShowJetpackFuelGauge");

	UAthenaQuickBarSlot_C_ShowJetpackFuelGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.HideJetpackFuelGauge
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickBarSlot_C::HideJetpackFuelGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.HideJetpackFuelGauge");

	UAthenaQuickBarSlot_C_HideJetpackFuelGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InTouchEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaQuickBarSlot_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.OnTouchStarted");

	UAthenaQuickBarSlot_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.OnRefreshItem
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickBarSlot_C::OnRefreshItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.OnRefreshItem");

	UAthenaQuickBarSlot_C_OnRefreshItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.ExecuteUbergraph_AthenaQuickBarSlot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickBarSlot_C::ExecuteUbergraph_AthenaQuickBarSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.ExecuteUbergraph_AthenaQuickBarSlot");

	UAthenaQuickBarSlot_C_ExecuteUbergraph_AthenaQuickBarSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

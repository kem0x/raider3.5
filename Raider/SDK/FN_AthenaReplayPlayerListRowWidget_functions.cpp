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

// Function AthenaReplayPlayerListRowWidget.AthenaReplayPlayerListRowWidget_C.OnKillsChanged
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaReplayPlayerListRowWidget_C::OnKillsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayPlayerListRowWidget.AthenaReplayPlayerListRowWidget_C.OnKillsChanged");

	UAthenaReplayPlayerListRowWidget_C_OnKillsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayPlayerListRowWidget.AthenaReplayPlayerListRowWidget_C.OnIsSpectatorTargetChanged
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaReplayPlayerListRowWidget_C::OnIsSpectatorTargetChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayPlayerListRowWidget.AthenaReplayPlayerListRowWidget_C.OnIsSpectatorTargetChanged");

	UAthenaReplayPlayerListRowWidget_C_OnIsSpectatorTargetChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayPlayerListRowWidget.AthenaReplayPlayerListRowWidget_C.Refresh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaReplayPlayerListRowWidget_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayPlayerListRowWidget.AthenaReplayPlayerListRowWidget_C.Refresh");

	UAthenaReplayPlayerListRowWidget_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayPlayerListRowWidget.AthenaReplayPlayerListRowWidget_C.OnEntryDataSet
// (Event, Protected, BlueprintEvent)

void UAthenaReplayPlayerListRowWidget_C::OnEntryDataSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayPlayerListRowWidget.AthenaReplayPlayerListRowWidget_C.OnEntryDataSet");

	UAthenaReplayPlayerListRowWidget_C_OnEntryDataSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayPlayerListRowWidget.AthenaReplayPlayerListRowWidget_C.ExecuteUbergraph_AthenaReplayPlayerListRowWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayPlayerListRowWidget_C::ExecuteUbergraph_AthenaReplayPlayerListRowWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayPlayerListRowWidget.AthenaReplayPlayerListRowWidget_C.ExecuteUbergraph_AthenaReplayPlayerListRowWidget");

	UAthenaReplayPlayerListRowWidget_C_ExecuteUbergraph_AthenaReplayPlayerListRowWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

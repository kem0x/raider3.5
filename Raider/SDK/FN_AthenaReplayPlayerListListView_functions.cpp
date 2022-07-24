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

// Function AthenaReplayPlayerListListView.AthenaReplayPlayerListListView_C.FocusList
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaReplayPlayerListListView_C::FocusList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayPlayerListListView.AthenaReplayPlayerListListView_C.FocusList");

	UAthenaReplayPlayerListListView_C_FocusList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayPlayerListListView.AthenaReplayPlayerListListView_C.UpdateListUI
// (Event, Protected, BlueprintEvent)

void UAthenaReplayPlayerListListView_C::UpdateListUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayPlayerListListView.AthenaReplayPlayerListListView_C.UpdateListUI");

	UAthenaReplayPlayerListListView_C_UpdateListUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayPlayerListListView.AthenaReplayPlayerListListView_C.ExecuteUbergraph_AthenaReplayPlayerListListView
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayPlayerListListView_C::ExecuteUbergraph_AthenaReplayPlayerListListView(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayPlayerListListView.AthenaReplayPlayerListListView_C.ExecuteUbergraph_AthenaReplayPlayerListListView");

	UAthenaReplayPlayerListListView_C_ExecuteUbergraph_AthenaReplayPlayerListListView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

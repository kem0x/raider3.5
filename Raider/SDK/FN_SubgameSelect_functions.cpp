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

// Function SubgameSelect.SubgameSelect_C.UpdateHeaderAndFooter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HideHeader                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HideFooter                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelect_C::UpdateHeaderAndFooter(bool HideHeader, bool HideFooter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect.SubgameSelect_C.UpdateHeaderAndFooter");

	USubgameSelect_C_UpdateHeaderAndFooter_Params params;
	params.HideHeader = HideHeader;
	params.HideFooter = HideFooter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect.SubgameSelect_C.PopContentWidgetInternal
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContentPushState*      State                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* USubgameSelect_C::PopContentWidgetInternal(struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect.SubgameSelect_C.PopContentWidgetInternal");

	USubgameSelect_C_PopContentWidgetInternal_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubgameSelect.SubgameSelect_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void USubgameSelect_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect.SubgameSelect_C.Initialize");

	USubgameSelect_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect.SubgameSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USubgameSelect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect.SubgameSelect_C.Construct");

	USubgameSelect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect.SubgameSelect_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortUIState*                  PreviousUIState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelect_C::OnEnterState(EFortUIState* PreviousUIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect.SubgameSelect_C.OnEnterState");

	USubgameSelect_C_OnEnterState_Params params;
	params.PreviousUIState = PreviousUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect.SubgameSelect_C.PushContentWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FContentPushState*      State                          (BlueprintVisible, BlueprintReadOnly, Parm)

void USubgameSelect_C::PushContentWidgetInternal(class UWidget** Widget, struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect.SubgameSelect_C.PushContentWidgetInternal");

	USubgameSelect_C_PushContentWidgetInternal_Params params;
	params.Widget = Widget;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect.SubgameSelect_C.ExecuteUbergraph_SubgameSelect
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelect_C::ExecuteUbergraph_SubgameSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect.SubgameSelect_C.ExecuteUbergraph_SubgameSelect");

	USubgameSelect_C_ExecuteUbergraph_SubgameSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

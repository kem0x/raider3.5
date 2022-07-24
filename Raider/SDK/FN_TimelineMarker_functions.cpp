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

// Function TimelineMarker.TimelineMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTimelineMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineMarker.TimelineMarker_C.Construct");

	UTimelineMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineMarker.TimelineMarker_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UTimelineMarker_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineMarker.TimelineMarker_C.BP_OnHovered");

	UTimelineMarker_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineMarker.TimelineMarker_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UTimelineMarker_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineMarker.TimelineMarker_C.BP_OnUnhovered");

	UTimelineMarker_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineMarker.TimelineMarker_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UTimelineMarker_C::BP_OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineMarker.TimelineMarker_C.BP_OnClicked");

	UTimelineMarker_C_BP_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineMarker.TimelineMarker_C.ExecuteUbergraph_TimelineMarker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTimelineMarker_C::ExecuteUbergraph_TimelineMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineMarker.TimelineMarker_C.ExecuteUbergraph_TimelineMarker");

	UTimelineMarker_C_ExecuteUbergraph_TimelineMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

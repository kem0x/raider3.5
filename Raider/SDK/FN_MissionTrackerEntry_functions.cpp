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

// Function MissionTrackerEntry.MissionTrackerEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionTrackerEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerEntry.MissionTrackerEntry_C.Construct");

	UMissionTrackerEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerEntry.MissionTrackerEntry_C.ExecuteUbergraph_MissionTrackerEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionTrackerEntry_C::ExecuteUbergraph_MissionTrackerEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerEntry.MissionTrackerEntry_C.ExecuteUbergraph_MissionTrackerEntry");

	UMissionTrackerEntry_C_ExecuteUbergraph_MissionTrackerEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerEntry.MissionTrackerEntry_C.WidgetVisibilityChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMissionTrackerEntry_C::WidgetVisibilityChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerEntry.MissionTrackerEntry_C.WidgetVisibilityChanged__DelegateSignature");

	UMissionTrackerEntry_C_WidgetVisibilityChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

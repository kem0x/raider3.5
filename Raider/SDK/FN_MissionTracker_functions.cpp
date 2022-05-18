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

// Function MissionTracker.MissionTracker_C.HandlePinnedQuestsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionTracker_C::HandlePinnedQuestsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTracker.MissionTracker_C.HandlePinnedQuestsChanged");

	UMissionTracker_C_HandlePinnedQuestsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTracker.MissionTracker_C.HasVisibleMission
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMissionTracker_C::HasVisibleMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTracker.MissionTracker_C.HasVisibleMission");

	UMissionTracker_C_HasVisibleMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionTracker.MissionTracker_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionTracker_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTracker.MissionTracker_C.UpdateVisibility");

	UMissionTracker_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTracker.MissionTracker_C.HandleQuestsUpdated
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionTracker_C::HandleQuestsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTracker.MissionTracker_C.HandleQuestsUpdated");

	UMissionTracker_C_HandleQuestsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTracker.MissionTracker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionTracker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTracker.MissionTracker_C.Construct");

	UMissionTracker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTracker.MissionTracker_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionTracker_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTracker.MissionTracker_C.Destruct");

	UMissionTracker_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTracker.MissionTracker_C.ExecuteUbergraph_MissionTracker
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionTracker_C::ExecuteUbergraph_MissionTracker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTracker.MissionTracker_C.ExecuteUbergraph_MissionTracker");

	UMissionTracker_C_ExecuteUbergraph_MissionTracker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

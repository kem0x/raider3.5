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

// Function AthenaWatcherEye.AthenaWatcherEye_C.SpectatorAdded_Watcher
// (BlueprintCallable, BlueprintEvent)

void UAthenaWatcherEye_C::SpectatorAdded_Watcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaWatcherEye.AthenaWatcherEye_C.SpectatorAdded_Watcher");

	UAthenaWatcherEye_C_SpectatorAdded_Watcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaWatcherEye.AthenaWatcherEye_C.Hide_Watcher
// (BlueprintCallable, BlueprintEvent)

void UAthenaWatcherEye_C::Hide_Watcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaWatcherEye.AthenaWatcherEye_C.Hide_Watcher");

	UAthenaWatcherEye_C_Hide_Watcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaWatcherEye.AthenaWatcherEye_C.Show_Watcher
// (BlueprintCallable, BlueprintEvent)

void UAthenaWatcherEye_C::Show_Watcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaWatcherEye.AthenaWatcherEye_C.Show_Watcher");

	UAthenaWatcherEye_C_Show_Watcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaWatcherEye.AthenaWatcherEye_C.End_Watcher
// (BlueprintCallable, BlueprintEvent)

void UAthenaWatcherEye_C::End_Watcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaWatcherEye.AthenaWatcherEye_C.End_Watcher");

	UAthenaWatcherEye_C_End_Watcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaWatcherEye.AthenaWatcherEye_C.SpectatorRemoved_Watcher
// (BlueprintCallable, BlueprintEvent)

void UAthenaWatcherEye_C::SpectatorRemoved_Watcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaWatcherEye.AthenaWatcherEye_C.SpectatorRemoved_Watcher");

	UAthenaWatcherEye_C_SpectatorRemoved_Watcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaWatcherEye.AthenaWatcherEye_C.Begin_Watcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ManySpectatorsJoining          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaWatcherEye_C::Begin_Watcher(bool ManySpectatorsJoining)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaWatcherEye.AthenaWatcherEye_C.Begin_Watcher");

	UAthenaWatcherEye_C_Begin_Watcher_Params params;
	params.ManySpectatorsJoining = ManySpectatorsJoining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaWatcherEye.AthenaWatcherEye_C.ManySpectatorsAdded_Watcher
// (BlueprintCallable, BlueprintEvent)

void UAthenaWatcherEye_C::ManySpectatorsAdded_Watcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaWatcherEye.AthenaWatcherEye_C.ManySpectatorsAdded_Watcher");

	UAthenaWatcherEye_C_ManySpectatorsAdded_Watcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaWatcherEye.AthenaWatcherEye_C.ExecuteUbergraph_AthenaWatcherEye
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaWatcherEye_C::ExecuteUbergraph_AthenaWatcherEye(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaWatcherEye.AthenaWatcherEye_C.ExecuteUbergraph_AthenaWatcherEye");

	UAthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

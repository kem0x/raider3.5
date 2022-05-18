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

// Function FriendCodeEntry.FriendCodeEntry_C.SetupMIDs
// (Public, BlueprintCallable, BlueprintEvent)

void UFriendCodeEntry_C::SetupMIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeEntry.FriendCodeEntry_C.SetupMIDs");

	UFriendCodeEntry_C_SetupMIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodeEntry.FriendCodeEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFriendCodeEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeEntry.FriendCodeEntry_C.Construct");

	UFriendCodeEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodeEntry.FriendCodeEntry_C.SetUsedDisplayState
// (BlueprintCallable, BlueprintEvent)

void UFriendCodeEntry_C::SetUsedDisplayState()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeEntry.FriendCodeEntry_C.SetUsedDisplayState");

	UFriendCodeEntry_C_SetUsedDisplayState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodeEntry.FriendCodeEntry_C.OnClicked
// (Event, Protected, BlueprintEvent)

void UFriendCodeEntry_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeEntry.FriendCodeEntry_C.OnClicked");

	UFriendCodeEntry_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodeEntry.FriendCodeEntry_C.ExecuteUbergraph_FriendCodeEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendCodeEntry_C::ExecuteUbergraph_FriendCodeEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeEntry.FriendCodeEntry_C.ExecuteUbergraph_FriendCodeEntry");

	UFriendCodeEntry_C_ExecuteUbergraph_FriendCodeEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function FriendCodeConsole.FriendCodeConsole_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFriendCodeConsole_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeConsole.FriendCodeConsole_C.Construct");

	UFriendCodeConsole_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodeConsole.FriendCodeConsole_C.OnSendFriendCodeMessageComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bMessageSent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendCodeConsole_C::OnSendFriendCodeMessageComplete(bool bMessageSent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeConsole.FriendCodeConsole_C.OnSendFriendCodeMessageComplete");

	UFriendCodeConsole_C_OnSendFriendCodeMessageComplete_Params params;
	params.bMessageSent = bMessageSent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodeConsole.FriendCodeConsole_C.OnClicked
// (Event, Protected, BlueprintEvent)

void UFriendCodeConsole_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeConsole.FriendCodeConsole_C.OnClicked");

	UFriendCodeConsole_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodeConsole.FriendCodeConsole_C.ExecuteUbergraph_FriendCodeConsole
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendCodeConsole_C::ExecuteUbergraph_FriendCodeConsole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeConsole.FriendCodeConsole_C.ExecuteUbergraph_FriendCodeConsole");

	UFriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

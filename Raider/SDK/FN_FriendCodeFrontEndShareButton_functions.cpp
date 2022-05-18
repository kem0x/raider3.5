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

// Function FriendCodeFrontEndShareButton.FriendCodeFrontEndShareButton_C.OnClicked
// (Event, Protected, BlueprintEvent)

void UFriendCodeFrontEndShareButton_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeFrontEndShareButton.FriendCodeFrontEndShareButton_C.OnClicked");

	UFriendCodeFrontEndShareButton_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodeFrontEndShareButton.FriendCodeFrontEndShareButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFriendCodeFrontEndShareButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeFrontEndShareButton.FriendCodeFrontEndShareButton_C.Construct");

	UFriendCodeFrontEndShareButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodeFrontEndShareButton.FriendCodeFrontEndShareButton_C.ExecuteUbergraph_FriendCodeFrontEndShareButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendCodeFrontEndShareButton_C::ExecuteUbergraph_FriendCodeFrontEndShareButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeFrontEndShareButton.FriendCodeFrontEndShareButton_C.ExecuteUbergraph_FriendCodeFrontEndShareButton");

	UFriendCodeFrontEndShareButton_C_ExecuteUbergraph_FriendCodeFrontEndShareButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function FriendLinkButton.FriendLinkButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFriendLinkButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendLinkButton.FriendLinkButton_C.Construct");

	UFriendLinkButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendLinkButton.FriendLinkButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UFriendLinkButton_C::BP_OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendLinkButton.FriendLinkButton_C.BP_OnClicked");

	UFriendLinkButton_C_BP_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendLinkButton.FriendLinkButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendLinkButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendLinkButton.FriendLinkButton_C.PreConstruct");

	UFriendLinkButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendLinkButton.FriendLinkButton_C.ExecuteUbergraph_FriendLinkButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendLinkButton_C::ExecuteUbergraph_FriendLinkButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendLinkButton.FriendLinkButton_C.ExecuteUbergraph_FriendLinkButton");

	UFriendLinkButton_C_ExecuteUbergraph_FriendLinkButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

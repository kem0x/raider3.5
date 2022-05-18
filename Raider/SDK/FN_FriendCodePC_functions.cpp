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

// Function FriendCodePC.FriendCodePC_C.GetCodeText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Result                         (Parm, OutParm)

void UFriendCodePC_C::GetCodeText(struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodePC.FriendCodePC_C.GetCodeText");

	UFriendCodePC_C_GetCodeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function FriendCodePC.FriendCodePC_C.GetFriendCodeUrl
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Result                         (Parm, OutParm, ZeroConstructor)

void UFriendCodePC_C::GetFriendCodeUrl(struct FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodePC.FriendCodePC_C.GetFriendCodeUrl");

	UFriendCodePC_C_GetFriendCodeUrl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function FriendCodePC.FriendCodePC_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFriendCodePC_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodePC.FriendCodePC_C.Construct");

	UFriendCodePC_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodePC.FriendCodePC_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFriendCodePC_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodePC.FriendCodePC_C.OnMouseEnter");

	UFriendCodePC_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodePC.FriendCodePC_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFriendCodePC_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodePC.FriendCodePC_C.OnMouseLeave");

	UFriendCodePC_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodePC.FriendCodePC_C.OnClicked
// (Event, Protected, BlueprintEvent)

void UFriendCodePC_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodePC.FriendCodePC_C.OnClicked");

	UFriendCodePC_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodePC.FriendCodePC_C.ExecuteUbergraph_FriendCodePC
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendCodePC_C::ExecuteUbergraph_FriendCodePC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodePC.FriendCodePC_C.ExecuteUbergraph_FriendCodePC");

	UFriendCodePC_C_ExecuteUbergraph_FriendCodePC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

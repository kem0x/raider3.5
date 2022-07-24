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

// Function FriendLink.FriendLink_C.GetStartingShareText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Button_Text                    (Parm, OutParm)

void UFriendLink_C::GetStartingShareText(struct FText* Button_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendLink.FriendLink_C.GetStartingShareText");

	UFriendLink_C_GetStartingShareText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button_Text != nullptr)
		*Button_Text = params.Button_Text;
}


// Function FriendLink.FriendLink_C.OnCopiedToClipboard
// (Event, Protected, BlueprintEvent)

void UFriendLink_C::OnCopiedToClipboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendLink.FriendLink_C.OnCopiedToClipboard");

	UFriendLink_C_OnCopiedToClipboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendLink.FriendLink_C.OnShareButtonTypeSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// EShareButtonType*              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendLink_C::OnShareButtonTypeSet(EShareButtonType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendLink.FriendLink_C.OnShareButtonTypeSet");

	UFriendLink_C_OnShareButtonTypeSet_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendLink.FriendLink_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendLink_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendLink.FriendLink_C.PreConstruct");

	UFriendLink_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendLink.FriendLink_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_826_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFriendLink_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_826_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendLink.FriendLink_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_826_CommonButtonClicked__DelegateSignature");

	UFriendLink_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_826_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendLink.FriendLink_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UFriendLink_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendLink.FriendLink_C.OnActivated");

	UFriendLink_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendLink.FriendLink_C.ExecuteUbergraph_FriendLink
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendLink_C::ExecuteUbergraph_FriendLink(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendLink.FriendLink_C.ExecuteUbergraph_FriendLink");

	UFriendLink_C_ExecuteUbergraph_FriendLink_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

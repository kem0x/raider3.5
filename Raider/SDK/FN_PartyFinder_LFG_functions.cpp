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

// Function PartyFinder_LFG.PartyFinder_LFG_C.HandleLFGFeatureStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinder_LFG_C::HandleLFGFeatureStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_LFG.PartyFinder_LFG_C.HandleLFGFeatureStatus");

	UPartyFinder_LFG_C_HandleLFGFeatureStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_LFG.PartyFinder_LFG_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPartyFinder_LFG_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_LFG.PartyFinder_LFG_C.OnFocusReceived");

	UPartyFinder_LFG_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PartyFinder_LFG.PartyFinder_LFG_C.OnLFGChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLFG                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_LFG_C::OnLFGChanged(bool IsLFG)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_LFG.PartyFinder_LFG_C.OnLFGChanged");

	UPartyFinder_LFG_C_OnLFGChanged_Params params;
	params.IsLFG = IsLFG;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_LFG.PartyFinder_LFG_C.BindContextEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinder_LFG_C::BindContextEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_LFG.PartyFinder_LFG_C.BindContextEvents");

	UPartyFinder_LFG_C_BindContextEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_LFG.PartyFinder_LFG_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPartyFinder_LFG_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_LFG.PartyFinder_LFG_C.Construct");

	UPartyFinder_LFG_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_LFG.PartyFinder_LFG_C.BndEvt__LFGButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyFinder_LFG_C::BndEvt__LFGButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_LFG.PartyFinder_LFG_C.BndEvt__LFGButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature");

	UPartyFinder_LFG_C_BndEvt__LFGButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_LFG.PartyFinder_LFG_C.LFGSoftReminder
// (BlueprintCallable, BlueprintEvent)

void UPartyFinder_LFG_C::LFGSoftReminder()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_LFG.PartyFinder_LFG_C.LFGSoftReminder");

	UPartyFinder_LFG_C_LFGSoftReminder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_LFG.PartyFinder_LFG_C.ExecuteUbergraph_PartyFinder_LFG
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_LFG_C::ExecuteUbergraph_PartyFinder_LFG(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_LFG.PartyFinder_LFG_C.ExecuteUbergraph_PartyFinder_LFG");

	UPartyFinder_LFG_C_ExecuteUbergraph_PartyFinder_LFG_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

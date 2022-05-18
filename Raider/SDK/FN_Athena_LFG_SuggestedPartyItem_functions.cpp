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

// Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthena_LFG_SuggestedPartyItem_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.OnFocusReceived");

	UAthena_LFG_SuggestedPartyItem_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthena_LFG_SuggestedPartyItem_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.OnFocusLost");

	UAthena_LFG_SuggestedPartyItem_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthena_LFG_SuggestedPartyItem_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.PreConstruct");

	UAthena_LFG_SuggestedPartyItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.UpdatePartyItemSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthena_LFG_SuggestedPartyItem_C::UpdatePartyItemSelection(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.UpdatePartyItemSelection");

	UAthena_LFG_SuggestedPartyItem_C_UpdatePartyItemSelection_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.ExecuteUbergraph_Athena_LFG_SuggestedPartyItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthena_LFG_SuggestedPartyItem_C::ExecuteUbergraph_Athena_LFG_SuggestedPartyItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.ExecuteUbergraph_Athena_LFG_SuggestedPartyItem");

	UAthena_LFG_SuggestedPartyItem_C_ExecuteUbergraph_Athena_LFG_SuggestedPartyItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.PartyFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthena_LFG_SuggestedPartyItem_C* FocusedPartyItem               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthena_LFG_SuggestedPartyItem_C::PartyFocused__DelegateSignature(class UAthena_LFG_SuggestedPartyItem_C* FocusedPartyItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.PartyFocused__DelegateSignature");

	UAthena_LFG_SuggestedPartyItem_C_PartyFocused__DelegateSignature_Params params;
	params.FocusedPartyItem = FocusedPartyItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

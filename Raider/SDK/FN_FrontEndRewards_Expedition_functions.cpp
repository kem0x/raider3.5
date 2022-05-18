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

// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.HandleTransitionInComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Expedition_C::HandleTransitionInComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.HandleTransitionInComplete");

	UFrontEndRewards_Expedition_C_HandleTransitionInComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ContinueSuccess
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Expedition_C::ContinueSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ContinueSuccess");

	UFrontEndRewards_Expedition_C_ContinueSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ContinueFail
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Expedition_C::ContinueFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ContinueFail");

	UFrontEndRewards_Expedition_C_ContinueFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.Check
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Expedition_C::Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.Check");

	UFrontEndRewards_Expedition_C_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetSuccessChanceFromExpedition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Expedition_C::SetSuccessChanceFromExpedition()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetSuccessChanceFromExpedition");

	UFrontEndRewards_Expedition_C_SetSuccessChanceFromExpedition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetTitleFromExpedition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Expedition_C::SetTitleFromExpedition()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetTitleFromExpedition");

	UFrontEndRewards_Expedition_C_SetTitleFromExpedition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetBrushFromExpedition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Expedition_C::SetBrushFromExpedition()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetBrushFromExpedition");

	UFrontEndRewards_Expedition_C_SetBrushFromExpedition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.PopulateFromExpedition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_Expedition_C::PopulateFromExpedition(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.PopulateFromExpedition");

	UFrontEndRewards_Expedition_C_PopulateFromExpedition_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.TransitionInBegin
// (Event, Protected, BlueprintEvent)

void UFrontEndRewards_Expedition_C::TransitionInBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.TransitionInBegin");

	UFrontEndRewards_Expedition_C_TransitionInBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.TransitionOutBegin
// (Event, Protected, BlueprintEvent)

void UFrontEndRewards_Expedition_C::TransitionOutBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.TransitionOutBegin");

	UFrontEndRewards_Expedition_C_TransitionOutBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnCollectExpeditionCompleted
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem**    Expedition                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSucceeded                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FFortItemInstanceQuantityPair>* Rewards                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEndRewards_Expedition_C::OnCollectExpeditionCompleted(class UFortExpeditionItem** Expedition, bool* bSucceeded, TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnCollectExpeditionCompleted");

	UFrontEndRewards_Expedition_C_OnCollectExpeditionCompleted_Params params;
	params.Expedition = Expedition;
	params.bSucceeded = bSucceeded;
	params.Rewards = Rewards;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnPrimaryAction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Expedition_C::OnPrimaryAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnPrimaryAction");

	UFrontEndRewards_Expedition_C_OnPrimaryAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFrontEndRewards_Expedition_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.Construct");

	UFrontEndRewards_Expedition_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ExecuteUbergraph_FrontEndRewards_Expedition
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_Expedition_C::ExecuteUbergraph_FrontEndRewards_Expedition(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ExecuteUbergraph_FrontEndRewards_Expedition");

	UFrontEndRewards_Expedition_C_ExecuteUbergraph_FrontEndRewards_Expedition_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnExpeditionCompleted__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Succeeded                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEndRewards_Expedition_C::OnExpeditionCompleted__DelegateSignature(bool Succeeded, TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnExpeditionCompleted__DelegateSignature");

	UFrontEndRewards_Expedition_C_OnExpeditionCompleted__DelegateSignature_Params params;
	params.Succeeded = Succeeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

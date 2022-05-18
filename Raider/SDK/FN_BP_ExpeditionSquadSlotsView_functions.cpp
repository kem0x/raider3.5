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

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.CreateAndAddSquadSlotButton
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SquadSlotIndex                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHomebaseSquadSlot*     SquadSlotDefinition            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UWidget*                 OutSquadSlotButtonHost         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFortSquadSlotSelectorButton* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFortSquadSlotSelectorButton* UBP_ExpeditionSquadSlotsView_C::CreateAndAddSquadSlotButton(int* SquadSlotIndex, struct FHomebaseSquadSlot* SquadSlotDefinition, class UWidget** OutSquadSlotButtonHost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.CreateAndAddSquadSlotButton");

	UBP_ExpeditionSquadSlotsView_C_CreateAndAddSquadSlotButton_Params params;
	params.SquadSlotIndex = SquadSlotIndex;
	params.SquadSlotDefinition = SquadSlotDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSquadSlotButtonHost != nullptr)
		*OutSquadSlotButtonHost = params.OutSquadSlotButtonHost;

	return params.ReturnValue;
}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.HandleSquadSlotSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SquadSlotIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ExpeditionSquadSlotsView_C::HandleSquadSlotSelected(int SquadSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.HandleSquadSlotSelected");

	UBP_ExpeditionSquadSlotsView_C_HandleSquadSlotSelected_Params params;
	params.SquadSlotIndex = SquadSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ExpeditionSquadSlotsView_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.PreConstruct");

	UBP_ExpeditionSquadSlotsView_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.HandleSquadSlotOpened
// (BlueprintCallable, BlueprintEvent)

void UBP_ExpeditionSquadSlotsView_C::HandleSquadSlotOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.HandleSquadSlotOpened");

	UBP_ExpeditionSquadSlotsView_C_HandleSquadSlotOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OpenSquadSlotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SquadSlotIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ExpeditionSquadSlotsView_C::OpenSquadSlotEvent(int SquadSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OpenSquadSlotEvent");

	UBP_ExpeditionSquadSlotsView_C_OpenSquadSlotEvent_Params params;
	params.SquadSlotIndex = SquadSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ExpeditionSquadSlotsView_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.Construct");

	UBP_ExpeditionSquadSlotsView_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ExpeditionSquadSlotsView_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.Destruct");

	UBP_ExpeditionSquadSlotsView_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.ExecuteUbergraph_BP_ExpeditionSquadSlotsView
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ExpeditionSquadSlotsView_C::ExecuteUbergraph_BP_ExpeditionSquadSlotsView(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.ExecuteUbergraph_BP_ExpeditionSquadSlotsView");

	UBP_ExpeditionSquadSlotsView_C_ExecuteUbergraph_BP_ExpeditionSquadSlotsView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OnSquadSlotOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_ExpeditionSquadSlotsView_C::OnSquadSlotOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OnSquadSlotOpened__DelegateSignature");

	UBP_ExpeditionSquadSlotsView_C_OnSquadSlotOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OnSquadSlotSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SquadSlotIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ExpeditionSquadSlotsView_C::OnSquadSlotSelected__DelegateSignature(int SquadSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OnSquadSlotSelected__DelegateSignature");

	UBP_ExpeditionSquadSlotsView_C_OnSquadSlotSelected__DelegateSignature_Params params;
	params.SquadSlotIndex = SquadSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

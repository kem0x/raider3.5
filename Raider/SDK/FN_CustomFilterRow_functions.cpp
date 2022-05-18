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

// Function CustomFilterRow.CustomFilterRow_C.SetCheckedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomFilterRow_C::SetCheckedState(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomFilterRow.CustomFilterRow_C.SetCheckedState");

	UCustomFilterRow_C_SetCheckedState_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomFilterRow.CustomFilterRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCustomFilterRow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomFilterRow.CustomFilterRow_C.Construct");

	UCustomFilterRow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomFilterRow.CustomFilterRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomFilterRow_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomFilterRow.CustomFilterRow_C.PreConstruct");

	UCustomFilterRow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomFilterRow.CustomFilterRow_C.OnClicked
// (Event, Protected, BlueprintEvent)

void UCustomFilterRow_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomFilterRow.CustomFilterRow_C.OnClicked");

	UCustomFilterRow_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomFilterRow.CustomFilterRow_C.ExecuteUbergraph_CustomFilterRow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomFilterRow_C::ExecuteUbergraph_CustomFilterRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomFilterRow.CustomFilterRow_C.ExecuteUbergraph_CustomFilterRow");

	UCustomFilterRow_C_ExecuteUbergraph_CustomFilterRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomFilterRow.CustomFilterRow_C.OnCustomFilterToggled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortInventoryCustomFilter     Filter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomFilterRow_C::OnCustomFilterToggled__DelegateSignature(EFortInventoryCustomFilter Filter, bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomFilterRow.CustomFilterRow_C.OnCustomFilterToggled__DelegateSignature");

	UCustomFilterRow_C_OnCustomFilterToggled__DelegateSignature_Params params;
	params.Filter = Filter;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

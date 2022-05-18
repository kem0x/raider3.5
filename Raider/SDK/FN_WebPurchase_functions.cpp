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

// Function WebPurchase.WebPurchase_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWebPurchase_C::HandleBack(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPurchase.WebPurchase_C.HandleBack");

	UWebPurchase_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function WebPurchase.WebPurchase_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UWebPurchase_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPurchase.WebPurchase_C.BindDelegates");

	UWebPurchase_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPurchase.WebPurchase_C.Dismiss
// (Public, BlueprintCallable, BlueprintEvent)

void UWebPurchase_C::Dismiss()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPurchase.WebPurchase_C.Dismiss");

	UWebPurchase_C_Dismiss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPurchase.WebPurchase_C.Display
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 WebWidget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 AttemptedMTXOfferId            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWebPurchase_C::Display(class UWidget* WebWidget, const struct FString& AttemptedMTXOfferId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPurchase.WebPurchase_C.Display");

	UWebPurchase_C_Display_Params params;
	params.WebWidget = WebWidget;
	params.AttemptedMTXOfferId = AttemptedMTXOfferId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPurchase.WebPurchase_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UWebPurchase_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPurchase.WebPurchase_C.OnActivated");

	UWebPurchase_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPurchase.WebPurchase_C.ExecuteUbergraph_WebPurchase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWebPurchase_C::ExecuteUbergraph_WebPurchase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPurchase.WebPurchase_C.ExecuteUbergraph_WebPurchase");

	UWebPurchase_C_ExecuteUbergraph_WebPurchase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

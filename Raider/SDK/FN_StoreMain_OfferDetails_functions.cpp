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

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BacchusInit
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_OfferDetails_C::BacchusInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BacchusInit");

	UStoreMain_OfferDetails_C_BacchusInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.PopDetails
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_OfferDetails_C::PopDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.PopDetails");

	UStoreMain_OfferDetails_C_PopDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_OfferDetails_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Init");

	UStoreMain_OfferDetails_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreMain_OfferDetails_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandleBack");

	UStoreMain_OfferDetails_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UStoreMain_OfferDetails_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnActivated");

	UStoreMain_OfferDetails_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UStoreMain_OfferDetails_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnDeactivated");

	UStoreMain_OfferDetails_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UStoreMain_OfferDetails_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature");

	UStoreMain_OfferDetails_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandlePurchaseComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMain_OfferDetails_C::HandlePurchaseComplete(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandlePurchaseComplete");

	UStoreMain_OfferDetails_C_HandlePurchaseComplete_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreMain_OfferDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Construct");

	UStoreMain_OfferDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreMain_OfferDetails_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Destruct");

	UStoreMain_OfferDetails_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_25_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UStoreMain_OfferDetails_C::BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_25_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_25_CommonButtonClicked__DelegateSignature");

	UStoreMain_OfferDetails_C_BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_25_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ExecuteUbergraph_StoreMain_OfferDetails
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMain_OfferDetails_C::ExecuteUbergraph_StoreMain_OfferDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ExecuteUbergraph_StoreMain_OfferDetails");

	UStoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

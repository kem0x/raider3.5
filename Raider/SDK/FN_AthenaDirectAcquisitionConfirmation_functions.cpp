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

// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.SetPurchaseNumber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InNumToPurchse                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionConfirmation_C::SetPurchaseNumber(int InNumToPurchse)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.SetPurchaseNumber");

	UAthenaDirectAcquisitionConfirmation_C_SetPurchaseNumber_Params params;
	params.InNumToPurchse = InNumToPurchse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.UpdateCatalogOfferName
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionConfirmation_C::UpdateCatalogOfferName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.UpdateCatalogOfferName");

	UAthenaDirectAcquisitionConfirmation_C_UpdateCatalogOfferName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.UpdateItemList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionConfirmation_C::UpdateItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.UpdateItemList");

	UAthenaDirectAcquisitionConfirmation_C_UpdateItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.SetupPrice
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 PriceContainer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTextBlock*              NormalPriceText                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 SalePriceContainer             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTextBlock*              SalePriceText                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UImage*                  CurrencyImage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionConfirmation_C::SetupPrice(class UWidget* PriceContainer, class UTextBlock* NormalPriceText, class UWidget* SalePriceContainer, class UTextBlock* SalePriceText, class UImage* CurrencyImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.SetupPrice");

	UAthenaDirectAcquisitionConfirmation_C_SetupPrice_Params params;
	params.PriceContainer = PriceContainer;
	params.NormalPriceText = NormalPriceText;
	params.SalePriceContainer = SalePriceContainer;
	params.SalePriceText = SalePriceText;
	params.CurrencyImage = CurrencyImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.UpdateFromOffer
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionConfirmation_C::UpdateFromOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.UpdateFromOffer");

	UAthenaDirectAcquisitionConfirmation_C_UpdateFromOffer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.OnOfferSet
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionConfirmation_C::OnOfferSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.OnOfferSet");

	UAthenaDirectAcquisitionConfirmation_C_OnOfferSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAcquisitionConfirmation_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.OnActivated");

	UAthenaDirectAcquisitionConfirmation_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionConfirmation_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	UAthenaDirectAcquisitionConfirmation_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionConfirmation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.Construct");

	UAthenaDirectAcquisitionConfirmation_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_171_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionConfirmation_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_171_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_171_CommonButtonClicked__DelegateSignature");

	UAthenaDirectAcquisitionConfirmation_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_171_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.ExecuteUbergraph_AthenaDirectAcquisitionConfirmation
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionConfirmation_C::ExecuteUbergraph_AthenaDirectAcquisitionConfirmation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.ExecuteUbergraph_AthenaDirectAcquisitionConfirmation");

	UAthenaDirectAcquisitionConfirmation_C_ExecuteUbergraph_AthenaDirectAcquisitionConfirmation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.Decline__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionConfirmation_C::Decline__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.Decline__DelegateSignature");

	UAthenaDirectAcquisitionConfirmation_C_Decline__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.Confirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionConfirmation_C::Confirm__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.Confirm__DelegateSignature");

	UAthenaDirectAcquisitionConfirmation_C_Confirm__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

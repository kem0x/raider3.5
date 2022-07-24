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

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionScreen_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.Focus");

	UAthenaDirectAcquisitionScreen_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.GenerateOfferWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortDirectAcquisitionOfferInfo** OfferData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionScreen_C::GenerateOfferWidget(class UFortDirectAcquisitionOfferInfo** OfferData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.GenerateOfferWidget");

	UAthenaDirectAcquisitionScreen_C_GenerateOfferWidget_Params params;
	params.OfferData = OfferData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.NoOffersAvailable
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionScreen_C::NoOffersAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.NoOffersAvailable");

	UAthenaDirectAcquisitionScreen_C_NoOffersAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnStartReadingOffers
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionScreen_C::OnStartReadingOffers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnStartReadingOffers");

	UAthenaDirectAcquisitionScreen_C_OnStartReadingOffers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnOffersGenerated
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionScreen_C::OnOffersGenerated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnOffersGenerated");

	UAthenaDirectAcquisitionScreen_C_OnOffersGenerated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAcquisitionScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnActivated");

	UAthenaDirectAcquisitionScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.ClearOfferWidgets
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionScreen_C::ClearOfferWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.ClearOfferWidgets");

	UAthenaDirectAcquisitionScreen_C_ClearOfferWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnUpdateOtherPlatformMTXMessage
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// bool*                          HasOtherPlatformCurrency       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  CurrencyMessageLocText         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaDirectAcquisitionScreen_C::OnUpdateOtherPlatformMTXMessage(bool* HasOtherPlatformCurrency, struct FText* CurrencyMessageLocText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnUpdateOtherPlatformMTXMessage");

	UAthenaDirectAcquisitionScreen_C_OnUpdateOtherPlatformMTXMessage_Params params;
	params.HasOtherPlatformCurrency = HasOtherPlatformCurrency;
	params.CurrencyMessageLocText = CurrencyMessageLocText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.ExecuteUbergraph_AthenaDirectAcquisitionScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionScreen_C::ExecuteUbergraph_AthenaDirectAcquisitionScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.ExecuteUbergraph_AthenaDirectAcquisitionScreen");

	UAthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

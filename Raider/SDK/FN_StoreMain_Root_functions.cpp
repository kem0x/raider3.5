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

// Function StoreMain_Root.StoreMain_Root_C.TriggerResetOfferTileAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::TriggerResetOfferTileAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.TriggerResetOfferTileAnim");

	UStoreMain_Root_C_TriggerResetOfferTileAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.TriggerNextOfferTileAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::TriggerNextOfferTileAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.TriggerNextOfferTileAnim");

	UStoreMain_Root_C_TriggerNextOfferTileAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.TriggerInitialOfferTileReset
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::TriggerInitialOfferTileReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.TriggerInitialOfferTileReset");

	UStoreMain_Root_C_TriggerInitialOfferTileReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.UpdateCurrencyNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::UpdateCurrencyNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.UpdateCurrencyNotification");

	UStoreMain_Root_C_UpdateCurrencyNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.HandleRedeem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::HandleRedeem(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.HandleRedeem");

	UStoreMain_Root_C_HandleRedeem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function StoreMain_Root.StoreMain_Root_C.InitInputActions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::InitInputActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.InitInputActions");

	UStoreMain_Root_C_InitInputActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.HandleBack");

	UStoreMain_Root_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function StoreMain_Root.StoreMain_Root_C.AboutToEnterChat
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::AboutToEnterChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.AboutToEnterChat");

	UStoreMain_Root_C_AboutToEnterChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.AboutToPushDetails
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::AboutToPushDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.AboutToPushDetails");

	UStoreMain_Root_C_AboutToPushDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.IsOffersScrollBoxActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::IsOffersScrollBoxActive(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.IsOffersScrollBoxActive");

	UStoreMain_Root_C_IsOffersScrollBoxActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function StoreMain_Root.StoreMain_Root_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.SetFocus");

	UStoreMain_Root_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.AddOffer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMtxStoreOfferBase*  MtxOffer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UStoreMain_Root_C::AddOffer(class UFortMtxStoreOfferBase* MtxOffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.AddOffer");

	UStoreMain_Root_C_AddOffer_Params params;
	params.MtxOffer = MtxOffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnMtxOfferGenerated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortMtxStoreOfferBase** MtxOffer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UStoreMain_Root_C::OnMtxOfferGenerated(class UFortMtxStoreOfferBase** MtxOffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnMtxOfferGenerated");

	UStoreMain_Root_C_OnMtxOfferGenerated_Params params;
	params.MtxOffer = MtxOffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnOffersGenerated
// (Event, Public, BlueprintEvent)

void UStoreMain_Root_C::OnOffersGenerated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnOffersGenerated");

	UStoreMain_Root_C_OnOffersGenerated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UStoreMain_Root_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnActivated");

	UStoreMain_Root_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UStoreMain_Root_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnDeactivated");

	UStoreMain_Root_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreMain_Root_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.Destruct");

	UStoreMain_Root_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreMain_Root_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.Construct");

	UStoreMain_Root_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnStartReadingOffers
// (Event, Public, BlueprintEvent)

void UStoreMain_Root_C::OnStartReadingOffers()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnStartReadingOffers");

	UStoreMain_Root_C_OnStartReadingOffers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.NoOffersAvailable
// (Event, Public, BlueprintEvent)

void UStoreMain_Root_C::NoOffersAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.NoOffersAvailable");

	UStoreMain_Root_C_NoOffersAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.ExecuteUbergraph_StoreMain_Root
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::ExecuteUbergraph_StoreMain_Root(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.ExecuteUbergraph_StoreMain_Root");

	UStoreMain_Root_C_ExecuteUbergraph_StoreMain_Root_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

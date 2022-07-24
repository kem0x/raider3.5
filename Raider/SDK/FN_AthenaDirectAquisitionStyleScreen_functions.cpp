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

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAquisitionStyleScreen_C::HandleBack(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.HandleBack");

	UAthenaDirectAquisitionStyleScreen_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaDirectAquisitionStyleScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.Construct");

	UAthenaDirectAquisitionStyleScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAquisitionStyleScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.OnActivated");

	UAthenaDirectAquisitionStyleScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.OnOfferSet
// (Event, Public, BlueprintEvent)

void UAthenaDirectAquisitionStyleScreen_C::OnOfferSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.OnOfferSet");

	UAthenaDirectAquisitionStyleScreen_C_OnOfferSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.UpdatePreviewVariants
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            VariantChannel                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTag            VariantTag                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaDirectAquisitionStyleScreen_C::UpdatePreviewVariants(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& VariantTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.UpdatePreviewVariants");

	UAthenaDirectAquisitionStyleScreen_C_UpdatePreviewVariants_Params params;
	params.VariantChannel = VariantChannel;
	params.VariantTag = VariantTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ExecuteUbergraph_AthenaDirectAquisitionStyleScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAquisitionStyleScreen_C::ExecuteUbergraph_AthenaDirectAquisitionStyleScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ExecuteUbergraph_AthenaDirectAquisitionStyleScreen");

	UAthenaDirectAquisitionStyleScreen_C_ExecuteUbergraph_AthenaDirectAquisitionStyleScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

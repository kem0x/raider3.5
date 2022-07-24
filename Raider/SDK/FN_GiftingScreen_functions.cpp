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

// Function GiftingScreen.GiftingScreen_C.HandleBackClicked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsHandled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGiftingScreen_C::HandleBackClicked(bool* bIsHandled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.HandleBackClicked");

	UGiftingScreen_C_HandleBackClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsHandled != nullptr)
		*bIsHandled = params.bIsHandled;
}


// Function GiftingScreen.GiftingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGiftingScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.Construct");

	UGiftingScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.OnOfferSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortDirectAcquisitionOfferInfo** NewOfferInfo                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGiftingScreen_C::OnOfferSet(class UFortDirectAcquisitionOfferInfo** NewOfferInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.OnOfferSet");

	UGiftingScreen_C_OnOfferSet_Params params;
	params.NewOfferInfo = NewOfferInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.ExecuteUbergraph_GiftingScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGiftingScreen_C::ExecuteUbergraph_GiftingScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.ExecuteUbergraph_GiftingScreen");

	UGiftingScreen_C_ExecuteUbergraph_GiftingScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

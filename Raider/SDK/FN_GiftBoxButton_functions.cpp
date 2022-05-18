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

// Function GiftBoxButton.GiftBoxButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGiftBoxButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftBoxButton.GiftBoxButton_C.Construct");

	UGiftBoxButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftBoxButton.GiftBoxButton_C.PlayGiftSelectedAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGiftBoxButton_C::PlayGiftSelectedAnimation(bool* bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftBoxButton.GiftBoxButton_C.PlayGiftSelectedAnimation");

	UGiftBoxButton_C_PlayGiftSelectedAnimation_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftBoxButton.GiftBoxButton_C.ExecuteUbergraph_GiftBoxButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGiftBoxButton_C::ExecuteUbergraph_GiftBoxButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftBoxButton.GiftBoxButton_C.ExecuteUbergraph_GiftBoxButton");

	UGiftBoxButton_C_ExecuteUbergraph_GiftBoxButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

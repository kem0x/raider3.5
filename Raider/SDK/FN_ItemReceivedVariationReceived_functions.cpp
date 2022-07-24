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

// Function ItemReceivedVariationReceived.ItemReceivedVariationReceived_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)

void UItemReceivedVariationReceived_C::InitFromGiftBoxItem_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedVariationReceived.ItemReceivedVariationReceived_C.InitFromGiftBoxItem_BP");

	UItemReceivedVariationReceived_C_InitFromGiftBoxItem_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedVariationReceived.ItemReceivedVariationReceived_C.ExecuteUbergraph_ItemReceivedVariationReceived
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedVariationReceived_C::ExecuteUbergraph_ItemReceivedVariationReceived(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedVariationReceived.ItemReceivedVariationReceived_C.ExecuteUbergraph_ItemReceivedVariationReceived");

	UItemReceivedVariationReceived_C_ExecuteUbergraph_ItemReceivedVariationReceived_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function ItemReceivedUnGiftHeader.ItemReceivedUnGiftHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)

void UItemReceivedUnGiftHeader_C::InitFromGiftBoxItem_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedUnGiftHeader.ItemReceivedUnGiftHeader_C.InitFromGiftBoxItem_BP");

	UItemReceivedUnGiftHeader_C_InitFromGiftBoxItem_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedUnGiftHeader.ItemReceivedUnGiftHeader_C.ExecuteUbergraph_ItemReceivedUnGiftHeader
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedUnGiftHeader_C::ExecuteUbergraph_ItemReceivedUnGiftHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedUnGiftHeader.ItemReceivedUnGiftHeader_C.ExecuteUbergraph_ItemReceivedUnGiftHeader");

	UItemReceivedUnGiftHeader_C_ExecuteUbergraph_ItemReceivedUnGiftHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

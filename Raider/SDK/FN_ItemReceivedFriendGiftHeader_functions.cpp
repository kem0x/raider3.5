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

// Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)

void UItemReceivedFriendGiftHeader_C::InitFromGiftBoxItem_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.InitFromGiftBoxItem_BP");

	UItemReceivedFriendGiftHeader_C_InitFromGiftBoxItem_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.ExecuteUbergraph_ItemReceivedFriendGiftHeader
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedFriendGiftHeader_C::ExecuteUbergraph_ItemReceivedFriendGiftHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.ExecuteUbergraph_ItemReceivedFriendGiftHeader");

	UItemReceivedFriendGiftHeader_C_ExecuteUbergraph_ItemReceivedFriendGiftHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

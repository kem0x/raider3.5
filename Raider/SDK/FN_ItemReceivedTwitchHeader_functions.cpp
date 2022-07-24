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

// Function ItemReceivedTwitchHeader.ItemReceivedTwitchHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)

void UItemReceivedTwitchHeader_C::InitFromGiftBoxItem_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedTwitchHeader.ItemReceivedTwitchHeader_C.InitFromGiftBoxItem_BP");

	UItemReceivedTwitchHeader_C_InitFromGiftBoxItem_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedTwitchHeader.ItemReceivedTwitchHeader_C.ExecuteUbergraph_ItemReceivedTwitchHeader
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedTwitchHeader_C::ExecuteUbergraph_ItemReceivedTwitchHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedTwitchHeader.ItemReceivedTwitchHeader_C.ExecuteUbergraph_ItemReceivedTwitchHeader");

	UItemReceivedTwitchHeader_C_ExecuteUbergraph_ItemReceivedTwitchHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

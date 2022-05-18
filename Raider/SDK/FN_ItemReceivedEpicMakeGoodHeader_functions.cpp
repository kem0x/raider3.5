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

// Function ItemReceivedEpicMakeGoodHeader.ItemReceivedEpicMakeGoodHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)

void UItemReceivedEpicMakeGoodHeader_C::InitFromGiftBoxItem_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedEpicMakeGoodHeader.ItemReceivedEpicMakeGoodHeader_C.InitFromGiftBoxItem_BP");

	UItemReceivedEpicMakeGoodHeader_C_InitFromGiftBoxItem_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedEpicMakeGoodHeader.ItemReceivedEpicMakeGoodHeader_C.ExecuteUbergraph_ItemReceivedEpicMakeGoodHeader
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedEpicMakeGoodHeader_C::ExecuteUbergraph_ItemReceivedEpicMakeGoodHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedEpicMakeGoodHeader.ItemReceivedEpicMakeGoodHeader_C.ExecuteUbergraph_ItemReceivedEpicMakeGoodHeader");

	UItemReceivedEpicMakeGoodHeader_C_ExecuteUbergraph_ItemReceivedEpicMakeGoodHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

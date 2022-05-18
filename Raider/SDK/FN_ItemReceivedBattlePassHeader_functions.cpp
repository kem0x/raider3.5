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

// Function ItemReceivedBattlePassHeader.ItemReceivedBattlePassHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)

void UItemReceivedBattlePassHeader_C::InitFromGiftBoxItem_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedBattlePassHeader.ItemReceivedBattlePassHeader_C.InitFromGiftBoxItem_BP");

	UItemReceivedBattlePassHeader_C_InitFromGiftBoxItem_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedBattlePassHeader.ItemReceivedBattlePassHeader_C.ExecuteUbergraph_ItemReceivedBattlePassHeader
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedBattlePassHeader_C::ExecuteUbergraph_ItemReceivedBattlePassHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedBattlePassHeader.ItemReceivedBattlePassHeader_C.ExecuteUbergraph_ItemReceivedBattlePassHeader");

	UItemReceivedBattlePassHeader_C_ExecuteUbergraph_ItemReceivedBattlePassHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function ItemReceivedFoundersRewardsHeader.ItemReceivedFoundersRewardsHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemReceivedFoundersRewardsHeader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedFoundersRewardsHeader.ItemReceivedFoundersRewardsHeader_C.Construct");

	UItemReceivedFoundersRewardsHeader_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedFoundersRewardsHeader.ItemReceivedFoundersRewardsHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)

void UItemReceivedFoundersRewardsHeader_C::InitFromGiftBoxItem_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedFoundersRewardsHeader.ItemReceivedFoundersRewardsHeader_C.InitFromGiftBoxItem_BP");

	UItemReceivedFoundersRewardsHeader_C_InitFromGiftBoxItem_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedFoundersRewardsHeader.ItemReceivedFoundersRewardsHeader_C.ExecuteUbergraph_ItemReceivedFoundersRewardsHeader
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedFoundersRewardsHeader_C::ExecuteUbergraph_ItemReceivedFoundersRewardsHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedFoundersRewardsHeader.ItemReceivedFoundersRewardsHeader_C.ExecuteUbergraph_ItemReceivedFoundersRewardsHeader");

	UItemReceivedFoundersRewardsHeader_C_ExecuteUbergraph_ItemReceivedFoundersRewardsHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

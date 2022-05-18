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

// Function ItemReceivedChallengeCompleteHeader.ItemReceivedChallengeCompleteHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)

void UItemReceivedChallengeCompleteHeader_C::InitFromGiftBoxItem_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedChallengeCompleteHeader.ItemReceivedChallengeCompleteHeader_C.InitFromGiftBoxItem_BP");

	UItemReceivedChallengeCompleteHeader_C_InitFromGiftBoxItem_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedChallengeCompleteHeader.ItemReceivedChallengeCompleteHeader_C.ExecuteUbergraph_ItemReceivedChallengeCompleteHeader
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedChallengeCompleteHeader_C::ExecuteUbergraph_ItemReceivedChallengeCompleteHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedChallengeCompleteHeader.ItemReceivedChallengeCompleteHeader_C.ExecuteUbergraph_ItemReceivedChallengeCompleteHeader");

	UItemReceivedChallengeCompleteHeader_C_ExecuteUbergraph_ItemReceivedChallengeCompleteHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

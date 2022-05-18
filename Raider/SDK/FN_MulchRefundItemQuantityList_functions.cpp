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

// Function MulchRefundItemQuantityList.MulchRefundItemQuantityList_C.AddListEntry
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItemQuantityListEntryBase** ListEntry                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMulchRefundItemQuantityList_C::AddListEntry(class UFortItemQuantityListEntryBase** ListEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function MulchRefundItemQuantityList.MulchRefundItemQuantityList_C.AddListEntry");

	UMulchRefundItemQuantityList_C_AddListEntry_Params params;
	params.ListEntry = ListEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MulchRefundItemQuantityList.MulchRefundItemQuantityList_C.ExecuteUbergraph_MulchRefundItemQuantityList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMulchRefundItemQuantityList_C::ExecuteUbergraph_MulchRefundItemQuantityList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MulchRefundItemQuantityList.MulchRefundItemQuantityList_C.ExecuteUbergraph_MulchRefundItemQuantityList");

	UMulchRefundItemQuantityList_C_ExecuteUbergraph_MulchRefundItemQuantityList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

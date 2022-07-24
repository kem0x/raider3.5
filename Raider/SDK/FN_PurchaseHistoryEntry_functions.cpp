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

// Function PurchaseHistoryEntry.PurchaseHistoryEntry_C.DisableAppearance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDisabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPurchaseHistoryEntry_C::DisableAppearance(bool IsDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryEntry.PurchaseHistoryEntry_C.DisableAppearance");

	UPurchaseHistoryEntry_C_DisableAppearance_Params params;
	params.IsDisabled = IsDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseHistoryEntry.PurchaseHistoryEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPurchaseHistoryEntry_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryEntry.PurchaseHistoryEntry_C.PreConstruct");

	UPurchaseHistoryEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseHistoryEntry.PurchaseHistoryEntry_C.SetPurchaseText
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  PurchaseText                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          bHasBeenRefunded               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPurchaseHistoryEntry_C::SetPurchaseText(struct FText* PurchaseText, bool* bHasBeenRefunded)
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryEntry.PurchaseHistoryEntry_C.SetPurchaseText");

	UPurchaseHistoryEntry_C_SetPurchaseText_Params params;
	params.PurchaseText = PurchaseText;
	params.bHasBeenRefunded = bHasBeenRefunded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseHistoryEntry.PurchaseHistoryEntry_C.ExecuteUbergraph_PurchaseHistoryEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPurchaseHistoryEntry_C::ExecuteUbergraph_PurchaseHistoryEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryEntry.PurchaseHistoryEntry_C.ExecuteUbergraph_PurchaseHistoryEntry");

	UPurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C.UpdateSeasonText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedBattlePassPromiseHeader_C::UpdateSeasonText(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C.UpdateSeasonText");

	UItemReceivedBattlePassPromiseHeader_C_UpdateSeasonText_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedBattlePassPromiseHeader_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C.PreConstruct");

	UItemReceivedBattlePassPromiseHeader_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)

void UItemReceivedBattlePassPromiseHeader_C::InitFromGiftBoxItem_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C.InitFromGiftBoxItem_BP");

	UItemReceivedBattlePassPromiseHeader_C_InitFromGiftBoxItem_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C.ExecuteUbergraph_ItemReceivedBattlePassPromiseHeader
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedBattlePassPromiseHeader_C::ExecuteUbergraph_ItemReceivedBattlePassPromiseHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C.ExecuteUbergraph_ItemReceivedBattlePassPromiseHeader");

	UItemReceivedBattlePassPromiseHeader_C_ExecuteUbergraph_ItemReceivedBattlePassPromiseHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)

void UItemReceivedHeaderSubWidgetBase_C::InitFromGiftBoxItem_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.InitFromGiftBoxItem_BP");

	UItemReceivedHeaderSubWidgetBase_C_InitFromGiftBoxItem_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemReceivedHeaderSubWidgetBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.Construct");

	UItemReceivedHeaderSubWidgetBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedHeaderSubWidgetBase_C::ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase");

	UItemReceivedHeaderSubWidgetBase_C_ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

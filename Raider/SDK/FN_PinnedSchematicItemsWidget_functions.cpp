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

// Function PinnedSchematicItemsWidget.PinnedSchematicItemsWidget_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UPinnedSchematicItemsWidget_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemsWidget.PinnedSchematicItemsWidget_C.Refresh");

	UPinnedSchematicItemsWidget_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemsWidget.PinnedSchematicItemsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPinnedSchematicItemsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemsWidget.PinnedSchematicItemsWidget_C.Construct");

	UPinnedSchematicItemsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemsWidget.PinnedSchematicItemsWidget_C.ExecuteUbergraph_PinnedSchematicItemsWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPinnedSchematicItemsWidget_C::ExecuteUbergraph_PinnedSchematicItemsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemsWidget.PinnedSchematicItemsWidget_C.ExecuteUbergraph_PinnedSchematicItemsWidget");

	UPinnedSchematicItemsWidget_C_ExecuteUbergraph_PinnedSchematicItemsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

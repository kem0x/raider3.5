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

// Function CollectionBookPageDetailsWidget.CollectionBookPageDetailsWidget_C.OnPageProgressionUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           TotalFilledSlots               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TotalSlots                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortCollectionBookState*      State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageDetailsWidget_C::OnPageProgressionUpdated(int* TotalFilledSlots, int* TotalSlots, EFortCollectionBookState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageDetailsWidget.CollectionBookPageDetailsWidget_C.OnPageProgressionUpdated");

	UCollectionBookPageDetailsWidget_C_OnPageProgressionUpdated_Params params;
	params.TotalFilledSlots = TotalFilledSlots;
	params.TotalSlots = TotalSlots;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageDetailsWidget.CollectionBookPageDetailsWidget_C.ExecuteUbergraph_CollectionBookPageDetailsWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageDetailsWidget_C::ExecuteUbergraph_CollectionBookPageDetailsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageDetailsWidget.CollectionBookPageDetailsWidget_C.ExecuteUbergraph_CollectionBookPageDetailsWidget");

	UCollectionBookPageDetailsWidget_C_ExecuteUbergraph_CollectionBookPageDetailsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

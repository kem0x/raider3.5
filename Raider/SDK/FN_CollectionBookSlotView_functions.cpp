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

// Function CollectionBookSlotView.CollectionBookSlotView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCollectionBookSlotView_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookSlotView.CollectionBookSlotView_C.Construct");

	UCollectionBookSlotView_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookSlotView.CollectionBookSlotView_C.ExecuteUbergraph_CollectionBookSlotView
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookSlotView_C::ExecuteUbergraph_CollectionBookSlotView(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookSlotView.CollectionBookSlotView_C.ExecuteUbergraph_CollectionBookSlotView");

	UCollectionBookSlotView_C_ExecuteUbergraph_CollectionBookSlotView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

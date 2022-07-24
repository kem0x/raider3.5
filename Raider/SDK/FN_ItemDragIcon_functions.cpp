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

// Function ItemDragIcon.ItemDragIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemDragIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDragIcon.ItemDragIcon_C.Construct");

	UItemDragIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDragIcon.ItemDragIcon_C.ExecuteUbergraph_ItemDragIcon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemDragIcon_C::ExecuteUbergraph_ItemDragIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDragIcon.ItemDragIcon_C.ExecuteUbergraph_ItemDragIcon");

	UItemDragIcon_C_ExecuteUbergraph_ItemDragIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.ShowDropIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAthenaDragDropAction> Drop_Action                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryDragVisual_C::ShowDropIcon(TEnumAsByte<EAthenaDragDropAction> Drop_Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.ShowDropIcon");

	UAthenaInventoryDragVisual_C_ShowDropIcon_Params params;
	params.Drop_Action = Drop_Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaInventoryDragVisual_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.Construct");

	UAthenaInventoryDragVisual_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryDragVisual_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.PreConstruct");

	UAthenaInventoryDragVisual_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.ExecuteUbergraph_AthenaInventoryDragVisual
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryDragVisual_C::ExecuteUbergraph_AthenaInventoryDragVisual(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.ExecuteUbergraph_AthenaInventoryDragVisual");

	UAthenaInventoryDragVisual_C_ExecuteUbergraph_AthenaInventoryDragVisual_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

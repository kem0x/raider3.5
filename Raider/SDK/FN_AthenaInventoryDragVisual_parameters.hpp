#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.ShowDropIcon
struct UAthenaInventoryDragVisual_C_ShowDropIcon_Params
{
	TEnumAsByte<EAthenaDragDropAction>                 Drop_Action;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.Construct
struct UAthenaInventoryDragVisual_C_Construct_Params
{
};

// Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.PreConstruct
struct UAthenaInventoryDragVisual_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.ExecuteUbergraph_AthenaInventoryDragVisual
struct UAthenaInventoryDragVisual_C_ExecuteUbergraph_AthenaInventoryDragVisual_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

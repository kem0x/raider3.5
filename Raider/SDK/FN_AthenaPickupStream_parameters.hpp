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

// Function AthenaPickupStream.AthenaPickupStream_C.HandleMessageExpired
struct UAthenaPickupStream_C_HandleMessageExpired_Params
{
	class UFortUIMessageItemWidget*                    Message_Item;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaPickupStream.AthenaPickupStream_C.TryGetNextItem
struct UAthenaPickupStream_C_TryGetNextItem_Params
{
};

// Function AthenaPickupStream.AthenaPickupStream_C.HandleItemPickUp
struct UAthenaPickupStream_C_HandleItemPickUp_Params
{
	class UFortWorldItem*                              NewItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaPickupStream.AthenaPickupStream_C.Construct
struct UAthenaPickupStream_C_Construct_Params
{
};

// Function AthenaPickupStream.AthenaPickupStream_C.Destruct
struct UAthenaPickupStream_C_Destruct_Params
{
};

// Function AthenaPickupStream.AthenaPickupStream_C.ExecuteUbergraph_AthenaPickupStream
struct UAthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

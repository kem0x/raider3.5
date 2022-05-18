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

// Function ItemCountRecycling.ItemCountRecycling_C.SetItemDefinition
struct UItemCountRecycling_C_SetItemDefinition_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCountRecycling.ItemCountRecycling_C.Construct
struct UItemCountRecycling_C_Construct_Params
{
};

// Function ItemCountRecycling.ItemCountRecycling_C.PreConstruct
struct UItemCountRecycling_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCountRecycling.ItemCountRecycling_C.ExecuteUbergraph_ItemCountRecycling
struct UItemCountRecycling_C_ExecuteUbergraph_ItemCountRecycling_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

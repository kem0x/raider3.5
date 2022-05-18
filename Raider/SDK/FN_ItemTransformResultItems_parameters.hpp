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

// Function ItemTransformResultItems.ItemTransformResultItems_C.UpdateMainReward
struct UItemTransformResultItems_C_UpdateMainReward_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentTier;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformResultItems.ItemTransformResultItems_C.CalculateRecycleXP
struct UItemTransformResultItems_C_CalculateRecycleXP_Params
{
	TArray<class UFortItem*>                           SacrificeItems;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                TotalHeroXP;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TotalSchematicXP;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TotalWorkerXP;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformResultItems.ItemTransformResultItems_C.UpdateItems
struct UItemTransformResultItems_C_UpdateItems_Params
{
	class UFortItem*                                   Transform_Key;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortItem*>                           SacrificeItems;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                CurrentTier;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformResultItems.ItemTransformResultItems_C.PreConstruct
struct UItemTransformResultItems_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformResultItems.ItemTransformResultItems_C.ExecuteUbergraph_ItemTransformResultItems
struct UItemTransformResultItems_C_ExecuteUbergraph_ItemTransformResultItems_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

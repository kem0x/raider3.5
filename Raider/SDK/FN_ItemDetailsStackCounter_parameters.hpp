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

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Refresh Visibility
struct UItemDetailsStackCounter_C_Refresh_Visibility_Params
{
};

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Update Stack Count
struct UItemDetailsStackCounter_C_Update_Stack_Count_Params
{
};

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.PreConstruct
struct UItemDetailsStackCounter_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Construct
struct UItemDetailsStackCounter_C_Construct_Params
{
};

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandlePreDifferentItemToDetailSet
struct UItemDetailsStackCounter_C_HandlePreDifferentItemToDetailSet_Params
{
};

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandlePostDifferentItemToDetailSet
struct UItemDetailsStackCounter_C_HandlePostDifferentItemToDetailSet_Params
{
};

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandleOnItemChanged
struct UItemDetailsStackCounter_C_HandleOnItemChanged_Params
{
	bool                                               bItemChanged;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAmmoChanged;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIngredientsChanged;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.ExecuteUbergraph_ItemDetailsStackCounter
struct UItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function CollectionBookWidget.CollectionBookWidget_C.Construct
struct UCollectionBookWidget_C_Construct_Params
{
};

// Function CollectionBookWidget.CollectionBookWidget_C.SlotItemComplete
struct UCollectionBookWidget_C_SlotItemComplete_Params
{
	class UFortAccountItem*                            ItemSlotted;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookWidget.CollectionBookWidget_C.Destruct
struct UCollectionBookWidget_C_Destruct_Params
{
};

// Function CollectionBookWidget.CollectionBookWidget_C.OnActivated
struct UCollectionBookWidget_C_OnActivated_Params
{
};

// Function CollectionBookWidget.CollectionBookWidget_C.ExecuteUbergraph_CollectionBookWidget
struct UCollectionBookWidget_C_ExecuteUbergraph_CollectionBookWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

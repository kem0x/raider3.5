#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemEntry.ItemEntry_C.GetListItemObject
struct UItemEntry_C_GetListItemObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.BP_OnEntryReleased
struct UItemEntry_C_BP_OnEntryReleased_Params
{
};

// Function ItemEntry.ItemEntry_C.BP_OnItemExpansionChanged
struct UItemEntry_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.BP_OnItemSelectionChanged
struct UItemEntry_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.OnListItemObjectSet
struct UItemEntry_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.Construct
struct UItemEntry_C_Construct_Params
{
};

// Function ItemEntry.ItemEntry_C.ExecuteUbergraph_ItemEntry
struct UItemEntry_C_ExecuteUbergraph_ItemEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.Entry Selected__DelegateSignature
struct UItemEntry_C_Entry_Selected__DelegateSignature_Params
{
	class UFortItemDefinition*                         Items_Definition;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

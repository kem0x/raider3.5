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

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnUnslotItemConfirm
struct UCollectionBookSectionPanel_C_OnUnslotItemConfirm_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnResearchItemConfirm
struct UCollectionBookSectionPanel_C_OnResearchItemConfirm_Params
{
	class UFortItem*                                   ResearchItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortCollectionBookSlotData                 SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnInspectItem
struct UCollectionBookSectionPanel_C_OnInspectItem_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowItemModifications;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsTemporaryItem;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnSlotItemConfirm
struct UCollectionBookSectionPanel_C_OnSlotItemConfirm_Params
{
	class UFortItem*                                   ItemToSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.ShowItemDetail
struct UCollectionBookSectionPanel_C_ShowItemDetail_Params
{
	class UFortItem*                                   SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.Construct
struct UCollectionBookSectionPanel_C_Construct_Params
{
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnSectionChanged
struct UCollectionBookSectionPanel_C_OnSectionChanged_Params
{
	class UFortCollectionBookSection**                 Section;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnActivated
struct UCollectionBookSectionPanel_C_OnActivated_Params
{
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.Destruct
struct UCollectionBookSectionPanel_C_Destruct_Params
{
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.ExecuteUbergraph_CollectionBookSectionPanel
struct UCollectionBookSectionPanel_C_ExecuteUbergraph_CollectionBookSectionPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

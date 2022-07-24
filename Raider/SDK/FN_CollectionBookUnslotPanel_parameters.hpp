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

// Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.CenterButtonHack
struct UCollectionBookUnslotPanel_C_CenterButtonHack_Params
{
};

// Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.PopulateError
struct UCollectionBookUnslotPanel_C_PopulateError_Params
{
};

// Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.PopulateCosts
struct UCollectionBookUnslotPanel_C_PopulateCosts_Params
{
	bool                                               bHasResources;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.SetOwningUnslotWidget
struct UCollectionBookUnslotPanel_C_SetOwningUnslotWidget_Params
{
	class UCollectionBookUnslotWidget_C*               OwningWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.SetItem
struct UCollectionBookUnslotPanel_C_SetItem_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UCollectionBookUnslotPanel_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.ExecuteUbergraph_CollectionBookUnslotPanel
struct UCollectionBookUnslotPanel_C_ExecuteUbergraph_CollectionBookUnslotPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

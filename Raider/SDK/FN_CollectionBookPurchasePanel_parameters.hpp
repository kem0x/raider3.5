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

// Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.CenterButtonHack
struct UCollectionBookPurchasePanel_C_CenterButtonHack_Params
{
};

// Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.PopulateError
struct UCollectionBookPurchasePanel_C_PopulateError_Params
{
};

// Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.PopulateCosts
struct UCollectionBookPurchasePanel_C_PopulateCosts_Params
{
	bool                                               bHasRequiredResources;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.SetOwningPurchaseWidget
struct UCollectionBookPurchasePanel_C_SetOwningPurchaseWidget_Params
{
	class UCollectionBookPurchaseWidget_C*             OwningPurchaseWidget;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.SetItem
struct UCollectionBookPurchasePanel_C_SetItem_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortCollectionBookSlotData                 SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UCollectionBookPurchasePanel_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.ExecuteUbergraph_CollectionBookPurchasePanel
struct UCollectionBookPurchasePanel_C_ExecuteUbergraph_CollectionBookPurchasePanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

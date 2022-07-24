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

// Function CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C.Close
struct UCollectionBookPurchaseWidget_C_Close_Params
{
};

// Function CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C.SetItem
struct UCollectionBookPurchaseWidget_C_SetItem_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortCollectionBookSlotData                 SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature
struct UCollectionBookPurchaseWidget_C_BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C.OnActivated
struct UCollectionBookPurchaseWidget_C_OnActivated_Params
{
};

// Function CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C.ExecuteUbergraph_CollectionBookPurchaseWidget
struct UCollectionBookPurchaseWidget_C_ExecuteUbergraph_CollectionBookPurchaseWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

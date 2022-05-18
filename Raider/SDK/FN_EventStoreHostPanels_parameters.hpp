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

// Function EventStoreHostPanels.EventStoreHostPanels_C.Setup Details Panels
struct UEventStoreHostPanels_C_Setup_Details_Panels_Params
{
};

// Function EventStoreHostPanels.EventStoreHostPanels_C.BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature
struct UEventStoreHostPanels_C_BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature_Params
{
	class UWidget*                                     ActiveWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventStoreHostPanels.EventStoreHostPanels_C.HandleDifferentItemToDetailSet
struct UEventStoreHostPanels_C_HandleDifferentItemToDetailSet_Params
{
};

// Function EventStoreHostPanels.EventStoreHostPanels_C.Construct
struct UEventStoreHostPanels_C_Construct_Params
{
};

// Function EventStoreHostPanels.EventStoreHostPanels_C.BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature
struct UEventStoreHostPanels_C_BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EventStoreHostPanels.EventStoreHostPanels_C.ExecuteUbergraph_EventStoreHostPanels
struct UEventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

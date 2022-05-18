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

// Function CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C.OnSummonInfoPanelExecuted
struct UCollectionBookPrimaryPanel_C_OnSummonInfoPanelExecuted_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C.HandleDisplayInfoBox
struct UCollectionBookPrimaryPanel_C_HandleDisplayInfoBox_Params
{
};

// Function CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C.ExecuteUbergraph_CollectionBookPrimaryPanel
struct UCollectionBookPrimaryPanel_C_ExecuteUbergraph_CollectionBookPrimaryPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

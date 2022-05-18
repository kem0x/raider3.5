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

// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.IsEvolutionReady
struct UItemInspectUpgradeCallout_C_IsEvolutionReady_Params
{
	bool                                               EvolutionReady;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ShowEvolutionInfo
struct UItemInspectUpgradeCallout_C_ShowEvolutionInfo_Params
{
};

// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ShowUpgradeInfo
struct UItemInspectUpgradeCallout_C_ShowUpgradeInfo_Params
{
};

// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.IsUpgradeReady
struct UItemInspectUpgradeCallout_C_IsUpgradeReady_Params
{
	bool                                               UpgradeReady;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.RefreshOnUpgrade
struct UItemInspectUpgradeCallout_C_RefreshOnUpgrade_Params
{
};

// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.EnableUpgrade
struct UItemInspectUpgradeCallout_C_EnableUpgrade_Params
{
};

// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.DisableUpgrade
struct UItemInspectUpgradeCallout_C_DisableUpgrade_Params
{
};

// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.OnShow
struct UItemInspectUpgradeCallout_C_OnShow_Params
{
};

// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.SetItemToRepresent
struct UItemInspectUpgradeCallout_C_SetItemToRepresent_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.Refresh
struct UItemInspectUpgradeCallout_C_Refresh_Params
{
};

// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_257_CommonButtonClicked__DelegateSignature
struct UItemInspectUpgradeCallout_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_257_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.BndEvt__EvolveButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature
struct UItemInspectUpgradeCallout_C_BndEvt__EvolveButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ExecuteUbergraph_ItemInspectUpgradeCallout
struct UItemInspectUpgradeCallout_C_ExecuteUbergraph_ItemInspectUpgradeCallout_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.OnRequestUpgrade__DelegateSignature
struct UItemInspectUpgradeCallout_C_OnRequestUpgrade__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

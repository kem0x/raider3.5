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

// Function ItemTransformResultInfo.ItemTransformResultInfo_C.Is Tranfsorm Button Enabled
struct UItemTransformResultInfo_C_Is_Tranfsorm_Button_Enabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemTransformResultInfo.ItemTransformResultInfo_C.Get Transform Data
struct UItemTransformResultInfo_C_Get_Transform_Data_Params
{
	int                                                CurrentSacrificePoints;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentTier;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformResultInfo.ItemTransformResultInfo_C.CalculateNextTier
struct UItemTransformResultInfo_C_CalculateNextTier_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemTransformResultInfo.ItemTransformResultInfo_C.GetPointsForTier
struct UItemTransformResultInfo_C_GetPointsForTier_Params
{
	int                                                Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Points;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformResultInfo.ItemTransformResultInfo_C.UpdateTierProgressPercentage
struct UItemTransformResultInfo_C_UpdateTierProgressPercentage_Params
{
};

// Function ItemTransformResultInfo.ItemTransformResultInfo_C.CalculateCurrentSacrificePoints
struct UItemTransformResultInfo_C_CalculateCurrentSacrificePoints_Params
{
	int                                                TotalSacrificePoints;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformResultInfo.ItemTransformResultInfo_C.UpdateSacrificeInfo
struct UItemTransformResultInfo_C_UpdateSacrificeInfo_Params
{
	TArray<class UFortItem*>                           SacrificeItems;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ItemTransformResultInfo.ItemTransformResultInfo_C.UpdateSacrificePointsBar
struct UItemTransformResultInfo_C_UpdateSacrificePointsBar_Params
{
};

// Function ItemTransformResultInfo.ItemTransformResultInfo_C.SetKeyToRepresent
struct UItemTransformResultInfo_C_SetKeyToRepresent_Params
{
	class UFortItem*                                   Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformResultInfo.ItemTransformResultInfo_C.BndEvt__TransformButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
struct UItemTransformResultInfo_C_BndEvt__TransformButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemTransformResultInfo.ItemTransformResultInfo_C.Construct
struct UItemTransformResultInfo_C_Construct_Params
{
};

// Function ItemTransformResultInfo.ItemTransformResultInfo_C.ExecuteUbergraph_ItemTransformResultInfo
struct UItemTransformResultInfo_C_ExecuteUbergraph_ItemTransformResultInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformResultInfo.ItemTransformResultInfo_C.OnUpdateSacrificeInfo__DelegateSignature
struct UItemTransformResultInfo_C_OnUpdateSacrificeInfo__DelegateSignature_Params
{
	bool                                               TransformActive;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformResultInfo.ItemTransformResultInfo_C.OnTransformConfirmed__DelegateSignature
struct UItemTransformResultInfo_C_OnTransformConfirmed__DelegateSignature_Params
{
	int                                                SacrificePoints;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentTier;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

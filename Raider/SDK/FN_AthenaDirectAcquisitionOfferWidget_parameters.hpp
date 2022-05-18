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

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.DoesItemHaveChildren
struct UAthenaDirectAcquisitionOfferWidget_C_DoesItemHaveChildren_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.GetIndentLevel
struct UAthenaDirectAcquisitionOfferWidget_C_GetIndentLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.IsItemExpanded
struct UAthenaDirectAcquisitionOfferWidget_C_IsItemExpanded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.GetData
struct UAthenaDirectAcquisitionOfferWidget_C_GetData_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateBadge
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateBadge_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle_Sizing
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateStyle_Sizing_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle_Border
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateStyle_Border_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle_MainText
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateStyle_MainText_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.SetupSaleInfo
struct UAthenaDirectAcquisitionOfferWidget_C_SetupSaleInfo_Params
{
	struct FText                                       SaleText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       NormalPrice;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     BannerOverrideTag;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bHasSale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBattlePassStars;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                iNumOfBattlePassStars;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateSaleStatus
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateSaleStatus_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.Setup Price
struct UAthenaDirectAcquisitionOfferWidget_C_Setup_Price_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateShortDescription
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateShortDescription_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateName
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateName_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.LargeImageLoaded
struct UAthenaDirectAcquisitionOfferWidget_C_LargeImageLoaded_Params
{
	class UObject*                                     LoadedObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.SetupPrice
struct UAthenaDirectAcquisitionOfferWidget_C_SetupPrice_Params
{
	int                                                PriceIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemCount_C*                                PriceWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateStyle_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateAvailability
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateAvailability_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OfferSet
struct UAthenaDirectAcquisitionOfferWidget_C_OfferSet_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnAcquireFromPool
struct UAthenaDirectAcquisitionOfferWidget_C_OnAcquireFromPool_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnReleaseToPool
struct UAthenaDirectAcquisitionOfferWidget_C_OnReleaseToPool_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.Private_OnExpanderArrowShiftClicked
struct UAthenaDirectAcquisitionOfferWidget_C_Private_OnExpanderArrowShiftClicked_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.RegisterOnClicked
struct UAthenaDirectAcquisitionOfferWidget_C_RegisterOnClicked_Params
{
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.SetExpanded
struct UAthenaDirectAcquisitionOfferWidget_C_SetExpanded_Params
{
	bool                                               bExpanded;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.SetIndexInList
struct UAthenaDirectAcquisitionOfferWidget_C_SetIndexInList_Params
{
	int                                                InIndexInList;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.SetSelected
struct UAthenaDirectAcquisitionOfferWidget_C_SetSelected_Params
{
	bool                                               bSelected;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.ToggleExpansion
struct UAthenaDirectAcquisitionOfferWidget_C_ToggleExpansion_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.Reset
struct UAthenaDirectAcquisitionOfferWidget_C_Reset_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnOfferSet
struct UAthenaDirectAcquisitionOfferWidget_C_OnOfferSet_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnClicked
struct UAthenaDirectAcquisitionOfferWidget_C_OnClicked_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.HandleOfferPurchaseComplete
struct UAthenaDirectAcquisitionOfferWidget_C_HandleOfferPurchaseComplete_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnHovered
struct UAthenaDirectAcquisitionOfferWidget_C_OnHovered_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnUnhovered
struct UAthenaDirectAcquisitionOfferWidget_C_OnUnhovered_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnUpdateStatus
struct UAthenaDirectAcquisitionOfferWidget_C_OnUpdateStatus_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.SetData
struct UAthenaDirectAcquisitionOfferWidget_C_SetData_Params
{
	class UObject*                                     InData;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonListView*                             OwningList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.Construct
struct UAthenaDirectAcquisitionOfferWidget_C_Construct_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnOfferAdded
struct UAthenaDirectAcquisitionOfferWidget_C_OnOfferAdded_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OfferCarousel
struct UAthenaDirectAcquisitionOfferWidget_C_OfferCarousel_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget
struct UAthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

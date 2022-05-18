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

// Function PotentialResourceWidget.PotentialResourceWidget_C.ShowPotentialResource
struct UPotentialResourceWidget_C_ShowPotentialResource_Params
{
	class UFortItem*                                   PotentialResource;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeakpointDamage;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PotentialResourceWidget.PotentialResourceWidget_C.SetupFont
struct UPotentialResourceWidget_C_SetupFont_Params
{
};

// Function PotentialResourceWidget.PotentialResourceWidget_C.GetResourceCountAsText
struct UPotentialResourceWidget_C_GetResourceCountAsText_Params
{
	class UFortItem*                                   Resource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function PotentialResourceWidget.PotentialResourceWidget_C.UpdateResourceCountText
struct UPotentialResourceWidget_C_UpdateResourceCountText_Params
{
};

// Function PotentialResourceWidget.PotentialResourceWidget_C.Construct
struct UPotentialResourceWidget_C_Construct_Params
{
};

// Function PotentialResourceWidget.PotentialResourceWidget_C.HandleTranslateAndFadeUpFinished
struct UPotentialResourceWidget_C_HandleTranslateAndFadeUpFinished_Params
{
};

// Function PotentialResourceWidget.PotentialResourceWidget_C.ExecuteUbergraph_PotentialResourceWidget
struct UPotentialResourceWidget_C_ExecuteUbergraph_PotentialResourceWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PotentialResourceWidget.PotentialResourceWidget_C.FinishedShowing__DelegateSignature
struct UPotentialResourceWidget_C_FinishedShowing__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

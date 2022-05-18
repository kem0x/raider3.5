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

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.RemovePointOfInterest
struct UInterestIndicatorWidget_C_RemovePointOfInterest_Params
{
	class AActor*                                      PointOfInterest;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Removed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.InitPointOfInterest
struct UInterestIndicatorWidget_C_InitPointOfInterest_Params
{
	class AActor*                                      PointOfInterest;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  DisplayImage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.SetDisplayImage
struct UInterestIndicatorWidget_C_SetDisplayImage_Params
{
	class UTexture2D*                                  Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.SetDisplayText
struct UInterestIndicatorWidget_C_SetDisplayText_Params
{
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.Construct
struct UInterestIndicatorWidget_C_Construct_Params
{
};

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.Destruct
struct UInterestIndicatorWidget_C_Destruct_Params
{
};

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.ExecuteUbergraph_InterestIndicatorWidget
struct UInterestIndicatorWidget_C_ExecuteUbergraph_InterestIndicatorWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

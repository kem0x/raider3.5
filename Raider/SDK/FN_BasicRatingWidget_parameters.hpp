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

// Function BasicRatingWidget.BasicRatingWidget_C.Update Power Rating Style
struct UBasicRatingWidget_C_Update_Power_Rating_Style_Params
{
	class UClass*                                      InStyle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasicRatingWidget.BasicRatingWidget_C.Get Current Rating
struct UBasicRatingWidget_C_Get_Current_Rating_Params
{
	float                                              CurrentNumericValue;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasicRatingWidget.BasicRatingWidget_C.Update Border Color
struct UBasicRatingWidget_C_Update_Border_Color_Params
{
	struct FLinearColor                                Color1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                Color2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BasicRatingWidget.BasicRatingWidget_C.Update Power Rating Value
struct UBasicRatingWidget_C_Update_Power_Rating_Value_Params
{
	int                                                Rating;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasicRatingWidget.BasicRatingWidget_C.GetBorderVisibility
struct UBasicRatingWidget_C_GetBorderVisibility_Params
{
	ESlateVisibility                                   Visibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasicRatingWidget.BasicRatingWidget_C.PreConstruct
struct UBasicRatingWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasicRatingWidget.BasicRatingWidget_C.ExecuteUbergraph_BasicRatingWidget
struct UBasicRatingWidget_C_ExecuteUbergraph_BasicRatingWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.ShouldShowEmptyImage
struct UAthenaCustomizationSlotButton_C_ShouldShowEmptyImage_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.UpdateTypeIconOffset
struct UAthenaCustomizationSlotButton_C_UpdateTypeIconOffset_Params
{
	float                                              VerticalOffset;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Update SubType Icon Glow
struct UAthenaCustomizationSlotButton_C_Update_SubType_Icon_Glow_Params
{
	bool                                               GlowIcon;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Update SubType Icon Image
struct UAthenaCustomizationSlotButton_C_Update_SubType_Icon_Image_Params
{
};

// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Construct
struct UAthenaCustomizationSlotButton_C_Construct_Params
{
};

// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.PreConstruct
struct UAthenaCustomizationSlotButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.ExecuteUbergraph_AthenaCustomizationSlotButton
struct UAthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

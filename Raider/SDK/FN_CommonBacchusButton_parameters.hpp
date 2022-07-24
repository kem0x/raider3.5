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

// Function CommonBacchusButton.CommonBacchusButton_C.PreConstruct
struct UCommonBacchusButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonBacchusButton.CommonBacchusButton_C.SetButtonSprite
struct UCommonBacchusButton_C_SetButtonSprite_Params
{
	class UPaperSprite**                               NewSprite;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonBacchusButton.CommonBacchusButton_C.SetButtonSize
struct UCommonBacchusButton_C_SetButtonSize_Params
{
	float*                                             NewButtonSize;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonBacchusButton.CommonBacchusButton_C.SetButtonDisplayScale
struct UCommonBacchusButton_C_SetButtonDisplayScale_Params
{
	float*                                             NewDisplayScale;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonBacchusButton.CommonBacchusButton_C.ExecuteUbergraph_CommonBacchusButton
struct UCommonBacchusButton_C_ExecuteUbergraph_CommonBacchusButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function IconAndNameWidget.IconAndNameWidget_C.Set Border Color
struct UIconAndNameWidget_C_Set_Border_Color_Params
{
	struct FLinearColor                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function IconAndNameWidget.IconAndNameWidget_C.Setup Text
struct UIconAndNameWidget_C_Setup_Text_Params
{
};

// Function IconAndNameWidget.IconAndNameWidget_C.Setup Border
struct UIconAndNameWidget_C_Setup_Border_Params
{
};

// Function IconAndNameWidget.IconAndNameWidget_C.PreConstruct
struct UIconAndNameWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconAndNameWidget.IconAndNameWidget_C.ExecuteUbergraph_IconAndNameWidget
struct UIconAndNameWidget_C_ExecuteUbergraph_IconAndNameWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function ItemStackCounter.ItemStackCounter_C.Refresh Visibility
struct UItemStackCounter_C_Refresh_Visibility_Params
{
};

// Function ItemStackCounter.ItemStackCounter_C.Set Stack Count
struct UItemStackCounter_C_Set_Stack_Count_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemStackCounter.ItemStackCounter_C.Update
struct UItemStackCounter_C_Update_Params
{
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemStackCounter.ItemStackCounter_C.PreConstruct
struct UItemStackCounter_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemStackCounter.ItemStackCounter_C.ExecuteUbergraph_ItemStackCounter
struct UItemStackCounter_C_ExecuteUbergraph_ItemStackCounter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

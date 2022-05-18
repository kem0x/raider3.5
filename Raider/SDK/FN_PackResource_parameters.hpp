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

// Function PackResource.PackResource_C.GetCountOpacity
struct UPackResource_C_GetCountOpacity_Params
{
	struct FSlateColor                                 SlateColor;                                               // (Parm, OutParm)
};

// Function PackResource.PackResource_C.RefreshLargerCountLayout
struct UPackResource_C_RefreshLargerCountLayout_Params
{
};

// Function PackResource.PackResource_C.RefreshSmallerCountLayout
struct UPackResource_C_RefreshSmallerCountLayout_Params
{
};

// Function PackResource.PackResource_C.Change Material
struct UPackResource_C_Change_Material_Params
{
};

// Function PackResource.PackResource_C.OnTouchStarted
struct UPackResource_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PackResource.PackResource_C.SetImageSize
struct UPackResource_C_SetImageSize_Params
{
	bool                                               useLargeIcon;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackResource.PackResource_C.TryUpdateCount
struct UPackResource_C_TryUpdateCount_Params
{
};

// Function PackResource.PackResource_C.TryUpdateBackground
struct UPackResource_C_TryUpdateBackground_Params
{
};

// Function PackResource.PackResource_C.UpdateType
struct UPackResource_C_UpdateType_Params
{
	TEnumAsByte<EFortResourceType>                     ResourceType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackResource.PackResource_C.UpdateCount
struct UPackResource_C_UpdateCount_Params
{
};

// Function PackResource.PackResource_C.Construct
struct UPackResource_C_Construct_Params
{
};

// Function PackResource.PackResource_C.On Material Change
struct UPackResource_C_On_Material_Change_Params
{
};

// Function PackResource.PackResource_C.ExecuteUbergraph_PackResource
struct UPackResource_C_ExecuteUbergraph_PackResource_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

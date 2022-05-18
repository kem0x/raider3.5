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

// Function EpicCMSUIFramework.EpicCMSTileBase.Launch
struct UEpicCMSTileBase_Launch_Params
{
};

// Function EpicCMSUIFramework.EpicCMSTileBase.DynamicHandleIconLoadingStateChanged
struct UEpicCMSTileBase_DynamicHandleIconLoadingStateChanged_Params
{
	bool                                               bIsLoading;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex
struct UEpicCMSTileCarousel_SetCurrentPageByIndex_Params
{
	int                                                PageIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage
struct UEpicCMSTileCarousel_PreviousPage_Params
{
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.NextPage
struct UEpicCMSTileCarousel_NextPage_Params
{
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged
struct UEpicCMSTileCarousel_NavigationVisibilityChanged_Params
{
	bool                                               bShowNavigation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded
struct UEpicCMSTileCarousel_HandleTilePageAdded_Params
{
	class UWidget*                                     TileWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex
struct UEpicCMSTileCarousel_GetCurrentPageIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

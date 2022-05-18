// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EpicCMSUIFramework.EpicCMSTileBase.Launch
// (Final, Native, Protected, BlueprintCallable)

void UEpicCMSTileBase::Launch()
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileBase.Launch");

	UEpicCMSTileBase_Launch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileBase.DynamicHandleIconLoadingStateChanged
// (Final, Native, Private)
// Parameters:
// bool                           bIsLoading                     (Parm, ZeroConstructor, IsPlainOldData)

void UEpicCMSTileBase::DynamicHandleIconLoadingStateChanged(bool bIsLoading)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileBase.DynamicHandleIconLoadingStateChanged");

	UEpicCMSTileBase_DynamicHandleIconLoadingStateChanged_Params params;
	params.bIsLoading = bIsLoading;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            PageIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEpicCMSTileCarousel::SetCurrentPageByIndex(int PageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex");

	UEpicCMSTileCarousel_SetCurrentPageByIndex_Params params;
	params.PageIndex = PageIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage
// (Final, Native, Protected, BlueprintCallable)

void UEpicCMSTileCarousel::PreviousPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage");

	UEpicCMSTileCarousel_PreviousPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.NextPage
// (Final, Native, Protected, BlueprintCallable)

void UEpicCMSTileCarousel::NextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.NextPage");

	UEpicCMSTileCarousel_NextPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bShowNavigation                (Parm, ZeroConstructor, IsPlainOldData)

void UEpicCMSTileCarousel::NavigationVisibilityChanged(bool bShowNavigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged");

	UEpicCMSTileCarousel_NavigationVisibilityChanged_Params params;
	params.bShowNavigation = bShowNavigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                 TileWidget                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEpicCMSTileCarousel::HandleTilePageAdded(class UWidget* TileWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded");

	UEpicCMSTileCarousel_HandleTilePageAdded_Params params;
	params.TileWidget = TileWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEpicCMSTileCarousel::GetCurrentPageIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex");

	UEpicCMSTileCarousel_GetCurrentPageIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

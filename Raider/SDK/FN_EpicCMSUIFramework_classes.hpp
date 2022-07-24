#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EpicCMSUIFramework.EpicCMSImage
// 0x0030 (0x0250 - 0x0220)
class UEpicCMSImage : public UCommonLazyImage
{
public:
	struct FScriptMulticastDelegate                    OnImageLoadingComplete;                                   // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0230(0x0010) MISSED OFFSET
	bool                                               bDownloadingExternalMedia;                                // 0x0240(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0241(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSImage");
		return ptr;
	}

};


// Class EpicCMSUIFramework.EpicCMSLayoutBase
// 0x0068 (0x0270 - 0x0208)
class UEpicCMSLayoutBase : public UUserWidget
{
public:
	TArray<struct FSlotDescription>                    CarouselSlotDescriptions;                                 // 0x0208(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      CarouselClass;                                            // 0x0218(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0220(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSLayoutBase");
		return ptr;
	}

};


// Class EpicCMSUIFramework.EpicCMSManager
// 0x0088 (0x00B0 - 0x0028)
class UEpicCMSManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	struct FString                                     CmsEndpointOverride;                                      // 0x0040(0x0010) (ZeroConstructor)
	bool                                               bRefreshing;                                              // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5F];                                      // 0x0051(0x005F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSManager");
		return ptr;
	}

};


// Class EpicCMSUIFramework.EpicCMSScreenBase
// 0x0090 (0x0388 - 0x02F8)
class UEpicCMSScreenBase : public UCommonActivatablePanel
{
public:
	struct FString                                     TileSetFieldName;                                         // 0x02F8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0308(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EpicCMSUIFramework.EpicCMSScreenBase.TileTypeToTileClassDataTable
	unsigned char                                      UnknownData01[0x28];                                      // 0x0330(0x0028) UNKNOWN PROPERTY: SoftClassProperty EpicCMSUIFramework.EpicCMSScreenBase.LayoutErrorClass
	unsigned char                                      UnknownData02[0x28];                                      // 0x0358(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EpicCMSUIFramework.EpicCMSScreenBase.LayoutTypeToLayoutClassDataTable
	unsigned char                                      UnknownData03[0x8];                                       // 0x0380(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSScreenBase");
		return ptr;
	}

};


// Class EpicCMSUIFramework.EpicCMSTileBase
// 0x0118 (0x09A0 - 0x0888)
class UEpicCMSTileBase : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0888(0x0008) MISSED OFFSET
	class UClass*                                      DefaultTitleTextStyle;                                    // 0x0890(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FeaturedTitleTextStyle;                                   // 0x0898(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x08A0(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     Link;                                                     // 0x08B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bDownloadingExternalMedia;                                // 0x08C8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRefreshingMcpCatalog;                                    // 0x08C9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB6];                                      // 0x08CA(0x00B6) MISSED OFFSET
	class UCommonLazyImage*                            LazyImage_Icon;                                           // 0x0980(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            TitleTextBlock;                                           // 0x0988(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            SubtitleTextBlock;                                        // 0x0990(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            EyebrowTextBlock;                                         // 0x0998(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSTileBase");
		return ptr;
	}


	void Launch();
	void DynamicHandleIconLoadingStateChanged(bool bIsLoading);
};


// Class EpicCMSUIFramework.EpicCMSTileCarousel
// 0x0050 (0x0258 - 0x0208)
class UEpicCMSTileCarousel : public UUserWidget
{
public:
	struct FSlateSound                                 PreviousButtonSound;                                      // 0x0208(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateSound                                 NextButtonSound;                                          // 0x0220(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UCommonWidgetCarousel*                       Carousel;                                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     NextPageButton;                                           // 0x0240(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     PreviousPageButton;                                       // 0x0248(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShouldShowNavigationOnlyOnHover;                         // 0x0250(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsShowingNavigation;                                     // 0x0251(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0252(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSTileCarousel");
		return ptr;
	}


	void SetCurrentPageByIndex(int PageIndex);
	void PreviousPage();
	void NextPage();
	void NavigationVisibilityChanged(bool bShowNavigation);
	void HandleTilePageAdded(class UWidget* TileWidget);
	int GetCurrentPageIndex();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

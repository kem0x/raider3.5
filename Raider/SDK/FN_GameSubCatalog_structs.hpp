#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GameSubCatalog.ECatalogRequirementType
enum class ECatalogRequirementType : uint8_t
{
	RequireFulfillment             = 0,
	DenyOnFulfillment              = 1,
	RequireItemOwnership           = 2,
	DenyOnItemOwnership            = 3,
	ECatalogRequirementType_MAX    = 4
};


// Enum GameSubCatalog.ECatalogOfferType
enum class ECatalogOfferType : uint8_t
{
	StaticPrice                    = 0,
	DynamicBundle                  = 1,
	ECatalogOfferType_MAX          = 2
};


// Enum GameSubCatalog.ECatalogSaleType
enum class ECatalogSaleType : uint8_t
{
	NotOnSale                      = 0,
	UndecoratedNewPrice            = 1,
	AmountOff                      = 2,
	PercentOff                     = 3,
	PercentOn                      = 4,
	Strikethrough                  = 5,
	MAX                            = 6
};


// Enum GameSubCatalog.EAppStore
enum class EAppStore : uint8_t
{
	DebugStore                     = 0,
	EpicPurchasingService          = 1,
	IOSAppStore                    = 2,
	WeChatAppStore                 = 3,
	GooglePlayAppStore             = 4,
	KindleStore                    = 5,
	PlayStationStore               = 6,
	XboxLiveStore                  = 7,
	MAX                            = 8
};


// Enum GameSubCatalog.EStoreCurrencyType
enum class EStoreCurrencyType : uint8_t
{
	RealMoney                      = 0,
	MtxCurrency                    = 1,
	GameItem                       = 2,
	Other                          = 3,
	MAX                            = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameSubCatalog.CatalogPurchaseNotification
// 0x0020
struct FCatalogPurchaseNotification
{
	struct FMcpLootResult                              LootResult;                                               // 0x0000(0x0020)
};

// ScriptStruct GameSubCatalog.CatalogKeyValue
// 0x0020
struct FCatalogKeyValue
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct GameSubCatalog.CatalogItemPrice
// 0x0048
struct FCatalogItemPrice
{
	TEnumAsByte<EStoreCurrencyType>                    CurrencyType;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     CurrencySubType;                                          // 0x0008(0x0010) (Edit, ZeroConstructor)
	int                                                RegularPrice;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FinalPrice;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FText                                       PriceTextOverride;                                        // 0x0020(0x0018)
	TEnumAsByte<ECatalogSaleType>                      SaleType;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FDateTime                                   SaleExpiration;                                           // 0x0040(0x0008)
};

// ScriptStruct GameSubCatalog.ItemQuantity
// 0x0038
struct FItemQuantity
{
	struct FString                                     TemplateId;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Quantity;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FJsonObjectWrapper                          Attributes;                                               // 0x0018(0x0020) (Edit)
};

// ScriptStruct GameSubCatalog.CatalogDynamicBundleItem
// 0x0078
struct FCatalogDynamicBundleItem
{
	struct FItemQuantity                               Item;                                                     // 0x0000(0x0038) (Edit, DisableEditOnInstance)
	bool                                               bCanOwnMultiple;                                          // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                RegularPrice;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DiscountedPrice;                                          // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AlreadyOwnedPriceReduction;                               // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0048(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0060(0x0018) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameSubCatalog.CatalogDynamicBundle
// 0x0030
struct FCatalogDynamicBundle
{
	int                                                BasePrice;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EStoreCurrencyType>                    CurrencyType;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FString                                     CurrencySubType;                                          // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<ECatalogSaleType>                      DisplayType;                                              // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<struct FCatalogDynamicBundleItem>           BundleItems;                                              // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct GameSubCatalog.CatalogMetaAssetInfo
// 0x0030
struct FCatalogMetaAssetInfo
{
	struct FString                                     StructName;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FJsonObjectWrapper                          Payload;                                                  // 0x0010(0x0020)
};

// ScriptStruct GameSubCatalog.CatalogOfferRequirement
// 0x0018
struct FCatalogOfferRequirement
{
	ECatalogRequirementType                            RequirementType;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MinQuantity;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     RequiredId;                                               // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct GameSubCatalog.CatalogGiftInfo
// 0x0028
struct FCatalogGiftInfo
{
	bool                                               bIsEnabled;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     ForcedGiftBoxTemplateId;                                  // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FCatalogOfferRequirement>            PurchaseRequirements;                                     // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct GameSubCatalog.CatalogOffer
// 0x0210
struct FCatalogOffer
{
	struct FString                                     OfferId;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     DevName;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCatalogKeyValue>                    MetaInfo;                                                 // 0x0020(0x0010) (Edit, ZeroConstructor)
	ECatalogOfferType                                  OfferType;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TArray<struct FCatalogItemPrice>                   Prices;                                                   // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FCatalogDynamicBundle                       DynamicBundleInfo;                                        // 0x0048(0x0030) (Edit)
	int                                                DailyLimit;                                               // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                WeeklyLimit;                                              // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MonthlyLimit;                                             // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	TArray<struct FString>                             Categories;                                               // 0x0088(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CatalogGroup;                                             // 0x0098(0x0010) (Edit, ZeroConstructor)
	int                                                CatalogGroupPriority;                                     // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SortPriority;                                             // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x00B0(0x0018) (Edit)
	struct FText                                       ShortDescription;                                         // 0x00C8(0x0018) (Edit)
	struct FText                                       Description;                                              // 0x00E0(0x0018) (Edit)
	struct FString                                     AppStoreId[0x8];                                          // 0x00F8(0x0010) (Edit, ZeroConstructor)
	struct FCatalogMetaAssetInfo                       MetaAssetInfo;                                            // 0x0178(0x0030)
	struct FString                                     DisplayAssetPath;                                         // 0x01A8(0x0010) (ZeroConstructor)
	TArray<struct FItemQuantity>                       ItemGrants;                                               // 0x01B8(0x0010) (ZeroConstructor)
	TArray<struct FCatalogOfferRequirement>            Requirements;                                             // 0x01C8(0x0010) (ZeroConstructor)
	struct FCatalogGiftInfo                            GiftInfo;                                                 // 0x01D8(0x0028)
	TArray<struct FString>                             DenyItemTemplateIds;                                      // 0x0200(0x0010) (ZeroConstructor, Deprecated)
};

// ScriptStruct GameSubCatalog.Storefront
// 0x0020
struct FStorefront
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FCatalogOffer>                       CatalogEntries;                                           // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct GameSubCatalog.CatalogDownload
// 0x0020
struct FCatalogDownload
{
	int                                                RefreshIntervalHrs;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DailyPurchaseHrs;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   Expiration;                                               // 0x0008(0x0008)
	TArray<struct FStorefront>                         Storefronts;                                              // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct GameSubCatalog.CatalogItemSalePrice
// 0x0018
struct FCatalogItemSalePrice
{
	int                                                SalePrice;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECatalogSaleType>                      SaleType;                                                 // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FDateTime                                   StartTime;                                                // 0x0008(0x0008) (Edit)
	struct FDateTime                                   EndTime;                                                  // 0x0010(0x0008) (Edit)
};

// ScriptStruct GameSubCatalog.CatalogPurchaseInfoGift
// 0x0070
struct FCatalogPurchaseInfoGift
{
	struct FString                                     OfferId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<EStoreCurrencyType>                    Currency;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     CurrencySubType;                                          // 0x0018(0x0010) (ZeroConstructor)
	int                                                ExpectedTotalPrice;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     GameContext;                                              // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FString>                             ReceiverAccountIds;                                       // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     GiftWrapTemplateId;                                       // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     PersonalMessage;                                          // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct GameSubCatalog.CatalogPurchaseInfo
// 0x0040
struct FCatalogPurchaseInfo
{
	struct FString                                     OfferId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	int                                                PurchaseQuantity;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStoreCurrencyType>                    Currency;                                                 // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FString                                     CurrencySubType;                                          // 0x0018(0x0010) (ZeroConstructor)
	int                                                ExpectedTotalPrice;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     GameContext;                                              // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct GameSubCatalog.CatalogReceiptInfo
// 0x0048
struct FCatalogReceiptInfo
{
	TEnumAsByte<EAppStore>                             AppStore;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     AppStoreId;                                               // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     ReceiptId;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     ReceiptInfo;                                              // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     PurchaseCorrelationId;                                    // 0x0038(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

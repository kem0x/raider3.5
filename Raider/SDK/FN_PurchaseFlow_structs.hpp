#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PurchaseFlow.PurchaseFlowItem
// 0x0030
struct FPurchaseFlowItem
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     EntitlementId;                                            // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     ValidationInfo;                                           // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct PurchaseFlow.PurchaseFlowOffer
// 0x0038
struct FPurchaseFlowOffer
{
	struct FString                                     OfferNamespace;                                           // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     OfferId;                                                  // 0x0010(0x0010) (ZeroConstructor)
	int                                                Quantity;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FPurchaseFlowItem>                   Items;                                                    // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct PurchaseFlow.PurchaseFlowReceiptParam
// 0x0030
struct FPurchaseFlowReceiptParam
{
	struct FString                                     TransactionId;                                            // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     TransactionState;                                         // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FPurchaseFlowOffer>                  Offers;                                                   // 0x0020(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

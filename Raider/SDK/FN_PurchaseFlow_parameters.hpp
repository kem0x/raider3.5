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

// Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose
struct UPurchaseFlowJSBridge_RequestClose_Params
{
	struct FString                                     CloseInfo;                                                // (Parm, ZeroConstructor)
};

// Function PurchaseFlow.PurchaseFlowJSBridge.RECEIPT
struct UPurchaseFlowJSBridge_RECEIPT_Params
{
	struct FPurchaseFlowReceiptParam                   RECEIPT;                                                  // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

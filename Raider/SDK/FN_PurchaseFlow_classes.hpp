#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PurchaseFlow.PurchaseFlowJSBridge
// 0x0010 (0x0038 - 0x0028)
class UPurchaseFlowJSBridge : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PurchaseFlow.PurchaseFlowJSBridge");
		return ptr;
	}


	void RequestClose(const struct FString& CloseInfo);
	void RECEIPT(const struct FPurchaseFlowReceiptParam& RECEIPT);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

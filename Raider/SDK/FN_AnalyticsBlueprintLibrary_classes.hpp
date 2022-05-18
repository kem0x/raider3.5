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

// Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary");
		return ptr;
	}


	bool STATIC_StartSessionWithAttributes(TArray<struct FAnalyticsEventAttr> Attributes);
	bool STATIC_StartSession();
	void STATIC_SetUserId(const struct FString& UserId);
	void STATIC_SetSessionId(const struct FString& SessionId);
	void STATIC_SetLocation(const struct FString& Location);
	void STATIC_SetGender(const struct FString& Gender);
	void STATIC_SetBuildInfo(const struct FString& BuildInfo);
	void STATIC_SetAge(int Age);
	void STATIC_RecordSimpleItemPurchaseWithAttributes(const struct FString& ItemId, int ItemQuantity, TArray<struct FAnalyticsEventAttr> Attributes);
	void STATIC_RecordSimpleItemPurchase(const struct FString& ItemId, int ItemQuantity);
	void STATIC_RecordSimpleCurrencyPurchaseWithAttributes(const struct FString& GameCurrencyType, int GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes);
	void STATIC_RecordSimpleCurrencyPurchase(const struct FString& GameCurrencyType, int GameCurrencyAmount);
	void STATIC_RecordProgressWithFullHierarchyAndAttributes(const struct FString& ProgressType, TArray<struct FString> ProgressNames, TArray<struct FAnalyticsEventAttr> Attributes);
	void STATIC_RecordProgressWithAttributes(const struct FString& ProgressType, const struct FString& ProgressName, TArray<struct FAnalyticsEventAttr> Attributes);
	void STATIC_RecordProgress(const struct FString& ProgressType, const struct FString& ProgressName);
	void STATIC_RecordItemPurchase(const struct FString& ItemId, const struct FString& Currency, int PerItemCost, int ItemQuantity);
	void STATIC_RecordEventWithAttributes(const struct FString& EventName, TArray<struct FAnalyticsEventAttr> Attributes);
	void STATIC_RecordEventWithAttribute(const struct FString& EventName, const struct FString& AttributeName, const struct FString& AttributeValue);
	void STATIC_RecordEvent(const struct FString& EventName);
	void STATIC_RecordErrorWithAttributes(const struct FString& Error, TArray<struct FAnalyticsEventAttr> Attributes);
	void STATIC_RecordError(const struct FString& Error);
	void STATIC_RecordCurrencyPurchase(const struct FString& GameCurrencyType, int GameCurrencyAmount, const struct FString& RealCurrencyType, float RealMoneyCost, const struct FString& PaymentProvider);
	void STATIC_RecordCurrencyGivenWithAttributes(const struct FString& GameCurrencyType, int GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes);
	void STATIC_RecordCurrencyGiven(const struct FString& GameCurrencyType, int GameCurrencyAmount);
	struct FAnalyticsEventAttr STATIC_MakeEventAttribute(const struct FString& AttributeName, const struct FString& AttributeValue);
	struct FString STATIC_GetUserId();
	struct FString STATIC_GetSessionId();
	void STATIC_FlushEvents();
	void STATIC_EndSession();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

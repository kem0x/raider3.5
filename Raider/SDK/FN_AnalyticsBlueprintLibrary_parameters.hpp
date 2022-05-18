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

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes
struct UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Params
{
	TArray<struct FAnalyticsEventAttr>                 Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession
struct UAnalyticsBlueprintLibrary_StartSession_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId
struct UAnalyticsBlueprintLibrary_SetUserId_Params
{
	struct FString                                     UserId;                                                   // (Parm, ZeroConstructor)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId
struct UAnalyticsBlueprintLibrary_SetSessionId_Params
{
	struct FString                                     SessionId;                                                // (Parm, ZeroConstructor)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation
struct UAnalyticsBlueprintLibrary_SetLocation_Params
{
	struct FString                                     Location;                                                 // (Parm, ZeroConstructor)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender
struct UAnalyticsBlueprintLibrary_SetGender_Params
{
	struct FString                                     Gender;                                                   // (Parm, ZeroConstructor)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo
struct UAnalyticsBlueprintLibrary_SetBuildInfo_Params
{
	struct FString                                     BuildInfo;                                                // (Parm, ZeroConstructor)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge
struct UAnalyticsBlueprintLibrary_SetAge_Params
{
	int                                                Age;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
struct UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Params
{
	struct FString                                     ItemId;                                                   // (Parm, ZeroConstructor)
	int                                                ItemQuantity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnalyticsEventAttr>                 Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase
struct UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Params
{
	struct FString                                     ItemId;                                                   // (Parm, ZeroConstructor)
	int                                                ItemQuantity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
struct UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Params
{
	struct FString                                     GameCurrencyType;                                         // (Parm, ZeroConstructor)
	int                                                GameCurrencyAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnalyticsEventAttr>                 Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
struct UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Params
{
	struct FString                                     GameCurrencyType;                                         // (Parm, ZeroConstructor)
	int                                                GameCurrencyAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes
struct UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Params
{
	struct FString                                     ProgressType;                                             // (Parm, ZeroConstructor)
	TArray<struct FString>                             ProgressNames;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FAnalyticsEventAttr>                 Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes
struct UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Params
{
	struct FString                                     ProgressType;                                             // (Parm, ZeroConstructor)
	struct FString                                     ProgressName;                                             // (Parm, ZeroConstructor)
	TArray<struct FAnalyticsEventAttr>                 Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress
struct UAnalyticsBlueprintLibrary_RecordProgress_Params
{
	struct FString                                     ProgressType;                                             // (Parm, ZeroConstructor)
	struct FString                                     ProgressName;                                             // (Parm, ZeroConstructor)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase
struct UAnalyticsBlueprintLibrary_RecordItemPurchase_Params
{
	struct FString                                     ItemId;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Currency;                                                 // (Parm, ZeroConstructor)
	int                                                PerItemCost;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemQuantity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes
struct UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	TArray<struct FAnalyticsEventAttr>                 Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute
struct UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	struct FString                                     AttributeName;                                            // (Parm, ZeroConstructor)
	struct FString                                     AttributeValue;                                           // (Parm, ZeroConstructor)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent
struct UAnalyticsBlueprintLibrary_RecordEvent_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes
struct UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Params
{
	struct FString                                     Error;                                                    // (Parm, ZeroConstructor)
	TArray<struct FAnalyticsEventAttr>                 Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError
struct UAnalyticsBlueprintLibrary_RecordError_Params
{
	struct FString                                     Error;                                                    // (Parm, ZeroConstructor)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase
struct UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Params
{
	struct FString                                     GameCurrencyType;                                         // (Parm, ZeroConstructor)
	int                                                GameCurrencyAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RealCurrencyType;                                         // (Parm, ZeroConstructor)
	float                                              RealMoneyCost;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PaymentProvider;                                          // (Parm, ZeroConstructor)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes
struct UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Params
{
	struct FString                                     GameCurrencyType;                                         // (Parm, ZeroConstructor)
	int                                                GameCurrencyAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnalyticsEventAttr>                 Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven
struct UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Params
{
	struct FString                                     GameCurrencyType;                                         // (Parm, ZeroConstructor)
	int                                                GameCurrencyAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute
struct UAnalyticsBlueprintLibrary_MakeEventAttribute_Params
{
	struct FString                                     AttributeName;                                            // (Parm, ZeroConstructor)
	struct FString                                     AttributeValue;                                           // (Parm, ZeroConstructor)
	struct FAnalyticsEventAttr                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId
struct UAnalyticsBlueprintLibrary_GetUserId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId
struct UAnalyticsBlueprintLibrary_GetSessionId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents
struct UAnalyticsBlueprintLibrary_FlushEvents_Params
{
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession
struct UAnalyticsBlueprintLibrary_EndSession_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

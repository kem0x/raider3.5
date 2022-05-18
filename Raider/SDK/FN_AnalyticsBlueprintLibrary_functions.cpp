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

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FAnalyticsEventAttr> Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnalyticsBlueprintLibrary::STATIC_StartSessionWithAttributes(TArray<struct FAnalyticsEventAttr> Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes");

	UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Params params;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnalyticsBlueprintLibrary::STATIC_StartSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession");

	UAnalyticsBlueprintLibrary_StartSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 UserId                         (Parm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::STATIC_SetUserId(const struct FString& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId");

	UAnalyticsBlueprintLibrary_SetUserId_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SessionId                      (Parm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::STATIC_SetSessionId(const struct FString& SessionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId");

	UAnalyticsBlueprintLibrary_SetSessionId_Params params;
	params.SessionId = SessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Location                       (Parm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::STATIC_SetLocation(const struct FString& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation");

	UAnalyticsBlueprintLibrary_SetLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Gender                         (Parm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::STATIC_SetGender(const struct FString& Gender)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender");

	UAnalyticsBlueprintLibrary_SetGender_Params params;
	params.Gender = Gender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 BuildInfo                      (Parm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::STATIC_SetBuildInfo(const struct FString& BuildInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo");

	UAnalyticsBlueprintLibrary_SetBuildInfo_Params params;
	params.BuildInfo = BuildInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Age                            (Parm, ZeroConstructor, IsPlainOldData)

void UAnalyticsBlueprintLibrary::STATIC_SetAge(int Age)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge");

	UAnalyticsBlueprintLibrary_SetAge_Params params;
	params.Age = Age;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ItemId                         (Parm, ZeroConstructor)
// int                            ItemQuantity                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAnalyticsEventAttr> Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAnalyticsBlueprintLibrary::STATIC_RecordSimpleItemPurchaseWithAttributes(const struct FString& ItemId, int ItemQuantity, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes");

	UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Params params;
	params.ItemId = ItemId;
	params.ItemQuantity = ItemQuantity;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ItemId                         (Parm, ZeroConstructor)
// int                            ItemQuantity                   (Parm, ZeroConstructor, IsPlainOldData)

void UAnalyticsBlueprintLibrary::STATIC_RecordSimpleItemPurchase(const struct FString& ItemId, int ItemQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase");

	UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Params params;
	params.ItemId = ItemId;
	params.ItemQuantity = ItemQuantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 GameCurrencyType               (Parm, ZeroConstructor)
// int                            GameCurrencyAmount             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAnalyticsEventAttr> Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAnalyticsBlueprintLibrary::STATIC_RecordSimpleCurrencyPurchaseWithAttributes(const struct FString& GameCurrencyType, int GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes");

	UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Params params;
	params.GameCurrencyType = GameCurrencyType;
	params.GameCurrencyAmount = GameCurrencyAmount;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 GameCurrencyType               (Parm, ZeroConstructor)
// int                            GameCurrencyAmount             (Parm, ZeroConstructor, IsPlainOldData)

void UAnalyticsBlueprintLibrary::STATIC_RecordSimpleCurrencyPurchase(const struct FString& GameCurrencyType, int GameCurrencyAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase");

	UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Params params;
	params.GameCurrencyType = GameCurrencyType;
	params.GameCurrencyAmount = GameCurrencyAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ProgressType                   (Parm, ZeroConstructor)
// TArray<struct FString>         ProgressNames                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FAnalyticsEventAttr> Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAnalyticsBlueprintLibrary::STATIC_RecordProgressWithFullHierarchyAndAttributes(const struct FString& ProgressType, TArray<struct FString> ProgressNames, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes");

	UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Params params;
	params.ProgressType = ProgressType;
	params.ProgressNames = ProgressNames;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ProgressType                   (Parm, ZeroConstructor)
// struct FString                 ProgressName                   (Parm, ZeroConstructor)
// TArray<struct FAnalyticsEventAttr> Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAnalyticsBlueprintLibrary::STATIC_RecordProgressWithAttributes(const struct FString& ProgressType, const struct FString& ProgressName, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes");

	UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Params params;
	params.ProgressType = ProgressType;
	params.ProgressName = ProgressName;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ProgressType                   (Parm, ZeroConstructor)
// struct FString                 ProgressName                   (Parm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::STATIC_RecordProgress(const struct FString& ProgressType, const struct FString& ProgressName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress");

	UAnalyticsBlueprintLibrary_RecordProgress_Params params;
	params.ProgressType = ProgressType;
	params.ProgressName = ProgressName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ItemId                         (Parm, ZeroConstructor)
// struct FString                 Currency                       (Parm, ZeroConstructor)
// int                            PerItemCost                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemQuantity                   (Parm, ZeroConstructor, IsPlainOldData)

void UAnalyticsBlueprintLibrary::STATIC_RecordItemPurchase(const struct FString& ItemId, const struct FString& Currency, int PerItemCost, int ItemQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase");

	UAnalyticsBlueprintLibrary_RecordItemPurchase_Params params;
	params.ItemId = ItemId;
	params.Currency = Currency;
	params.PerItemCost = PerItemCost;
	params.ItemQuantity = ItemQuantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// TArray<struct FAnalyticsEventAttr> Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAnalyticsBlueprintLibrary::STATIC_RecordEventWithAttributes(const struct FString& EventName, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes");

	UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Params params;
	params.EventName = EventName;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// struct FString                 AttributeName                  (Parm, ZeroConstructor)
// struct FString                 AttributeValue                 (Parm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::STATIC_RecordEventWithAttribute(const struct FString& EventName, const struct FString& AttributeName, const struct FString& AttributeValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute");

	UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Params params;
	params.EventName = EventName;
	params.AttributeName = AttributeName;
	params.AttributeValue = AttributeValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::STATIC_RecordEvent(const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent");

	UAnalyticsBlueprintLibrary_RecordEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Error                          (Parm, ZeroConstructor)
// TArray<struct FAnalyticsEventAttr> Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAnalyticsBlueprintLibrary::STATIC_RecordErrorWithAttributes(const struct FString& Error, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes");

	UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Params params;
	params.Error = Error;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Error                          (Parm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::STATIC_RecordError(const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError");

	UAnalyticsBlueprintLibrary_RecordError_Params params;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 GameCurrencyType               (Parm, ZeroConstructor)
// int                            GameCurrencyAmount             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 RealCurrencyType               (Parm, ZeroConstructor)
// float                          RealMoneyCost                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PaymentProvider                (Parm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::STATIC_RecordCurrencyPurchase(const struct FString& GameCurrencyType, int GameCurrencyAmount, const struct FString& RealCurrencyType, float RealMoneyCost, const struct FString& PaymentProvider)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase");

	UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Params params;
	params.GameCurrencyType = GameCurrencyType;
	params.GameCurrencyAmount = GameCurrencyAmount;
	params.RealCurrencyType = RealCurrencyType;
	params.RealMoneyCost = RealMoneyCost;
	params.PaymentProvider = PaymentProvider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 GameCurrencyType               (Parm, ZeroConstructor)
// int                            GameCurrencyAmount             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAnalyticsEventAttr> Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAnalyticsBlueprintLibrary::STATIC_RecordCurrencyGivenWithAttributes(const struct FString& GameCurrencyType, int GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes");

	UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Params params;
	params.GameCurrencyType = GameCurrencyType;
	params.GameCurrencyAmount = GameCurrencyAmount;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 GameCurrencyType               (Parm, ZeroConstructor)
// int                            GameCurrencyAmount             (Parm, ZeroConstructor, IsPlainOldData)

void UAnalyticsBlueprintLibrary::STATIC_RecordCurrencyGiven(const struct FString& GameCurrencyType, int GameCurrencyAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven");

	UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Params params;
	params.GameCurrencyType = GameCurrencyType;
	params.GameCurrencyAmount = GameCurrencyAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 AttributeName                  (Parm, ZeroConstructor)
// struct FString                 AttributeValue                 (Parm, ZeroConstructor)
// struct FAnalyticsEventAttr     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAnalyticsEventAttr UAnalyticsBlueprintLibrary::STATIC_MakeEventAttribute(const struct FString& AttributeName, const struct FString& AttributeValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute");

	UAnalyticsBlueprintLibrary_MakeEventAttribute_Params params;
	params.AttributeName = AttributeName;
	params.AttributeValue = AttributeValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAnalyticsBlueprintLibrary::STATIC_GetUserId()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId");

	UAnalyticsBlueprintLibrary_GetUserId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAnalyticsBlueprintLibrary::STATIC_GetSessionId()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId");

	UAnalyticsBlueprintLibrary_GetSessionId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents
// (Final, Native, Static, Public, BlueprintCallable)

void UAnalyticsBlueprintLibrary::STATIC_FlushEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents");

	UAnalyticsBlueprintLibrary_FlushEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession
// (Final, Native, Static, Public, BlueprintCallable)

void UAnalyticsBlueprintLibrary::STATIC_EndSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession");

	UAnalyticsBlueprintLibrary_EndSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

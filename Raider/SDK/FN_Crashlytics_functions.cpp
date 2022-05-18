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

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)

void UCrashlyticsBlueprintLibrary::STATIC_SetUserName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserName");

	UCrashlyticsBlueprintLibrary_SetUserName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserIdentifier
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)

void UCrashlyticsBlueprintLibrary::STATIC_SetUserIdentifier(const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserIdentifier");

	UCrashlyticsBlueprintLibrary_SetUserIdentifier_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserEmail
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Email                          (Parm, ZeroConstructor)

void UCrashlyticsBlueprintLibrary::STATIC_SetUserEmail(const struct FString& Email)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserEmail");

	UCrashlyticsBlueprintLibrary_SetUserEmail_Params params;
	params.Email = Email;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crashlytics.CrashlyticsBlueprintLibrary.SetStringKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UCrashlyticsBlueprintLibrary::STATIC_SetStringKey(const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crashlytics.CrashlyticsBlueprintLibrary.SetStringKey");

	UCrashlyticsBlueprintLibrary_SetStringKey_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crashlytics.CrashlyticsBlueprintLibrary.SetIntegerKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UCrashlyticsBlueprintLibrary::STATIC_SetIntegerKey(const struct FString& Key, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crashlytics.CrashlyticsBlueprintLibrary.SetIntegerKey");

	UCrashlyticsBlueprintLibrary_SetIntegerKey_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crashlytics.CrashlyticsBlueprintLibrary.SetFloatKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UCrashlyticsBlueprintLibrary::STATIC_SetFloatKey(const struct FString& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crashlytics.CrashlyticsBlueprintLibrary.SetFloatKey");

	UCrashlyticsBlueprintLibrary_SetFloatKey_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crashlytics.CrashlyticsBlueprintLibrary.SetBooleanKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UCrashlyticsBlueprintLibrary::STATIC_SetBooleanKey(const struct FString& Key, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crashlytics.CrashlyticsBlueprintLibrary.SetBooleanKey");

	UCrashlyticsBlueprintLibrary_SetBooleanKey_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crashlytics.CrashlyticsBlueprintLibrary.LogMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 MESSAGE                        (Parm, ZeroConstructor)

void UCrashlyticsBlueprintLibrary::STATIC_LogMessage(const struct FString& MESSAGE)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crashlytics.CrashlyticsBlueprintLibrary.LogMessage");

	UCrashlyticsBlueprintLibrary_LogMessage_Params params;
	params.MESSAGE = MESSAGE;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crashlytics.CrashlyticsBlueprintLibrary.LogException
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 MESSAGE                        (Parm, ZeroConstructor)

void UCrashlyticsBlueprintLibrary::STATIC_LogException(const struct FString& MESSAGE)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crashlytics.CrashlyticsBlueprintLibrary.LogException");

	UCrashlyticsBlueprintLibrary_LogException_Params params;
	params.MESSAGE = MESSAGE;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

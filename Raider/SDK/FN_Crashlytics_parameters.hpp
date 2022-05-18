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

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserName
struct UCrashlyticsBlueprintLibrary_SetUserName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserIdentifier
struct UCrashlyticsBlueprintLibrary_SetUserIdentifier_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserEmail
struct UCrashlyticsBlueprintLibrary_SetUserEmail_Params
{
	struct FString                                     Email;                                                    // (Parm, ZeroConstructor)
};

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetStringKey
struct UCrashlyticsBlueprintLibrary_SetStringKey_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetIntegerKey
struct UCrashlyticsBlueprintLibrary_SetIntegerKey_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetFloatKey
struct UCrashlyticsBlueprintLibrary_SetFloatKey_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetBooleanKey
struct UCrashlyticsBlueprintLibrary_SetBooleanKey_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crashlytics.CrashlyticsBlueprintLibrary.LogMessage
struct UCrashlyticsBlueprintLibrary_LogMessage_Params
{
	struct FString                                     MESSAGE;                                                  // (Parm, ZeroConstructor)
};

// Function Crashlytics.CrashlyticsBlueprintLibrary.LogException
struct UCrashlyticsBlueprintLibrary_LogException_Params
{
	struct FString                                     MESSAGE;                                                  // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
struct UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
struct UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     StringToMatch;                                            // (Parm, ZeroConstructor)
	TArray<struct FName>                               OutKeys;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FString>                             OutValues;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
struct UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDatasmithAssetUserData*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

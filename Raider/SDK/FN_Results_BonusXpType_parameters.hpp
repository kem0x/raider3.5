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

// Function Results_BonusXpType.Results_BonusXpType_C.setInformation
struct UResults_BonusXpType_C_setInformation_Params
{
	int                                                InXPAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       InType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_BonusXpType.Results_BonusXpType_C.Construct
struct UResults_BonusXpType_C_Construct_Params
{
};

// Function Results_BonusXpType.Results_BonusXpType_C.PreConstruct
struct UResults_BonusXpType_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_BonusXpType.Results_BonusXpType_C.ExecuteUbergraph_Results_BonusXpType
struct UResults_BonusXpType_C_ExecuteUbergraph_Results_BonusXpType_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.PlayFlashAnimation
struct UCollectionMultiProgressBar_C_PlayFlashAnimation_Params
{
};

// Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.UpdateVisibleBar
struct UCollectionMultiProgressBar_C_UpdateVisibleBar_Params
{
};

// Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.Update
struct UCollectionMultiProgressBar_C_Update_Params
{
	int                                                AchievedCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.Setup
struct UCollectionMultiProgressBar_C_Setup_Params
{
	TArray<struct FCollectionMissionBadgeDisplayInfo>  InBarInfos;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                AchievedCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.Construct
struct UCollectionMultiProgressBar_C_Construct_Params
{
};

// Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.ExecuteUbergraph_CollectionMultiProgressBar
struct UCollectionMultiProgressBar_C_ExecuteUbergraph_CollectionMultiProgressBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function WM_PinManager.WM_PinManager_C.CreateWorldMapPin
struct AWM_PinManager_C_CreateWorldMapPin_Params
{
	struct FString*                                    TheaterId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class AWorldMapPin*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WM_PinManager.WM_PinManager_C.UserConstructionScript
struct AWM_PinManager_C_UserConstructionScript_Params
{
};

// Function WM_PinManager.WM_PinManager_C.ReceiveBeginPlay
struct AWM_PinManager_C_ReceiveBeginPlay_Params
{
};

// Function WM_PinManager.WM_PinManager_C.ExecuteUbergraph_WM_PinManager
struct AWM_PinManager_C_ExecuteUbergraph_WM_PinManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

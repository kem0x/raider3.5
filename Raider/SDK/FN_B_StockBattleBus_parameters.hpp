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

// Function B_StockBattleBus.B_StockBattleBus_C.UserConstructionScript
struct AB_StockBattleBus_C_UserConstructionScript_Params
{
};

// Function B_StockBattleBus.B_StockBattleBus_C.Bus Music Fader__FinishedFunc
struct AB_StockBattleBus_C_Bus_Music_Fader__FinishedFunc_Params
{
};

// Function B_StockBattleBus.B_StockBattleBus_C.Bus Music Fader__UpdateFunc
struct AB_StockBattleBus_C_Bus_Music_Fader__UpdateFunc_Params
{
};

// Function B_StockBattleBus.B_StockBattleBus_C.Light Flash Timeline__FinishedFunc
struct AB_StockBattleBus_C_Light_Flash_Timeline__FinishedFunc_Params
{
};

// Function B_StockBattleBus.B_StockBattleBus_C.Light Flash Timeline__UpdateFunc
struct AB_StockBattleBus_C_Light_Flash_Timeline__UpdateFunc_Params
{
};

// Function B_StockBattleBus.B_StockBattleBus_C.Light Flash Timeline__Loop__EventFunc
struct AB_StockBattleBus_C_Light_Flash_Timeline__Loop__EventFunc_Params
{
};

// Function B_StockBattleBus.B_StockBattleBus_C.Start Audio
struct AB_StockBattleBus_C_Start_Audio_Params
{
};

// Function B_StockBattleBus.B_StockBattleBus_C.GrabAudioReferences
struct AB_StockBattleBus_C_GrabAudioReferences_Params
{
};

// Function B_StockBattleBus.B_StockBattleBus_C.ReceiveEndPlay
struct AB_StockBattleBus_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_StockBattleBus.B_StockBattleBus_C.ReceiveBeginPlay
struct AB_StockBattleBus_C_ReceiveBeginPlay_Params
{
};

// Function B_StockBattleBus.B_StockBattleBus_C.ExecuteUbergraph_B_StockBattleBus
struct AB_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

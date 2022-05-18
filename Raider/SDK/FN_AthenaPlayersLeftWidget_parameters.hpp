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

// Function AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C.SetPlayersLeftText
struct UAthenaPlayersLeftWidget_C_SetPlayersLeftText_Params
{
	struct FText*                                      PlayersText;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C.ExecuteUbergraph_AthenaPlayersLeftWidget
struct UAthenaPlayersLeftWidget_C_ExecuteUbergraph_AthenaPlayersLeftWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

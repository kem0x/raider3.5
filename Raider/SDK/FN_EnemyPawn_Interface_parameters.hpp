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

// Function EnemyPawn_Interface.EnemyPawn_Interface_C.Orphaned
struct UEnemyPawn_Interface_C_Orphaned_Params
{
	bool                                               IsOrphaned;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AFortPawn*                                   AttachedPawn;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

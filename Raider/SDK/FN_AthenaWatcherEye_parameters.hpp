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

// Function AthenaWatcherEye.AthenaWatcherEye_C.SpectatorAdded_Watcher
struct UAthenaWatcherEye_C_SpectatorAdded_Watcher_Params
{
};

// Function AthenaWatcherEye.AthenaWatcherEye_C.Hide_Watcher
struct UAthenaWatcherEye_C_Hide_Watcher_Params
{
};

// Function AthenaWatcherEye.AthenaWatcherEye_C.Show_Watcher
struct UAthenaWatcherEye_C_Show_Watcher_Params
{
};

// Function AthenaWatcherEye.AthenaWatcherEye_C.End_Watcher
struct UAthenaWatcherEye_C_End_Watcher_Params
{
};

// Function AthenaWatcherEye.AthenaWatcherEye_C.SpectatorRemoved_Watcher
struct UAthenaWatcherEye_C_SpectatorRemoved_Watcher_Params
{
};

// Function AthenaWatcherEye.AthenaWatcherEye_C.Begin_Watcher
struct UAthenaWatcherEye_C_Begin_Watcher_Params
{
	bool                                               ManySpectatorsJoining;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaWatcherEye.AthenaWatcherEye_C.ManySpectatorsAdded_Watcher
struct UAthenaWatcherEye_C_ManySpectatorsAdded_Watcher_Params
{
};

// Function AthenaWatcherEye.AthenaWatcherEye_C.ExecuteUbergraph_AthenaWatcherEye
struct UAthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

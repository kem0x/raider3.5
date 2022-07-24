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

// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.Construct
struct UAthenaQuestUpdateEntry_C_Construct_Params
{
};

// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.StartQuestIntro
struct UAthenaQuestUpdateEntry_C_StartQuestIntro_Params
{
};

// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.StartQuestOutro
struct UAthenaQuestUpdateEntry_C_StartQuestOutro_Params
{
};

// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.ExecuteUbergraph_AthenaQuestUpdateEntry
struct UAthenaQuestUpdateEntry_C_ExecuteUbergraph_AthenaQuestUpdateEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.AllQuestUpdatesFinished_0__DelegateSignature
struct UAthenaQuestUpdateEntry_C_AllQuestUpdatesFinished_0__DelegateSignature_Params
{
	class UQuestUpdateEntry_C*                         UpdateWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

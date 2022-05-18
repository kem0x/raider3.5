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

// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.HandleOnPointOfInterestRemoved
struct UAthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved_Params
{
	class AActor*                                      PointOfInterest;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.HandleOnPointOfInterestAdded
struct UAthenaIndicatorLayer_C_HandleOnPointOfInterestAdded_Params
{
	class AActor*                                      PointOfInterest;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  DisplayImage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.CreateInterestIndicatorWidget
struct UAthenaIndicatorLayer_C_CreateInterestIndicatorWidget_Params
{
};

// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.AddSquadMemberIndicator
struct UAthenaIndicatorLayer_C_AddSquadMemberIndicator_Params
{
	class AFortPlayerStateAthena*                      Player_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Team_Member_Index;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.Construct
struct UAthenaIndicatorLayer_C_Construct_Params
{
};

// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.Destruct
struct UAthenaIndicatorLayer_C_Destruct_Params
{
};

// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.SquadIndicatorsChanged
struct UAthenaIndicatorLayer_C_SquadIndicatorsChanged_Params
{
	TArray<class AFortPlayerStateAthena*>*             PlayerStates;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.ExecuteUbergraph_AthenaIndicatorLayer
struct UAthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

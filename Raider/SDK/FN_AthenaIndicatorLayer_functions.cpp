// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.HandleOnPointOfInterestRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PointOfInterest                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaIndicatorLayer_C::HandleOnPointOfInterestRemoved(class AActor* PointOfInterest)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.HandleOnPointOfInterestRemoved");

	UAthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved_Params params;
	params.PointOfInterest = PointOfInterest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.HandleOnPointOfInterestAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PointOfInterest                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DisplayText                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              DisplayImage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaIndicatorLayer_C::HandleOnPointOfInterestAdded(class AActor* PointOfInterest, const struct FText& DisplayText, class UTexture2D* DisplayImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.HandleOnPointOfInterestAdded");

	UAthenaIndicatorLayer_C_HandleOnPointOfInterestAdded_Params params;
	params.PointOfInterest = PointOfInterest;
	params.DisplayText = DisplayText;
	params.DisplayImage = DisplayImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.CreateInterestIndicatorWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaIndicatorLayer_C::CreateInterestIndicatorWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.CreateInterestIndicatorWidget");

	UAthenaIndicatorLayer_C_CreateInterestIndicatorWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.AddSquadMemberIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*  Player_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Team_Member_Index              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaIndicatorLayer_C::AddSquadMemberIndicator(class AFortPlayerStateAthena* Player_State, int Team_Member_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.AddSquadMemberIndicator");

	UAthenaIndicatorLayer_C_AddSquadMemberIndicator_Params params;
	params.Player_State = Player_State;
	params.Team_Member_Index = Team_Member_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaIndicatorLayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.Construct");

	UAthenaIndicatorLayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaIndicatorLayer_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.Destruct");

	UAthenaIndicatorLayer_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.SquadIndicatorsChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AFortPlayerStateAthena*>* PlayerStates                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaIndicatorLayer_C::SquadIndicatorsChanged(TArray<class AFortPlayerStateAthena*>* PlayerStates)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.SquadIndicatorsChanged");

	UAthenaIndicatorLayer_C_SquadIndicatorsChanged_Params params;
	params.PlayerStates = PlayerStates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.ExecuteUbergraph_AthenaIndicatorLayer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaIndicatorLayer_C::ExecuteUbergraph_AthenaIndicatorLayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.ExecuteUbergraph_AthenaIndicatorLayer");

	UAthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

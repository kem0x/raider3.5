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

// Function GCN_MiniBoss.GCN_MiniBoss_C.OverwriteElementalParticles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyPawn_Parent_C*     Enemy_Pawn_Parent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_MiniBoss_C::OverwriteElementalParticles(class AEnemyPawn_Parent_C* Enemy_Pawn_Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_MiniBoss.GCN_MiniBoss_C.OverwriteElementalParticles");

	AGCN_MiniBoss_C_OverwriteElementalParticles_Params params;
	params.Enemy_Pawn_Parent = Enemy_Pawn_Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_MiniBoss.GCN_MiniBoss_C.OnActive
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCN_MiniBoss_C::OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_MiniBoss.GCN_MiniBoss_C.OnActive");

	AGCN_MiniBoss_C_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_MiniBoss.GCN_MiniBoss_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCN_MiniBoss_C::OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_MiniBoss.GCN_MiniBoss_C.OnRemove");

	AGCN_MiniBoss_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_MiniBoss.GCN_MiniBoss_C.HideMiniBossGCN
// (Public, BlueprintCallable, BlueprintEvent)

void AGCN_MiniBoss_C::HideMiniBossGCN()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_MiniBoss.GCN_MiniBoss_C.HideMiniBossGCN");

	AGCN_MiniBoss_C_HideMiniBossGCN_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_MiniBoss.GCN_MiniBoss_C.SetMiniBossGCNColors
// (Public, BlueprintCallable, BlueprintEvent)

void AGCN_MiniBoss_C::SetMiniBossGCNColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_MiniBoss.GCN_MiniBoss_C.SetMiniBossGCNColors");

	AGCN_MiniBoss_C_SetMiniBossGCNColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_MiniBoss.GCN_MiniBoss_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_MiniBoss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_MiniBoss.GCN_MiniBoss_C.UserConstructionScript");

	AGCN_MiniBoss_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_MiniBoss.GCN_MiniBoss_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCN_MiniBoss_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_MiniBoss.GCN_MiniBoss_C.ReceiveBeginPlay");

	AGCN_MiniBoss_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_MiniBoss.GCN_MiniBoss_C.ExecuteUbergraph_GCN_MiniBoss
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_MiniBoss_C::ExecuteUbergraph_GCN_MiniBoss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_MiniBoss.GCN_MiniBoss_C.ExecuteUbergraph_GCN_MiniBoss");

	AGCN_MiniBoss_C_ExecuteUbergraph_GCN_MiniBoss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

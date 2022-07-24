// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.OnActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_Generic_BotTurret_C::OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.OnActive");

	AGCNL_Generic_BotTurret_C_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_Generic_BotTurret_C::OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.OnRemove");

	AGCNL_Generic_BotTurret_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCNL_Generic_BotTurret_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.UserConstructionScript");

	AGCNL_Generic_BotTurret_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BotFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Left                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_Generic_BotTurret_C::BotFired(int Left)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BotFired");

	AGCNL_Generic_BotTurret_C_BotFired_Params params;
	params.Left = Left;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.Activated
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Generic_BotTurret_C::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.Activated");

	AGCNL_Generic_BotTurret_C_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BindBotFired
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Generic_BotTurret_C::BindBotFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BindBotFired");

	AGCNL_Generic_BotTurret_C_BindBotFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BindBotExplosionWarning
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Generic_BotTurret_C::BindBotExplosionWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BindBotExplosionWarning");

	AGCNL_Generic_BotTurret_C_BindBotExplosionWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BotExplosionWarning
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Generic_BotTurret_C::BotExplosionWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BotExplosionWarning");

	AGCNL_Generic_BotTurret_C_BotExplosionWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.ExecuteUbergraph_GCNL_Generic_BotTurret
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_Generic_BotTurret_C::ExecuteUbergraph_GCNL_Generic_BotTurret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.ExecuteUbergraph_GCNL_Generic_BotTurret");

	AGCNL_Generic_BotTurret_C_ExecuteUbergraph_GCNL_Generic_BotTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.OnRep_BotData
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_BotTurret_Parent_C::OnRep_BotData()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.OnRep_BotData");

	AB_BGA_BotTurret_Parent_C_OnRep_BotData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.LeftOrRightGunFired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_BotTurret_Parent_C::LeftOrRightGunFired(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.LeftOrRightGunFired");

	AB_BGA_BotTurret_Parent_C_LeftOrRightGunFired_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.SetGunSpawnRotFromSocket
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InVect                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AB_BGA_BotTurret_Parent_C::SetGunSpawnRotFromSocket(const struct FName& SocketName, const struct FVector& InVect)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.SetGunSpawnRotFromSocket");

	AB_BGA_BotTurret_Parent_C_SetGunSpawnRotFromSocket_Params params;
	params.SocketName = SocketName;
	params.InVect = InVect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_BGA_BotTurret_Parent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.UserConstructionScript");

	AB_BGA_BotTurret_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.PassBotInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          WarmupTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BotDuration                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FireRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RadiusDefault                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExplosionUpgrade               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_BotTurret_Parent_C::PassBotInfo(float WarmupTime, float BotDuration, float FireRate, float Radius, float RadiusDefault, bool ExplosionUpgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.PassBotInfo");

	AB_BGA_BotTurret_Parent_C_PassBotInfo_Params params;
	params.WarmupTime = WarmupTime;
	params.BotDuration = BotDuration;
	params.FireRate = FireRate;
	params.Radius = Radius;
	params.RadiusDefault = RadiusDefault;
	params.ExplosionUpgrade = ExplosionUpgrade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.SetTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*             Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_BotTurret_Parent_C::SetTarget(class AFortAIPawn* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.SetTarget");

	AB_BGA_BotTurret_Parent_C_SetTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.Ready
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_BotTurret_Parent_C::Ready()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.Ready");

	AB_BGA_BotTurret_Parent_C_Ready_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.ExecuteUbergraph_B_BGA_BotTurret_Parent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_BotTurret_Parent_C::ExecuteUbergraph_B_BGA_BotTurret_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.ExecuteUbergraph_B_BGA_BotTurret_Parent");

	AB_BGA_BotTurret_Parent_C_ExecuteUbergraph_B_BGA_BotTurret_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotExplode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AB_BGA_BotTurret_Parent_C::BotExplode__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotExplode__DelegateSignature");

	AB_BGA_BotTurret_Parent_C_BotExplode__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotExplosionWarning__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AB_BGA_BotTurret_Parent_C::BotExplosionWarning__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotExplosionWarning__DelegateSignature");

	AB_BGA_BotTurret_Parent_C_BotExplosionWarning__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotFired__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Left                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_BotTurret_Parent_C::BotFired__DelegateSignature(int Left)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotFired__DelegateSignature");

	AB_BGA_BotTurret_Parent_C_BotFired__DelegateSignature_Params params;
	params.Left = Left;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

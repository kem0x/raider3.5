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

// Function InterfaceAIStates.InterfaceAIStates_C.PortalCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Collide_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterfaceAIStates_C::PortalCollision(bool Collide_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.PortalCollision");

	UInterfaceAIStates_C_PortalCollision_Params params;
	params.Collide_ = Collide_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfaceAIStates.InterfaceAIStates_C.PortalFX
// (Public, BlueprintCallable, BlueprintEvent)

void UInterfaceAIStates_C::PortalFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.PortalFX");

	UInterfaceAIStates_C_PortalFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfaceAIStates.InterfaceAIStates_C.PortalGet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ABuildingActor*>  BuildingActorList              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  BT                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterfaceAIStates_C::PortalGet(class ABuildingActor* BuildingActor, class AActor* BT, TArray<class ABuildingActor*>* BuildingActorList)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.PortalGet");

	UInterfaceAIStates_C_PortalGet_Params params;
	params.BuildingActor = BuildingActor;
	params.BT = BT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuildingActorList != nullptr)
		*BuildingActorList = params.BuildingActorList;
}


// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckInterrupted
// (Public, BlueprintCallable, BlueprintEvent)

void UInterfaceAIStates_C::TakerSoulSuckInterrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckInterrupted");

	UInterfaceAIStates_C_TakerSoulSuckInterrupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfaceAIStates.InterfaceAIStates_C.PortalClear
// (Public, BlueprintCallable, BlueprintEvent)

void UInterfaceAIStates_C::PortalClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.PortalClear");

	UInterfaceAIStates_C_PortalClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfaceAIStates.InterfaceAIStates_C.PortalAdd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ABuildingActor*>  BuildingActorList              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UInterfaceAIStates_C::PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>* BuildingActorList)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.PortalAdd");

	UInterfaceAIStates_C_PortalAdd_Params params;
	params.BuildingActor = BuildingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuildingActorList != nullptr)
		*BuildingActorList = params.BuildingActorList;
}


// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckSoundEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UInterfaceAIStates_C::TakerSoulSuckSoundEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckSoundEnd");

	UInterfaceAIStates_C_TakerSoulSuckSoundEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckSoundBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterfaceAIStates_C::TakerSoulSuckSoundBegin(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckSoundBegin");

	UInterfaceAIStates_C_TakerSoulSuckSoundBegin_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfaceAIStates.InterfaceAIStates_C.TakerAttackFSM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SuccessfulHit                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterfaceAIStates_C::TakerAttackFSM(bool SuccessfulHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.TakerAttackFSM");

	UInterfaceAIStates_C_TakerAttackFSM_Params params;
	params.SuccessfulHit = SuccessfulHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfaceAIStates.InterfaceAIStates_C.IsTakerWallPortalAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Portal_Available_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterfaceAIStates_C::IsTakerWallPortalAvailable(bool Portal_Available_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.IsTakerWallPortalAvailable");

	UInterfaceAIStates_C_IsTakerWallPortalAvailable_Params params;
	params.Portal_Available_ = Portal_Available_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfaceAIStates.InterfaceAIStates_C.TakerWallPortalBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  BuildingPart                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBTTask_BlueprintBase*   Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DesiredMoveLocation            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Debug                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterfaceAIStates_C::TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.TakerWallPortalBehavior");

	UInterfaceAIStates_C_TakerWallPortalBehavior_Params params;
	params.BuildingPart = BuildingPart;
	params.Task = Task;
	params.DesiredMoveLocation = DesiredMoveLocation;
	params.Debug = Debug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfaceAIStates.InterfaceAIStates_C.EndTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)

void UInterfaceAIStates_C::EndTakerSwoopAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.EndTakerSwoopAttack");

	UInterfaceAIStates_C_EndTakerSwoopAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfaceAIStates.InterfaceAIStates_C.BeginTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)

void UInterfaceAIStates_C::BeginTakerSwoopAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.BeginTakerSwoopAttack");

	UInterfaceAIStates_C_BeginTakerSwoopAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfaceAIStates.InterfaceAIStates_C.ResetTakerSpecialAttackTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Swoop                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SoulSuckMelee                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Portal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterfaceAIStates_C::ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.ResetTakerSpecialAttackTimer");

	UInterfaceAIStates_C_ResetTakerSpecialAttackTimer_Params params;
	params.Swoop = Swoop;
	params.SoulSuckMelee = SoulSuckMelee;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfaceAIStates.InterfaceAIStates_C.VerifyTakerAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SpecialAttack                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Swoop                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Soul_Suck                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Portal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterfaceAIStates_C::VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.VerifyTakerAttack");

	UInterfaceAIStates_C_VerifyTakerAttack_Params params;
	params.SpecialAttack = SpecialAttack;
	params.Swoop = Swoop;
	params.Soul_Suck = Soul_Suck;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfaceAIStates.InterfaceAIStates_C.HuskEvadeStart
// (Public, BlueprintCallable, BlueprintEvent)

void UInterfaceAIStates_C::HuskEvadeStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.HuskEvadeStart");

	UInterfaceAIStates_C_HuskEvadeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfaceAIStates.InterfaceAIStates_C.MantleEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UInterfaceAIStates_C::MantleEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.MantleEnd");

	UInterfaceAIStates_C_MantleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfaceAIStates.InterfaceAIStates_C.MantleStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 MidPos                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 EndPos                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           LowWall                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MidWall                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FullWall                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WindowWall                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterfaceAIStates_C::MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.MantleStart");

	UInterfaceAIStates_C_MantleStart_Params params;
	params.StartPos = StartPos;
	params.MidPos = MidPos;
	params.EndPos = EndPos;
	params.LowWall = LowWall;
	params.MidWall = MidWall;
	params.FullWall = FullWall;
	params.WindowWall = WindowWall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

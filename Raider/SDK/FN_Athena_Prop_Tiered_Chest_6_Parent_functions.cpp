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

// Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAthena_Prop_Tiered_Chest_6_Parent_C::ShouldDie(float* Damage, class AController** EventInstigator, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.ShouldDie");

	AAthena_Prop_Tiered_Chest_6_Parent_C_ShouldDie_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAthena_Prop_Tiered_Chest_6_Parent_C::BlueprintCanInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.BlueprintCanInteract");

	AAthena_Prop_Tiered_Chest_6_Parent_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.SetLightVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_Prop_Tiered_Chest_6_Parent_C::SetLightVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.SetLightVisibility");

	AAthena_Prop_Tiered_Chest_6_Parent_C_SetLightVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Tiered_Chest_6_Parent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.UserConstructionScript");

	AAthena_Prop_Tiered_Chest_6_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAthena_Prop_Tiered_Chest_6_Parent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.ReceiveBeginPlay");

	AAthena_Prop_Tiered_Chest_6_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AAthena_Prop_Tiered_Chest_6_Parent_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.ReceiveDestroyed");

	AAthena_Prop_Tiered_Chest_6_Parent_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.ReceiveActorBeginCursorOver
// (Event, Public, BlueprintEvent)

void AAthena_Prop_Tiered_Chest_6_Parent_C::ReceiveActorBeginCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.ReceiveActorBeginCursorOver");

	AAthena_Prop_Tiered_Chest_6_Parent_C_ReceiveActorBeginCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.ExecuteUbergraph_Athena_Prop_Tiered_Chest_6_Parent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_Prop_Tiered_Chest_6_Parent_C::ExecuteUbergraph_Athena_Prop_Tiered_Chest_6_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.ExecuteUbergraph_Athena_Prop_Tiered_Chest_6_Parent");

	AAthena_Prop_Tiered_Chest_6_Parent_C_ExecuteUbergraph_Athena_Prop_Tiered_Chest_6_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

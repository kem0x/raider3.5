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

// Function TouchLookStick.TouchLookStick_C.SetBrushForStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InBuild_or_Edit_Mode           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Is_RC_Pawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Found_Context                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTouchLookStick_C::SetBrushForStatus(bool InBuild_or_Edit_Mode, bool Is_RC_Pawn, bool* Found_Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchLookStick.TouchLookStick_C.SetBrushForStatus");

	UTouchLookStick_C_SetBrushForStatus_Params params;
	params.InBuild_or_Edit_Mode = InBuild_or_Edit_Mode;
	params.Is_RC_Pawn = Is_RC_Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found_Context != nullptr)
		*Found_Context = params.Found_Context;
}


// Function TouchLookStick.TouchLookStick_C.CheckForTag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag            TagToCheck                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           HasTag                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTouchLookStick_C::CheckForTag(const struct FGameplayTag& TagToCheck, bool* HasTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchLookStick.TouchLookStick_C.CheckForTag");

	UTouchLookStick_C_CheckForTag_Params params;
	params.TagToCheck = TagToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasTag != nullptr)
		*HasTag = params.HasTag;
}


// Function TouchLookStick.TouchLookStick_C.HandleWeaponChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In_Build_or_Edit_Mode          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RC_Pawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTouchLookStick_C::HandleWeaponChanged(bool In_Build_or_Edit_Mode, bool RC_Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchLookStick.TouchLookStick_C.HandleWeaponChanged");

	UTouchLookStick_C_HandleWeaponChanged_Params params;
	params.In_Build_or_Edit_Mode = In_Build_or_Edit_Mode;
	params.RC_Pawn = RC_Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TouchLookStick.TouchLookStick_C.IsFireButtonUnderTouch
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D*              TouchPosition                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTouchLookStick_C::IsFireButtonUnderTouch(struct FVector2D* TouchPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchLookStick.TouchLookStick_C.IsFireButtonUnderTouch");

	UTouchLookStick_C_IsFireButtonUnderTouch_Params params;
	params.TouchPosition = TouchPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TouchLookStick.TouchLookStick_C.HandleTouchEnded
// (Public, BlueprintCallable, BlueprintEvent)

void UTouchLookStick_C::HandleTouchEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchLookStick.TouchLookStick_C.HandleTouchEnded");

	UTouchLookStick_C_HandleTouchEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TouchLookStick.TouchLookStick_C.HandleTouchStarted
// (Public, BlueprintCallable, BlueprintEvent)

void UTouchLookStick_C::HandleTouchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchLookStick.TouchLookStick_C.HandleTouchStarted");

	UTouchLookStick_C_HandleTouchStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TouchLookStick.TouchLookStick_C.SetStickPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               NewPosition                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UTouchLookStick_C::SetStickPosition(const struct FVector2D& NewPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchLookStick.TouchLookStick_C.SetStickPosition");

	UTouchLookStick_C_SetStickPosition_Params params;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TouchLookStick.TouchLookStick_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTouchLookStick_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchLookStick.TouchLookStick_C.PreConstruct");

	UTouchLookStick_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TouchLookStick.TouchLookStick_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTouchLookStick_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchLookStick.TouchLookStick_C.Construct");

	UTouchLookStick_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TouchLookStick.TouchLookStick_C.SetFiringState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFiring                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTouchLookStick_C::SetFiringState(bool* IsFiring)
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchLookStick.TouchLookStick_C.SetFiringState");

	UTouchLookStick_C_SetFiringState_Params params;
	params.IsFiring = IsFiring;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TouchLookStick.TouchLookStick_C.Weapon Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*             NewWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortWeapon*             PrevWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTouchLookStick_C::Weapon_Change(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchLookStick.TouchLookStick_C.Weapon Change");

	UTouchLookStick_C_Weapon_Change_Params params;
	params.NewWeapon = NewWeapon;
	params.PrevWeapon = PrevWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TouchLookStick.TouchLookStick_C.OnHUDStateUpdate
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortHUDState*          NewState                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTouchLookStick_C::OnHUDStateUpdate(struct FFortHUDState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchLookStick.TouchLookStick_C.OnHUDStateUpdate");

	UTouchLookStick_C_OnHUDStateUpdate_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TouchLookStick.TouchLookStick_C.ExecuteUbergraph_TouchLookStick
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTouchLookStick_C::ExecuteUbergraph_TouchLookStick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchLookStick.TouchLookStick_C.ExecuteUbergraph_TouchLookStick");

	UTouchLookStick_C_ExecuteUbergraph_TouchLookStick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

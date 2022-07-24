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

// Function TouchMoveStick.TouchMoveStick_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTouchMoveStick_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchMoveStick.TouchMoveStick_C.PreConstruct");

	UTouchMoveStick_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TouchMoveStick.TouchMoveStick_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTouchMoveStick_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchMoveStick.TouchMoveStick_C.Construct");

	UTouchMoveStick_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TouchMoveStick.TouchMoveStick_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTouchMoveStick_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchMoveStick.TouchMoveStick_C.Tick");

	UTouchMoveStick_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TouchMoveStick.TouchMoveStick_C.SetStickPosition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              NewPosition                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UTouchMoveStick_C::SetStickPosition(struct FVector2D* NewPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchMoveStick.TouchMoveStick_C.SetStickPosition");

	UTouchMoveStick_C_SetStickPosition_Params params;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TouchMoveStick.TouchMoveStick_C.SetMovementLockStatus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          MovementIsLocked               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTouchMoveStick_C::SetMovementLockStatus(bool* MovementIsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchMoveStick.TouchMoveStick_C.SetMovementLockStatus");

	UTouchMoveStick_C_SetMovementLockStatus_Params params;
	params.MovementIsLocked = MovementIsLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TouchMoveStick.TouchMoveStick_C.HandleTouchStarted
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTouchMoveStick_C::HandleTouchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchMoveStick.TouchMoveStick_C.HandleTouchStarted");

	UTouchMoveStick_C_HandleTouchStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TouchMoveStick.TouchMoveStick_C.HandleTouchEnded
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTouchMoveStick_C::HandleTouchEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchMoveStick.TouchMoveStick_C.HandleTouchEnded");

	UTouchMoveStick_C_HandleTouchEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TouchMoveStick.TouchMoveStick_C.ExecuteUbergraph_TouchMoveStick
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTouchMoveStick_C::ExecuteUbergraph_TouchMoveStick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TouchMoveStick.TouchMoveStick_C.ExecuteUbergraph_TouchMoveStick");

	UTouchMoveStick_C_ExecuteUbergraph_TouchMoveStick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

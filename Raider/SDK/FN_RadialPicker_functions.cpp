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

// Function RadialPicker.RadialPicker_C.On Item Touched
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URadialPickerItem_C*     Touched_Item                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URadialPicker_C::On_Item_Touched(class URadialPickerItem_C* Touched_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.On Item Touched");

	URadialPicker_C_On_Item_Touched_Params params;
	params.Touched_Item = Touched_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.SetShowMouseCursor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InShowMouseCursor              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URadialPicker_C::SetShowMouseCursor(bool InShowMouseCursor)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.SetShowMouseCursor");

	URadialPicker_C_SetShowMouseCursor_Params params;
	params.InShowMouseCursor = InShowMouseCursor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.SetPointerDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URadialPicker_C::SetPointerDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.SetPointerDirection");

	URadialPicker_C_SetPointerDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.IsGamepadInPickerDeadZone
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bIsInDeadZone                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URadialPicker_C::IsGamepadInPickerDeadZone(bool* bIsInDeadZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.IsGamepadInPickerDeadZone");

	URadialPicker_C_IsGamepadInPickerDeadZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsInDeadZone != nullptr)
		*bIsInDeadZone = params.bIsInDeadZone;
}


// Function RadialPicker.RadialPicker_C.MoveActiveOption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MoveOptionDirection            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URadialPicker_C::MoveActiveOption(int MoveOptionDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.MoveActiveOption");

	URadialPicker_C_MoveActiveOption_Params params;
	params.MoveOptionDirection = MoveOptionDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.ResetInput
// (Public, BlueprintCallable, BlueprintEvent)

void URadialPicker_C::ResetInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.ResetInput");

	URadialPicker_C_ResetInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.CanConfirm
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanAccept                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URadialPicker_C::CanConfirm(bool* CanAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.CanConfirm");

	URadialPicker_C_CanConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanAccept != nullptr)
		*CanAccept = params.CanAccept;
}


// Function RadialPicker.RadialPicker_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)

void URadialPicker_C::SetInputMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.SetInputMode");

	URadialPicker_C_SetInputMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.SetActiveOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URadialPicker_C::SetActiveOption(int Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.SetActiveOption");

	URadialPicker_C_SetActiveOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.ClearActiveOption
// (Public, BlueprintCallable, BlueprintEvent)

void URadialPicker_C::ClearActiveOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.ClearActiveOption");

	URadialPicker_C_ClearActiveOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.GetOptionAngle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URadialPicker_C::GetOptionAngle(int Option, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.GetOptionAngle");

	URadialPicker_C_GetOptionAngle_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function RadialPicker.RadialPicker_C.GetAngleDifference
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AngleA                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleB                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Difference                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URadialPicker_C::GetAngleDifference(float AngleA, float AngleB, float* Difference)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.GetAngleDifference");

	URadialPicker_C_GetAngleDifference_Params params;
	params.AngleA = AngleA;
	params.AngleB = AngleB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difference != nullptr)
		*Difference = params.Difference;
}


// Function RadialPicker.RadialPicker_C.GetOptionPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Position                       (Parm, OutParm, IsPlainOldData)

void URadialPicker_C::GetOptionPosition(int Option, struct FVector2D* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.GetOptionPosition");

	URadialPicker_C_GetOptionPosition_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
}


// Function RadialPicker.RadialPicker_C.InitializePicker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortPickerMode                PickerMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InitialOption                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URadialPicker_C::InitializePicker(EFortPickerMode PickerMode, int InitialOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.InitializePicker");

	URadialPicker_C_InitializePicker_Params params;
	params.PickerMode = PickerMode;
	params.InitialOption = InitialOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.Event AcceptOption
// (BlueprintCallable, BlueprintEvent)

void URadialPicker_C::Event_AcceptOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.Event AcceptOption");

	URadialPicker_C_Event_AcceptOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.Event CancelPicker
// (BlueprintCallable, BlueprintEvent)

void URadialPicker_C::Event_CancelPicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.Event CancelPicker");

	URadialPicker_C_Event_CancelPicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URadialPicker_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.Tick");

	URadialPicker_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URadialPicker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.Construct");

	URadialPicker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.ClosePicker
// (BlueprintCallable, BlueprintEvent)

void URadialPicker_C::ClosePicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.ClosePicker");

	URadialPicker_C_ClosePicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.AcceptChosenOption
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PickerOption                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URadialPicker_C::AcceptChosenOption(int PickerOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.AcceptChosenOption");

	URadialPicker_C_AcceptChosenOption_Params params;
	params.PickerOption = PickerOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.OnPickerRefreshItems
// (BlueprintCallable, BlueprintEvent)

void URadialPicker_C::OnPickerRefreshItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.OnPickerRefreshItems");

	URadialPicker_C_OnPickerRefreshItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.BndEvt__PickerOption0_K2Node_ComponentBoundEvent_2_On Item Touched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URadialPickerItem_C*     Picked_Option                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URadialPicker_C::BndEvt__PickerOption0_K2Node_ComponentBoundEvent_2_On_Item_Touched__DelegateSignature(class URadialPickerItem_C* Picked_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.BndEvt__PickerOption0_K2Node_ComponentBoundEvent_2_On Item Touched__DelegateSignature");

	URadialPicker_C_BndEvt__PickerOption0_K2Node_ComponentBoundEvent_2_On_Item_Touched__DelegateSignature_Params params;
	params.Picked_Option = Picked_Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.BndEvt__PickerOption1_K2Node_ComponentBoundEvent_8_On Item Touched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URadialPickerItem_C*     Picked_Option                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URadialPicker_C::BndEvt__PickerOption1_K2Node_ComponentBoundEvent_8_On_Item_Touched__DelegateSignature(class URadialPickerItem_C* Picked_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.BndEvt__PickerOption1_K2Node_ComponentBoundEvent_8_On Item Touched__DelegateSignature");

	URadialPicker_C_BndEvt__PickerOption1_K2Node_ComponentBoundEvent_8_On_Item_Touched__DelegateSignature_Params params;
	params.Picked_Option = Picked_Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.BndEvt__PickerOption2_K2Node_ComponentBoundEvent_9_On Item Touched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URadialPickerItem_C*     Picked_Option                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URadialPicker_C::BndEvt__PickerOption2_K2Node_ComponentBoundEvent_9_On_Item_Touched__DelegateSignature(class URadialPickerItem_C* Picked_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.BndEvt__PickerOption2_K2Node_ComponentBoundEvent_9_On Item Touched__DelegateSignature");

	URadialPicker_C_BndEvt__PickerOption2_K2Node_ComponentBoundEvent_9_On_Item_Touched__DelegateSignature_Params params;
	params.Picked_Option = Picked_Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.BndEvt__PickerOption3_K2Node_ComponentBoundEvent_12_On Item Touched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URadialPickerItem_C*     Picked_Option                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URadialPicker_C::BndEvt__PickerOption3_K2Node_ComponentBoundEvent_12_On_Item_Touched__DelegateSignature(class URadialPickerItem_C* Picked_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.BndEvt__PickerOption3_K2Node_ComponentBoundEvent_12_On Item Touched__DelegateSignature");

	URadialPicker_C_BndEvt__PickerOption3_K2Node_ComponentBoundEvent_12_On_Item_Touched__DelegateSignature_Params params;
	params.Picked_Option = Picked_Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.BndEvt__PickerOption4_K2Node_ComponentBoundEvent_16_On Item Touched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URadialPickerItem_C*     Picked_Option                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URadialPicker_C::BndEvt__PickerOption4_K2Node_ComponentBoundEvent_16_On_Item_Touched__DelegateSignature(class URadialPickerItem_C* Picked_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.BndEvt__PickerOption4_K2Node_ComponentBoundEvent_16_On Item Touched__DelegateSignature");

	URadialPicker_C_BndEvt__PickerOption4_K2Node_ComponentBoundEvent_16_On_Item_Touched__DelegateSignature_Params params;
	params.Picked_Option = Picked_Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.BndEvt__PickerOption5_K2Node_ComponentBoundEvent_21_On Item Touched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URadialPickerItem_C*     Picked_Option                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URadialPicker_C::BndEvt__PickerOption5_K2Node_ComponentBoundEvent_21_On_Item_Touched__DelegateSignature(class URadialPickerItem_C* Picked_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.BndEvt__PickerOption5_K2Node_ComponentBoundEvent_21_On Item Touched__DelegateSignature");

	URadialPicker_C_BndEvt__PickerOption5_K2Node_ComponentBoundEvent_21_On_Item_Touched__DelegateSignature_Params params;
	params.Picked_Option = Picked_Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.BndEvt__PickerOption6_K2Node_ComponentBoundEvent_27_On Item Touched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URadialPickerItem_C*     Picked_Option                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URadialPicker_C::BndEvt__PickerOption6_K2Node_ComponentBoundEvent_27_On_Item_Touched__DelegateSignature(class URadialPickerItem_C* Picked_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.BndEvt__PickerOption6_K2Node_ComponentBoundEvent_27_On Item Touched__DelegateSignature");

	URadialPicker_C_BndEvt__PickerOption6_K2Node_ComponentBoundEvent_27_On_Item_Touched__DelegateSignature_Params params;
	params.Picked_Option = Picked_Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.BndEvt__PickerOption7_K2Node_ComponentBoundEvent_34_On Item Touched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URadialPickerItem_C*     Picked_Option                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URadialPicker_C::BndEvt__PickerOption7_K2Node_ComponentBoundEvent_34_On_Item_Touched__DelegateSignature(class URadialPickerItem_C* Picked_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.BndEvt__PickerOption7_K2Node_ComponentBoundEvent_34_On Item Touched__DelegateSignature");

	URadialPicker_C_BndEvt__PickerOption7_K2Node_ComponentBoundEvent_34_On_Item_Touched__DelegateSignature_Params params;
	params.Picked_Option = Picked_Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.ExecuteUbergraph_RadialPicker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URadialPicker_C::ExecuteUbergraph_RadialPicker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.ExecuteUbergraph_RadialPicker");

	URadialPicker_C_ExecuteUbergraph_RadialPicker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.Picker Closing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URadialPicker_C::Picker_Closing__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.Picker Closing__DelegateSignature");

	URadialPicker_C_Picker_Closing__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function SquadSlotGroup.SquadSlotGroup_C.RemoveDarkeningFromAllSlotsInGroup
// (Public, BlueprintCallable, BlueprintEvent)

void USquadSlotGroup_C::RemoveDarkeningFromAllSlotsInGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotGroup.SquadSlotGroup_C.RemoveDarkeningFromAllSlotsInGroup");

	USquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotGroup.SquadSlotGroup_C.DarkenAllSlotsExceptIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USquadSlotGroup_C::DarkenAllSlotsExceptIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotGroup.SquadSlotGroup_C.DarkenAllSlotsExceptIndex");

	USquadSlotGroup_C_DarkenAllSlotsExceptIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotGroup.SquadSlotGroup_C.SelectSquadSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USquadSlotGroup_C::SelectSquadSlot(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotGroup.SquadSlotGroup_C.SelectSquadSlot");

	USquadSlotGroup_C_SelectSquadSlot_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotGroup.SquadSlotGroup_C.Get_SquadSlotBox_ToolTipWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* USquadSlotGroup_C::Get_SquadSlotBox_ToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotGroup.SquadSlotGroup_C.Get_SquadSlotBox_ToolTipWidget");

	USquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SquadSlotGroup.SquadSlotGroup_C.Update Squad Slot Visibility
// (Public, BlueprintCallable, BlueprintEvent)

void USquadSlotGroup_C::Update_Squad_Slot_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotGroup.SquadSlotGroup_C.Update Squad Slot Visibility");

	USquadSlotGroup_C_Update_Squad_Slot_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotGroup.SquadSlotGroup_C.AddSquadSlots
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         SquadSlots                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USquadSlotGroup_C::AddSquadSlots(TArray<class UWidget*>* SquadSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotGroup.SquadSlotGroup_C.AddSquadSlots");

	USquadSlotGroup_C_AddSquadSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SquadSlots != nullptr)
		*SquadSlots = params.SquadSlots;
}


// Function SquadSlotGroup.SquadSlotGroup_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USquadSlotGroup_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotGroup.SquadSlotGroup_C.PreConstruct");

	USquadSlotGroup_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotGroup.SquadSlotGroup_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USquadSlotGroup_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotGroup.SquadSlotGroup_C.OnMouseEnter");

	USquadSlotGroup_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotGroup.SquadSlotGroup_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USquadSlotGroup_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotGroup.SquadSlotGroup_C.OnMouseLeave");

	USquadSlotGroup_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotGroup.SquadSlotGroup_C.ExecuteUbergraph_SquadSlotGroup
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USquadSlotGroup_C::ExecuteUbergraph_SquadSlotGroup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotGroup.SquadSlotGroup_C.ExecuteUbergraph_SquadSlotGroup");

	USquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotGroup.SquadSlotGroup_C.HandleMouseLeave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USquadSlotGroup_C::HandleMouseLeave__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotGroup.SquadSlotGroup_C.HandleMouseLeave__DelegateSignature");

	USquadSlotGroup_C_HandleMouseLeave__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotGroup.SquadSlotGroup_C.HandleMouseEnter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USquadSlotGroup_C::HandleMouseEnter__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotGroup.SquadSlotGroup_C.HandleMouseEnter__DelegateSignature");

	USquadSlotGroup_C_HandleMouseEnter__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

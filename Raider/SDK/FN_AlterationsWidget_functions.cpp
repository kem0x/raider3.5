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

// Function AlterationsWidget.AlterationsWidget_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationsWidget_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.Clear");

	UAlterationsWidget_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.ClearAndInitialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IntroAlterations               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationsWidget_C::ClearAndInitialize(bool IntroAlterations)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.ClearAndInitialize");

	UAlterationsWidget_C_ClearAndInitialize_Params params;
	params.IntroAlterations = IntroAlterations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationsWidget_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.Reset");

	UAlterationsWidget_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.CreateAnimations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IntroAnims                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationsWidget_C::CreateAnimations(bool IntroAnims)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.CreateAnimations");

	UAlterationsWidget_C_CreateAnimations_Params params;
	params.IntroAnims = IntroAnims;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.IntroAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationsWidget_C::IntroAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.IntroAnim");

	UAlterationsWidget_C_IntroAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.CenterWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationsWidget_C::CenterWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.CenterWidget");

	UAlterationsWidget_C_CenterWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.SetupBorders
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationsWidget_C::SetupBorders()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.SetupBorders");

	UAlterationsWidget_C_SetupBorders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.TriggerModificationAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ModifiedSlotIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationsWidget_C::TriggerModificationAnim(int ModifiedSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.TriggerModificationAnim");

	UAlterationsWidget_C_TriggerModificationAnim_Params params;
	params.ModifiedSlotIndex = ModifiedSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.SetupAlteration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUserWidget*       Alteration                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFortAlterationInfo*     AlterationInfo                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationsWidget_C::SetupAlteration(class UCommonUserWidget* Alteration, class UFortAlterationInfo* AlterationInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.SetupAlteration");

	UAlterationsWidget_C_SetupAlteration_Params params;
	params.Alteration = Alteration;
	params.AlterationInfo = AlterationInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.CreateAlterationWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUserWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCommonUserWidget* UAlterationsWidget_C::CreateAlterationWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.CreateAlterationWidget");

	UAlterationsWidget_C_CreateAlterationWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AlterationsWidget.AlterationsWidget_C.GenerateAlteration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAlterationInfo*     AlterationInfo                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationsWidget_C::GenerateAlteration(class UFortAlterationInfo* AlterationInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.GenerateAlteration");

	UAlterationsWidget_C_GenerateAlteration_Params params;
	params.AlterationInfo = AlterationInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.AddAlterationToVerticalbox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUserWidget*       Alteration                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationsWidget_C::AddAlterationToVerticalbox(class UCommonUserWidget* Alteration, bool IsUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.AddAlterationToVerticalbox");

	UAlterationsWidget_C_AddAlterationToVerticalbox_Params params;
	params.Alteration = Alteration;
	params.IsUnlocked = IsUnlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.UpdatePerksMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAlterationsWidget_C::UpdatePerksMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.UpdatePerksMessage");

	UAlterationsWidget_C_UpdatePerksMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAlterationsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.Construct");

	UAlterationsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.OnItemChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIntroAlterations              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationsWidget_C::OnItemChanged(bool* bIntroAlterations)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.OnItemChanged");

	UAlterationsWidget_C_OnItemChanged_Params params;
	params.bIntroAlterations = bIntroAlterations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.OnItemToCompareWithChanged
// (Event, Public, BlueprintEvent)

void UAlterationsWidget_C::OnItemToCompareWithChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.OnItemToCompareWithChanged");

	UAlterationsWidget_C_OnItemToCompareWithChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.OnStateChanged
// (Event, Public, BlueprintEvent)

void UAlterationsWidget_C::OnStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.OnStateChanged");

	UAlterationsWidget_C_OnStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.OnGenerateAlteration
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortAlterationInfo**    AlterationInfo                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationsWidget_C::OnGenerateAlteration(class UFortAlterationInfo** AlterationInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.OnGenerateAlteration");

	UAlterationsWidget_C_OnGenerateAlteration_Params params;
	params.AlterationInfo = AlterationInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.OnFocusFirstItem
// (Event, Protected, BlueprintEvent)

void UAlterationsWidget_C::OnFocusFirstItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.OnFocusFirstItem");

	UAlterationsWidget_C_OnFocusFirstItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.OnAlterationSlotIndexModifiedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           ModifiedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationsWidget_C::OnAlterationSlotIndexModifiedBP(int* ModifiedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.OnAlterationSlotIndexModifiedBP");

	UAlterationsWidget_C_OnAlterationSlotIndexModifiedBP_Params params;
	params.ModifiedIndex = ModifiedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAlterationsWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.Destruct");

	UAlterationsWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.ExecuteUbergraph_AlterationsWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationsWidget_C::ExecuteUbergraph_AlterationsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.ExecuteUbergraph_AlterationsWidget");

	UAlterationsWidget_C_ExecuteUbergraph_AlterationsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Refresh Bang State Internal
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_ItemTransform_TabButton_C::Refresh_Bang_State_Internal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Refresh Bang State Internal");

	UBP_ItemTransform_TabButton_C_Refresh_Bang_State_Internal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Get Tab Id as Request Type
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EConversionControlKeyRequest   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EConversionControlKeyRequest UBP_ItemTransform_TabButton_C::Get_Tab_Id_as_Request_Type()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Get Tab Id as Request Type");

	UBP_ItemTransform_TabButton_C_Get_Tab_Id_as_Request_Type_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Tab Id
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ItemTransform_TabButton_C::Set_Tab_Id(const struct FName& TabId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Tab Id");

	UBP_ItemTransform_TabButton_C_Set_Tab_Id_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Refresh Bang State
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ItemTransform_TabButton_C::Refresh_Bang_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Refresh Bang State");

	UBP_ItemTransform_TabButton_C_Refresh_Bang_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             IconBrush                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ItemTransform_TabButton_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Icon");

	UBP_ItemTransform_TabButton_C_Set_Icon_Params params;
	params.IconBrush = IconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ItemTransform_TabButton_C::Set_Text(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Text");

	UBP_ItemTransform_TabButton_C_Set_Text_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UBP_ItemTransform_TabButton_C::OnCurrentTextStyleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnCurrentTextStyleChanged");

	UBP_ItemTransform_TabButton_C_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ItemTransform_TabButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.PreConstruct");

	UBP_ItemTransform_TabButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.SetTabLabelInfo
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo TabLabelInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ItemTransform_TabButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.SetTabLabelInfo");

	UBP_ItemTransform_TabButton_C_SetTabLabelInfo_Params params;
	params.TabLabelInfo = TabLabelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ItemTransform_TabButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Construct");

	UBP_ItemTransform_TabButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UBP_ItemTransform_TabButton_C::BP_OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.BP_OnSelected");

	UBP_ItemTransform_TabButton_C_BP_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UBP_ItemTransform_TabButton_C::BP_OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.BP_OnDeselected");

	UBP_ItemTransform_TabButton_C_BP_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UBP_ItemTransform_TabButton_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.BP_OnHovered");

	UBP_ItemTransform_TabButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UBP_ItemTransform_TabButton_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.BP_OnUnhovered");

	UBP_ItemTransform_TabButton_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.ExecuteUbergraph_BP_ItemTransform_TabButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ItemTransform_TabButton_C::ExecuteUbergraph_BP_ItemTransform_TabButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.ExecuteUbergraph_BP_ItemTransform_TabButton");

	UBP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

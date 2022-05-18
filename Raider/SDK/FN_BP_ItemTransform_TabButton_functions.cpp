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

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Get FortPC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPlayerController*   FortPC                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_ItemTransform_TabButton_C::Get_FortPC(class AFortPlayerController** FortPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Get FortPC");

	UBP_ItemTransform_TabButton_C_Get_FortPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FortPC != nullptr)
		*FortPC = params.FortPC;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Get Item from Transform Seen State
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*        Transform_Key                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortAccountItem*        Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_ItemTransform_TabButton_C::Get_Item_from_Transform_Seen_State(class UFortAccountItem* Transform_Key, class UFortAccountItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Get Item from Transform Seen State");

	UBP_ItemTransform_TabButton_C_Get_Item_from_Transform_Seen_State_Params params;
	params.Transform_Key = Transform_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Calculate Unseen Keys
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortAccountItem*> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            NumUnseen                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_ItemTransform_TabButton_C::Calculate_Unseen_Keys(TArray<class UFortAccountItem*>* Array, int* NumUnseen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Calculate Unseen Keys");

	UBP_ItemTransform_TabButton_C_Calculate_Unseen_Keys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (NumUnseen != nullptr)
		*NumUnseen = params.NumUnseen;
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
// (Public, BlueprintCallable, BlueprintEvent)

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


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnSelected
// (Event, Protected, BlueprintEvent)

void UBP_ItemTransform_TabButton_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnSelected");

	UBP_ItemTransform_TabButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnDeselected
// (Event, Protected, BlueprintEvent)

void UBP_ItemTransform_TabButton_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnDeselected");

	UBP_ItemTransform_TabButton_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UBP_ItemTransform_TabButton_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnHovered");

	UBP_ItemTransform_TabButton_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnUnhovered
// (Event, Protected, BlueprintEvent)

void UBP_ItemTransform_TabButton_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnUnhovered");

	UBP_ItemTransform_TabButton_C_OnUnhovered_Params params;

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

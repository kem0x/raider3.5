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

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.CenterWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UOutpostScreenCanEditPanel_C::CenterWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.CenterWidget");

	UOutpostScreenCanEditPanel_C_CenterWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.SetMasterSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCanEdit                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOutpostScreenCanEditPanel_C::SetMasterSwitch(bool bCanEdit)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.SetMasterSwitch");

	UOutpostScreenCanEditPanel_C_SetMasterSwitch_Params params;
	params.bCanEdit = bCanEdit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerOutpost* InOutpostOwner                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOutpostScreenCanEditPanel_C::Init(class AFortPlayerControllerOutpost* InOutpostOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.Init");

	UOutpostScreenCanEditPanel_C_Init_Params params;
	params.InOutpostOwner = InOutpostOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOutpostScreenCanEditPanel_C::BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature");

	UOutpostScreenCanEditPanel_C_BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature_Params params;
	params.Button = Button;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOutpostScreenCanEditPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.Construct");

	UOutpostScreenCanEditPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.HandleJoined
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewTeamMemberInfo              (BlueprintVisible, BlueprintReadOnly, Parm)

void UOutpostScreenCanEditPanel_C::HandleJoined(const struct FFortTeamMemberInfo& NewTeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.HandleJoined");

	UOutpostScreenCanEditPanel_C_HandleJoined_Params params;
	params.NewTeamMemberInfo = NewTeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.HandleRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOutpostScreenCanEditPanel_C::HandleRemoved(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.HandleRemoved");

	UOutpostScreenCanEditPanel_C_HandleRemoved_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOutpostScreenCanEditPanel_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature");

	UOutpostScreenCanEditPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature_Params params;
	params.Button = Button;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.PartyUpdated
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOutpostScreenCanEditPanel_C::PartyUpdated(const struct FFortTeamMemberInfo& PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.PartyUpdated");

	UOutpostScreenCanEditPanel_C_PartyUpdated_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.ExecuteUbergraph_OutpostScreenCanEditPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOutpostScreenCanEditPanel_C::ExecuteUbergraph_OutpostScreenCanEditPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.ExecuteUbergraph_OutpostScreenCanEditPanel");

	UOutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

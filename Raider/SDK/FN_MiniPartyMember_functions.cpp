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

// Function MiniPartyMember.MiniPartyMember_C.HandleMouseHoverVisualState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hover                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniPartyMember_C::HandleMouseHoverVisualState(bool Hover)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.HandleMouseHoverVisualState");

	UMiniPartyMember_C_HandleMouseHoverVisualState_Params params;
	params.Hover = Hover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.OpenPartyFinder
// (Public, BlueprintCallable, BlueprintEvent)

void UMiniPartyMember_C::OpenPartyFinder()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.OpenPartyFinder");

	UMiniPartyMember_C_OpenPartyFinder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.GetLeaderVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UMiniPartyMember_C::GetLeaderVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.GetLeaderVisibility");

	UMiniPartyMember_C_GetLeaderVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MiniPartyMember.MiniPartyMember_C.UpdateMemberInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewMemberInfo                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMiniPartyMember_C::UpdateMemberInfo(struct FFortTeamMemberInfo* NewMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.UpdateMemberInfo");

	UMiniPartyMember_C_UpdateMemberInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewMemberInfo != nullptr)
		*NewMemberInfo = params.NewMemberInfo;
}


// Function MiniPartyMember.MiniPartyMember_C.ShowOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UMiniPartyMember_C::ShowOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.ShowOpen");

	UMiniPartyMember_C_ShowOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.ShowConnected
// (Public, BlueprintCallable, BlueprintEvent)

void UMiniPartyMember_C::ShowConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.ShowConnected");

	UMiniPartyMember_C_ShowConnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.ShowConnecting
// (Public, BlueprintCallable, BlueprintEvent)

void UMiniPartyMember_C::ShowConnecting()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.ShowConnecting");

	UMiniPartyMember_C_ShowConnecting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMiniPartyMember_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.Destruct");

	UMiniPartyMember_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.OnPlayerInfoChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo*    NewInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UMiniPartyMember_C::OnPlayerInfoChanged(struct FFortTeamMemberInfo* NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.OnPlayerInfoChanged");

	UMiniPartyMember_C_OnPlayerInfoChanged_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMiniPartyMember_C::BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature");

	UMiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMiniPartyMember_C::BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature");

	UMiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMiniPartyMember_C::BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature");

	UMiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniPartyMember_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.PreConstruct");

	UMiniPartyMember_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.ExecuteUbergraph_MiniPartyMember
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniPartyMember_C::ExecuteUbergraph_MiniPartyMember(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.ExecuteUbergraph_MiniPartyMember");

	UMiniPartyMember_C_ExecuteUbergraph_MiniPartyMember_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

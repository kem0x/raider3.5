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

// Function Button_PushToTalk.Button_PushToTalk_C.Update Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPTTState                      PTT_State                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_PushToTalk_C::Update_Visibility(EPTTState PTT_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_PushToTalk.Button_PushToTalk_C.Update Visibility");

	UButton_PushToTalk_C_Update_Visibility_Params params;
	params.PTT_State = PTT_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_PushToTalk.Button_PushToTalk_C.OnClicked
// (Event, Public, BlueprintEvent)

void UButton_PushToTalk_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_PushToTalk.Button_PushToTalk_C.OnClicked");

	UButton_PushToTalk_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_PushToTalk.Button_PushToTalk_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UButton_PushToTalk_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_PushToTalk.Button_PushToTalk_C.Construct");

	UButton_PushToTalk_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_PushToTalk.Button_PushToTalk_C.OnHUDStateUpdate
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortHUDState*          NewState                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UButton_PushToTalk_C::OnHUDStateUpdate(struct FFortHUDState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_PushToTalk.Button_PushToTalk_C.OnHUDStateUpdate");

	UButton_PushToTalk_C_OnHUDStateUpdate_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_PushToTalk.Button_PushToTalk_C.On Can PTT
// (BlueprintCallable, BlueprintEvent)

void UButton_PushToTalk_C::On_Can_PTT()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_PushToTalk.Button_PushToTalk_C.On Can PTT");

	UButton_PushToTalk_C_On_Can_PTT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_PushToTalk.Button_PushToTalk_C.ExecuteUbergraph_Button_PushToTalk
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_PushToTalk_C::ExecuteUbergraph_Button_PushToTalk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_PushToTalk.Button_PushToTalk_C.ExecuteUbergraph_Button_PushToTalk");

	UButton_PushToTalk_C_ExecuteUbergraph_Button_PushToTalk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

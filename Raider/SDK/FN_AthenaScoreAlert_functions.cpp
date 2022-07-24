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

// Function AthenaScoreAlert.AthenaScoreAlert_C.PlaySoundFromType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaWinConditionMsgType     Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaScoreAlert_C::PlaySoundFromType(EAthenaWinConditionMsgType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaScoreAlert.AthenaScoreAlert_C.PlaySoundFromType");

	UAthenaScoreAlert_C_PlaySoundFromType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaScoreAlert.AthenaScoreAlert_C.OnWinConditionMsgEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  MESSAGE                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EAthenaWinConditionMsgType*    MsgType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaScoreAlert_C::OnWinConditionMsgEvent(struct FText* MESSAGE, EAthenaWinConditionMsgType* MsgType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaScoreAlert.AthenaScoreAlert_C.OnWinConditionMsgEvent");

	UAthenaScoreAlert_C_OnWinConditionMsgEvent_Params params;
	params.MESSAGE = MESSAGE;
	params.MsgType = MsgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaScoreAlert.AthenaScoreAlert_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void UAthenaScoreAlert_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaScoreAlert.AthenaScoreAlert_C.CustomEvent");

	UAthenaScoreAlert_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaScoreAlert.AthenaScoreAlert_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaScoreAlert_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaScoreAlert.AthenaScoreAlert_C.PreConstruct");

	UAthenaScoreAlert_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaScoreAlert.AthenaScoreAlert_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaScoreAlert_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaScoreAlert.AthenaScoreAlert_C.Construct");

	UAthenaScoreAlert_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaScoreAlert.AthenaScoreAlert_C.ExecuteUbergraph_AthenaScoreAlert
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaScoreAlert_C::ExecuteUbergraph_AthenaScoreAlert(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaScoreAlert.AthenaScoreAlert_C.ExecuteUbergraph_AthenaScoreAlert");

	UAthenaScoreAlert_C_ExecuteUbergraph_AthenaScoreAlert_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

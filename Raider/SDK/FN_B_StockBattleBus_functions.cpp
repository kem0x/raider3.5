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

// Function B_StockBattleBus.B_StockBattleBus_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_StockBattleBus_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_StockBattleBus.B_StockBattleBus_C.UserConstructionScript");

	AB_StockBattleBus_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_StockBattleBus.B_StockBattleBus_C.Bus Music Fader__FinishedFunc
// (BlueprintEvent)

void AB_StockBattleBus_C::Bus_Music_Fader__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_StockBattleBus.B_StockBattleBus_C.Bus Music Fader__FinishedFunc");

	AB_StockBattleBus_C_Bus_Music_Fader__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_StockBattleBus.B_StockBattleBus_C.Bus Music Fader__UpdateFunc
// (BlueprintEvent)

void AB_StockBattleBus_C::Bus_Music_Fader__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_StockBattleBus.B_StockBattleBus_C.Bus Music Fader__UpdateFunc");

	AB_StockBattleBus_C_Bus_Music_Fader__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_StockBattleBus.B_StockBattleBus_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_StockBattleBus_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_StockBattleBus.B_StockBattleBus_C.ReceiveBeginPlay");

	AB_StockBattleBus_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_StockBattleBus.B_StockBattleBus_C.Start Audio
// (BlueprintCallable, BlueprintEvent)

void AB_StockBattleBus_C::Start_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_StockBattleBus.B_StockBattleBus_C.Start Audio");

	AB_StockBattleBus_C_Start_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_StockBattleBus.B_StockBattleBus_C.GrabAudioReferences
// (BlueprintCallable, BlueprintEvent)

void AB_StockBattleBus_C::GrabAudioReferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_StockBattleBus.B_StockBattleBus_C.GrabAudioReferences");

	AB_StockBattleBus_C_GrabAudioReferences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_StockBattleBus.B_StockBattleBus_C.ExecuteUbergraph_B_StockBattleBus
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_StockBattleBus_C::ExecuteUbergraph_B_StockBattleBus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_StockBattleBus.B_StockBattleBus_C.ExecuteUbergraph_B_StockBattleBus");

	AB_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

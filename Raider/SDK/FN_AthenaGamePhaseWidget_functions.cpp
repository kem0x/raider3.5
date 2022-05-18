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

// Function AthenaGamePhaseWidget.AthenaGamePhaseWidget_C.OnGamePhaseStepChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EAthenaGamePhaseStep*          GamePhaseStep                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaGamePhaseWidget_C::OnGamePhaseStepChanged(EAthenaGamePhaseStep* GamePhaseStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGamePhaseWidget.AthenaGamePhaseWidget_C.OnGamePhaseStepChanged");

	UAthenaGamePhaseWidget_C_OnGamePhaseStepChanged_Params params;
	params.GamePhaseStep = GamePhaseStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGamePhaseWidget.AthenaGamePhaseWidget_C.ExecuteUbergraph_AthenaGamePhaseWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaGamePhaseWidget_C::ExecuteUbergraph_AthenaGamePhaseWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGamePhaseWidget.AthenaGamePhaseWidget_C.ExecuteUbergraph_AthenaGamePhaseWidget");

	UAthenaGamePhaseWidget_C_ExecuteUbergraph_AthenaGamePhaseWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

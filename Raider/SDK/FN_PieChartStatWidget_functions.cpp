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

// Function PieChartStatWidget.PieChartStatWidget_C.AddStat
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStatGroupData          StatGroupData                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPieChartStatWidget_C::AddStat(const struct FStatGroupData& StatGroupData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieChartStatWidget.PieChartStatWidget_C.AddStat");

	UPieChartStatWidget_C_AddStat_Params params;
	params.StatGroupData = StatGroupData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PieChartStatWidget.PieChartStatWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)

void UPieChartStatWidget_C::OnStatChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PieChartStatWidget.PieChartStatWidget_C.OnStatChanged");

	UPieChartStatWidget_C_OnStatChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PieChartStatWidget.PieChartStatWidget_C.ExecuteUbergraph_PieChartStatWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPieChartStatWidget_C::ExecuteUbergraph_PieChartStatWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieChartStatWidget.PieChartStatWidget_C.ExecuteUbergraph_PieChartStatWidget");

	UPieChartStatWidget_C_ExecuteUbergraph_PieChartStatWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

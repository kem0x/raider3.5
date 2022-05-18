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

// Function AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C.SetPlayersLeftText
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  PlayersText                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaPlayersLeftWidget_C::SetPlayersLeftText(struct FText* PlayersText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C.SetPlayersLeftText");

	UAthenaPlayersLeftWidget_C_SetPlayersLeftText_Params params;
	params.PlayersText = PlayersText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C.ExecuteUbergraph_AthenaPlayersLeftWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaPlayersLeftWidget_C::ExecuteUbergraph_AthenaPlayersLeftWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C.ExecuteUbergraph_AthenaPlayersLeftWidget");

	UAthenaPlayersLeftWidget_C_ExecuteUbergraph_AthenaPlayersLeftWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

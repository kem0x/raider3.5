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

// Function BP_Auto_Shotgun_Drum_Side_Action.BP_Auto_Shotgun_Drum_Side_Action_C.ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Auto_Shotgun_Drum_Side_Action_C::ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Auto_Shotgun_Drum_Side_Action.BP_Auto_Shotgun_Drum_Side_Action_C.ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action");

	UBP_Auto_Shotgun_Drum_Side_Action_C_ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

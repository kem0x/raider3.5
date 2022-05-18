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

// Function MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C.GetObjectiveBulletIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             BulletIcon                     (Parm, OutParm)

void UMissionObjectiveWidgetProviderInterface_C::GetObjectiveBulletIcon(struct FSlateBrush* BulletIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C.GetObjectiveBulletIcon");

	UMissionObjectiveWidgetProviderInterface_C_GetObjectiveBulletIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BulletIcon != nullptr)
		*BulletIcon = params.BulletIcon;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

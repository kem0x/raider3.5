#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C
// 0x0000 (0x0028 - 0x0028)
class UMissionObjectiveWidgetProviderInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C");
		return ptr;
	}


	void GetObjectiveBulletIcon(struct FSlateBrush* BulletIcon);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

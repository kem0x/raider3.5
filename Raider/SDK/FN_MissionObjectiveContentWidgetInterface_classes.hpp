#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionObjectiveContentWidgetInterface.MissionObjectiveContentWidgetInterface_C
// 0x0000 (0x0028 - 0x0028)
class UMissionObjectiveContentWidgetInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionObjectiveContentWidgetInterface.MissionObjectiveContentWidgetInterface_C");
		return ptr;
	}


	void GetHeightEstimate(float* Height);
	void Setup(class AFortObjectiveBase* Objective, bool bInConfigureAsHUD);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass B_Assault_Hydraulic_Drum_Athena.B_Assault_Hydraulic_Drum_Athena_C
// 0x0018 (0x0E64 - 0x0E4C)
class AB_Assault_Hydraulic_Drum_Athena_C : public AB_Assault_Bulletswarm_C
{
public:
	struct FVector                                     LaserScaleUntargeted;                                     // 0x0E4C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LaserScaleTargeted;                                       // 0x0E58(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Assault_Hydraulic_Drum_Athena.B_Assault_Hydraulic_Drum_Athena_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

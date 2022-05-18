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

// BlueprintGeneratedClass BP_SpeedBoost_Camera_LensEffect.BP_SpeedBoost_Camera_LensEffect_C
// 0x0000 (0x03D0 - 0x03D0)
class ABP_SpeedBoost_Camera_LensEffect_C : public AEmitterCameraLensEffectBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpeedBoost_Camera_LensEffect.BP_SpeedBoost_Camera_LensEffect_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

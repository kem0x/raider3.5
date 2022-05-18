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

// BlueprintGeneratedClass AnimNotify_Reload_ClipEject.AnimNotify_Reload_ClipEject_C
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_Reload_ClipEject_C : public UAnimNotify
{
public:
	class UParticleSystem*                             Shell_Eject_Particle;                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_Reload_ClipEject.AnimNotify_Reload_ClipEject_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

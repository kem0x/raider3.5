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

// BlueprintGeneratedClass AnimNotify_PlayReloadFX.AnimNotify_PlayReloadFX_C
// 0x0001 (0x0039 - 0x0038)
class UAnimNotify_PlayReloadFX_C : public UAnimNotify
{
public:
	TEnumAsByte<EFortReloadFXState>                    ReloadStage;                                              // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_PlayReloadFX.AnimNotify_PlayReloadFX_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

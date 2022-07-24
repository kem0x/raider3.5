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

// BlueprintGeneratedClass AnimNotifyState_DisablePawnRotation.AnimNotifyState_DisablePawnRotation_C
// 0x0000 (0x0030 - 0x0030)
class UAnimNotifyState_DisablePawnRotation_C : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotifyState_DisablePawnRotation.AnimNotifyState_DisablePawnRotation_C");
		return ptr;
	}


	bool Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

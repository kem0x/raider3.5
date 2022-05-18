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

// BlueprintGeneratedClass AnimNotify_PlayFeedbackLine.AnimNotify_PlayFeedbackLine_C
// 0x0019 (0x0051 - 0x0038)
class UAnimNotify_PlayFeedbackLine_C : public UAnimNotify
{
public:
	struct FFortFeedbackHandle                         Event;                                                    // 0x0038(0x0018) (Edit, BlueprintVisible)
	bool                                               bAllowReplication;                                        // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_PlayFeedbackLine.AnimNotify_PlayFeedbackLine_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

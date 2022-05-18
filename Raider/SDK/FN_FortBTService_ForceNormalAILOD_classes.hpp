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

// BlueprintGeneratedClass FortBTService_ForceNormalAILOD.FortBTService_ForceNormalAILOD_C
// 0x0008 (0x00A0 - 0x0098)
class UFortBTService_ForceNormalAILOD_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FortBTService_ForceNormalAILOD.FortBTService_ForceNormalAILOD_C");
		return ptr;
	}


	void ReceiveActivation(class AActor** OwnerActor);
	void ReceiveDeactivation(class AActor** OwnerActor);
	void ExecuteUbergraph_FortBTService_ForceNormalAILOD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

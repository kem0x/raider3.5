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

// BlueprintGeneratedClass BTTask_AlwaysFail.BTTask_AlwaysFail_C
// 0x0008 (0x00A8 - 0x00A0)
class UBTTask_AlwaysFail_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_AlwaysFail.BTTask_AlwaysFail_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_BTTask_AlwaysFail(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

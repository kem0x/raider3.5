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

// BlueprintGeneratedClass Tracer_Shotgun.Tracer_Shotgun_C
// 0x0008 (0x03E8 - 0x03E0)
class ATracer_Shotgun_C : public AFortTracerBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tracer_Shotgun.Tracer_Shotgun_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Tracer_Shotgun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// AnimBlueprintGeneratedClass SK_Mist_Smasher_Skeleton_AnimBP_Dynamics.SK_Mist_Smasher_Skeleton_AnimBP_Dynamics_C
// 0x3020 (0x3380 - 0x0360)
class USK_Mist_Smasher_Skeleton_AnimBP_Dynamics_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_219820B4418B20A0B72DC6B7DA3D423D;      // 0x0368(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_08A1C4634BDA0E6EAB71BBA1E1915EA4;  // 0x03B0(0x0068)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_49FAE9D24FB16FC310F06BAC841305F8;// 0x0418(0x0190)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_ED007FA549BDA1CCE3D2A4A33C6C8597;// 0x05A8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4A910DD14D916FC3CEE98D98A50834CE;// 0x05F0(0x0048)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_8285A52F44BA81191183F1A6B183C4BE;// 0x0638(0x0190)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_CCE91CE04388D09D0F47148BD1AB0EF0;// 0x07C8(0x0190)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_1AFA3B204B7ECFD53CD434885A5E8C91;// 0x0958(0x0190)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0AE8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_58431D2F417A13B3DE811BB88DAB94E3;// 0x0AF0(0x03B0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3D4B49FD4BA5F8982E1D2B829DC26C6D;// 0x0EA0(0x03B0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3CC29D184522B6FC5AC60BAECA19FD8F;// 0x1250(0x03B0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8E44D14C4CF2237EA4BFA0AA3969188A;// 0x1600(0x03B0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9A14D130495CFDE850DF868F9F16F478;// 0x19B0(0x03B0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_369126F442FD6F253032E2A02CC8409F;// 0x1D60(0x03B0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4D36615E4108F5A8AB7F17ABA51CF926;// 0x2110(0x03B0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B49F66DA46FE960C273901AB2C7C658F;// 0x24C0(0x03B0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DD4B722646D7DD909F10208F40058DCC;// 0x2870(0x03B0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8748AA0C484E2E623D9A4C9D95DB987E;// 0x2C20(0x03B0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4EEFD23D44795F8D6C6860A88474353A;// 0x2FD0(0x03B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Mist_Smasher_Skeleton_AnimBP_Dynamics.SK_Mist_Smasher_Skeleton_AnimBP_Dynamics_C");
		return ptr;
	}


	void ExecuteUbergraph_SK_Mist_Smasher_Skeleton_AnimBP_Dynamics(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C
// 0x0010 (0x0930 - 0x0920)
class UGAT_Athena_PurpleStuff_C : public UGAT_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0920(0x0008) (Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_Athena_PurpleStuff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

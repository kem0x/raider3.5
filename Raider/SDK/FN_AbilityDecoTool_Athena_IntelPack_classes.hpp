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

// BlueprintGeneratedClass AbilityDecoTool_Athena_IntelPack.AbilityDecoTool_Athena_IntelPack_C
// 0x0008 (0x0B88 - 0x0B80)
class AAbilityDecoTool_Athena_IntelPack_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B80(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AbilityDecoTool_Athena_IntelPack.AbilityDecoTool_Athena_IntelPack_C");
		return ptr;
	}


	void UserConstructionScript();
	void BPPressTrigger(class AFortDecoHelper** FortDecoHelper);
	void ExecuteUbergraph_AbilityDecoTool_Athena_IntelPack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass FrontendCamera_Manage.FrontendCamera_Manage_C
// 0x0010 (0x08D0 - 0x08C0)
class AFrontendCamera_Manage_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C0(0x0008) (Transient, DuplicateTransient)
	class UCameraComponent*                            LoginCamera_1;                                            // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FrontendCamera_Manage.FrontendCamera_Manage_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDeactivated();
	void OnActivated();
	void ExecuteUbergraph_FrontendCamera_Manage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

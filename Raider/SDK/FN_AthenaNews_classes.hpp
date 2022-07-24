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

// WidgetBlueprintGeneratedClass AthenaNews.AthenaNews_C
// 0x0008 (0x0260 - 0x0258)
class UAthenaNews_C : public UFortAthenaNewsWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaNews.AthenaNews_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_AthenaNews(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

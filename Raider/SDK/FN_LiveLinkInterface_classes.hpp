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

// Class LiveLinkInterface.LiveLinkSourceFactory
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkSourceFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceFactory");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkSourceSettings
// 0x0008 (0x0030 - 0x0028)
class ULiveLinkSourceSettings : public UObject
{
public:
	struct FLiveLinkInterpolationSettings              InterpolationSettings;                                    // 0x0028(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

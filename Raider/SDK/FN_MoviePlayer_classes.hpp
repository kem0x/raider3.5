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

// Class MoviePlayer.MoviePlayerSettings
// 0x0018 (0x0040 - 0x0028)
class UMoviePlayerSettings : public UObject
{
public:
	bool                                               bWaitForMoviesToComplete;                                 // 0x0028(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bMoviesAreSkippable;                                      // 0x0029(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	TArray<struct FString>                             StartupMovies;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MoviePlayer.MoviePlayerSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

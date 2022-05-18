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

// Class MovieScene.MovieSceneSignedObject
// 0x0088 (0x00B0 - 0x0028)
class UMovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                       Signature;                                                // 0x0028(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0038(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSignedObject");
		return ptr;
	}

};


// Class MovieScene.MovieScene
// 0x0080 (0x0130 - 0x00B0)
class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>                Spawnables;                                               // 0x00B0(0x0010) (ZeroConstructor)
	TArray<struct FMovieScenePossessable>              Possessables;                                             // 0x00C0(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneBinding>                  ObjectBindings;                                           // 0x00D0(0x0010) (ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                             // 0x00E0(0x0010) (ExportObject, ZeroConstructor)
	class UMovieSceneTrack*                            CameraCutTrack;                                           // 0x00F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FFloatRange                                 SelectionRange;                                           // 0x00F8(0x0010)
	struct FFloatRange                                 PlaybackRange;                                            // 0x0108(0x0010)
	bool                                               bForceFixedFrameIntervalPlayback;                         // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              FixedFrameInterval;                                       // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InTime;                                                   // 0x0120(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              OutTime;                                                  // 0x0124(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              StartTime;                                                // 0x0128(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              EndTime;                                                  // 0x012C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieScene");
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOverrides
// 0x0070 (0x0098 - 0x0028)
class UMovieSceneBindingOverrides : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FMovieSceneBindingOverrideData>      BindingData;                                              // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOverrides");
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOverridesInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneBindingOverridesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOverridesInterface");
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOwnerInterface");
		return ptr;
	}

};


// Class MovieScene.MovieSceneBuiltInEasingFunction
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	EMovieSceneBuiltInEasing                           Type;                                                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBuiltInEasingFunction");
		return ptr;
	}

};


// Class MovieScene.MovieSceneEasingExternalCurve
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UCurveFloat*                                 Curve;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingExternalCurve");
		return ptr;
	}

};


// Class MovieScene.MovieSceneEasingFunction
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneEasingFunction : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingFunction");
		return ptr;
	}


	float OnEvaluate(float Interp);
};


// Class MovieScene.MovieSceneFolder
// 0x0048 (0x0070 - 0x0028)
class UMovieSceneFolder : public UObject
{
public:
	struct FName                                       FolderName;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMovieSceneFolder*>                   ChildFolders;                                             // 0x0030(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    ChildMasterTracks;                                        // 0x0040(0x0010) (ExportObject, ZeroConstructor)
	TArray<struct FString>                             ChildObjectBindingStrings;                                // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneFolder");
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrack
// 0x0010 (0x00C0 - 0x00B0)
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions                 EvalOptions;                                              // 0x00B0(0x0004) (Edit)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00B4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneTrack");
		return ptr;
	}

};


// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (0x00C0 - 0x00C0)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneNameableTrack");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSection
// 0x0060 (0x0110 - 0x00B0)
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions               EvalOptions;                                              // 0x00B0(0x0002) (Edit)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00B2(0x0006) MISSED OFFSET
	struct FMovieSceneEasingSettings                   Easing;                                                   // 0x00B8(0x0038) (Edit)
	float                                              StartTime;                                                // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RowIndex;                                                 // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OverlapPriority;                                          // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsActive : 1;                                            // 0x0100(0x0001) (Edit)
	unsigned char                                      bIsLocked : 1;                                            // 0x0100(0x0001) (Edit)
	unsigned char                                      bIsInfinite : 1;                                          // 0x0100(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	float                                              PrerollTime;                                              // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PostrollTime;                                             // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FOptionalMovieSceneBlendType                BlendType;                                                // 0x010C(0x0002)
	unsigned char                                      UnknownData02[0x2];                                       // 0x010E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSection");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSegmentCompilerTestTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneSegmentCompilerTestTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  SectionArray;                                             // 0x00C0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSegmentCompilerTestTrack");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSegmentCompilerTestSection
// 0x0000 (0x0110 - 0x0110)
class UMovieSceneSegmentCompilerTestSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSegmentCompilerTestSection");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequence
// 0x0300 (0x03B0 - 0x00B0)
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneEvaluationTemplate               PrecompiledEvaluationTemplate;                            // 0x00B0(0x02F0)
	EMovieSceneCompletionMode                          DefaultCompletionMode;                                    // 0x03A0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bParentContextsAreSignificant;                            // 0x03A1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x03A2(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequence");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequencePlayer
// 0x07D8 (0x0800 - 0x0028)
class UMovieSceneSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x348];                                     // 0x0028(0x0348) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlay;                                                   // 0x0370(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayReverse;                                            // 0x0380(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStop;                                                   // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPause;                                                  // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x03B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TEnumAsByte<EMovieScenePlayerStatus>               Status;                                                   // 0x03C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	unsigned char                                      bReversePlayback : 1;                                     // 0x03C4(0x0001)
	unsigned char                                      bPendingFirstUpdate : 1;                                  // 0x03C4(0x0001)
	unsigned char                                      UnknownData02[0xB];                                       // 0x03C5(0x000B) MISSED OFFSET
	class UMovieSceneSequence*                         Sequence;                                                 // 0x03D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeCursorPosition;                                       // 0x03D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x03DC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x03E0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentNumLoops;                                          // 0x03E4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x03E8(0x0010) MISSED OFFSET
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x03F8(0x0030)
	unsigned char                                      UnknownData04[0x3D8];                                     // 0x0428(0x03D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequencePlayer");
		return ptr;
	}


	void Stop();
	void StartPlayingNextTick();
	void SetPlayRate(float PlayRate);
	void SetPlaybackRange(float NewStartTime, float NewEndTime);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void SetDisableCameraCuts(bool bInDisableCameraCuts);
	void Scrub();
	void PlayReverse();
	void PlayLooping(int NumLoops);
	void Play();
	void Pause();
	void JumpToPosition(float NewPlaybackPosition);
	bool IsPlaying();
	bool IsPaused();
	void GoToEndAndStop();
	float GetPlayRate();
	float GetPlaybackStart();
	float GetPlaybackPosition();
	float GetPlaybackEnd();
	float GetLength();
	bool GetDisableCameraCuts();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	void ChangePlaybackDirection();
};


// Class MovieScene.MovieSceneSubSection
// 0x0070 (0x0180 - 0x0110)
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSectionParameters                Parameters;                                               // 0x0110(0x0014) (Edit)
	float                                              StartOffset;                                              // 0x0124(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TimeScale;                                                // 0x0128(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PrerollTime;                                              // 0x012C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UMovieSceneSequence*                         SubSequence;                                              // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TLazyObjectPtr<class AActor>                       ActorToRecord;                                            // 0x0138(0x001C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	struct FString                                     TargetSequenceName;                                       // 0x0158(0x0010) (Edit, ZeroConstructor)
	struct FDirectoryPath                              TargetPathToRecordTo;                                     // 0x0168(0x0010) (Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0178(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSubSection");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSubTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSubTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

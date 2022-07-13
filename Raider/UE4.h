#pragma once

#include <unordered_set>
#include <random>

#include "Util.h"
#include "json.hpp"
#include "Native.h"

typedef std::array<UFortWeaponRangedItemDefinition*, 6> PlayerLoadout;

inline bool bTraveled = false;
inline bool bPlayButton = false;
inline bool bListening = false;
static bool bSpawnedFloorLoot = false;

static std::vector<ABuildingActor*> ExistingBuildings;
static AFortOnlineBeaconHost* HostBeacon = nullptr;

inline UWorld* GetWorld()
{
    return GetEngine()->GameViewport->World;
}

inline AAthena_PlayerController_C* GetPlayerController(int32 Index = 0)
{
    if (Index > GetWorld()->OwningGameInstance->LocalPlayers.Num())
    {
        return static_cast<AAthena_PlayerController_C*>(GetWorld()->OwningGameInstance->LocalPlayers[0]->PlayerController);
    }

    return static_cast<AAthena_PlayerController_C*>(GetWorld()->OwningGameInstance->LocalPlayers[Index]->PlayerController);
}

struct FObjectKey
{
public:
    UObject* ResolveObjectPtr() const
    {
        FWeakObjectPtr WeakPtr;
        WeakPtr.ObjectIndex = ObjectIndex;
        WeakPtr.ObjectSerialNumber = ObjectSerialNumber;

        return WeakPtr.Get();
    }

    int32 ObjectIndex;
    int32 ObjectSerialNumber;
};

FORCEINLINE auto& GetClassRepNodePolicies(UObject* ReplicationDriver)
{
    return *reinterpret_cast<TMap<FObjectKey, EClassRepNodeMapping>*>(__int64(ReplicationDriver) + 0x3B8);
}

FORCEINLINE UGameplayStatics* GetGameplayStatics()
{
    return reinterpret_cast<UGameplayStatics*>(UGameplayStatics::StaticClass());
}

FORCEINLINE UKismetSystemLibrary* GetKismetSystem()
{
    return reinterpret_cast<UKismetSystemLibrary*>(UKismetSystemLibrary::StaticClass());
}

FORCEINLINE UFortKismetLibrary* GetFortKismet()
{
    return ((UFortKismetLibrary*)UFortKismetLibrary::StaticClass());
}

FORCEINLINE UKismetStringLibrary* GetKismetString()
{
    return (UKismetStringLibrary*)UKismetStringLibrary::StaticClass();
}

inline void CreateConsole()
{
    GetEngine()->GameViewport->ViewportConsole = static_cast<UConsole*>(GetGameplayStatics()->STATIC_SpawnObject(UConsole::StaticClass(), GetEngine()->GameViewport));
}

inline auto CreateCheatManager(APlayerController* Controller)
{
    if (!Controller->CheatManager)
    {
        Controller->CheatManager = static_cast<UCheatManager*>(GetGameplayStatics()->STATIC_SpawnObject(UFortCheatManager::StaticClass(), Controller)); // lets just assume its gamemode athena
    }

    return static_cast<UFortCheatManager*>(Controller->CheatManager);
}

bool CanBuild(ABuildingSMActor* BuildingActor)
{
    bool bCanBuild = true;

    for (auto Building : ExistingBuildings)
    {
        if (!Building)
            continue;

        if (Building->K2_GetActorLocation() == BuildingActor->K2_GetActorLocation() && Building->BuildingType == BuildingActor->BuildingType)
        {
            bCanBuild = false;
        }
    }
    
    if (bCanBuild || ExistingBuildings.size() == 0)
    {
        ExistingBuildings.push_back(BuildingActor);

        return true;
    }

    return false;
}

bool IsCurrentlyDisconnecting(UNetConnection* Connection)
{
    if (!Connection || IsBadReadPtr(Connection, sizeof(Connection))) return true;
    
    auto PC = (AFortPlayerController*)Connection->PlayerController;
    if (!PC || IsBadReadPtr(PC, sizeof(PC))) return true;
    
    return PC->bIsDisconnecting;
}

void SwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC)
{
    if (OldPC && NewPC && OldPC->Player)
    {
        NewPC->NetPlayerIndex = OldPC->NetPlayerIndex;
        NewPC->NetConnection = OldPC->NetConnection;

        GetWorld()->AuthorityGameMode->K2_OnSwapPlayerControllers(OldPC, NewPC);

        OldPC->PendingSwapConnection = reinterpret_cast<UNetConnection*>(OldPC->Player);
    }
}

void Spectate(UNetConnection* SpectatingConnection, AFortPlayerStateAthena* StateToSpectate)
{
    if (!SpectatingConnection || !StateToSpectate)
        return;

    auto PawnToSpectate = StateToSpectate->GetCurrentPawn();
    auto DeadPC = static_cast<AFortPlayerControllerAthena*>(SpectatingConnection->PlayerController);

    if (!DeadPC)
        return;

    auto DeadPlayerState = static_cast<AFortPlayerStateAthena*>(DeadPC->PlayerState);

    if (!IsCurrentlyDisconnecting(SpectatingConnection) && DeadPlayerState && PawnToSpectate)
    {
        //ABP_SpectatorPC_C and ABP_SpectatorPawn_C stuff are for live spectating not for normal spectating.
    }
}

inline void DumpObjects()
{
    std::ofstream objects("ObjectsDump.txt");

    if (objects)
    {
        for (int i = 0; i < UObject::GObjects->Num(); i++)
        {
            auto Object = UObject::GObjects->GetByIndex(i);

            if (!Object)
                continue;

            objects << '[' + std::to_string(Object->InternalIndex) + "] " + Object->GetFullName() << '\n';
        }
    }

    objects.close();

    std::cout << "Finished dumping objects!\n";
}

static bool KickController(APlayerController* PC, FString Message)
{
    if (PC && Message.Data)
    {
        FText text = reinterpret_cast<UKismetTextLibrary*>(UKismetTextLibrary::StaticClass())->STATIC_Conv_StringToText(Message);
        return Native::OnlineSession::KickPlayer(GetWorld()->AuthorityGameMode->GameSession, PC, text);
    }

    return false;
}

// template <typename SoftType>
UObject* SoftObjectToObject(TSoftObjectPtr<UObject*> SoftPtr)
{
    static auto KismetSystem = GetKismetSystem();
    static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.Conv_SoftClassReferenceToClass");

    struct
    {
        TSoftObjectPtr<UObject*> SoftClassReference;
        UObject* Class;
    } params;

    params.SoftClassReference = SoftPtr;

    auto flags = fn->FunctionFlags;
    fn->FunctionFlags |= 0x400;

    ProcessEvent(KismetSystem, fn, &params);

    fn->FunctionFlags = flags;

    return params.Class;
}

auto GetAllActorsOfClass(UClass* Class)
{
    // You have to free this!!!
    TArray<AActor*> OutActors;

    static auto GameplayStatics = static_cast<UGameplayStatics*>(UGameplayStatics::StaticClass()->CreateDefaultObject());
    GameplayStatics->STATIC_GetAllActorsOfClass(GetWorld(), Class, &OutActors);

    return OutActors;
}

FTransform GetPlayerStart(AFortPlayerControllerAthena* PC)
{
    TArray<AActor*> OutActors = GetAllActorsOfClass(AFortPlayerStartWarmup::StaticClass());

    auto ActorsNum = OutActors.Num();

    auto SpawnTransform = FTransform();
    SpawnTransform.Scale3D = FVector(1, 1, 1);
    SpawnTransform.Rotation = FQuat();
    SpawnTransform.Translation = FVector { 1250, 1818, 3284 }; // Next to salty

    auto GamePhase = static_cast<AAthena_GameState_C*>(GetWorld()->GameState)->GamePhase;

    if (ActorsNum != 0 && (GamePhase == EAthenaGamePhase::Setup || GamePhase == EAthenaGamePhase::Warmup))
    {
        auto ActorToUseNum = Utils::RandomIntInRange(0, ActorsNum);
        auto ActorToUse = (OutActors)[ActorToUseNum];

        while (!ActorToUse)
        {
            ActorToUseNum = Utils::RandomIntInRange(0, ActorsNum);
            ActorToUse = (OutActors)[ActorToUseNum];
        }

        SpawnTransform.Translation = ActorToUse->K2_GetActorLocation();

        PC->WarmupPlayerStart = static_cast<AFortPlayerStartWarmup*>(ActorToUse);
    }

    OutActors.FreeArray();

    return SpawnTransform;
}

inline UKismetMathLibrary* GetMath()
{
    return (UKismetMathLibrary*)UKismetMathLibrary::StaticClass();
}

FVector RotToVec(const FRotator& Rotator)
{
    float CP, SP, CY, SY;
    Utils::sinCos(&SP, &CP, GetMath()->STATIC_DegreesToRadians(Rotator.Pitch));
    Utils::sinCos(&SY, &CY, GetMath()->STATIC_DegreesToRadians(Rotator.Yaw));
    auto V = FVector(CP * CY, CP * SY, SP);

    return V;
}

UFortWeaponRangedItemDefinition* FindWID(const std::string& WID)
{
    auto Def = UObject::FindObject<UFortWeaponRangedItemDefinition>("FortWeaponRangedItemDefinition " + WID + '.' + WID);

    if (!Def)
    {
        Def = UObject::FindObject<UFortWeaponRangedItemDefinition>("WID_Harvest_" + WID + "_Athena_C_T01" + ".WID_Harvest_" + WID + "_Athena_C_T01");

        if (!Def)
            Def = UObject::FindObject<UFortWeaponRangedItemDefinition>(WID + "." + WID);
    }

    return Def;
}

auto GetRandomWID(int skip = 0)
{
    if (skip == 0)
        skip = Utils::RandomIntInRange(4, 100);

    return UObject::FindObject<UFortWeaponRangedItemDefinition>("FortWeaponRangedItemDefinition WID_", skip);
}
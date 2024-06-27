#pragma once
#include "CustomSDK.hpp"
using namespace SDK;

namespace Hooks
{
    static void KickPlayerHook(AGameSession*, AController*) { return; }

    namespace hNet
    {
        inline __int64 (*Org_DispatchRequest)(__int64, __int64*, int);
        __int64 Hook_DispatchRequest(__int64 a1, __int64* a2, int a3);

        inline void (*Org_TickFlush)(UNetDriver*);
        void Hook_TickFlush(UNetDriver* NetDriver);

        ENetMode Hook_GetNetModeWorld();
    }

    namespace hGamemode
    {
        inline void (*Org_HandleStartingNewPlayer)(AFortGameModeAthena*, AFortPlayerControllerAthena*);
        void Hook_HandleStartingNewPlayer(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* NewPlayer);

        inline bool (*Org_ReadyToStartMatch)(AFortGameModeAthena*);
        bool Hook_ReadyToStartMatch(AFortGameModeAthena* GameMode);

        APawn* Hook_SpawnDefaultPawnFor(AGameModeBase* GameMode, AController* NewPlayer, AActor* StartSpot);
    }

    namespace hAbilities
    {
        void Hook_InternalServerTryActivateAbility(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle, bool InputPressed, const FPredictionKey& PredictionKey, const FGameplayEventData* TriggerEventData);
    }

    namespace hPlayer
    {
        inline void (*Org_ServerLoadingScreenDropped)(AFortPlayerControllerAthena*);
        void Hook_ServerLoadingScreenDropped(AFortPlayerControllerAthena* Controller);

        inline void (*Org_ServerAttemptInteract)(UObject* Context, FFrame* Stack, void* Ret);
        void Hook_ServerAttemptInteract(UObject* Context, FFrame* Stack, void* Ret);

        inline void (*Org_ClientOnPawnDied)(AFortPlayerControllerAthena*, FFortPlayerDeathReport&);
        void Hook_ClientOnPawnDied(AFortPlayerControllerAthena* DeadController, FFortPlayerDeathReport DeathReport);

        void Hook_ServerAcknowlegePossession(APlayerController* Controller, APawn* Pawn);
        void Hook_ServerExecuteInventoryItem(AFortPlayerControllerAthena* Controller, FGuid ItemGuid);
        void Hook_ServerSendZiplineState(AFortPlayerPawn* Pawn, FZiplinePawnState InZiplineState);
    }
}
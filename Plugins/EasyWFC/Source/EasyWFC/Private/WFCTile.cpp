#include "WFCTile.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/DataTable.h"
#include "Kismet/GameplayStatics.h"
#include "Containers/Array.h"

// Sets default values
AWFCTile::AWFCTile()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    bIsCollapsed = false;
    Entropy = 0.0f;

    // 初始化静态网格体组件
    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    RootComponent = StaticMeshComponent;

}

void AWFCTile::Collapse()
{
    if (MaybeStates.Num() > 1)
    {
        // 计算所有状态的总权重
        float TotalWeight = 0.0f;
        for (const FTileType& State : MaybeStates)
        {
            TotalWeight += State.Weight;
        }

        // 随机选择一个状态
        float RandomValue = FMath::RandRange(0.0f, TotalWeight);
        float AccumulatedWeight = 0.0f;
        for (const FTileType& State : MaybeStates)
        {
            AccumulatedWeight += State.Weight;
            if (AccumulatedWeight >= RandomValue)
            {
                CollapseState = State;
                bIsCollapsed = true;
                MaybeStates.Empty(); // 清空可能状态

                // 更新静态网格体组件
                StaticMeshComponent->SetStaticMesh(CollapseState.Mesh);
                StaticMeshComponent->SetRelativeRotation(FRotator(0.0f, CollapseState.DirectionOfRotation * 90.0f, 0.0f));

                StaticMeshComponent->SetRelativeScale3D(GetOwner()->GetActorScale3D());
                break;
            }
        }
    }
    else if (MaybeStates.Num() == 1)
    {
        CollapseState = MaybeStates[0];
        bIsCollapsed = true;
        MaybeStates.Empty(); // 清空可能状态

        // 更新静态网格体组件
        StaticMeshComponent->SetStaticMesh(CollapseState.Mesh);
        StaticMeshComponent->SetRelativeRotation(FRotator(0.0f, CollapseState.DirectionOfRotation * 90.0f, 0.0f));

        StaticMeshComponent->SetRelativeScale3D(GetOwner()->GetActorScale3D());
    }

}

FGameplayTag AWFCTile::GetConnectTagToTile(AWFCTile* NeighboringTile)
{
    if (NeighboringTile->MapCoordinate.Y == MapCoordinate.Y)
    {
        if (NeighboringTile->MapCoordinate.X > MapCoordinate.X)
        {
            return CollapseState.Connect_F_ID;
        }
        else if (NeighboringTile->MapCoordinate.X < MapCoordinate.X)
        {
            return CollapseState.Connect_B_ID;
        }

    }
    else if (NeighboringTile->MapCoordinate.X == MapCoordinate.X)
    {
        if (NeighboringTile->MapCoordinate.Y > MapCoordinate.Y)
        {
            return CollapseState.Connect_R_ID;
        }
        else if (NeighboringTile->MapCoordinate.Y < MapCoordinate.Y)
        {
            return CollapseState.Connect_L_ID;
        }
    }

    return FGameplayTag();
}

FGameplayTag AWFCTile::GetConnectTagToState(FTileType state, AWFCTile* NeighboringTile)
{
    if (NeighboringTile->MapCoordinate.Y == MapCoordinate.Y)
    {
        if (NeighboringTile->MapCoordinate.X > MapCoordinate.X)
        {
            return state.Connect_F_ID;
        }
        else if (NeighboringTile->MapCoordinate.X < MapCoordinate.X)
        {
            return state.Connect_B_ID;
        }

    }
    else if (NeighboringTile->MapCoordinate.X == MapCoordinate.X)
    {
        if (NeighboringTile->MapCoordinate.Y > MapCoordinate.Y)
        {
            return state.Connect_R_ID;
        }
        else if (NeighboringTile->MapCoordinate.Y < MapCoordinate.Y)
        {
            return state.Connect_L_ID;
        }
    }

    return FGameplayTag();
}

// Called when the game starts or when spawned
void AWFCTile::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void AWFCTile::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}


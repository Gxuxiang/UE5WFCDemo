#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WFCTile.h"
#include "WFCMap.generated.h"

//USTRUCT(BlueprintType)
//struct FMapRow
//{
//	GENERATED_BODY()
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFCMap")
//	TArray<AWFCTile *> Tiles;
//};

// 瓦片状态信息的结构体
struct FCachedTileState
{
	FVector2D MapCoordinate;
	FTileType CollapseState;
	bool bIsCollapsed;
	TArray<FTileType> MaybeStates;
};

/**
	波函数坍缩 地图
*/
UCLASS()
class EASYWFC_API AWFCMap : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWFCMap();

	// 地图大小
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFCMap")
	FVector2D MapSize;

	// 瓦片宽度
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFCMap")
	float TileSize;

	//所有的瓦片
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFCMap")
	TArray<AWFCTile*> AllTiles;

	//初始的瓦片
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFCMap")
	TArray<AWFCTile*> InitTiles;

	//连接边类型的表格
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFCMap")
	UDataTable* ConnectStatsTable;

	//瓦片类型表格
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFCMap")
	UDataTable* TileStatsTable;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFCMap")
	TArray<FMapRow> HistoryMap;*/

	// 保存所有瓷砖状态的数组
	TArray<FCachedTileState> CachedTileStates;

	//所有的连接类型
	TArray<FConnectType> AllConnectStats;

	// 初始化
	void InitializeMap();

	//计算熵值
	float CalculateEntropy(TArray<FTileType>);

	//获取熵值最小的瓦片
	AWFCTile* GetTileWithMinimumEntropy(TArray<AWFCTile*> Tiles);

	//获取相邻的瓦片
	TArray<AWFCTile*> GetNeighboringTiles(AWFCTile* TargetTile);

	//判断是否可以相接
	bool CanConnect(FGameplayTag ID, FGameplayTag ConnectID);


	// 保存瓦片状态的方法
	void CacheTileStates(TArray<AWFCTile*>& AllTiles);

	// 恢复瓦片状态的方法
	void RestoreTileStates(TArray<AWFCTile*>& AllTiles);



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

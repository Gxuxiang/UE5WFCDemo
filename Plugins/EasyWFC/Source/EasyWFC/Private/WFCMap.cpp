
#include "WFCMap.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/DataTable.h"
#include "Kismet/GameplayStatics.h"
#include "Containers/Array.h"

// Sets default values
AWFCMap::AWFCMap()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AWFCMap::InitializeMap()
{
	// 生成所有的 瓦片

	// 计算熵值 

	// 判断是否全部塌陷
		//获取熵值最小的瓦片
			//塌陷它
			//获取他周围的瓦片
				//将不能和塌陷瓦片相接的状态删除，重新计算熵值
			//计算是否有无解
				//保存状态
				//回退


	// 设置上下文字符串，用于调试信息
	static const FString ContextString(TEXT("Fetching All Rows in Tile Stats Table"));



	TArray<FTileType> AllTileStats;
	if (ConnectStatsTable && TileStatsTable)
	{
		// 获取所有的连接边类型
		TArray<FConnectType*> AllConnectStatsPtr;
		ConnectStatsTable->GetAllRows(ContextString, AllConnectStatsPtr);
		for (FConnectType* Ptr : AllConnectStatsPtr)
		{
			if (Ptr)
			{
				AllConnectStats.Add(*Ptr);
			}
		}


		// 获取所有的瓦片类型
		TArray<FTileType*> AllTileStatsPtr;
		TileStatsTable->GetAllRows(ContextString, AllTileStatsPtr);
		for (FTileType* Ptr : AllTileStatsPtr)
		{
			if (Ptr)
			{
				AllTileStats.Add(*Ptr);
			}
		}
	}

	FVector ActorLocation = GetActorLocation();
	FVector ActorScale = GetActorScale3D();

	float ScaleX = TileSize * ActorScale.X;
	float ScaleY = TileSize * ActorScale.Y;


	// 初始化所有的瓦片
	for (int32 X = 0; X < MapSize.X; X++)
	{
		for (int32 Y = 0; Y < MapSize.Y; Y++)
		{

			//计算瓦片生成位置
			//FVector SpawnLocation = FVector(ActorLocation.X + X * TileSize , ActorLocation.Y + Y * TileSize , ActorLocation.Z );

			FVector SpawnLocation = FVector(ActorLocation.X + ScaleX * X, ActorLocation.Y + ScaleY * Y, ActorLocation.Z);

			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			AWFCTile* NewTile = GetWorld()->SpawnActor<AWFCTile>(AWFCTile::StaticClass(), SpawnLocation, GetActorRotation(), SpawnParams);
			if (NewTile)
			{
				//设置坐标
				NewTile->MapCoordinate = FVector2D(X, Y);
				//设置可能的状态
				//NewTile->MaybeStates = AllTileStats;
				//每种类型的瓦片不同方向的旋转 是不同的状态

				for (FTileType type : AllTileStats)
				{

					FGameplayTag Old_L_ID = type.Connect_L_ID;
					FGameplayTag Old_R_ID = type.Connect_R_ID;
					FGameplayTag Old_F_ID = type.Connect_F_ID;
					FGameplayTag Old_B_ID = type.Connect_B_ID;

					//不同方向的状态
					TArray<FTileType> DirectionStates;
					for (int32 i : {0, 1, 2, 3})
					{
						//用于中断循环
						int32 break_i = -1;
						//判断是否为相对边 相同的物体,判断是否为4边完全相同
						if ((Old_L_ID == Old_R_ID && Old_F_ID == Old_B_ID) && Old_F_ID == Old_L_ID)
						{
							//4边完全相同 只有一种状态 不旋转
							break_i = 1;
						}
						if ((Old_L_ID == Old_R_ID && Old_F_ID == Old_B_ID) && Old_F_ID != Old_L_ID)
						{
							//对称边相同 只有两种状态 只旋转一次	
							break_i = 2;
						}
						if (i == break_i)
						{
							break;
						}


						if (i == 0)
						{
							//无旋转
							type.DirectionOfRotation = 0;
						}
						else if (i == 1)
						{
							//顺时针旋转 90
							type.DirectionOfRotation = 1;
							type.Connect_F_ID = Old_L_ID;
							type.Connect_R_ID = Old_F_ID;
							type.Connect_B_ID = Old_R_ID;
							type.Connect_L_ID = Old_B_ID;
						}
						else if (i == 2)
						{
							//旋转180
							type.DirectionOfRotation = 2;
							type.Connect_F_ID = Old_B_ID;
							type.Connect_R_ID = Old_L_ID;
							type.Connect_B_ID = Old_F_ID;
							type.Connect_L_ID = Old_R_ID;
						}
						else if (i == 3)
						{
							//旋转270
							type.DirectionOfRotation = 3;
							type.Connect_F_ID = Old_R_ID;
							type.Connect_R_ID = Old_B_ID;
							type.Connect_B_ID = Old_L_ID;
							type.Connect_L_ID = Old_F_ID;
						}
						DirectionStates.Add(type);
					}
					//附加状态
					NewTile->MaybeStates.Append(DirectionStates);
				}

				//计算熵值
				NewTile->Entropy = CalculateEntropy(NewTile->MaybeStates);
				//添加到集合
				AllTiles.Add(NewTile);
				//HistoryMap.Add(FCacheTile(NewTile->MapCoordinate,))
				UE_LOG(LogTemp, Log, TEXT("生成瓦片中.. (%d, %d)"), X, Y);

			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Failed to spawn tile at coordinate (%d, %d)"), X, Y);
			}


		}
	}
	UE_LOG(LogTemp, Log, TEXT("生成完毕"));
	//获取所有没塌陷的瓦片 
	TArray<AWFCTile*> NotCollapseTiles;
	for (AWFCTile* tile : AllTiles)
	{
		if (!tile->bIsCollapsed)
		{
			NotCollapseTiles.Add(tile);
		}
	}

	int32 NotCollapseTilesCount = NotCollapseTiles.Num();
	UE_LOG(LogTemp, Log, TEXT("没塌陷的瓦片数量: %d"), NotCollapseTilesCount);

	while (NotCollapseTilesCount != 0)
	{
		UE_LOG(LogTemp, Log, TEXT("开始计算塌陷: %d "), NotCollapseTilesCount);
		//是否退回
		bool IsRestoreTileStates = false;
		//获取最小熵值瓦片
		AWFCTile* MinEntropyTile = GetTileWithMinimumEntropy(NotCollapseTiles);
		if (MinEntropyTile == nullptr)
		{
			UE_LOG(LogTemp, Error, TEXT("Error: No tile found with minimum entropy."));
			break;
		}

		//保存状态, 每次塌陷之前保存当前状态
		CacheTileStates(AllTiles);

		//塌陷
		MinEntropyTile->Collapse();
		//获取邻边瓦片
		TArray<AWFCTile*> NeighboringTiles = GetNeighboringTiles(MinEntropyTile);

		for (AWFCTile* NeighTile : NeighboringTiles)
		{
			TArray<FTileType> MaybeStates = NeighTile->MaybeStates;
			//返回塌陷瓦片相对与邻边瓦片 边的连接ID
			FGameplayTag ConnectID = MinEntropyTile->GetConnectTagToTile(NeighTile);

			int32 ConnectCount = MaybeStates.Num();
			//删除不能相接的状态
			for (int32 i = MaybeStates.Num() - 1; i >= 0; i--)
			{
				FTileType state = MaybeStates[i];
				//返回邻边瓦片相对与塌陷瓦片 边的连接ID
				FGameplayTag IsCanConnectID = NeighTile->GetConnectTagToState(state, MinEntropyTile);
				//判断是否可以相接
				if (!CanConnect(ConnectID, IsCanConnectID))
				{
					//不能相接的移除掉
					MaybeStates.RemoveAt(i);
				}
			}
			//更新AllTiles中的瓦片信息
			NeighTile->MaybeStates = MaybeStates;

			//重新计算熵值
			if (ConnectCount != MaybeStates.Num())
			{
				NeighTile->Entropy = CalculateEntropy(MaybeStates);
			}

			if (MaybeStates.Num() == 0)
			{
				//无解 回退
				//FMapRow Cache = HistoryMap[HistoryMap.Num() - 1];
				//更新没塌陷的数量
				RestoreTileStates(AllTiles);
				NotCollapseTilesCount++;
				//寻找保存的瓦片并退回数据
				//AllTiles = Cache.Tiles;
				IsRestoreTileStates = true;
				break;
			}

		}
		if (!IsRestoreTileStates)
		{
			//更新没塌陷的数量
			NotCollapseTilesCount--;

		}
		//更新没塌陷的瓦片集合 
		NotCollapseTiles.Empty();
		for (AWFCTile* tile : AllTiles)
		{
			if (!tile->bIsCollapsed)
			{
				NotCollapseTiles.Add(tile);
			}
		}
	}

	UE_LOG(LogTemp, Log, TEXT("完成创建"));

}

//计算权重
float AWFCMap::CalculateEntropy(TArray<FTileType> TileTypes)
{
	float Entropy = 0.0f;
	float TotalWeight = 0.0f;
	for (const FTileType& State : TileTypes)
	{
		TotalWeight += State.Weight;
	}

	for (const FTileType& State : TileTypes)
	{
		float Probability = State.Weight / TotalWeight;
		Entropy -= Probability * FMath::Log2(Probability);
	}
	return Entropy;
}

//获取最小的熵值
AWFCTile* AWFCMap::GetTileWithMinimumEntropy(TArray<AWFCTile*> Tiles)
{
	// 添加防错处理
	if (Tiles.Num() == 0)
	{
		return nullptr;
	}

	AWFCTile* MinEntropyTile = Tiles[0];

	for (AWFCTile* tile : Tiles)
	{
		if (tile->Entropy < MinEntropyTile->Entropy)
		{
			MinEntropyTile = tile;
		}
	}
	return MinEntropyTile;
}

TArray<AWFCTile*> AWFCMap::GetNeighboringTiles(AWFCTile* TargetTile)
{
	TArray<AWFCTile*> Neighs;

	FVector2D TargetCoordinates = TargetTile->MapCoordinate;

	for (AWFCTile* Tile : AllTiles)
	{
		if ((FMath::Abs(Tile->MapCoordinate.X - TargetCoordinates.X) == 1 && Tile->MapCoordinate.Y == TargetCoordinates.Y) ||
			(FMath::Abs(Tile->MapCoordinate.Y - TargetCoordinates.Y) == 1 && Tile->MapCoordinate.X == TargetCoordinates.X))
		{
			//过滤已经塌陷的瓦片
			if (!Tile->bIsCollapsed)
			{
				Neighs.Add(Tile);
			}
		}
	}

	return Neighs;
}

bool AWFCMap::CanConnect(FGameplayTag ID, FGameplayTag ConnectID)
{
	bool bIsCanConnect = false;

	for (FConnectType conn : AllConnectStats)
	{
		if (conn.ID == ID && conn.CanConnectID == ConnectID)
		{
			bIsCanConnect = true;
			break;
		}
		else if (conn.ID == ConnectID && conn.CanConnectID == ID)
		{
			bIsCanConnect = true;
			break;
		}
	}

	return bIsCanConnect;
}

void AWFCMap::CacheTileStates(TArray<AWFCTile*>& Tiles)
{
	CachedTileStates.Empty(); // 清空之前的缓存数据

	for (AWFCTile* Tile : Tiles)
	{
		if (Tile)
		{
			FCachedTileState CachedState;
			CachedState.MapCoordinate = Tile->MapCoordinate;
			CachedState.CollapseState = Tile->CollapseState;
			CachedState.bIsCollapsed = Tile->bIsCollapsed;
			CachedState.MaybeStates = Tile->MaybeStates;
			CachedTileStates.Add(CachedState);
		}
	}
}

void AWFCMap::RestoreTileStates(TArray<AWFCTile*>& Tiles)
{
	for (FCachedTileState& CachedState : CachedTileStates)
	{
		for (AWFCTile* Tile : Tiles)
		{
			if (Tile && Tile->MapCoordinate == CachedState.MapCoordinate)
			{
				Tile->CollapseState = CachedState.CollapseState;
				Tile->bIsCollapsed = CachedState.bIsCollapsed;
				Tile->MaybeStates = CachedState.MaybeStates;
				break;
			}
		}
	}
}

// Called when the game starts or when spawned
void AWFCMap::BeginPlay()
{
	Super::BeginPlay();

	InitializeMap();
}

// Called every frame
void AWFCMap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


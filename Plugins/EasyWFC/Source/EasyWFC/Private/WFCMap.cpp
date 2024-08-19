
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
	// �������е� ��Ƭ

	// ������ֵ 

	// �ж��Ƿ�ȫ������
		//��ȡ��ֵ��С����Ƭ
			//������
			//��ȡ����Χ����Ƭ
				//�����ܺ�������Ƭ��ӵ�״̬ɾ�������¼�����ֵ
			//�����Ƿ����޽�
				//����״̬
				//����


	// �����������ַ��������ڵ�����Ϣ
	static const FString ContextString(TEXT("Fetching All Rows in Tile Stats Table"));



	TArray<FTileType> AllTileStats;
	if (ConnectStatsTable && TileStatsTable)
	{
		// ��ȡ���е����ӱ�����
		TArray<FConnectType*> AllConnectStatsPtr;
		ConnectStatsTable->GetAllRows(ContextString, AllConnectStatsPtr);
		for (FConnectType* Ptr : AllConnectStatsPtr)
		{
			if (Ptr)
			{
				AllConnectStats.Add(*Ptr);
			}
		}


		// ��ȡ���е���Ƭ����
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


	// ��ʼ�����е���Ƭ
	for (int32 X = 0; X < MapSize.X; X++)
	{
		for (int32 Y = 0; Y < MapSize.Y; Y++)
		{

			//������Ƭ����λ��
			//FVector SpawnLocation = FVector(ActorLocation.X + X * TileSize , ActorLocation.Y + Y * TileSize , ActorLocation.Z );

			FVector SpawnLocation = FVector(ActorLocation.X + ScaleX * X, ActorLocation.Y + ScaleY * Y, ActorLocation.Z);

			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			AWFCTile* NewTile = GetWorld()->SpawnActor<AWFCTile>(AWFCTile::StaticClass(), SpawnLocation, GetActorRotation(), SpawnParams);
			if (NewTile)
			{
				//��������
				NewTile->MapCoordinate = FVector2D(X, Y);
				//���ÿ��ܵ�״̬
				//NewTile->MaybeStates = AllTileStats;
				//ÿ�����͵���Ƭ��ͬ�������ת �ǲ�ͬ��״̬

				for (FTileType type : AllTileStats)
				{

					FGameplayTag Old_L_ID = type.Connect_L_ID;
					FGameplayTag Old_R_ID = type.Connect_R_ID;
					FGameplayTag Old_F_ID = type.Connect_F_ID;
					FGameplayTag Old_B_ID = type.Connect_B_ID;

					//��ͬ�����״̬
					TArray<FTileType> DirectionStates;
					for (int32 i : {0, 1, 2, 3})
					{
						//�����ж�ѭ��
						int32 break_i = -1;
						//�ж��Ƿ�Ϊ��Ա� ��ͬ������,�ж��Ƿ�Ϊ4����ȫ��ͬ
						if ((Old_L_ID == Old_R_ID && Old_F_ID == Old_B_ID) && Old_F_ID == Old_L_ID)
						{
							//4����ȫ��ͬ ֻ��һ��״̬ ����ת
							break_i = 1;
						}
						if ((Old_L_ID == Old_R_ID && Old_F_ID == Old_B_ID) && Old_F_ID != Old_L_ID)
						{
							//�ԳƱ���ͬ ֻ������״̬ ֻ��תһ��	
							break_i = 2;
						}
						if (i == break_i)
						{
							break;
						}


						if (i == 0)
						{
							//����ת
							type.DirectionOfRotation = 0;
						}
						else if (i == 1)
						{
							//˳ʱ����ת 90
							type.DirectionOfRotation = 1;
							type.Connect_F_ID = Old_L_ID;
							type.Connect_R_ID = Old_F_ID;
							type.Connect_B_ID = Old_R_ID;
							type.Connect_L_ID = Old_B_ID;
						}
						else if (i == 2)
						{
							//��ת180
							type.DirectionOfRotation = 2;
							type.Connect_F_ID = Old_B_ID;
							type.Connect_R_ID = Old_L_ID;
							type.Connect_B_ID = Old_F_ID;
							type.Connect_L_ID = Old_R_ID;
						}
						else if (i == 3)
						{
							//��ת270
							type.DirectionOfRotation = 3;
							type.Connect_F_ID = Old_R_ID;
							type.Connect_R_ID = Old_B_ID;
							type.Connect_B_ID = Old_L_ID;
							type.Connect_L_ID = Old_F_ID;
						}
						DirectionStates.Add(type);
					}
					//����״̬
					NewTile->MaybeStates.Append(DirectionStates);
				}

				//������ֵ
				NewTile->Entropy = CalculateEntropy(NewTile->MaybeStates);
				//��ӵ�����
				AllTiles.Add(NewTile);
				//HistoryMap.Add(FCacheTile(NewTile->MapCoordinate,))
				UE_LOG(LogTemp, Log, TEXT("������Ƭ��.. (%d, %d)"), X, Y);

			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Failed to spawn tile at coordinate (%d, %d)"), X, Y);
			}


		}
	}
	UE_LOG(LogTemp, Log, TEXT("�������"));
	//��ȡ����û���ݵ���Ƭ 
	TArray<AWFCTile*> NotCollapseTiles;
	for (AWFCTile* tile : AllTiles)
	{
		if (!tile->bIsCollapsed)
		{
			NotCollapseTiles.Add(tile);
		}
	}

	int32 NotCollapseTilesCount = NotCollapseTiles.Num();
	UE_LOG(LogTemp, Log, TEXT("û���ݵ���Ƭ����: %d"), NotCollapseTilesCount);

	while (NotCollapseTilesCount != 0)
	{
		UE_LOG(LogTemp, Log, TEXT("��ʼ��������: %d "), NotCollapseTilesCount);
		//�Ƿ��˻�
		bool IsRestoreTileStates = false;
		//��ȡ��С��ֵ��Ƭ
		AWFCTile* MinEntropyTile = GetTileWithMinimumEntropy(NotCollapseTiles);
		if (MinEntropyTile == nullptr)
		{
			UE_LOG(LogTemp, Error, TEXT("Error: No tile found with minimum entropy."));
			break;
		}

		//����״̬, ÿ������֮ǰ���浱ǰ״̬
		CacheTileStates(AllTiles);

		//����
		MinEntropyTile->Collapse();
		//��ȡ�ڱ���Ƭ
		TArray<AWFCTile*> NeighboringTiles = GetNeighboringTiles(MinEntropyTile);

		for (AWFCTile* NeighTile : NeighboringTiles)
		{
			TArray<FTileType> MaybeStates = NeighTile->MaybeStates;
			//����������Ƭ������ڱ���Ƭ �ߵ�����ID
			FGameplayTag ConnectID = MinEntropyTile->GetConnectTagToTile(NeighTile);

			int32 ConnectCount = MaybeStates.Num();
			//ɾ��������ӵ�״̬
			for (int32 i = MaybeStates.Num() - 1; i >= 0; i--)
			{
				FTileType state = MaybeStates[i];
				//�����ڱ���Ƭ�����������Ƭ �ߵ�����ID
				FGameplayTag IsCanConnectID = NeighTile->GetConnectTagToState(state, MinEntropyTile);
				//�ж��Ƿ�������
				if (!CanConnect(ConnectID, IsCanConnectID))
				{
					//������ӵ��Ƴ���
					MaybeStates.RemoveAt(i);
				}
			}
			//����AllTiles�е���Ƭ��Ϣ
			NeighTile->MaybeStates = MaybeStates;

			//���¼�����ֵ
			if (ConnectCount != MaybeStates.Num())
			{
				NeighTile->Entropy = CalculateEntropy(MaybeStates);
			}

			if (MaybeStates.Num() == 0)
			{
				//�޽� ����
				//FMapRow Cache = HistoryMap[HistoryMap.Num() - 1];
				//����û���ݵ�����
				RestoreTileStates(AllTiles);
				NotCollapseTilesCount++;
				//Ѱ�ұ������Ƭ���˻�����
				//AllTiles = Cache.Tiles;
				IsRestoreTileStates = true;
				break;
			}

		}
		if (!IsRestoreTileStates)
		{
			//����û���ݵ�����
			NotCollapseTilesCount--;

		}
		//����û���ݵ���Ƭ���� 
		NotCollapseTiles.Empty();
		for (AWFCTile* tile : AllTiles)
		{
			if (!tile->bIsCollapsed)
			{
				NotCollapseTiles.Add(tile);
			}
		}
	}

	UE_LOG(LogTemp, Log, TEXT("��ɴ���"));

}

//����Ȩ��
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

//��ȡ��С����ֵ
AWFCTile* AWFCMap::GetTileWithMinimumEntropy(TArray<AWFCTile*> Tiles)
{
	// ��ӷ�����
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
			//�����Ѿ����ݵ���Ƭ
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
	CachedTileStates.Empty(); // ���֮ǰ�Ļ�������

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


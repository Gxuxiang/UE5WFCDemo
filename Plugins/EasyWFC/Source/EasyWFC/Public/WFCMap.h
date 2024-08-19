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

// ��Ƭ״̬��Ϣ�Ľṹ��
struct FCachedTileState
{
	FVector2D MapCoordinate;
	FTileType CollapseState;
	bool bIsCollapsed;
	TArray<FTileType> MaybeStates;
};

/**
	������̮�� ��ͼ
*/
UCLASS()
class EASYWFC_API AWFCMap : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWFCMap();

	// ��ͼ��С
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFCMap")
	FVector2D MapSize;

	// ��Ƭ���
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFCMap")
	float TileSize;

	//���е���Ƭ
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFCMap")
	TArray<AWFCTile*> AllTiles;

	//��ʼ����Ƭ
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFCMap")
	TArray<AWFCTile*> InitTiles;

	//���ӱ����͵ı��
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFCMap")
	UDataTable* ConnectStatsTable;

	//��Ƭ���ͱ��
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFCMap")
	UDataTable* TileStatsTable;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFCMap")
	TArray<FMapRow> HistoryMap;*/

	// �������д�ש״̬������
	TArray<FCachedTileState> CachedTileStates;

	//���е���������
	TArray<FConnectType> AllConnectStats;

	// ��ʼ��
	void InitializeMap();

	//������ֵ
	float CalculateEntropy(TArray<FTileType>);

	//��ȡ��ֵ��С����Ƭ
	AWFCTile* GetTileWithMinimumEntropy(TArray<AWFCTile*> Tiles);

	//��ȡ���ڵ���Ƭ
	TArray<AWFCTile*> GetNeighboringTiles(AWFCTile* TargetTile);

	//�ж��Ƿ�������
	bool CanConnect(FGameplayTag ID, FGameplayTag ConnectID);


	// ������Ƭ״̬�ķ���
	void CacheTileStates(TArray<AWFCTile*>& AllTiles);

	// �ָ���Ƭ״̬�ķ���
	void RestoreTileStates(TArray<AWFCTile*>& AllTiles);



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

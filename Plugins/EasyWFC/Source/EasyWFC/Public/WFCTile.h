
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "WFCTile.generated.h"


USTRUCT(BlueprintType)
struct FConnectType : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	FGameplayTag ID;

	//可以连接此边的边ID
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	FGameplayTag CanConnectID;
};


USTRUCT(BlueprintType)
struct FTileType : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	UStaticMesh* Mesh;

	/** 旋转方向 (0=右, 1=上, 2=左, 3=下) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	int32 DirectionOfRotation;

	//权重
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	float Weight;

	// 连接边
	// 左边的边
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	FGameplayTag Connect_L_ID;

	// 右边的边
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	FGameplayTag Connect_R_ID;

	// 前面边的边
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	FGameplayTag Connect_F_ID;

	// 后面边的边
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	FGameplayTag Connect_B_ID;

	// 重载 == 运算符
	bool operator==(const FTileType& Other) const
	{
		return Mesh == Other.Mesh &&
			DirectionOfRotation == Other.DirectionOfRotation &&
			Weight == Other.Weight &&
			Connect_L_ID == Other.Connect_L_ID &&
			Connect_R_ID == Other.Connect_R_ID &&
			Connect_F_ID == Other.Connect_F_ID &&
			Connect_B_ID == Other.Connect_B_ID;
	}
};

//USTRUCT(BlueprintType)
//struct FCacheTile 
//{
//	GENERATED_BODY()
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
//	FVector2D MapCoordinate;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
//	FTileType state;
//};

/**
 地图 瓦片
*/
UCLASS()
class EASYWFC_API AWFCTile : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWFCTile();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	UStaticMeshComponent* StaticMeshComponent;

	/** 瓦片在地图上的坐标 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	FVector2D MapCoordinate;

	/** 熵值，用于Wave Function Collapse算法 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	float Entropy;

	/** 标识此瓦片是否已经塌陷 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	bool bIsCollapsed;

	/** 当前塌陷的状态（相接边 + 网格体 + 旋转方向） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	FTileType CollapseState;

	/** 可能的状态集合 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	TArray<FTileType> MaybeStates;


	//塌陷函数
	void Collapse();

	//已经塌陷返回要判断的边tag
	FGameplayTag GetConnectTagToTile(AWFCTile* NeighboringTile);

	//未塌陷返回要判断的状态tag
	FGameplayTag GetConnectTagToState(FTileType state, AWFCTile* NeighboringTile);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};


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

	//�������Ӵ˱ߵı�ID
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	FGameplayTag CanConnectID;
};


USTRUCT(BlueprintType)
struct FTileType : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	UStaticMesh* Mesh;

	/** ��ת���� (0=��, 1=��, 2=��, 3=��) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	int32 DirectionOfRotation;

	//Ȩ��
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	float Weight;

	// ���ӱ�
	// ��ߵı�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	FGameplayTag Connect_L_ID;

	// �ұߵı�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	FGameplayTag Connect_R_ID;

	// ǰ��ߵı�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	FGameplayTag Connect_F_ID;

	// ����ߵı�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	FGameplayTag Connect_B_ID;

	// ���� == �����
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
 ��ͼ ��Ƭ
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

	/** ��Ƭ�ڵ�ͼ�ϵ����� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	FVector2D MapCoordinate;

	/** ��ֵ������Wave Function Collapse�㷨 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	float Entropy;

	/** ��ʶ����Ƭ�Ƿ��Ѿ����� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	bool bIsCollapsed;

	/** ��ǰ���ݵ�״̬����ӱ� + ������ + ��ת���� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	FTileType CollapseState;

	/** ���ܵ�״̬���� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WFC")
	TArray<FTileType> MaybeStates;


	//���ݺ���
	void Collapse();

	//�Ѿ����ݷ���Ҫ�жϵı�tag
	FGameplayTag GetConnectTagToTile(AWFCTile* NeighboringTile);

	//δ���ݷ���Ҫ�жϵ�״̬tag
	FGameplayTag GetConnectTagToState(FTileType state, AWFCTile* NeighboringTile);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

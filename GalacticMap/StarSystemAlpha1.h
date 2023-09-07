#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Object.h"

namespace GalacticMap
{
    UCLASS()
    class YOURPROJECT_API UStarSystemAlpha1 : public UObject
    {
        GENERATED_BODY()

    public:
        // Coordinates of the Star System
        UPROPERTY()
        FVector Coordinates;

        // Dominant Species in the Star System
        UPROPERTY()
        FString DominantSpecies;

        // Resource Abundance in the Star System
        UPROPERTY()
        FString ResourceAbundance;

        // Political Climate of the Star System
        UPROPERTY()
        FString PoliticalClimate;

        // Serialization to save the state of the Star System
        UFUNCTION()
        void Serialize(TArray<uint8>& OutData);

        // Deserialization to load the state of the Star System
        UFUNCTION()
        void Deserialize(const TArray<uint8>& InData);

        // Constructor
        UStarSystemAlpha1();
    };
}

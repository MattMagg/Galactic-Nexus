#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Object.h"
#include "StarSystemAlpha1.h"
#include "AsteroidBelt.h"
#include "Nebula.h"
#include "PointOfInterest.h"

namespace GalacticMap
{
    UCLASS()
    class YOURPROJECT_API UQuadrantAlpha : public UObject
    {
        GENERATED_BODY()

    public:
        // Description of the Quadrant
        UPROPERTY()
        FString Description;

        // Star Systems in the Quadrant
        UPROPERTY()
        TArray<UStarSystemAlpha1*> StarSystems;

        // Additional Features in the Quadrant
        UPROPERTY()
        TArray<UAsteroidBelt*> AsteroidBelts;
        UPROPERTY()
        TArray<UNebula*> Nebulas;
        UPROPERTY()
        TArray<UPointOfInterest*> PointsOfInterest;

        // Serialization to save the state of the Quadrant
        UFUNCTION()
        void Serialize(TArray<uint8>& OutData);

        // Deserialization to load the state of the Quadrant
        UFUNCTION()
        void Deserialize(const TArray<uint8>& InData);

        // Constructor
        UQuadrantAlpha();
    };
}

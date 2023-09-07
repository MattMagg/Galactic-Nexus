#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Object.h"
#include <vector>

namespace GalacticMap
{
    UCLASS()
    class YOURPROJECT_API UStarSystem : public UObject
    {
        GENERATED_BODY()

    public:
        // Name of the Star System
        UPROPERTY()
        FString Name;

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

        // Vector to hold Planets
        std::vector<class UPlanet*> Planets;

        // Constructor
        UStarSystem();

        // Functions to manipulate and query the Star System
        UFUNCTION()
        void AddPlanet(class UPlanet* NewPlanet);

        UFUNCTION()
        void RemovePlanet(class UPlanet* PlanetToRemove);

        UFUNCTION()
        UPlanet* FindPlanetByName(FString PlanetName);

        // Serialization to save the state of the Star System
UFUNCTION()
void Serialize(TArray<uint8>& OutData);

// Deserialization to load the state of the Star System
UFUNCTION()
void Deserialize(const TArray<uint8>& InData);

// Query function to get the number of Planets
UFUNCTION()
int32 GetNumberOfPlanets() const;

    };
}

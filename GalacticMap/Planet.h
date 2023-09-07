#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Object.h"
#include <vector>

namespace GalacticMap
{
    UCLASS()
    class YOURPROJECT_API UPlanet : public UObject
    {
        GENERATED_BODY()

    public:
        // Name of the Planet
        UPROPERTY()
        FString Name;

        // Orbital Radius of the Planet
        UPROPERTY()
        float OrbitalRadius;

        // Atmosphere of the Planet
        UPROPERTY()
        FString Atmosphere;

        // Number of Natural Satellites
        UPROPERTY()
        int32 NaturalSatellites;

        // Constructor
        UPlanet();

        // Functions to manipulate and query the Planet
        UFUNCTION()
        void AddNaturalSatellite(class UNaturalSatellite* NewSatellite);

        UFUNCTION()
        void RemoveNaturalSatellite(class UNaturalSatellite* SatelliteToRemove);

        UFUNCTION()
        UNaturalSatellite* FindSatelliteByName(FString SatelliteName);

        // Serialization to save the state of the Planet
UFUNCTION()
void Serialize(TArray<uint8>& OutData);

// Deserialization to load the state of the Planet
UFUNCTION()
void Deserialize(const TArray<uint8>& InData);

// Query function to get the number of Natural Satellites
UFUNCTION()
int32 GetNumberOfNaturalSatellites() const;

    };
}

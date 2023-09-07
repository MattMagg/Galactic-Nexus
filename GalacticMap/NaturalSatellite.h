#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Object.h"

namespace GalacticMap
{
    UCLASS()
    class YOURPROJECT_API UNaturalSatellite : public UObject
    {
        GENERATED_BODY()

    public:
        // Name of the Natural Satellite
        UPROPERTY()
        FString Name;

        // Orbital Radius of the Natural Satellite
        UPROPERTY()
        float OrbitalRadius;

        // Atmosphere of the Natural Satellite
        UPROPERTY()
        FString Atmosphere;

        // Constructor
        UNaturalSatellite();

        // Serialization to save the state of the Natural Satellite
UFUNCTION()
void Serialize(TArray<uint8>& OutData);

// Deserialization to load the state of the Natural Satellite
UFUNCTION()
void Deserialize(const TArray<uint8>& InData);

    };
}

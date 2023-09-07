#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Object.h"

namespace GalacticMap
{
    UCLASS()
    class YOURPROJECT_API UPlanetAlpha1A : public UObject
    {
        GENERATED_BODY()

    public:
        // Orbital Radius of the Planet
        UPROPERTY()
        float OrbitalRadius;

        // Type of Atmosphere on the Planet
        UPROPERTY()
        FString Atmosphere;

        // Number of Natural Satellites
        UPROPERTY()
        int32 NaturalSatellites;

        // Serialization to save the state of the Planet
        UFUNCTION()
        void Serialize(TArray<uint8>& OutData);

        // Deserialization to load the state of the Planet
        UFUNCTION()
        void Deserialize(const TArray<uint8>& InData);

        // Constructor
        UPlanetAlpha1A();
    };
}

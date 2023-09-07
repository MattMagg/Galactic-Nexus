#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Object.h"

namespace GalacticMap
{
    UCLASS()
    class YOURPROJECT_API UAdditionalFeature : public UObject
    {
        GENERATED_BODY()

    public:
        // Name of the Additional Feature
        UPROPERTY()
        FString Name;

        // Type of the Additional Feature (e.g., Asteroid Belt, Nebula)
        UPROPERTY()
        FString Type;

        // Description of the Additional Feature
        UPROPERTY()
        FString Description;

        // Dependencies if any (e.g., proximity to star systems)
        UPROPERTY()
        FString Dependencies;

        // Constructor
        UAdditionalFeature();

        // Serialization to save the state of the Additional Feature
UFUNCTION()
void Serialize(TArray<uint8>& OutData);

// Deserialization to load the state of the Additional Feature
UFUNCTION()
void Deserialize(const TArray<uint8>& InData);

    };
}

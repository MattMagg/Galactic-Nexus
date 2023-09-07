#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Object.h"

namespace GalacticMap
{
    UCLASS()
    class YOURPROJECT_API UAsteroidBelt : public UObject
    {
        GENERATED_BODY()

    public:
        // Description of the Asteroid Belt
        UPROPERTY()
        FString Description;

        // Composition of the Asteroid Belt
        UPROPERTY()
        TArray<FString> Composition;

        // Resource Abundance in the Asteroid Belt
        UPROPERTY()
        FString ResourceAbundance;

        // Strategic Importance of the Asteroid Belt
        UPROPERTY()
        FString StrategicImportance;

        // Serialization to save the state of the Asteroid Belt
        UFUNCTION()
        void Serialize(TArray<uint8>& OutData);

        // Deserialization to load the state of the Asteroid Belt
        UFUNCTION()
        void Deserialize(const TArray<uint8>& InData);

        // Constructor
        UAsteroidBelt();
    };
}

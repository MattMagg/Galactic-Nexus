#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Object.h"

namespace GalacticMap
{
    UCLASS()
    class YOURPROJECT_API UNebula : public UObject
    {
        GENERATED_BODY()

    public:
        // Description of the Nebula
        UPROPERTY()
        FString Description;

        // Types of Cosmic Phenomena in the Nebula
        UPROPERTY()
        TArray<FString> CosmicPhenomena;

        // Visibility of the Nebula
        UPROPERTY()
        FString Visibility;

        // Resource Availability in the Nebula
        UPROPERTY()
        FString ResourceAvailability;

        // Serialization to save the state of the Nebula
        UFUNCTION()
        void Serialize(TArray<uint8>& OutData);

        // Deserialization to load the state of the Nebula
        UFUNCTION()
        void Deserialize(const TArray<uint8>& InData);

        // Constructor
        UNebula();
    };
}

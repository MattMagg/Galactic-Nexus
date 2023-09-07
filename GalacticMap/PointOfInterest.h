#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Object.h"

namespace GalacticMap
{
    UCLASS()
    class YOURPROJECT_API UPointOfInterest : public UObject
    {
        GENERATED_BODY()

    public:
        // Description of the Point of Interest
        UPROPERTY()
        FString Description;

        // Significance of the Point of Interest
        UPROPERTY()
        FString Significance;

        // Accessibility of the Point of Interest
        UPROPERTY()
        FString Accessibility;

        // Quest Relevance of the Point of Interest
        UPROPERTY()
        FString QuestRelevance;

        // Serialization to save the state of the Point of Interest
        UFUNCTION()
        void Serialize(TArray<uint8>& OutData);

        // Deserialization to load the state of the Point of Interest
        UFUNCTION()
        void Deserialize(const TArray<uint8>& InData);

        // Constructor
        UPointOfInterest();
    };
}

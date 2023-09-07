#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Object.h"
#include <vector>

namespace GalacticMap
{
    UCLASS()
    class YOURPROJECT_API UQuadrant : public UObject
    {
        GENERATED_BODY()

    public:
        // Name of the Quadrant
        UPROPERTY()
        FString Name;

        // Vector to hold Star Systems
        std::vector<class UStarSystem*> StarSystems;

        // Vector to hold Additional Features
        std::vector<class UAdditionalFeature*> AdditionalFeatures;

        // Constructor
        UQuadrant();

        // Functions to manipulate and query the Quadrant
        UFUNCTION()
        void AddStarSystem(class UStarSystem* NewStarSystem);

        UFUNCTION()
        void RemoveStarSystem(class UStarSystem* StarSystemToRemove);

        UFUNCTION()
        void AddAdditionalFeature(class UAdditionalFeature* NewFeature);

        UFUNCTION()
        void RemoveAdditionalFeature(class UAdditionalFeature* FeatureToRemove);

        UFUNCTION()
        UStarSystem* FindStarSystemByName(FString StarSystemName);

        UFUNCTION()
        UAdditionalFeature* FindFeatureByName(FString FeatureName);

        // Serialization to save the state of the Quadrant
UFUNCTION()
void Serialize(TArray<uint8>& OutData);

// Deserialization to load the state of the Quadrant
UFUNCTION()
void Deserialize(const TArray<uint8>& InData);

// Query function to get the number of Star Systems
UFUNCTION()
int32 GetNumberOfStarSystems() const;

// Query function to get the number of Planets
UFUNCTION()
int32 GetNumberOfPlanets() const;

// Query function to get the number of Additional Features
UFUNCTION()
int32 GetNumberOfAdditionalFeatures() const;

    };
}

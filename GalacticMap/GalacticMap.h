#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Object.h"
#include <vector>

namespace GalacticMap
{
    UCLASS()
    class YOURPROJECT_API UGalacticMap : public UObject
    {
        GENERATED_BODY()

    public:
        // Vector to hold Quadrants
        std::vector<class UQuadrant*> Quadrants;

        // Vector to hold Additional Features
        std::vector<class UAdditionalFeature*> AdditionalFeatures;

        // Constructor
        UGalacticMap();

        // Functions to manipulate and query the Galactic Map
        UFUNCTION()
        void AddQuadrant(class UQuadrant* NewQuadrant);

        UFUNCTION()
        void RemoveQuadrant(class UQuadrant* QuadrantToRemove);

        UFUNCTION()
        void AddAdditionalFeature(class UAdditionalFeature* NewFeature);

        UFUNCTION()
        void RemoveAdditionalFeature(class UAdditionalFeature* FeatureToRemove);

        UFUNCTION()
        UQuadrant* FindQuadrantByName(FString QuadrantName);

        UFUNCTION()
        UAdditionalFeature* FindFeatureByName(FString FeatureName);

        // Serialization to save the state of the Galactic Map
        UFUNCTION()
        void Serialize(TArray<uint8>& OutData);

        // Deserialization to load the state of the Galactic Map
        UFUNCTION()
        void Deserialize(const TArray<uint8>& InData);

        // Query function to get the number of Quadrants
        UFUNCTION()
        int32 GetNumberOfQuadrants() const;

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

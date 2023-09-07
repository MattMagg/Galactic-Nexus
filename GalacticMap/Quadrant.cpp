#include "Quadrant.h"
#include "StarSystem.h"  // Include this if you've already created the StarSystem class
#include "AdditionalFeature.h"  // Include this if you've already created the AdditionalFeature class

namespace GalacticMap
{
    // Constructor
    UQuadrant::UQuadrant()
    {
        // Initialization code here
    }

    // Add a new Star System to the Quadrant
    void UQuadrant::AddStarSystem(UStarSystem* NewStarSystem)
    {
        StarSystems.push_back(NewStarSystem);
    }

    // Remove a Star System from the Quadrant
    void UQuadrant::RemoveStarSystem(UStarSystem* StarSystemToRemove)
    {
        StarSystems.erase(std::remove(StarSystems.begin(), StarSystems.end(), StarSystemToRemove), StarSystems.end());
    }

    // Add a new Additional Feature to the Quadrant
    void UQuadrant::AddAdditionalFeature(UAdditionalFeature* NewFeature)
    {
        AdditionalFeatures.push_back(NewFeature);
    }

    // Remove an Additional Feature from the Quadrant
    void UQuadrant::RemoveAdditionalFeature(UAdditionalFeature* FeatureToRemove)
    {
        AdditionalFeatures.erase(std::remove(AdditionalFeatures.begin(), AdditionalFeatures.end(), FeatureToRemove), AdditionalFeatures.end());
    }

    // Find a Star System by its name
    UStarSystem* UQuadrant::FindStarSystemByName(FString StarSystemName)
    {
        for (auto& StarSystem : StarSystems)
        {
            if (StarSystem->Name == StarSystemName)
            {
                return StarSystem;
            }
        }
        return nullptr;
    }

    // Find an Additional Feature by its name
    UAdditionalFeature* UQuadrant::FindFeatureByName(FString FeatureName)
    {
        for (auto& Feature : AdditionalFeatures)
        {
            if (Feature->Name == FeatureName)
            {
                return Feature;
            }
        }
        return nullptr;
    }

// Serialization function
void UQuadrant::Serialize(TArray<uint8>& OutData)
{
    // Serialization logic here
}

// Deserialization function
void UQuadrant::Deserialize(const TArray<uint8>& InData)
{
    // Deserialization logic here
}

// Query Functions
int32 UQuadrant::GetNumberOfStarSystems() const
{
    return StarSystems.size();
}

int32 UQuadrant::GetNumberOfPlanets() const
{
    int32 Count = 0;
    for (auto& StarSystem : StarSystems)
    {
        Count += StarSystem->Planets.size();
    }
    return Count;
}

int32 UQuadrant::GetNumberOfAdditionalFeatures() const
{
    return AdditionalFeatures.size();
}

}

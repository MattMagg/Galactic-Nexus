#include "GalacticMap.h"
#include "Quadrant.h"  // Include this if you've already created the Quadrant class
#include "AdditionalFeature.h"  // Include this if you've already created the AdditionalFeature class

namespace GalacticMap
{
    // Constructor
    UGalacticMap::UGalacticMap()
    {
        // Initialization code here
    }

    // Add a new Quadrant to the Galactic Map
    void UGalacticMap::AddQuadrant(UQuadrant* NewQuadrant)
    {
        Quadrants.push_back(NewQuadrant);
    }

    // Remove a Quadrant from the Galactic Map
    void UGalacticMap::RemoveQuadrant(UQuadrant* QuadrantToRemove)
    {
        Quadrants.erase(std::remove(Quadrants.begin(), Quadrants.end(), QuadrantToRemove), Quadrants.end());
    }

    // Add a new Additional Feature to the Galactic Map
    void UGalacticMap::AddAdditionalFeature(UAdditionalFeature* NewFeature)
    {
        AdditionalFeatures.push_back(NewFeature);
    }

    // Remove an Additional Feature from the Galactic Map
    void UGalacticMap::RemoveAdditionalFeature(UAdditionalFeature* FeatureToRemove)
    {
        AdditionalFeatures.erase(std::remove(AdditionalFeatures.begin(), AdditionalFeatures.end(), FeatureToRemove), AdditionalFeatures.end());
    }

    // Find a Quadrant by its name
    UQuadrant* UGalacticMap::FindQuadrantByName(FString QuadrantName)
    {
        for (auto& Quadrant : Quadrants)
        {
            if (Quadrant->Name == QuadrantName)
            {
                return Quadrant;
            }
        }
        return nullptr;
    }

    // Find an Additional Feature by its name
    UAdditionalFeature* UGalacticMap::FindFeatureByName(FString FeatureName)
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
    void UGalacticMap::Serialize(TArray<uint8>& OutData)
    {
        // Convert each Quadrant and AdditionalFeature to a byte array and append it to OutData
        // You can use each class's Serialize method to do this
        for (auto& Quadrant : Quadrants)
        {
            Quadrant->Serialize(OutData);
        }
        for (auto& Feature : AdditionalFeatures)
        {
            Feature->Serialize(OutData);
        }
    }

    // Deserialization function
    void UGalacticMap::Deserialize(const TArray<uint8>& InData)
    {
        // Clear current state
        Quadrants.clear();
        AdditionalFeatures.clear();

        // Convert the byte array back into Quadrants and AdditionalFeatures
        // You can use each class's Deserialize method to do this
        // Note: You'll need to know the size of each serialized object to do this correctly
        // ...
    }

// Query Functions
int32 UGalacticMap::GetNumberOfQuadrants() const
{
    return Quadrants.size();
}

int32 UGalacticMap::GetNumberOfStarSystems() const
{
    int32 Count = 0;
    for (auto& Quadrant : Quadrants)
    {
        Count += Quadrant->StarSystems.size();
    }
    return Count;
}

int32 UGalacticMap::GetNumberOfPlanets() const
{
    int32 Count = 0;
    for (auto& Quadrant : Quadrants)
    {
        for (auto& StarSystem : Quadrant->StarSystems)
        {
            Count += StarSystem->Planets.size();
        }
    }
    return Count;
}

int32 UGalacticMap::GetNumberOfAdditionalFeatures() const
{
    int32 Count = 0;
    for (auto& Quadrant : Quadrants)
    {
        Count += Quadrant->AdditionalFeatures.size();
    }
    return Count;
}

}

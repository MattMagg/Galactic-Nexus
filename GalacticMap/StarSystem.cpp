#include "StarSystem.h"
#include "Planet.h"  // Include this if you've already created the Planet class

namespace GalacticMap
{
    // Constructor
    UStarSystem::UStarSystem()
    {
        // Initialization code here
    }

    // Add a new Planet to the Star System
    void UStarSystem::AddPlanet(UPlanet* NewPlanet)
    {
        Planets.push_back(NewPlanet);
    }

    // Remove a Planet from the Star System
    void UStarSystem::RemovePlanet(UPlanet* PlanetToRemove)
    {
        Planets.erase(std::remove(Planets.begin(), Planets.end(), PlanetToRemove), Planets.end());
    }

    // Find a Planet by its name
    UPlanet* UStarSystem::FindPlanetByName(FString PlanetName)
    {
        for (auto& Planet : Planets)
        {
            if (Planet->Name == PlanetName)
            {
                return Planet;
            }
        }
        return nullptr;
    }

    // Serialization function
void UStarSystem::Serialize(TArray<uint8>& OutData)
{
    // Serialization logic here
}

// Deserialization function
void UStarSystem::Deserialize(const TArray<uint8>& InData)
{
    // Deserialization logic here
}

// Query Function
int32 UStarSystem::GetNumberOfPlanets() const
{
    return Planets.size();
}

}

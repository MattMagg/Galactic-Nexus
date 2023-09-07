#include "Planet.h"
#include "NaturalSatellite.h"  // Include this if you've already created the NaturalSatellite class

namespace GalacticMap
{
    // Constructor
    UPlanet::UPlanet()
    {
        // Initialization code here
    }

    // Add a new Natural Satellite to the Planet
    void UPlanet::AddNaturalSatellite(UNaturalSatellite* NewSatellite)
    {
        NaturalSatellites.push_back(NewSatellite);
    }

    // Remove a Natural Satellite from the Planet
    void UPlanet::RemoveNaturalSatellite(UNaturalSatellite* SatelliteToRemove)
    {
        NaturalSatellites.erase(std::remove(NaturalSatellites.begin(), NaturalSatellites.end(), SatelliteToRemove), NaturalSatellites.end());
    }

    // Find a Natural Satellite by its name
    UNaturalSatellite* UPlanet::FindSatelliteByName(FString SatelliteName)
    {
        for (auto& Satellite : NaturalSatellites)
        {
            if (Satellite->Name == SatelliteName)
            {
                return Satellite;
            }
        }
        return nullptr;
    }

    // Serialization function
void UPlanet::Serialize(TArray<uint8>& OutData)
{
    // Serialization logic here
}

// Deserialization function
void UPlanet::Deserialize(const TArray<uint8>& InData)
{
    // Deserialization logic here
}

// Query Function
int32 UPlanet::GetNumberOfNaturalSatellites() const
{
    return NaturalSatellites.size();
}

}

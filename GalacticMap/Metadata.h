#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Object.h"
#include "JsonUtilities.h"
#include "JsonReader.h"
#include "JsonSerializer.h"

namespace GalacticMap
{
    UCLASS()
    class YOURPROJECT_API UMetadata : public UObject
    {
        GENERATED_BODY()

    public:
        // Tag for the Metadata
        UPROPERTY()
        FString Tag;

        // Type of data stored
        UPROPERTY()
        TArray<FString> Type;

        // Description of the Metadata
        UPROPERTY()
        FString Description;

        // Serialization to save the state of the Metadata
        UFUNCTION()
        void Serialize(TArray<uint8>& OutData);

        // Deserialization to load the state of the Metadata
        UFUNCTION()
        void Deserialize(const TArray<uint8>& InData);

        // Function to parse JSON data
        UFUNCTION()
        void ParseFromJSON(const TSharedPtr<FJsonObject>& JsonObject);

        // Constructor
        UMetadata();
    };
}

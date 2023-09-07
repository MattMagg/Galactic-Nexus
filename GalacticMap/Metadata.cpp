#include "Metadata.h"

namespace GalacticMap
{
    // Constructor
    UMetadata::UMetadata()
    {
        // Initialization code here
    }

    // Serialization function
    void UMetadata::Serialize(TArray<uint8>& OutData)
    {
        // Serialization logic here
    }

    // Deserialization function
    void UMetadata::Deserialize(const TArray<uint8>& InData)
    {
        // Deserialization logic here
    }

    void UMetadata::ParseFromJSON(const TSharedPtr<FJsonObject>& JsonObject)
{
    if (JsonObject.IsValid())
    {
        Tag = JsonObject->GetStringField("tag");
        Description = JsonObject->GetStringField("description");

        const TArray<TSharedPtr<FJsonValue>> JsonArray = JsonObject->GetArrayField("type");
        for (const auto& Value : JsonArray)
        {
            Type.Add(Value->AsString());
        }
    }
}

}

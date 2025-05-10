// Copyright Zibra AI, Inc 2022. All Rights Reserved.

#include "ZibraHTTPService.h"
#include "Misc/Base64.h"
#include "ZibraNotifications.h"
#include "ZibraNeuralCollider.h"
#include "Interfaces/IPluginManager.h"
TMap<int32, UZibraHTTPService*> UZibraHTTPService::Instances = TMap<int32, UZibraHTTPService*>();
int32 UZibraHTTPService::LastID = 0;
const FString UZibraHTTPService::base64_chars =
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz"
"0123456789+/";

const char* UZibraHTTPService::ApiBaseUrl = "https://generation.zibra.ai/";
EZibraLicenseKeyStatus UZibraHTTPService::CurrentStatus = EZibraLicenseKeyStatus::EZibraLicenseKeyStatus_OK;//Neb:EZibraLicenseKeyStatus::EZibraLicenseKeyStatus_NotInitialized;
FString UZibraHTTPService::GenerationURL = "";
FString UZibraHTTPService::PluginLicenseKey = TEXT("Neb: The licensing system of the plug-in is terrible! I'll never buy the plug-in becase of it! 8(");//Neb:TEXT("");
bool UZibraHTTPService::bIsLicenseKeyValid = true;//Neb:false;

void UZibraHTTPService::SendRequest(AActor* Actor)
{
	Http = &FHttpModule::Get(); 

	UStaticMesh* StaticMesh = GetStaticMesh(Actor);
	
	FZibraRequest_Content json = GetMeshContent(StaticMesh);
	if (!json.faces.IsEmpty())
	{
		SendPostRequest(json);
	}
	else
	{
		UE_LOG(LogZibraAILiquidRuntime, Error, TEXT("Problem in json generation"));
	}
}

UStaticMesh* UZibraHTTPService::GetStaticMesh(AActor* Actor)
{
	TArray<UStaticMeshComponent*> Components;
	Actor->GetComponents<UStaticMeshComponent>(Components);

	UStaticMeshComponent* StaticMeshComponent = Components[0];
	return StaticMeshComponent->GetStaticMesh();
}

FString UZibraHTTPService::CreateGenerationRequestURL()
{
	if (GenerationURL != "")
		return GenerationURL;

	GenerationURL = FString(ApiBaseUrl + FString("api/unreal/compute?"));

	GenerationURL += "&hardware_id=" + FGenericPlatformMisc::GetLoginId();
	

	if (PluginLicenseKey != "")
	{
		GenerationURL += "&api_key=" + PluginLicenseKey;
	}

	return GenerationURL;
}

FZibraRequest_Content UZibraHTTPService::GetMeshContent(UStaticMesh* StaticMesh)
{
	FZibraRequest_Content content;
	content.faces = TEXT("");
	content.vertices = TEXT("");
	content.vox_dim = UZibraNeuralCollider::GetEmbeddingGridDimension();
	content.sdf_dim = UZibraNeuralCollider::GetSDFAPXDimension();

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION  <= 26
	FPositionVertexBuffer* VertexBuffer =  &StaticMesh->RenderData->LODResources[0].VertexBuffers.PositionVertexBuffer;
	FRawStaticIndexBuffer* IndexBuffer =  &StaticMesh->RenderData->LODResources[0].IndexBuffer;
#else
	FPositionVertexBuffer* VertexBuffer = &StaticMesh->GetRenderData()->LODResources[0].VertexBuffers.PositionVertexBuffer;
	FRawStaticIndexBuffer* IndexBuffer = &StaticMesh->GetRenderData()->LODResources[0].IndexBuffer;
#endif
	//Vertices 
	const int32 VertexCount = VertexBuffer->GetNumVertices();

	TArray<ZibraVector3> VertexArray = TArray<ZibraVector3>();

	for (int32 Index = 0; Index < VertexCount; Index++)
	{
		const ZibraVector3 Position = (ZibraVector3)VertexBuffer->VertexPosition(Index);
		VertexArray.Add(ZibraVector3(Position.X, Position.Y, Position.Z));
	} 

	unsigned char const * vertices = reinterpret_cast<unsigned char const *>(&VertexArray[0]);
	TArray<unsigned char> VertexBytes;

	for (int32 j = 0; j < VertexArray.Num() * 3; j++)
	{
		VertexBytes.Add(vertices[j]);
	}

	FString VertexEncoded = base64_encode(vertices, 12 * VertexArray.Num());

	//Indicies
	TArray<uint32> IndexArray = TArray<uint32>();

	const int32 IndexCount = IndexBuffer->GetNumIndices();
	for (int32 Index = 0; Index < IndexCount; Index++)
	{
		IndexArray.Add(IndexBuffer->GetIndex(Index));
	}

	unsigned char const * indices = reinterpret_cast<unsigned char const *>(&IndexArray[0]);
	TArray<unsigned char> IndexBytes;
	for (int32 j = 0; j < IndexArray.Num(); j++)
	{
		IndexBytes.Add(indices[j]);
	}

	FString IndexEncoded = base64_encode(indices, IndexArray.GetTypeSize() * IndexArray.Num());

	content.faces = IndexEncoded;
	content.vertices = VertexEncoded;
	return content;
}

FString UZibraHTTPService::base64_encode(unsigned char const* bytes_to_encode,  uint32 in_len) {
	FString ret;
	int i = 0;
	int j = 0;
	unsigned char char_array_3[3];
	unsigned char char_array_4[4];

	while (in_len--) {
		char_array_3[i++] = *(bytes_to_encode++);
		if (i == 3) {
			char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
			char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
			char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
			char_array_4[3] = char_array_3[2] & 0x3f;

			for(i = 0; (i <4) ; i++)
			ret += base64_chars[char_array_4[i]];
			i = 0;
		}
	}

	if (i)
	{
		for(j = i; j < 3; j++)
			char_array_3[j] = '\0';

		char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
		char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
		char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
		char_array_4[3] = char_array_3[2] & 0x3f;

		for (j = 0; (j < i + 1); j++)
			ret += base64_chars[char_array_4[j]];

		while((i++ < 3))
			ret += '=';
	}
	return ret;
}

FString UZibraHTTPService::Encode(TArray<FVector> InputArray) 
{
	uint8 const * bytes = reinterpret_cast<uint8 const *>(&InputArray[0]);
	return FBase64::Encode(bytes, InputArray.Num()*4);
}

FString UZibraHTTPService::Encode(TArray<uint32> InputArray) 
{
	uint8 const * bytes = reinterpret_cast<uint8 const *>(&InputArray[0]);
	return FBase64::Encode(bytes, InputArray.Num()*4);
}

TArray<float> UZibraHTTPService::DecodeFloat(FString InputString)
{
	TArray<uint8> bytes;
	FBase64::Decode(InputString, bytes);
	int32 elementCount = bytes.Num() / sizeof(float);
	float const * floats = reinterpret_cast<float const *>(&bytes[0]);
	return TArray<float>(floats, elementCount);
}

TArray<int32> UZibraHTTPService::DecodeInt(FString InputString)
{
	TArray<uint8> bytes;
	FBase64::Decode(InputString, bytes);
	int32 elementCount = bytes.Num() / sizeof(int32);
	int32 const * ints = reinterpret_cast<int32 const *>(&bytes[0]);
	TArray<int32> result = TArray<int32>(ints, elementCount);
	return result;
}

EZibraLicenseKeyStatus UZibraHTTPService::GetStatus()
{
	/*Neb:+*/ bInitialized = true; return CurrentStatus;
	if (CurrentStatus == EZibraLicenseKeyStatus::EZibraLicenseKeyStatus_NotInitialized || !bInitialized)
	{
		Initialize();
	}

	return CurrentStatus;
}

FString UZibraHTTPService::GetErrorMessage()
{
	switch (CurrentStatus)
	{
	case EZibraLicenseKeyStatus::EZibraLicenseKeyStatus_KeyValidationInProgress:
		return TEXT("License key validation in progress. Please wait.");
	case EZibraLicenseKeyStatus::EZibraLicenseKeyStatus_NetworkError:
		return TEXT("Network error. Please try again later.");
	case EZibraLicenseKeyStatus::EZibraLicenseKeyStatus_NotRegistered:
		return TEXT("Product is not registered.");
	default:
		return TEXT("");
	}
}

void UZibraHTTPService::Initialize()
{
	if (bInitialized)
		return;
	if (CurrentStatus != EZibraLicenseKeyStatus::EZibraLicenseKeyStatus_OK && CurrentStatus != EZibraLicenseKeyStatus::EZibraLicenseKeyStatus_KeyValidationInProgress)
	{
		LoadKey();
		SendVerificationRequest(PluginLicenseKey);
		bInitialized = true;
	}
}

FString UZibraHTTPService::GetPluginLicenseKey()
{
	return PluginLicenseKey;
}

void UZibraHTTPService::SetPluginLicenseKey(FString Key)
{
	int id = UZibraHTTPService::GetID();
	UZibraHTTPService::Get(id)->SendVerificationRequest(Key);
}

void UZibraHTTPService::SendPostRequest(FZibraRequest_Content content) {
	
	if (CurrentStatus != EZibraLicenseKeyStatus::EZibraLicenseKeyStatus_OK)
	{
		FString ErrorMessage = GetErrorMessage();
		UE_LOG(LogZibraAILiquidRuntime, Error, TEXT("%s"), *ErrorMessage);
		ZibraNotifications::AddNotification(GetErrorMessage());
		return;
	}
	if (!Http)
	{
		UE_LOG(LogZibraAILiquidRuntime, Error, TEXT("Http object not initialized!"));
		return;	
	}
	
	//Prepate content for request
	FString OutputString;
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);

	JsonObject->SetStringField(TEXT("vertices"), *content.vertices);
	JsonObject->SetStringField(TEXT("faces"), *content.faces);
	JsonObject->SetNumberField(TEXT("vox_dim"), content.vox_dim);
	JsonObject->SetNumberField(TEXT("sdf_dim"), content.sdf_dim);


	TSharedRef<TJsonWriter<TCHAR>> JsonWriter = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), JsonWriter);
	
	OutputString = OutputString.Replace(TEXT("+"), TEXT("%2B"), ESearchCase::CaseSensitive);

    FHttpRequestRef Request = Http->CreateRequest();
	Request->SetVerb("POST");

	Request->SetURL(GenerationURL);
	Request->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/x-www-form-urlencoded"));
 	Request->SetHeader(TEXT("Accepts"), TEXT("application/json"));
	Request->SetTimeout(45);
	Request->SetContentAsString(OutputString);
    Request->OnProcessRequestComplete().BindUObject(this, &UZibraHTTPService::GetPostResponse);
	Request->ProcessRequest();
}

void UZibraHTTPService::GetPostResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful) {
    if (!bWasSuccessful) 
	{
		UE_LOG(LogZibraAILiquidRuntime, Error, TEXT("Response Invalid!"));
		ProcessEmptyResponse();
		return;
	}

	ProcessResponse(Response->GetContentAsString());
}

void UZibraHTTPService::GetValidationResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (!bWasSuccessful)
	{
		UE_LOG(LogZibraAILiquidRuntime, Error, TEXT("Response Invalid!"));
		CurrentStatus = EZibraLicenseKeyStatus::EZibraLicenseKeyStatus_NetworkError;
		return;
	}
	ProcessValidationResponse(Response->GetContentAsString());
}

FString UZibraHTTPService::GetValidationURL(FString key)
{
	return FString(ApiBaseUrl + FString("api/apiKey?api_key=") + key + FString("&type=validation"));
}

void UZibraHTTPService::SendVerificationRequest(FString key)
{
	FString requestURL;
	if (key != "")
	{
		// check if key is valid
		requestURL = GetValidationURL(key);
	}
	else
	{
		CurrentStatus = EZibraLicenseKeyStatus::EZibraLicenseKeyStatus_NotRegistered;
		return;
	}

	Http = &FHttpModule::Get();

	FHttpRequestRef Request = Http->CreateRequest();
	Request->SetVerb("GET");
	Request->SetURL(requestURL);
	Request->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/x-www-form-urlencoded"));
	Request->SetHeader(TEXT("Accepts"), TEXT("application/json"));
	Request->SetTimeout(45);
	Request->OnProcessRequestComplete().BindUObject(this, &UZibraHTTPService::GetValidationResponse);
	Request->ProcessRequest();

	CurrentStatus = EZibraLicenseKeyStatus::EZibraLicenseKeyStatus_KeyValidationInProgress;
}

void UZibraHTTPService::ProcessResponse(FString Response)
{
	TSharedPtr<FJsonObject> JsonObj = MakeShareable(new FJsonObject());
 	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(*Response);

	if (FJsonSerializer::Deserialize(Reader, JsonObj))
	{
		FJsonObjectConverter::JsonObjectStringToUStruct(*Response, &ResponseData, 0, 0);

		OnDataProcessed.ExecuteIfBound(ResponseData.meshes_data[0]);
	}
	else
	{
		UE_LOG(LogZibraAILiquidRuntime, Error, TEXT("Error: %s"), *Response);
	}
}

void UZibraHTTPService::ProcessEmptyResponse()
{
	FZibraVoxel_Representation dummy;
	OnDataProcessed.ExecuteIfBound(dummy);


}

void UZibraHTTPService::SaveKey()
{
	
	FString Filename = "PluginLicenseKey.txt";
	const FString BaseDir = IPluginManager::Get().FindPlugin(TEXT("ZibraAILiquid"))->GetBaseDir();
	const FString KeyPath = FPaths::Combine(*BaseDir, TEXT("Content/ZibraLiquidContent/"));
	const FString FullyQualifiedFileNameFilename = FPaths::Combine(KeyPath, Filename);
	FFileHelper::SaveStringToFile(PluginLicenseKey, *FullyQualifiedFileNameFilename);
}

void UZibraHTTPService::LoadKey()
{
	FString Filename = "PluginLicenseKey.txt";
	FString Data;
	const FString BaseDir = IPluginManager::Get().FindPlugin(TEXT("ZibraAILiquid"))->GetBaseDir();
	const FString KeyPath = FPaths::Combine(*BaseDir, TEXT("Content/ZibraLiquidContent/"));
	const FString FullyQualifiedFileNameFilename = FPaths::Combine(KeyPath, Filename);
	FFileHelper::LoadFileToString(Data, *FullyQualifiedFileNameFilename);
	if (Data.IsEmpty())
	{
		UE_LOG(LogZibraAILiquidRuntime, Error, TEXT("Plugin License Key not found, please enter your Plugin License Key!"));
		ZibraNotifications::AddNotification(TEXT("Plugin License Key not found, please enter your Plugin License Key!"));
	}
	else 
	{
		PluginLicenseKey = Data;
	}
}

void UZibraHTTPService::ProcessValidationResponse(FString Response)
{
	if (bIsLicenseKeyValid)
		return;


	TSharedPtr<FJsonObject> JsonObj = MakeShareable(new FJsonObject());
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(*Response);

	if (FJsonSerializer::Deserialize(Reader, JsonObj))
	{
		FJsonObjectConverter::JsonObjectStringToUStruct(*Response, &ValidationResponse, 0, 0);

		if (!ValidationResponse.api_key.IsEmpty())
		{
			CurrentStatus = EZibraLicenseKeyStatus::EZibraLicenseKeyStatus_OK;

			PluginLicenseKey = ValidationResponse.api_key;
			SaveKey();
			bIsLicenseKeyValid = true;
			GenerationURL = CreateGenerationRequestURL();
			ZibraNotifications::AddNotification("PluginLicenseKey succesfully validated!");
			UE_LOG(LogZibraAILiquidRuntime, Warning, TEXT("PluginLicenseKey succesfully validated!"));
		}
		else
		{
			CurrentStatus = EZibraLicenseKeyStatus::EZibraLicenseKeyStatus_NotRegistered;
		}
	
	}
	else
	{
		UE_LOG(LogZibraAILiquidRuntime, Error, TEXT("Error: %s"), *Response);
	}
}

void UZibraHTTPService::GetResponseData(AActor* Actor)
{
	SendRequest(Actor);
}

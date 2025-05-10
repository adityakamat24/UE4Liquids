// Copyright Zibra AI, Inc 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/StaticMesh.h"
#include "Misc/FileHelper.h"
#include "GameFramework/Actor.h" 
#include "Containers/UnrealString.h"
#include "Misc/Base64.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Runtime/JsonUtilities/Public/JsonObjectConverter.h"
#include "ZibraLiquidTypes.h"
#include "ZibraHTTPService.generated.h"

UCLASS()
class ZIBRAAILIQUIDRUNTIME_API UZibraHTTPService : public UObject
{
	GENERATED_BODY()
public:
	DECLARE_DELEGATE_OneParam(FReturnResponseDataSignature, FZibraVoxel_Representation);

	FReturnResponseDataSignature OnDataProcessed;

	static int32 LastID;
	static int32 GetID()
	{
		return LastID++;
	}

	static UZibraHTTPService* Get(int32 id)
	{
		if (!Instances.Contains(id))
		{
			Instances.Add(id, NewObject<UZibraHTTPService>());
		}

		return Instances[id];
	};
	
	void SendRequest(AActor* Actor);

	void GetResponseData(AActor* Actor);

	static FString base64_encode(unsigned char const* bytes_to_encode, uint32 in_len);
	static FString Encode(TArray<FVector> InputArray);
	static FString Encode(TArray<uint32> InputArray);

	static TArray<float> DecodeFloat(FString InputString);
	static TArray<int32> DecodeInt(FString InputString);

	EZibraLicenseKeyStatus GetStatus();
	static FString GetErrorMessage();
	void Initialize();

	static FString GetPluginLicenseKey();
	static void SetPluginLicenseKey(FString Key);

private:

	UZibraHTTPService() = default;

    FHttpModule* Http;
	bool bInitialized = false;
	static TMap<int32, UZibraHTTPService*> Instances;

	static const char* ApiBaseUrl;
	static const FString base64_chars;
	
	static FString PluginLicenseKey;
	static bool bIsLicenseKeyValid;
	static FString GenerationURL ;
	static EZibraLicenseKeyStatus CurrentStatus;
	FString CreateGenerationRequestURL();
	FSkinnedVoxelRepresentation ResponseData;
	FLicenseKeyResponse ValidationResponse;
	FZibraRequest_Content GetMeshContent(UStaticMesh* StaticMesh);
	UStaticMesh* GetStaticMesh(AActor* Actor);

	void ProcessResponse(FString Response);
	void ProcessEmptyResponse();

	void SaveKey();
	void LoadKey();

	void ProcessValidationResponse(FString Response);

	void SendPostRequest(FZibraRequest_Content content);
	void GetPostResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void GetValidationResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	FString GetValidationURL(FString key);
	void SendVerificationRequest(FString key);
};

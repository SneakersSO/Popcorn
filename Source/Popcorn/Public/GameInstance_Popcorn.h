// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Utils/PC_PlayerData.h"
#include "GameInstance_Popcorn.generated.h"

namespace PlayFab
{
	namespace ClientModels
	{
		struct FLoginResult;
		struct FRegisterPlayFabUserResult;
		struct FSendAccountRecoveryEmailResult;
		struct FGetAccountInfoResult;
		struct FGetUserDataResult;
		struct FUpdateUserDataResult;
	}

	struct FPlayFabCppError;

	class UPlayFabClientAPI;

	struct FLoginResult;
}

typedef TSharedPtr<class PlayFab::UPlayFabClientAPI> PlayFabClientPtr;
struct FPC_PlayerData;

UCLASS()
class POPCORN_API UGameInstance_Popcorn : public UGameInstance
{
	GENERATED_BODY()

public:
	
	virtual void Init() override;
	virtual void Shutdown() override;
	virtual void StartGameInstance() override;
	FString GetTitleId() const { return _titleId; }

	//PlayFab
	void InitializePlayFab();
	void StorePlayerDataInPlayFab(const FPC_PlayerData& PlayerData);
	void StorePlayerDataInPlayFab();
	void RetrievePlayerDataInPlayFab(const FPC_PlayerData& PlayerData);
	void RetrievePlayerDataInPlayFab();

	// Login Success/Failure Callbacks
	void OnLoginSuccess(const PlayFab::ClientModels::FLoginResult& Result);
	void OnLoginFailure(const PlayFab::FPlayFabCppError& ErrorResult);

	//Login Methods
	void LoginWithEmail(const FString& Email, const FString& Password);

	//Registration Methods
	void RegisterUserWithEmail(const FString& Email, const FString& Password);

	//Registration Callbacks
	void OnRegistrationSuccess(const PlayFab::ClientModels::FRegisterPlayFabUserResult& Result);
	void OnRegistrationFailure(const PlayFab::FPlayFabCppError& ErrorResult);

	//Get Account Info Callbacks
	void OnGetAccountInfoSuccess(const PlayFab::ClientModels::FGetAccountInfoResult& Result);
	void OnGetAccountInfoFailure(const PlayFab::FPlayFabCppError& ErrorResult);

	//Account Recovery Callbacks
	void OnAccountRecoveryRequestSuccess(const PlayFab::ClientModels::FSendAccountRecoveryEmailResult& Result);
	void OnAccountRecoveryRequestFailure(const PlayFab::FPlayFabCppError& ErrorResult);

	//Playfab UserData Callbacks
	void OnUpdatePlayFabUserDataSuccess(const PlayFab::ClientModels::FUpdateUserDataResult& Result);
	void OnUpdatePlayFabUserDataError(const PlayFab::FPlayFabCppError& ErrorResult);
	void OnRetrievePlayFabUserDataSuccess(const PlayFab::ClientModels::FGetUserDataResult& Result);
	void OnRetrievePlayFabUserDataError(const PlayFab::FPlayFabCppError& ErrorResult);

	//Handlers for Playfab Login Screen
	UFUNCTION(BlueprintCallable, Category = "Playfab Login")
	void ForgotPasswordHandler(const FText& Email);
	UFUNCTION(BlueprintCallable, Category = "Playfab Login")
	void LoginUserHandler(const FText& Email, const FText& Password);
	UFUNCTION(BlueprintCallable, Category = "Playfab Login")
	void SignupUserHandler(const FText& Email, const FText& Password, const FText& Username);

	//Custom UserData to be held in PlayFab
	FString SerializePlayerData(const FPC_PlayerData& PlayerData);
	FString SerializePlayerData();

	//Game Session Utility Functions
	UFUNCTION(BlueprintCallable, Category = "Game Session")
	FString GenerateGameSessionId();
	
	//Setters


	//Getters
	FPC_PlayerData GetPlayerData() const { return _playerData; }

private:
	
	PlayFabClientPtr _clientAPI = nullptr;
	FString _sessionTicket;
	FString _titleId = TEXT("FB15D");
	FPC_PlayerData _playerData;
};

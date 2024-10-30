// Fill out your copyright notice in the Description page of Project Settings.


#include "GameInstance_Popcorn.h"
#include "Core/PlayFabSettings.h"
#include "Core/PlayFabClientAPI.h"
#include "Core/PlayFabClientDataModels.h"
#include "Core/PlayFabResultHandler.h"
#include "PlayFab.h"
#include "PlayFabUtilities.h"
#include "Utils/LevelNames.h"
#include "Kismet/GameplayStatics.h"

using namespace PlayFab;
using namespace PlayFab::ClientModels;

void UGameInstance_Popcorn::Init()
{
	Super::Init();

	FString titleId = TEXT("FB15D");

	#if defined(TEST_BUILD)
		titleId = TEXT("4CD53");
	#elif defined(DEV_BUILD)
		titleId = TEXT("FB15D");
	#elif defined(SHIPPING_BUILD)
		titleId = TEXT("E1939");
	#endif
	
	//Rabbit hole of getting the RunTimeSettings and editing them in the Init() call
	//GetMutableDefault<UPlayFabRuntimeSettings>()->TitleId = titleId;

	UE_LOG(LogTemp, Log, TEXT("Initializing PlayFab with TitleId: %s"), *titleId);
	InitializePlayFab(titleId);
	
	UE_LOG(LogTemp, Log, TEXT("Loading Player Settings"));
}

void UGameInstance_Popcorn::Shutdown()
{
	Super::Shutdown();

	UE_LOG(LogTemp, Log, TEXT("Popcorn Game Instance Shutdown"));
}

void UGameInstance_Popcorn::StartGameInstance()
{
	Super::StartGameInstance();

	UE_LOG(LogTemp, Log, TEXT("Game Instance Started"));

	UE_LOG(LogTemp, Log, TEXT("Load into PlayerLogin"));
	UGameplayStatics::OpenLevel(GetWorld(), FLevelNames::PlayFabLogin);
}

void UGameInstance_Popcorn::InitializePlayFab(FString& TitleId)
{

	clientAPI = IPlayFabModuleInterface::Get().GetClientAPI();

	UPlayFabUtilities::setPlayFabSettings(TitleId);

}

void UGameInstance_Popcorn::OnLoginSuccess(const PlayFab::ClientModels::FLoginResult& Result)
{
	UE_LOG(LogTemp, Log, TEXT("PlayFab Login Successful. Session Ticket: %s"), *Result.SessionTicket);
}

void UGameInstance_Popcorn::OnLoginFailure(const PlayFab::FPlayFabCppError& ErrorResult)
{
	UE_LOG(LogTemp, Error, TEXT("PlayFab Login Failed: %s"), *ErrorResult.ErrorMessage);
}

void UGameInstance_Popcorn::LogIntoPlayFab()
{

}

void UGameInstance_Popcorn::GooglePlayLogin(const FString& GoogleAccessToken)
{

}

void UGameInstance_Popcorn::AppleLogin(const FString& AppleIdentityToken)
{

}

void UGameInstance_Popcorn::TestLogin()
{
	PlayFab::ClientModels::FLoginWithCustomIDRequest Request;
	Request.CustomId = TEXT("TestPlayer");
	Request.CreateAccount = true;

	clientAPI->LoginWithCustomID(Request,
		PlayFab::UPlayFabClientAPI::FLoginWithCustomIDDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnLoginSuccess),
		PlayFab::FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnLoginFailure));
}

void UGameInstance_Popcorn::LoginWithEmail(const FString& Email, const FString& Password)
{
	PlayFab::ClientModels::FLoginWithEmailAddressRequest  Request;
	Request.Email = Email;
	Request.Password = Password;

	clientAPI->LoginWithEmailAddress(Request,
		PlayFab::UPlayFabClientAPI::FLoginWithEmailAddressDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnLoginSuccess),
		PlayFab::FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnLoginFailure));
}



void UGameInstance_Popcorn::RegisterUserWithEmail(const FString& Email, const FString& Password)
{
	PlayFab::ClientModels::FRegisterPlayFabUserRequest Request;
	Request.Email = Email;
	Request.Password = Password;
	Request.Username = "NewUser"; //TODO: Add a randomized value for PlayerID or some such that is tied to the email.
}

void UGameInstance_Popcorn::OnRegistrationSuccess(const PlayFab::ClientModels::FRegisterPlayFabUserResult& Result)
{
	UE_LOG(LogTemp, Log, TEXT("Registration Success. Player ID: %s"), *Result.PlayFabId);

	//Load into the Main Menu - Set to DebugStarter for now.
	UGameplayStatics::OpenLevel(GetWorld(), FLevelNames::DebugStarter);
}

void UGameInstance_Popcorn::OnRegistrationFailure(const PlayFab::FPlayFabCppError& ErrorResult)
{
	UE_LOG(LogTemp, Error, TEXT("Registration Failed: %s"), *ErrorResult.ErrorMessage);
}

void UGameInstance_Popcorn::ForgotPasswordHandler(const FText& Email)
{
	UE_LOG(LogTemp, Log, TEXT("Game Instance - Forgot Password - Email: %s"), *Email.ToString());
}

void UGameInstance_Popcorn::LoginUserHandler(const FText& Email, const FText& Password)
{
	UE_LOG(LogTemp, Log, TEXT("Game Instance - Login - Email: %s \t Password: %s"), *Email.ToString(), *Password.ToString());
}

void UGameInstance_Popcorn::SignupUserHandler(const FText& Email, const FText& Password, const FText& Username)
{
	UE_LOG(LogTemp, Log, TEXT("Game Instance - Signup User - Username: %s \t Email: %s \t Password: %s"), *Username.ToString(), *Email.ToString(), *Password.ToString());
	FRegisterPlayFabUserRequest Request;
	Request.DisplayName = Username.ToString();
	Request.Username = Username.ToString();
	Request.Password = Password.ToString();
	Request.Email = Email.ToString();

	UPlayFabClientAPI::FRegisterPlayFabUserDelegate SuccessDelegate = UPlayFabClientAPI::FRegisterPlayFabUserDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnRegistrationSuccess);
	FPlayFabErrorDelegate ErrorDelegate = FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnRegistrationFailure);

	clientAPI->RegisterPlayFabUser(Request, SuccessDelegate, ErrorDelegate);
}

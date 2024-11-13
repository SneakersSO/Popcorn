// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabProgressionAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPlayFabProgressionAPI;
struct FPlayFabBaseModel;
struct FPlayFabError;
struct FProgressionCreateLeaderboardDefinitionRequest;
struct FProgressionCreateStatisticDefinitionRequest;
struct FProgressionDeleteLeaderboardDefinitionRequest;
struct FProgressionDeleteLeaderboardEntriesRequest;
struct FProgressionDeleteStatisticDefinitionRequest;
struct FProgressionDeleteStatisticsRequest;
struct FProgressionDeleteStatisticsResponse;
struct FProgressionEmptyResponse;
struct FProgressionGetEntityLeaderboardRequest;
struct FProgressionGetEntityLeaderboardResponse;
struct FProgressionGetFriendLeaderboardForEntityRequest;
struct FProgressionGetLeaderboardAroundEntityRequest;
struct FProgressionGetLeaderboardDefinitionRequest;
struct FProgressionGetLeaderboardDefinitionResponse;
struct FProgressionGetLeaderboardForEntitiesRequest;
struct FProgressionGetStatisticDefinitionRequest;
struct FProgressionGetStatisticDefinitionResponse;
struct FProgressionGetStatisticsForEntitiesRequest;
struct FProgressionGetStatisticsForEntitiesResponse;
struct FProgressionGetStatisticsRequest;
struct FProgressionGetStatisticsResponse;
struct FProgressionIncrementLeaderboardVersionRequest;
struct FProgressionIncrementLeaderboardVersionResponse;
struct FProgressionIncrementStatisticVersionRequest;
struct FProgressionIncrementStatisticVersionResponse;
struct FProgressionListLeaderboardDefinitionsRequest;
struct FProgressionListLeaderboardDefinitionsResponse;
struct FProgressionListStatisticDefinitionsRequest;
struct FProgressionListStatisticDefinitionsResponse;
struct FProgressionUnlinkLeaderboardFromStatisticRequest;
struct FProgressionUpdateLeaderboardEntriesRequest;
struct FProgressionUpdateStatisticsRequest;
struct FProgressionUpdateStatisticsResponse;
#ifdef PLAYFAB_PlayFabProgressionAPI_generated_h
#error "PlayFabProgressionAPI.generated.h already included, missing '#pragma once' in PlayFabProgressionAPI.h"
#endif
#define PLAYFAB_PlayFabProgressionAPI_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_24_DELEGATE \
PLAYFAB_API void FOnPlayFabProgressionRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabProgressionRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_32_DELEGATE \
static void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_62_DELEGATE \
static void FDelegateOnSuccessCreateLeaderboardDefinition_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateLeaderboardDefinition, FProgressionEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_75_DELEGATE \
static void FDelegateOnSuccessDeleteLeaderboardDefinition_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteLeaderboardDefinition, FProgressionEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_88_DELEGATE \
static void FDelegateOnSuccessDeleteLeaderboardEntries_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteLeaderboardEntries, FProgressionEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_101_DELEGATE \
static void FDelegateOnSuccessGetFriendLeaderboardForEntity_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetFriendLeaderboardForEntity, FProgressionGetEntityLeaderboardResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_114_DELEGATE \
static void FDelegateOnSuccessGetLeaderboard_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLeaderboard, FProgressionGetEntityLeaderboardResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_127_DELEGATE \
static void FDelegateOnSuccessGetLeaderboardAroundEntity_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLeaderboardAroundEntity, FProgressionGetEntityLeaderboardResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_140_DELEGATE \
static void FDelegateOnSuccessGetLeaderboardDefinition_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLeaderboardDefinition, FProgressionGetLeaderboardDefinitionResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_153_DELEGATE \
static void FDelegateOnSuccessGetLeaderboardForEntities_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLeaderboardForEntities, FProgressionGetEntityLeaderboardResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_166_DELEGATE \
static void FDelegateOnSuccessIncrementLeaderboardVersion_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessIncrementLeaderboardVersion, FProgressionIncrementLeaderboardVersionResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_179_DELEGATE \
static void FDelegateOnSuccessListLeaderboardDefinitions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListLeaderboardDefinitions, FProgressionListLeaderboardDefinitionsResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_192_DELEGATE \
static void FDelegateOnSuccessUnlinkLeaderboardFromStatistic_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnlinkLeaderboardFromStatistic, FProgressionEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_205_DELEGATE \
static void FDelegateOnSuccessUpdateLeaderboardEntries_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateLeaderboardEntries, FProgressionEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_222_DELEGATE \
static void FDelegateOnSuccessCreateStatisticDefinition_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateStatisticDefinition, FProgressionEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_235_DELEGATE \
static void FDelegateOnSuccessDeleteStatisticDefinition_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteStatisticDefinition, FProgressionEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_248_DELEGATE \
static void FDelegateOnSuccessDeleteStatistics_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteStatistics, FProgressionDeleteStatisticsResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_261_DELEGATE \
static void FDelegateOnSuccessGetStatisticDefinition_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetStatisticDefinition, FProgressionGetStatisticDefinitionResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_274_DELEGATE \
static void FDelegateOnSuccessGetStatistics_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetStatistics, FProgressionGetStatisticsResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_287_DELEGATE \
static void FDelegateOnSuccessGetStatisticsForEntities_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetStatisticsForEntities, FProgressionGetStatisticsForEntitiesResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_300_DELEGATE \
static void FDelegateOnSuccessIncrementStatisticVersion_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessIncrementStatisticVersion, FProgressionIncrementStatisticVersionResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_313_DELEGATE \
static void FDelegateOnSuccessListStatisticDefinitions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListStatisticDefinitions, FProgressionListStatisticDefinitionsResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_326_DELEGATE \
static void FDelegateOnSuccessUpdateStatistics_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateStatistics, FProgressionUpdateStatisticsResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_29_RPC_WRAPPERS \
	DECLARE_FUNCTION(execHelperUpdateStatistics); \
	DECLARE_FUNCTION(execUpdateStatistics); \
	DECLARE_FUNCTION(execHelperListStatisticDefinitions); \
	DECLARE_FUNCTION(execListStatisticDefinitions); \
	DECLARE_FUNCTION(execHelperIncrementStatisticVersion); \
	DECLARE_FUNCTION(execIncrementStatisticVersion); \
	DECLARE_FUNCTION(execHelperGetStatisticsForEntities); \
	DECLARE_FUNCTION(execGetStatisticsForEntities); \
	DECLARE_FUNCTION(execHelperGetStatistics); \
	DECLARE_FUNCTION(execGetStatistics); \
	DECLARE_FUNCTION(execHelperGetStatisticDefinition); \
	DECLARE_FUNCTION(execGetStatisticDefinition); \
	DECLARE_FUNCTION(execHelperDeleteStatistics); \
	DECLARE_FUNCTION(execDeleteStatistics); \
	DECLARE_FUNCTION(execHelperDeleteStatisticDefinition); \
	DECLARE_FUNCTION(execDeleteStatisticDefinition); \
	DECLARE_FUNCTION(execHelperCreateStatisticDefinition); \
	DECLARE_FUNCTION(execCreateStatisticDefinition); \
	DECLARE_FUNCTION(execHelperUpdateLeaderboardEntries); \
	DECLARE_FUNCTION(execUpdateLeaderboardEntries); \
	DECLARE_FUNCTION(execHelperUnlinkLeaderboardFromStatistic); \
	DECLARE_FUNCTION(execUnlinkLeaderboardFromStatistic); \
	DECLARE_FUNCTION(execHelperListLeaderboardDefinitions); \
	DECLARE_FUNCTION(execListLeaderboardDefinitions); \
	DECLARE_FUNCTION(execHelperIncrementLeaderboardVersion); \
	DECLARE_FUNCTION(execIncrementLeaderboardVersion); \
	DECLARE_FUNCTION(execHelperGetLeaderboardForEntities); \
	DECLARE_FUNCTION(execGetLeaderboardForEntities); \
	DECLARE_FUNCTION(execHelperGetLeaderboardDefinition); \
	DECLARE_FUNCTION(execGetLeaderboardDefinition); \
	DECLARE_FUNCTION(execHelperGetLeaderboardAroundEntity); \
	DECLARE_FUNCTION(execGetLeaderboardAroundEntity); \
	DECLARE_FUNCTION(execHelperGetLeaderboard); \
	DECLARE_FUNCTION(execGetLeaderboard); \
	DECLARE_FUNCTION(execHelperGetFriendLeaderboardForEntity); \
	DECLARE_FUNCTION(execGetFriendLeaderboardForEntity); \
	DECLARE_FUNCTION(execHelperDeleteLeaderboardEntries); \
	DECLARE_FUNCTION(execDeleteLeaderboardEntries); \
	DECLARE_FUNCTION(execHelperDeleteLeaderboardDefinition); \
	DECLARE_FUNCTION(execDeleteLeaderboardDefinition); \
	DECLARE_FUNCTION(execHelperCreateLeaderboardDefinition); \
	DECLARE_FUNCTION(execCreateLeaderboardDefinition);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabProgressionAPI(); \
	friend struct Z_Construct_UClass_UPlayFabProgressionAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabProgressionAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabProgressionAPI)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabProgressionAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabProgressionAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabProgressionAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabProgressionAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabProgressionAPI(UPlayFabProgressionAPI&&); \
	UPlayFabProgressionAPI(const UPlayFabProgressionAPI&); \
public: \
	NO_API virtual ~UPlayFabProgressionAPI();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_26_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_29_RPC_WRAPPERS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_29_INCLASS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabProgressionAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once

#include "CoreMinimal.h"
#include "Core/PlayFabError.h"
#include "Core/PlayFabInsightsDataModels.h"
#include "Core/PlayFabSettings.h"
#include "PlayFabAPISettings.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"

namespace PlayFab
{
    /**
     * Main interface for PlayFab Sdk, specifically all Insights APIs
     */
    class PLAYFABCPP_API UPlayFabInsightsInstanceAPI
    {
    public:
        DECLARE_DELEGATE_OneParam(FGetDetailsDelegate, const InsightsModels::FInsightsGetDetailsResponse&);
        DECLARE_DELEGATE_OneParam(FGetLimitsDelegate, const InsightsModels::FInsightsGetLimitsResponse&);
        DECLARE_DELEGATE_OneParam(FGetOperationStatusDelegate, const InsightsModels::FInsightsGetOperationStatusResponse&);
        DECLARE_DELEGATE_OneParam(FGetPendingOperationsDelegate, const InsightsModels::FInsightsGetPendingOperationsResponse&);
        DECLARE_DELEGATE_OneParam(FSetPerformanceDelegate, const InsightsModels::FInsightsOperationResponse&);
        DECLARE_DELEGATE_OneParam(FSetStorageRetentionDelegate, const InsightsModels::FInsightsOperationResponse&);


    private:
        TSharedPtr<UPlayFabAPISettings> settings;
        TSharedPtr<UPlayFabAuthenticationContext> authContext;
    
    public:
        UPlayFabInsightsInstanceAPI();
        explicit UPlayFabInsightsInstanceAPI(TSharedPtr<UPlayFabAPISettings> apiSettings);
        explicit UPlayFabInsightsInstanceAPI(TSharedPtr<UPlayFabAuthenticationContext> authenticationContext);
        UPlayFabInsightsInstanceAPI(TSharedPtr<UPlayFabAPISettings> apiSettings, TSharedPtr<UPlayFabAuthenticationContext> authenticationContext);
        ~UPlayFabInsightsInstanceAPI();
        UPlayFabInsightsInstanceAPI(const UPlayFabInsightsInstanceAPI& source) = delete; // disable copy
        UPlayFabInsightsInstanceAPI(UPlayFabInsightsInstanceAPI&&) = delete; // disable move
        UPlayFabInsightsInstanceAPI& operator=(const UPlayFabInsightsInstanceAPI& source) = delete; // disable assignment
        UPlayFabInsightsInstanceAPI& operator=(UPlayFabInsightsInstanceAPI&& other) = delete; // disable move assignment

        int GetPendingCalls() const;
        TSharedPtr<UPlayFabAPISettings> GetSettings() const;
        void SetSettings(TSharedPtr<UPlayFabAPISettings> apiSettings);
        TSharedPtr<UPlayFabAuthenticationContext> GetAuthenticationContext() const;
        void SetAuthenticationContext(TSharedPtr<UPlayFabAuthenticationContext> authenticationContext);
        void ForgetAllCredentials();

    private:
        TSharedPtr<UPlayFabAuthenticationContext> GetOrCreateAuthenticationContext();
    
    public:


        // ------------ Generated API calls
        /**
         * Gets the current values for the Insights performance and data storage retention, list of pending operations, and the
         * performance and data storage retention limits.
         */
        bool GetDetails(InsightsModels::FInsightsEmptyRequest& request, const FGetDetailsDelegate& SuccessDelegate = FGetDetailsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Retrieves the range of allowed values for performance and data storage retention values as well as the submeter details
         * for each performance level.
         */
        bool GetLimits(InsightsModels::FInsightsEmptyRequest& request, const FGetLimitsDelegate& SuccessDelegate = FGetLimitsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Gets the status of a SetPerformance or SetStorageRetention operation.
        bool GetOperationStatus(InsightsModels::FInsightsGetOperationStatusRequest& request, const FGetOperationStatusDelegate& SuccessDelegate = FGetOperationStatusDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Gets a list of pending SetPerformance and/or SetStorageRetention operations for the title.
        bool GetPendingOperations(InsightsModels::FInsightsGetPendingOperationsRequest& request, const FGetPendingOperationsDelegate& SuccessDelegate = FGetPendingOperationsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Sets the Insights performance level value for the title.
        bool SetPerformance(InsightsModels::FInsightsSetPerformanceRequest& request, const FSetPerformanceDelegate& SuccessDelegate = FSetPerformanceDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Sets the Insights data storage retention days value for the title.
        bool SetStorageRetention(InsightsModels::FInsightsSetStorageRetentionRequest& request, const FSetStorageRetentionDelegate& SuccessDelegate = FSetStorageRetentionDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());

    private:
        // ------------ Generated result handlers
        void OnGetDetailsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetDetailsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnGetLimitsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetLimitsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnGetOperationStatusResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetOperationStatusDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnGetPendingOperationsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetPendingOperationsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnSetPerformanceResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSetPerformanceDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnSetStorageRetentionResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSetStorageRetentionDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);

    };
};

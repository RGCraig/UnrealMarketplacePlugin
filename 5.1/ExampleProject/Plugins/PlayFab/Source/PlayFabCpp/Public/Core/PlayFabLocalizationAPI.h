//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once

#include "CoreMinimal.h"
#include "Core/PlayFabError.h"
#include "Core/PlayFabLocalizationDataModels.h"
#include "Core/PlayFabSettings.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"

namespace PlayFab
{
    class PLAYFABCPP_API UPlayFabLocalizationAPI
    {
    public:
        DECLARE_DELEGATE_OneParam(FGetLanguageListDelegate, const LocalizationModels::FGetLanguageListResponse&);

        UPlayFabLocalizationAPI();
        ~UPlayFabLocalizationAPI();

        int GetPendingCalls() const;
        FString GetBuildIdentifier() const;

        // ------------ Generated API calls
        // Retrieves the list of allowed languages, only accessible by title entities
        bool GetLanguageList(LocalizationModels::FGetLanguageListRequest& request, const FGetLanguageListDelegate& SuccessDelegate = FGetLanguageListDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());

    private:
        // ------------ Generated result handlers
        void OnGetLanguageListResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetLanguageListDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);

    };
};

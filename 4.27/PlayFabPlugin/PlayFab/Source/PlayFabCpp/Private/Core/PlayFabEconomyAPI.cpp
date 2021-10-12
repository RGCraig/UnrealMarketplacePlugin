//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#include "Core/PlayFabEconomyAPI.h"
#include "Core/PlayFabSettings.h"
#include "Core/PlayFabResultHandler.h"
#include "PlayFab.h"

using namespace PlayFab;
using namespace PlayFab::EconomyModels;

UPlayFabEconomyAPI::UPlayFabEconomyAPI() {}

UPlayFabEconomyAPI::~UPlayFabEconomyAPI() {}

int UPlayFabEconomyAPI::GetPendingCalls() const
{
    return PlayFabRequestHandler::GetPendingCalls();
}

FString UPlayFabEconomyAPI::GetBuildIdentifier() const
{
    return PlayFabSettings::buildIdentifier;
}


bool UPlayFabEconomyAPI::CreateDraftItem(
    EconomyModels::FCreateDraftItemRequest& request,
    const FCreateDraftItemDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/CreateDraftItem"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnCreateDraftItemResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnCreateDraftItemResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreateDraftItemDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FCreateDraftItemResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::CreateUploadUrls(
    EconomyModels::FCreateUploadUrlsRequest& request,
    const FCreateUploadUrlsDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/CreateUploadUrls"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnCreateUploadUrlsResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnCreateUploadUrlsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreateUploadUrlsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FCreateUploadUrlsResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::DeleteEntityItemReviews(
    EconomyModels::FDeleteEntityItemReviewsRequest& request,
    const FDeleteEntityItemReviewsDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/DeleteEntityItemReviews"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnDeleteEntityItemReviewsResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnDeleteEntityItemReviewsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDeleteEntityItemReviewsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FDeleteEntityItemReviewsResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::DeleteItem(
    EconomyModels::FDeleteItemRequest& request,
    const FDeleteItemDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/DeleteItem"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnDeleteItemResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnDeleteItemResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDeleteItemDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FDeleteItemResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::GetCatalogConfig(
    EconomyModels::FGetCatalogConfigRequest& request,
    const FGetCatalogConfigDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/GetCatalogConfig"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnGetCatalogConfigResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnGetCatalogConfigResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetCatalogConfigDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FGetCatalogConfigResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::GetDraftItem(
    EconomyModels::FGetDraftItemRequest& request,
    const FGetDraftItemDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/GetDraftItem"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnGetDraftItemResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnGetDraftItemResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetDraftItemDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FGetDraftItemResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::GetDraftItems(
    EconomyModels::FGetDraftItemsRequest& request,
    const FGetDraftItemsDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/GetDraftItems"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnGetDraftItemsResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnGetDraftItemsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetDraftItemsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FGetDraftItemsResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::GetEntityDraftItems(
    EconomyModels::FGetEntityDraftItemsRequest& request,
    const FGetEntityDraftItemsDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/GetEntityDraftItems"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnGetEntityDraftItemsResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnGetEntityDraftItemsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetEntityDraftItemsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FGetEntityDraftItemsResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::GetEntityItemReview(
    EconomyModels::FGetEntityItemReviewRequest& request,
    const FGetEntityItemReviewDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/GetEntityItemReview"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnGetEntityItemReviewResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnGetEntityItemReviewResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetEntityItemReviewDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FGetEntityItemReviewResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::GetItem(
    EconomyModels::FGetItemRequest& request,
    const FGetItemDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/GetItem"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnGetItemResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnGetItemResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetItemDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FGetItemResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::GetItemModerationState(
    EconomyModels::FGetItemModerationStateRequest& request,
    const FGetItemModerationStateDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/GetItemModerationState"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnGetItemModerationStateResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnGetItemModerationStateResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetItemModerationStateDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FGetItemModerationStateResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::GetItemPublishStatus(
    EconomyModels::FGetItemPublishStatusRequest& request,
    const FGetItemPublishStatusDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/GetItemPublishStatus"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnGetItemPublishStatusResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnGetItemPublishStatusResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetItemPublishStatusDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FGetItemPublishStatusResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::GetItemReviews(
    EconomyModels::FGetItemReviewsRequest& request,
    const FGetItemReviewsDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/GetItemReviews"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnGetItemReviewsResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnGetItemReviewsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetItemReviewsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FGetItemReviewsResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::GetItemReviewSummary(
    EconomyModels::FGetItemReviewSummaryRequest& request,
    const FGetItemReviewSummaryDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/GetItemReviewSummary"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnGetItemReviewSummaryResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnGetItemReviewSummaryResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetItemReviewSummaryDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FGetItemReviewSummaryResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::PublishDraftItem(
    EconomyModels::FPublishDraftItemRequest& request,
    const FPublishDraftItemDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/PublishDraftItem"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnPublishDraftItemResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnPublishDraftItemResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FPublishDraftItemDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FPublishDraftItemResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::ReportItem(
    EconomyModels::FReportItemRequest& request,
    const FReportItemDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/ReportItem"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnReportItemResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnReportItemResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FReportItemDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FReportItemResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::ReportItemReview(
    EconomyModels::FReportItemReviewRequest& request,
    const FReportItemReviewDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/ReportItemReview"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnReportItemReviewResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnReportItemReviewResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FReportItemReviewDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FReportItemReviewResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::ReviewItem(
    EconomyModels::FReviewItemRequest& request,
    const FReviewItemDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/ReviewItem"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnReviewItemResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnReviewItemResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FReviewItemDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FReviewItemResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::SearchItems(
    EconomyModels::FSearchItemsRequest& request,
    const FSearchItemsDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/SearchItems"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnSearchItemsResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnSearchItemsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSearchItemsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FSearchItemsResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::SetItemModerationState(
    EconomyModels::FSetItemModerationStateRequest& request,
    const FSetItemModerationStateDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/SetItemModerationState"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnSetItemModerationStateResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnSetItemModerationStateResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSetItemModerationStateDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FSetItemModerationStateResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::SubmitItemReviewVote(
    EconomyModels::FSubmitItemReviewVoteRequest& request,
    const FSubmitItemReviewVoteDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/SubmitItemReviewVote"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnSubmitItemReviewVoteResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnSubmitItemReviewVoteResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSubmitItemReviewVoteDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FSubmitItemReviewVoteResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::TakedownItemReviews(
    EconomyModels::FTakedownItemReviewsRequest& request,
    const FTakedownItemReviewsDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/TakedownItemReviews"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnTakedownItemReviewsResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnTakedownItemReviewsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FTakedownItemReviewsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FTakedownItemReviewsResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::UpdateCatalogConfig(
    EconomyModels::FUpdateCatalogConfigRequest& request,
    const FUpdateCatalogConfigDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/UpdateCatalogConfig"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnUpdateCatalogConfigResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnUpdateCatalogConfigResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FUpdateCatalogConfigDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FUpdateCatalogConfigResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabEconomyAPI::UpdateDraftItem(
    EconomyModels::FUpdateDraftItemRequest& request,
    const FUpdateDraftItemDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Catalog/UpdateDraftItem"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabEconomyAPI::OnUpdateDraftItemResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabEconomyAPI::OnUpdateDraftItemResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FUpdateDraftItemDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    EconomyModels::FUpdateDraftItemResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once

#include "CoreMinimal.h"
#include "PlayFabCppBaseModel.h"

namespace PlayFab
{
namespace ExperimentationModels
{

    enum AnalysisTaskState
    {
        AnalysisTaskStateWaiting,
        AnalysisTaskStateReadyForSubmission,
        AnalysisTaskStateSubmittingToPipeline,
        AnalysisTaskStateRunning,
        AnalysisTaskStateCompleted,
        AnalysisTaskStateFailed,
        AnalysisTaskStateCanceled
    };

    PLAYFABCPP_API void writeAnalysisTaskStateEnumJSON(AnalysisTaskState enumVal, JsonWriter& writer);
    PLAYFABCPP_API AnalysisTaskState readAnalysisTaskStateFromValue(const TSharedPtr<FJsonValue>& value);
    PLAYFABCPP_API AnalysisTaskState readAnalysisTaskStateFromValue(const FString& value);

    enum ExperimentType
    {
        ExperimentTypeActive,
        ExperimentTypeSnapshot
    };

    PLAYFABCPP_API void writeExperimentTypeEnumJSON(ExperimentType enumVal, JsonWriter& writer);
    PLAYFABCPP_API ExperimentType readExperimentTypeFromValue(const TSharedPtr<FJsonValue>& value);
    PLAYFABCPP_API ExperimentType readExperimentTypeFromValue(const FString& value);

    struct PLAYFABCPP_API FVariable : public PlayFab::FPlayFabCppBaseModel
    {
        // Name of the variable.
        FString Name;

        // [optional] Value of the variable.
        FString Value;

        FVariable() :
            FPlayFabCppBaseModel(),
            Name(),
            Value()
            {}

        FVariable(const FVariable& src) :
            FPlayFabCppBaseModel(),
            Name(src.Name),
            Value(src.Value)
            {}

        FVariable(const TSharedPtr<FJsonObject>& obj) : FVariable()
        {
            readFromValue(obj);
        }

        ~FVariable();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FVariant : public PlayFab::FPlayFabCppBaseModel
    {
        // [optional] Description of the variant.
        FString Description;

        // [optional] Id of the variant.
        FString Id;

        // Specifies if variant is control for experiment.
        bool IsControl;

        // Name of the variant.
        FString Name;

        // [optional] Id of the TitleDataOverride to use with this variant.
        FString TitleDataOverrideLabel;

        // Percentage of target audience traffic that will see this variant.
        uint32 TrafficPercentage;

        // [optional] Variables returned by this variant.
        TArray<FVariable> Variables;
        FVariant() :
            FPlayFabCppBaseModel(),
            Description(),
            Id(),
            IsControl(false),
            Name(),
            TitleDataOverrideLabel(),
            TrafficPercentage(0),
            Variables()
            {}

        FVariant(const FVariant& src) :
            FPlayFabCppBaseModel(),
            Description(src.Description),
            Id(src.Id),
            IsControl(src.IsControl),
            Name(src.Name),
            TitleDataOverrideLabel(src.TitleDataOverrideLabel),
            TrafficPercentage(src.TrafficPercentage),
            Variables(src.Variables)
            {}

        FVariant(const TSharedPtr<FJsonObject>& obj) : FVariant()
        {
            readFromValue(obj);
        }

        ~FVariant();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FCreateExperimentRequest : public PlayFab::FPlayFabCppRequestCommon
    {
        // [optional] The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.).
        TMap<FString, FString> CustomTags;
        // [optional] Description of the experiment.
        FString Description;

        // The duration of the experiment, in days.
        uint32 Duration;

        // [optional] Type of experiment.
        Boxed<ExperimentType> pfExperimentType;

        // Friendly name of the experiment.
        FString Name;

        // [optional] Id of the segment to which this experiment applies. Defaults to the 'All Players' segment.
        FString SegmentId;

        // When experiment should start.
        FDateTime StartDate;

        /**
         * [optional] List of title player account IDs that automatically receive treatments in the experiment, but are not included when
         * calculating experiment metrics.
         */
        TArray<FString> TitlePlayerAccountTestIds;
        // List of variants for the experiment.
        TArray<FVariant> Variants;
        FCreateExperimentRequest() :
            FPlayFabCppRequestCommon(),
            CustomTags(),
            Description(),
            Duration(0),
            pfExperimentType(),
            Name(),
            SegmentId(),
            StartDate(0),
            TitlePlayerAccountTestIds(),
            Variants()
            {}

        FCreateExperimentRequest(const FCreateExperimentRequest& src) :
            FPlayFabCppRequestCommon(),
            CustomTags(src.CustomTags),
            Description(src.Description),
            Duration(src.Duration),
            pfExperimentType(src.pfExperimentType),
            Name(src.Name),
            SegmentId(src.SegmentId),
            StartDate(src.StartDate),
            TitlePlayerAccountTestIds(src.TitlePlayerAccountTestIds),
            Variants(src.Variants)
            {}

        FCreateExperimentRequest(const TSharedPtr<FJsonObject>& obj) : FCreateExperimentRequest()
        {
            readFromValue(obj);
        }

        ~FCreateExperimentRequest();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FCreateExperimentResult : public PlayFab::FPlayFabCppResultCommon
    {
        // [optional] The ID of the new experiment.
        FString ExperimentId;

        FCreateExperimentResult() :
            FPlayFabCppResultCommon(),
            ExperimentId()
            {}

        FCreateExperimentResult(const FCreateExperimentResult& src) :
            FPlayFabCppResultCommon(),
            ExperimentId(src.ExperimentId)
            {}

        FCreateExperimentResult(const TSharedPtr<FJsonObject>& obj) : FCreateExperimentResult()
        {
            readFromValue(obj);
        }

        ~FCreateExperimentResult();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FDeleteExperimentRequest : public PlayFab::FPlayFabCppRequestCommon
    {
        // [optional] The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.).
        TMap<FString, FString> CustomTags;
        // The ID of the experiment to delete.
        FString ExperimentId;

        FDeleteExperimentRequest() :
            FPlayFabCppRequestCommon(),
            CustomTags(),
            ExperimentId()
            {}

        FDeleteExperimentRequest(const FDeleteExperimentRequest& src) :
            FPlayFabCppRequestCommon(),
            CustomTags(src.CustomTags),
            ExperimentId(src.ExperimentId)
            {}

        FDeleteExperimentRequest(const TSharedPtr<FJsonObject>& obj) : FDeleteExperimentRequest()
        {
            readFromValue(obj);
        }

        ~FDeleteExperimentRequest();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FEmptyResponse : public PlayFab::FPlayFabCppResultCommon
    {
        FEmptyResponse() :
            FPlayFabCppResultCommon()
            {}

        FEmptyResponse(const FEmptyResponse& src) :
            FPlayFabCppResultCommon()
            {}

        FEmptyResponse(const TSharedPtr<FJsonObject>& obj) : FEmptyResponse()
        {
            readFromValue(obj);
        }

        ~FEmptyResponse();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FEntityKey : public PlayFab::FPlayFabCppBaseModel
    {
        // Unique ID of the entity.
        FString Id;

        // [optional] Entity type. See https://docs.microsoft.com/gaming/playfab/features/data/entities/available-built-in-entity-types
        FString Type;

        FEntityKey() :
            FPlayFabCppBaseModel(),
            Id(),
            Type()
            {}

        FEntityKey(const FEntityKey& src) :
            FPlayFabCppBaseModel(),
            Id(src.Id),
            Type(src.Type)
            {}

        FEntityKey(const TSharedPtr<FJsonObject>& obj) : FEntityKey()
        {
            readFromValue(obj);
        }

        ~FEntityKey();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    enum ExperimentState
    {
        ExperimentStateNew,
        ExperimentStateStarted,
        ExperimentStateStopped,
        ExperimentStateDeleted
    };

    PLAYFABCPP_API void writeExperimentStateEnumJSON(ExperimentState enumVal, JsonWriter& writer);
    PLAYFABCPP_API ExperimentState readExperimentStateFromValue(const TSharedPtr<FJsonValue>& value);
    PLAYFABCPP_API ExperimentState readExperimentStateFromValue(const FString& value);

    struct PLAYFABCPP_API FExperiment : public PlayFab::FPlayFabCppBaseModel
    {
        // [optional] Description of the experiment.
        FString Description;

        // The duration of the experiment, in days.
        uint32 Duration;

        // [optional] Type of experiment.
        Boxed<ExperimentType> pfExperimentType;

        // [optional] Id of the experiment.
        FString Id;

        // [optional] Friendly name of the experiment.
        FString Name;

        // [optional] Id of the segment to which this experiment applies. Defaults to the 'All Players' segment.
        FString SegmentId;

        // When experiment should start/was started.
        FDateTime StartDate;

        // [optional] State experiment is currently in.
        Boxed<ExperimentState> State;

        /**
         * [optional] List of title player account IDs that automatically receive treatments in the experiment, but are not included when
         * calculating experiment metrics.
         */
        TArray<FString> TitlePlayerAccountTestIds;
        // [optional] List of variants for the experiment.
        TArray<FVariant> Variants;
        FExperiment() :
            FPlayFabCppBaseModel(),
            Description(),
            Duration(0),
            pfExperimentType(),
            Id(),
            Name(),
            SegmentId(),
            StartDate(0),
            State(),
            TitlePlayerAccountTestIds(),
            Variants()
            {}

        FExperiment(const FExperiment& src) :
            FPlayFabCppBaseModel(),
            Description(src.Description),
            Duration(src.Duration),
            pfExperimentType(src.pfExperimentType),
            Id(src.Id),
            Name(src.Name),
            SegmentId(src.SegmentId),
            StartDate(src.StartDate),
            State(src.State),
            TitlePlayerAccountTestIds(src.TitlePlayerAccountTestIds),
            Variants(src.Variants)
            {}

        FExperiment(const TSharedPtr<FJsonObject>& obj) : FExperiment()
        {
            readFromValue(obj);
        }

        ~FExperiment();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FGetExperimentsRequest : public PlayFab::FPlayFabCppRequestCommon
    {
        // [optional] The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.).
        TMap<FString, FString> CustomTags;
        FGetExperimentsRequest() :
            FPlayFabCppRequestCommon(),
            CustomTags()
            {}

        FGetExperimentsRequest(const FGetExperimentsRequest& src) :
            FPlayFabCppRequestCommon(),
            CustomTags(src.CustomTags)
            {}

        FGetExperimentsRequest(const TSharedPtr<FJsonObject>& obj) : FGetExperimentsRequest()
        {
            readFromValue(obj);
        }

        ~FGetExperimentsRequest();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FGetExperimentsResult : public PlayFab::FPlayFabCppResultCommon
    {
        // [optional] List of experiments for the title.
        TArray<FExperiment> Experiments;
        FGetExperimentsResult() :
            FPlayFabCppResultCommon(),
            Experiments()
            {}

        FGetExperimentsResult(const FGetExperimentsResult& src) :
            FPlayFabCppResultCommon(),
            Experiments(src.Experiments)
            {}

        FGetExperimentsResult(const TSharedPtr<FJsonObject>& obj) : FGetExperimentsResult()
        {
            readFromValue(obj);
        }

        ~FGetExperimentsResult();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FGetLatestScorecardRequest : public PlayFab::FPlayFabCppRequestCommon
    {
        // [optional] The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.).
        TMap<FString, FString> CustomTags;
        // [optional] The ID of the experiment.
        FString ExperimentId;

        FGetLatestScorecardRequest() :
            FPlayFabCppRequestCommon(),
            CustomTags(),
            ExperimentId()
            {}

        FGetLatestScorecardRequest(const FGetLatestScorecardRequest& src) :
            FPlayFabCppRequestCommon(),
            CustomTags(src.CustomTags),
            ExperimentId(src.ExperimentId)
            {}

        FGetLatestScorecardRequest(const TSharedPtr<FJsonObject>& obj) : FGetLatestScorecardRequest()
        {
            readFromValue(obj);
        }

        ~FGetLatestScorecardRequest();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FMetricData : public PlayFab::FPlayFabCppBaseModel
    {
        // The upper bound of the confidence interval for the relative delta (Delta.RelativeValue).
        double ConfidenceIntervalEnd;

        // The lower bound of the confidence interval for the relative delta (Delta.RelativeValue).
        double ConfidenceIntervalStart;

        // The absolute delta between TreatmentStats.Average and ControlStats.Average.
        float DeltaAbsoluteChange;

        // The relative delta ratio between TreatmentStats.Average and ControlStats.Average.
        float DeltaRelativeChange;

        // [optional] The machine name of the metric.
        FString InternalName;

        // [optional] Indicates if a movement was detected on that metric.
        FString Movement;

        // [optional] The readable name of the metric.
        FString Name;

        // The expectation that a movement is real
        float PMove;

        // The p-value resulting from the statistical test run for this metric
        float PValue;

        // The threshold for observing sample ratio mismatch.
        float PValueThreshold;

        // [optional] Indicates if the movement is statistically significant.
        FString StatSigLevel;

        // Observed standard deviation value of the metric.
        float StdDev;

        // Observed average value of the metric.
        float Value;

        FMetricData() :
            FPlayFabCppBaseModel(),
            ConfidenceIntervalEnd(0),
            ConfidenceIntervalStart(0),
            DeltaAbsoluteChange(0),
            DeltaRelativeChange(0),
            InternalName(),
            Movement(),
            Name(),
            PMove(0),
            PValue(0),
            PValueThreshold(0),
            StatSigLevel(),
            StdDev(0),
            Value(0)
            {}

        FMetricData(const FMetricData& src) :
            FPlayFabCppBaseModel(),
            ConfidenceIntervalEnd(src.ConfidenceIntervalEnd),
            ConfidenceIntervalStart(src.ConfidenceIntervalStart),
            DeltaAbsoluteChange(src.DeltaAbsoluteChange),
            DeltaRelativeChange(src.DeltaRelativeChange),
            InternalName(src.InternalName),
            Movement(src.Movement),
            Name(src.Name),
            PMove(src.PMove),
            PValue(src.PValue),
            PValueThreshold(src.PValueThreshold),
            StatSigLevel(src.StatSigLevel),
            StdDev(src.StdDev),
            Value(src.Value)
            {}

        FMetricData(const TSharedPtr<FJsonObject>& obj) : FMetricData()
        {
            readFromValue(obj);
        }

        ~FMetricData();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FScorecardDataRow : public PlayFab::FPlayFabCppBaseModel
    {
        // Represents whether the variant is control or not.
        bool IsControl;

        // [optional] Data of the analysis with the internal name of the metric as the key and an object of metric data as value.
        TMap<FString, FMetricData> MetricDataRows;
        // Represents the player count in the variant.
        uint32 PlayerCount;

        // [optional] Name of the variant of analysis.
        FString VariantName;

        FScorecardDataRow() :
            FPlayFabCppBaseModel(),
            IsControl(false),
            MetricDataRows(),
            PlayerCount(0),
            VariantName()
            {}

        FScorecardDataRow(const FScorecardDataRow& src) :
            FPlayFabCppBaseModel(),
            IsControl(src.IsControl),
            MetricDataRows(src.MetricDataRows),
            PlayerCount(src.PlayerCount),
            VariantName(src.VariantName)
            {}

        FScorecardDataRow(const TSharedPtr<FJsonObject>& obj) : FScorecardDataRow()
        {
            readFromValue(obj);
        }

        ~FScorecardDataRow();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FScorecard : public PlayFab::FPlayFabCppBaseModel
    {
        // [optional] Represents the date the scorecard was generated.
        FString DateGenerated;

        // [optional] Represents the duration of scorecard analysis.
        FString Duration;

        // Represents the number of events processed for the generation of this scorecard
        double EventsProcessed;

        // [optional] Id of the experiment.
        FString ExperimentId;

        // [optional] Friendly name of the experiment.
        FString ExperimentName;

        // [optional] Represents the latest compute job status.
        Boxed<AnalysisTaskState> LatestJobStatus;

        // Represents the presence of a sample ratio mismatch in the scorecard data.
        bool SampleRatioMismatch;

        // [optional] Scorecard containing list of analysis.
        TArray<FScorecardDataRow> ScorecardDataRows;
        FScorecard() :
            FPlayFabCppBaseModel(),
            DateGenerated(),
            Duration(),
            EventsProcessed(0),
            ExperimentId(),
            ExperimentName(),
            LatestJobStatus(),
            SampleRatioMismatch(false),
            ScorecardDataRows()
            {}

        FScorecard(const FScorecard& src) :
            FPlayFabCppBaseModel(),
            DateGenerated(src.DateGenerated),
            Duration(src.Duration),
            EventsProcessed(src.EventsProcessed),
            ExperimentId(src.ExperimentId),
            ExperimentName(src.ExperimentName),
            LatestJobStatus(src.LatestJobStatus),
            SampleRatioMismatch(src.SampleRatioMismatch),
            ScorecardDataRows(src.ScorecardDataRows)
            {}

        FScorecard(const TSharedPtr<FJsonObject>& obj) : FScorecard()
        {
            readFromValue(obj);
        }

        ~FScorecard();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FGetLatestScorecardResult : public PlayFab::FPlayFabCppResultCommon
    {
        // [optional] Scorecard for the experiment of the title.
        TSharedPtr<FScorecard> pfScorecard;

        FGetLatestScorecardResult() :
            FPlayFabCppResultCommon(),
            pfScorecard(nullptr)
            {}

        FGetLatestScorecardResult(const FGetLatestScorecardResult& src) :
            FPlayFabCppResultCommon(),
            pfScorecard(src.pfScorecard.IsValid() ? MakeShareable(new FScorecard(*src.pfScorecard)) : nullptr)
            {}

        FGetLatestScorecardResult(const TSharedPtr<FJsonObject>& obj) : FGetLatestScorecardResult()
        {
            readFromValue(obj);
        }

        ~FGetLatestScorecardResult();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FGetTreatmentAssignmentRequest : public PlayFab::FPlayFabCppRequestCommon
    {
        // [optional] The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.).
        TMap<FString, FString> CustomTags;
        // [optional] The entity to perform this action on.
        TSharedPtr<FEntityKey> Entity;

        FGetTreatmentAssignmentRequest() :
            FPlayFabCppRequestCommon(),
            CustomTags(),
            Entity(nullptr)
            {}

        FGetTreatmentAssignmentRequest(const FGetTreatmentAssignmentRequest& src) :
            FPlayFabCppRequestCommon(),
            CustomTags(src.CustomTags),
            Entity(src.Entity.IsValid() ? MakeShareable(new FEntityKey(*src.Entity)) : nullptr)
            {}

        FGetTreatmentAssignmentRequest(const TSharedPtr<FJsonObject>& obj) : FGetTreatmentAssignmentRequest()
        {
            readFromValue(obj);
        }

        ~FGetTreatmentAssignmentRequest();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FTreatmentAssignment : public PlayFab::FPlayFabCppBaseModel
    {
        // [optional] List of the experiment variables.
        TArray<FVariable> Variables;
        // [optional] List of the experiment variants.
        TArray<FString> Variants;
        FTreatmentAssignment() :
            FPlayFabCppBaseModel(),
            Variables(),
            Variants()
            {}

        FTreatmentAssignment(const FTreatmentAssignment& src) :
            FPlayFabCppBaseModel(),
            Variables(src.Variables),
            Variants(src.Variants)
            {}

        FTreatmentAssignment(const TSharedPtr<FJsonObject>& obj) : FTreatmentAssignment()
        {
            readFromValue(obj);
        }

        ~FTreatmentAssignment();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FGetTreatmentAssignmentResult : public PlayFab::FPlayFabCppResultCommon
    {
        // [optional] Treatment assignment for the entity.
        TSharedPtr<FTreatmentAssignment> pfTreatmentAssignment;

        FGetTreatmentAssignmentResult() :
            FPlayFabCppResultCommon(),
            pfTreatmentAssignment(nullptr)
            {}

        FGetTreatmentAssignmentResult(const FGetTreatmentAssignmentResult& src) :
            FPlayFabCppResultCommon(),
            pfTreatmentAssignment(src.pfTreatmentAssignment.IsValid() ? MakeShareable(new FTreatmentAssignment(*src.pfTreatmentAssignment)) : nullptr)
            {}

        FGetTreatmentAssignmentResult(const TSharedPtr<FJsonObject>& obj) : FGetTreatmentAssignmentResult()
        {
            readFromValue(obj);
        }

        ~FGetTreatmentAssignmentResult();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FStartExperimentRequest : public PlayFab::FPlayFabCppRequestCommon
    {
        // [optional] The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.).
        TMap<FString, FString> CustomTags;
        // The ID of the experiment to start.
        FString ExperimentId;

        FStartExperimentRequest() :
            FPlayFabCppRequestCommon(),
            CustomTags(),
            ExperimentId()
            {}

        FStartExperimentRequest(const FStartExperimentRequest& src) :
            FPlayFabCppRequestCommon(),
            CustomTags(src.CustomTags),
            ExperimentId(src.ExperimentId)
            {}

        FStartExperimentRequest(const TSharedPtr<FJsonObject>& obj) : FStartExperimentRequest()
        {
            readFromValue(obj);
        }

        ~FStartExperimentRequest();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FStopExperimentRequest : public PlayFab::FPlayFabCppRequestCommon
    {
        // [optional] The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.).
        TMap<FString, FString> CustomTags;
        // The ID of the experiment to stop.
        FString ExperimentId;

        FStopExperimentRequest() :
            FPlayFabCppRequestCommon(),
            CustomTags(),
            ExperimentId()
            {}

        FStopExperimentRequest(const FStopExperimentRequest& src) :
            FPlayFabCppRequestCommon(),
            CustomTags(src.CustomTags),
            ExperimentId(src.ExperimentId)
            {}

        FStopExperimentRequest(const TSharedPtr<FJsonObject>& obj) : FStopExperimentRequest()
        {
            readFromValue(obj);
        }

        ~FStopExperimentRequest();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FUpdateExperimentRequest : public PlayFab::FPlayFabCppRequestCommon
    {
        // [optional] The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.).
        TMap<FString, FString> CustomTags;
        // [optional] Description of the experiment.
        FString Description;

        // The duration of the experiment, in days.
        uint32 Duration;

        // [optional] Type of experiment.
        Boxed<ExperimentType> pfExperimentType;

        // Id of the experiment.
        FString Id;

        // Friendly name of the experiment.
        FString Name;

        // [optional] Id of the segment to which this experiment applies. Defaults to the 'All Players' segment.
        FString SegmentId;

        // When experiment should start.
        FDateTime StartDate;

        /**
         * [optional] List of title player account IDs that automatically receive treatments in the experiment, but are not included when
         * calculating experiment metrics.
         */
        TArray<FString> TitlePlayerAccountTestIds;
        // List of variants for the experiment.
        TArray<FVariant> Variants;
        FUpdateExperimentRequest() :
            FPlayFabCppRequestCommon(),
            CustomTags(),
            Description(),
            Duration(0),
            pfExperimentType(),
            Id(),
            Name(),
            SegmentId(),
            StartDate(0),
            TitlePlayerAccountTestIds(),
            Variants()
            {}

        FUpdateExperimentRequest(const FUpdateExperimentRequest& src) :
            FPlayFabCppRequestCommon(),
            CustomTags(src.CustomTags),
            Description(src.Description),
            Duration(src.Duration),
            pfExperimentType(src.pfExperimentType),
            Id(src.Id),
            Name(src.Name),
            SegmentId(src.SegmentId),
            StartDate(src.StartDate),
            TitlePlayerAccountTestIds(src.TitlePlayerAccountTestIds),
            Variants(src.Variants)
            {}

        FUpdateExperimentRequest(const TSharedPtr<FJsonObject>& obj) : FUpdateExperimentRequest()
        {
            readFromValue(obj);
        }

        ~FUpdateExperimentRequest();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

}
}

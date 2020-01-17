﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "pch.h"
#include "common.h"
#include "TypeLogging.h"
#include "ScrollPresenter.h"
#include "ScrollControllerScrollFromRequestedEventArgs.h"

#include "ScrollControllerScrollFromRequestedEventArgs.properties.cpp"

ScrollControllerScrollFromRequestedEventArgs::ScrollControllerScrollFromRequestedEventArgs(
    float offsetVelocity,
    winrt::IReference<float> inertiaDecayRate)
{
    SCROLLPRESENTER_TRACE_VERBOSE(nullptr, TRACE_MSG_METH_STR_FLT, METH_NAME, this,
        TypeLogging::NullableFloatToString(inertiaDecayRate).c_str(), offsetVelocity);

    m_offsetVelocity = offsetVelocity;
    m_inertiaDecayRate = inertiaDecayRate;
}

float ScrollControllerScrollFromRequestedEventArgs::OffsetVelocity() const
{
    return m_offsetVelocity;
}

winrt::IReference<float> ScrollControllerScrollFromRequestedEventArgs::InertiaDecayRate() const
{
    return m_inertiaDecayRate;
}

winrt::ScrollingScrollInfo ScrollControllerScrollFromRequestedEventArgs::ScrollInfo() const
{
    return m_scrollInfo;
}

void ScrollControllerScrollFromRequestedEventArgs::ScrollInfo(winrt::ScrollingScrollInfo scrollInfo)
{
    SCROLLPRESENTER_TRACE_VERBOSE(nullptr, TRACE_MSG_METH_INT, METH_NAME, this, scrollInfo.OffsetsChangeId);

    m_scrollInfo = scrollInfo;
}
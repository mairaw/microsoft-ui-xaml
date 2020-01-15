﻿#pragma once
//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

class ProgressRingLoading :
    public winrt::implements<ProgressRingLoading, winrt::IAnimatedVisualSource>
{
private:
    double m_strokeThickness{ 2 };
    winrt::Size m_size;
    winrt::Color m_foreground;
    winrt::Color m_background;

public:
    ProgressRingLoading(double strokeThickness, winrt::Size size, winrt::Color foreground, winrt::Color background);

    winrt::IAnimatedVisual TryCreateAnimatedVisual(
        const winrt::Compositor& compositor,
        winrt::IInspectable& diagnostics);
};

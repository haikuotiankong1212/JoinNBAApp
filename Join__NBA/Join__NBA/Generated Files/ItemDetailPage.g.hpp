﻿

//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"
#include "ItemDetailPage.xaml.h"




void ::Join__NBA::ItemDetailPage::InitializeComponent()
{
    if (_contentLoaded)
        return;

    _contentLoaded = true;

    // Call LoadComponent on ms-appx:///ItemDetailPage.xaml
    ::Windows::UI::Xaml::Application::LoadComponent(this, ref new ::Windows::Foundation::Uri(L"ms-appx:///ItemDetailPage.xaml"), ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);

    // Get the CollectionViewSource named 'itemsViewSource'
    itemsViewSource = safe_cast<::Windows::UI::Xaml::Data::CollectionViewSource^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"itemsViewSource"));
    // Get the FlipView named 'flipView'
    flipView = safe_cast<::Windows::UI::Xaml::Controls::FlipView^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"flipView"));
    // Get the Button named 'backButton'
    backButton = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"backButton"));
    // Get the TextBlock named 'pageTitle'
    pageTitle = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"pageTitle"));
    // Get the VisualStateGroup named 'ApplicationViewStates'
    ApplicationViewStates = safe_cast<::Windows::UI::Xaml::VisualStateGroup^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"ApplicationViewStates"));
    // Get the VisualState named 'FullScreenLandscape'
    FullScreenLandscape = safe_cast<::Windows::UI::Xaml::VisualState^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"FullScreenLandscape"));
    // Get the VisualState named 'Filled'
    Filled = safe_cast<::Windows::UI::Xaml::VisualState^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"Filled"));
    // Get the VisualState named 'FullScreenPortrait'
    FullScreenPortrait = safe_cast<::Windows::UI::Xaml::VisualState^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"FullScreenPortrait"));
    // Get the VisualState named 'Snapped'
    Snapped = safe_cast<::Windows::UI::Xaml::VisualState^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"Snapped"));
}

void ::Join__NBA::ItemDetailPage::Connect(int connectionId, Platform::Object^ target)
{
    switch (connectionId)
    {
    case 1:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::Join__NBA::ItemDetailPage::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&ItemDetailPage::GoBack);
        break;
    case 2:
        (safe_cast<::Windows::UI::Xaml::FrameworkElement^>(target))->Loaded +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::Join__NBA::ItemDetailPage::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&ItemDetailPage::StartLayoutUpdates);
        (safe_cast<::Windows::UI::Xaml::FrameworkElement^>(target))->Unloaded +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::Join__NBA::ItemDetailPage::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&ItemDetailPage::StopLayoutUpdates);
        break;
    }
    (void)connectionId; // Unused parameter
    (void)target; // Unused parameter
    _contentLoaded = true;
}


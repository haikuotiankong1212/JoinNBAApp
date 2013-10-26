﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "pch.h"
#include "XamlTypeInfo.g.h"

#include "App.xaml.h"
#include "GroupedItemsPage.xaml.h"
#include "GroupDetailPage.xaml.h"
#include "ItemDetailPage.xaml.h"

#include "App.g.hpp"
#include "GroupedItemsPage.g.hpp"
#include "GroupDetailPage.g.hpp"
#include "ItemDetailPage.g.hpp"

::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::OtherProviders::get()
{
    if(_otherProviders == nullptr)
    {
        _otherProviders = ref new ::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>();
    }
    return _otherProviders;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CheckOtherMetadataProvidersForName(::Platform::String^ typeName)
{
    for (unsigned int i = 0; i < OtherProviders->Size; i++)
    {
        auto xamlType = OtherProviders->GetAt(i)->GetXamlType(typeName);
        if(xamlType != nullptr)
        {
            return xamlType;
        }
    }
    return nullptr;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CheckOtherMetadataProvidersForType(::Windows::UI::Xaml::Interop::TypeName t)
{
    for (unsigned int i = 0; i < OtherProviders->Size; i++)
    {
        auto xamlType = OtherProviders->GetAt(i)->GetXamlType(t);
        if(xamlType != nullptr)
        {
            return xamlType;
        }
    }
    return nullptr;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlType(::Platform::String^ typeName)
{
    if (typeName == L"Windows.UI.Xaml.Controls.Page")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Windows.UI.Xaml.Controls.UserControl")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Object")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"String")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Windows.UI.Xaml.Controls.Panel")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Windows.UI.Xaml.Controls.RichTextBlock")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Windows.UI.Xaml.DataTemplate")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Windows.UI.Xaml.DependencyObject")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Windows.UI.Xaml.Media.ImageSource")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Windows.UI.Xaml.Interop.TypeName")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Join__NBA.Common.LayoutAwarePage")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Windows.UI.Xaml.Controls.Page"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Custom;
        userType->AddMemberName(L"DefaultViewModel");
        return userType;
    }

    if (typeName == L"Windows.Foundation.Collections.IObservableMap<String, Object>")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, nullptr);
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Metadata;
        userType->DictionaryAdd =
            [](Object^ instance, Object^ key, Object^ item) -> void
            {
                auto collection = (Windows::Foundation::Collections::IObservableMap<::Platform::String^, ::Platform::Object^>^)instance;
                auto newKey = (Platform::String^)key;
                auto newItem = (Platform::Object^)item;
                collection->Insert(newKey, newItem);
            };
        return userType;
    }

    if (typeName == L"Join__NBA.GroupedItemsPage")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Join__NBA.Common.LayoutAwarePage"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Custom;
        userType->Activator =
            []() -> Platform::Object^ 
            {
                return ref new ::Join__NBA::GroupedItemsPage(); 
            };
        return userType;
    }

    if (typeName == L"Join__NBA.GroupDetailPage")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Join__NBA.Common.LayoutAwarePage"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Custom;
        userType->Activator =
            []() -> Platform::Object^ 
            {
                return ref new ::Join__NBA::GroupDetailPage(); 
            };
        return userType;
    }

    if (typeName == L"Join__NBA.Common.RichTextColumns")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Windows.UI.Xaml.Controls.Panel"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Custom;
        userType->Activator =
            []() -> Platform::Object^ 
            {
                return ref new ::Join__NBA::Common::RichTextColumns(); 
            };
        userType->SetContentPropertyName(L"Join__NBA.Common.RichTextColumns.RichTextContent");
        userType->AddMemberName(L"RichTextContent");
        userType->AddMemberName(L"ColumnTemplate");
        return userType;
    }

    if (typeName == L"Join__NBA.ItemDetailPage")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Join__NBA.Common.LayoutAwarePage"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Custom;
        userType->Activator =
            []() -> Platform::Object^ 
            {
                return ref new ::Join__NBA::ItemDetailPage(); 
            };
        return userType;
    }

    if (typeName == L"Join__NBA.Data.SampleDataCommon")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Join__NBA.Common.BindableBase"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Custom;
        userType->AddMemberName(L"Description");
        userType->AddMemberName(L"Image");
        userType->AddMemberName(L"Subtitle");
        userType->AddMemberName(L"Title");
        userType->AddMemberName(L"UniqueId");
        userType->SetIsBindable();
        return userType;
    }

    if (typeName == L"Join__NBA.Common.BindableBase")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Windows.UI.Xaml.DependencyObject"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Custom;
        userType->AddMemberName(L"Type");
        return userType;
    }

    if (typeName == L"Join__NBA.Data.SampleDataItem")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Join__NBA.Data.SampleDataCommon"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Custom;
        userType->AddMemberName(L"Group");
        userType->AddMemberName(L"Content");
        userType->SetIsBindable();
        return userType;
    }

    if (typeName == L"Join__NBA.Data.SampleDataGroup")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Join__NBA.Data.SampleDataCommon"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Custom;
        userType->AddMemberName(L"TopItems");
        userType->AddMemberName(L"Items");
        userType->SetIsBindable();
        return userType;
    }

    if (typeName == L"Windows.Foundation.Collections.IVector<Join__NBA.Data.SampleDataItem>")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, nullptr);
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Metadata;
        userType->CollectionAdd =
            [](Object^ instance, Object^ item) -> void
            {
                auto collection = (Windows::Foundation::Collections::IVector<::Join__NBA::Data::SampleDataItem^>^)instance;
                auto newItem = (Join__NBA::Data::SampleDataItem^)item;
                collection->Append(newItem);
            };
        return userType;
    }

    if (typeName == L"Windows.Foundation.Collections.IObservableVector<Join__NBA.Data.SampleDataItem>")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, nullptr);
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Metadata;
        userType->CollectionAdd =
            [](Object^ instance, Object^ item) -> void
            {
                auto collection = (Windows::Foundation::Collections::IObservableVector<::Join__NBA::Data::SampleDataItem^>^)instance;
                auto newItem = (Join__NBA::Data::SampleDataItem^)item;
                collection->Append(newItem);
            };
        return userType;
    }

    if (typeName == L"Join__NBA.Data.SampleDataSource")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Object"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Custom;
        userType->Activator =
            []() -> Platform::Object^ 
            {
                return ref new ::Join__NBA::Data::SampleDataSource(); 
            };
        userType->AddMemberName(L"AllGroups");
        userType->AddMemberName(L"Groups");
        userType->AddMemberName(L"Group");
        userType->AddMemberName(L"Item");
        userType->SetIsBindable();
        return userType;
    }

    if (typeName == L"Windows.Foundation.Collections.IObservableVector<Join__NBA.Data.SampleDataGroup>")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, nullptr);
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Metadata;
        userType->CollectionAdd =
            [](Object^ instance, Object^ item) -> void
            {
                auto collection = (Windows::Foundation::Collections::IObservableVector<::Join__NBA::Data::SampleDataGroup^>^)instance;
                auto newItem = (Join__NBA::Data::SampleDataGroup^)item;
                collection->Append(newItem);
            };
        return userType;
    }

    if (typeName == L"Windows.Foundation.Collections.IIterable<Join__NBA.Data.SampleDataGroup>")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, nullptr);
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Metadata;
        return userType;
    }

    return nullptr;
}

::Windows::UI::Xaml::Markup::IXamlMember^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlMember(::Platform::String^ longMemberName)
{
    if (longMemberName == L"Join__NBA.Common.LayoutAwarePage.DefaultViewModel")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"DefaultViewModel", L"Windows.Foundation.Collections.IObservableMap<String, Object>");
        xamlMember->SetIsDependencyProperty();
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Join__NBA::Common::LayoutAwarePage^)instance;
                return that->DefaultViewModel;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Join__NBA::Common::LayoutAwarePage^)instance;
                that->DefaultViewModel = (::Windows::Foundation::Collections::IObservableMap<::Platform::String^, ::Platform::Object^>^)value;
            };
        return xamlMember;
    }

    if (longMemberName == L"Join__NBA.Common.RichTextColumns.RichTextContent")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"RichTextContent", L"Windows.UI.Xaml.Controls.RichTextBlock");
        xamlMember->SetIsDependencyProperty();
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Join__NBA::Common::RichTextColumns^)instance;
                return that->RichTextContent;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Join__NBA::Common::RichTextColumns^)instance;
                that->RichTextContent = (::Windows::UI::Xaml::Controls::RichTextBlock^)value;
            };
        return xamlMember;
    }

    if (longMemberName == L"Join__NBA.Common.RichTextColumns.ColumnTemplate")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"ColumnTemplate", L"Windows.UI.Xaml.DataTemplate");
        xamlMember->SetIsDependencyProperty();
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Join__NBA::Common::RichTextColumns^)instance;
                return that->ColumnTemplate;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Join__NBA::Common::RichTextColumns^)instance;
                that->ColumnTemplate = (::Windows::UI::Xaml::DataTemplate^)value;
            };
        return xamlMember;
    }

    if (longMemberName == L"Join__NBA.Data.SampleDataCommon.Description")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"Description", L"String");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Join__NBA::Data::SampleDataCommon^)instance;
                return that->Description;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Join__NBA::Data::SampleDataCommon^)instance;
                that->Description = (::Platform::String^)value;
            };
        return xamlMember;
    }

    if (longMemberName == L"Join__NBA.Data.SampleDataCommon.Image")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"Image", L"Windows.UI.Xaml.Media.ImageSource");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Join__NBA::Data::SampleDataCommon^)instance;
                return that->Image;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Join__NBA::Data::SampleDataCommon^)instance;
                that->Image = (::Windows::UI::Xaml::Media::ImageSource^)value;
            };
        return xamlMember;
    }

    if (longMemberName == L"Join__NBA.Data.SampleDataCommon.Subtitle")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"Subtitle", L"String");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Join__NBA::Data::SampleDataCommon^)instance;
                return that->Subtitle;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Join__NBA::Data::SampleDataCommon^)instance;
                that->Subtitle = (::Platform::String^)value;
            };
        return xamlMember;
    }

    if (longMemberName == L"Join__NBA.Data.SampleDataCommon.Title")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"Title", L"String");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Join__NBA::Data::SampleDataCommon^)instance;
                return that->Title;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Join__NBA::Data::SampleDataCommon^)instance;
                that->Title = (::Platform::String^)value;
            };
        return xamlMember;
    }

    if (longMemberName == L"Join__NBA.Data.SampleDataCommon.UniqueId")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"UniqueId", L"String");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Join__NBA::Data::SampleDataCommon^)instance;
                return that->UniqueId;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Join__NBA::Data::SampleDataCommon^)instance;
                that->UniqueId = (::Platform::String^)value;
            };
        return xamlMember;
    }

    if (longMemberName == L"Join__NBA.Common.BindableBase.Type")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"Type", L"Windows.UI.Xaml.Interop.TypeName");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Join__NBA::Common::BindableBase^)instance;
                auto value = ref new ::Platform::Box<::Windows::UI::Xaml::Interop::TypeName>(that->Type);
                return value;
            };

        xamlMember->SetIsReadOnly();
        return xamlMember;
    }

    if (longMemberName == L"Join__NBA.Data.SampleDataItem.Group")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"Group", L"Join__NBA.Data.SampleDataGroup");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Join__NBA::Data::SampleDataItem^)instance;
                return that->Group;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Join__NBA::Data::SampleDataItem^)instance;
                that->Group = (::Join__NBA::Data::SampleDataGroup^)value;
            };
        return xamlMember;
    }

    if (longMemberName == L"Join__NBA.Data.SampleDataItem.Content")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"Content", L"String");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Join__NBA::Data::SampleDataItem^)instance;
                return that->Content;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Join__NBA::Data::SampleDataItem^)instance;
                that->Content = (::Platform::String^)value;
            };
        return xamlMember;
    }

    if (longMemberName == L"Join__NBA.Data.SampleDataGroup.TopItems")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"TopItems", L"Windows.Foundation.Collections.IVector<Join__NBA.Data.SampleDataItem>");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Join__NBA::Data::SampleDataGroup^)instance;
                return that->TopItems;
            };

        xamlMember->SetIsReadOnly();
        return xamlMember;
    }

    if (longMemberName == L"Join__NBA.Data.SampleDataGroup.Items")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"Items", L"Windows.Foundation.Collections.IObservableVector<Join__NBA.Data.SampleDataItem>");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Join__NBA::Data::SampleDataGroup^)instance;
                return that->Items;
            };

        xamlMember->SetIsReadOnly();
        return xamlMember;
    }

    if (longMemberName == L"Join__NBA.Data.SampleDataSource.AllGroups")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"AllGroups", L"Windows.Foundation.Collections.IObservableVector<Join__NBA.Data.SampleDataGroup>");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Join__NBA::Data::SampleDataSource^)instance;
                return that->AllGroups;
            };

        xamlMember->SetIsReadOnly();
        return xamlMember;
    }

    if (longMemberName == L"Join__NBA.Data.SampleDataSource.Groups")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"Groups", L"Windows.Foundation.Collections.IIterable<Join__NBA.Data.SampleDataGroup>");
        xamlMember->SetTargetTypeName(L"String");
        xamlMember->SetIsAttachable();
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                return ::Join__NBA::Data::SampleDataSource::GetGroups((::Platform::String^)instance);
            };

        xamlMember->SetIsReadOnly();
        return xamlMember;
    }

    if (longMemberName == L"Join__NBA.Data.SampleDataSource.Group")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"Group", L"Join__NBA.Data.SampleDataGroup");
        xamlMember->SetTargetTypeName(L"String");
        xamlMember->SetIsAttachable();
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                return ::Join__NBA::Data::SampleDataSource::GetGroup((::Platform::String^)instance);
            };

        xamlMember->SetIsReadOnly();
        return xamlMember;
    }

    if (longMemberName == L"Join__NBA.Data.SampleDataSource.Item")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"Item", L"Join__NBA.Data.SampleDataItem");
        xamlMember->SetTargetTypeName(L"String");
        xamlMember->SetIsAttachable();
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                return ::Join__NBA::Data::SampleDataSource::GetItem((::Platform::String^)instance);
            };

        xamlMember->SetIsReadOnly();
        return xamlMember;
    }

    return nullptr;
}

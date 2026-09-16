#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 2 member(s).
namespace winrt::Windows::Internal::UI::InputSwitch {
class implementation {
public:
    class ImeContextMenu;
    class ImeContextMenuBuilders;
    class ImeContextMenuBuildersHelpers;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveProfileFromProfileManager@implementation@InputSwitch@UI@Internal@Windows@winrt@@YA?AUTextInputProfile@Text@Input@3WindowsUdk@6@AEBUTextInputProfileManager@893WindowsUdk@6@@Z
    WindissectOpaque GetActiveProfileFromProfileManager(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullWidthConversionMode@implementation@InputSwitch@UI@Internal@Windows@winrt@@YA_NW4TextInputConversionMode@Text@Input@3WindowsUdk@6@@Z
    bool IsFullWidthConversionMode(int);
};
} // namespace winrt::Windows::Internal::UI::InputSwitch

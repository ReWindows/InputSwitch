#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 6 member(s).
namespace winrt::Windows::Internal::UI::InputSwitch::implementation {
class ImeContextMenu {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContextMenuFlyout@ImeContextMenu@implementation@InputSwitch@UI@Internal@Windows@winrt@@QEAA?AUMenuFlyout@Controls@Xaml@467@W4ContextMenuTypes@1234567@@Z
    WindissectOpaque CreateContextMenuFlyout(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextMenu@ImeContextMenu@implementation@InputSwitch@UI@Internal@Windows@winrt@@QEAA?AUMenuFlyout@Controls@Xaml@467@XZ
    WindissectOpaque GetContextMenu();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImeContextMenu@implementation@InputSwitch@UI@Internal@Windows@winrt@@QEAA@XZ
    ~ImeContextMenu();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateJapaneseContextMenuFlyout@ImeContextMenu@implementation@InputSwitch@UI@Internal@Windows@winrt@@AEAA?AUMenuFlyout@Controls@Xaml@467@XZ
    WindissectOpaque CreateJapaneseContextMenuFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenuItemClicked@ImeContextMenu@implementation@InputSwitch@UI@Internal@Windows@winrt@@AEAAXW4ContextMenuItemTypes@ImeContextMenuBuilders@234567@W4ContextMenuTypes@1234567@@Z
    void OnContextMenuItemClicked(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleToolbar@ImeContextMenu@implementation@InputSwitch@UI@Internal@Windows@winrt@@AEAAXW4ContextMenuTypes@1234567@@Z
    void ToggleToolbar(int);
};
} // namespace winrt::Windows::Internal::UI::InputSwitch::implementation

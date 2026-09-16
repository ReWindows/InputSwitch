#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 4 member(s).
// Base evidence: DirectUI::TouchButton (likely; classinfo-template-instantiation).
class SettingsTile {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@SettingsTile@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementProviderImpl@SettingsTile@@UEAAJPEAVInvokeHelper@DirectUI@@PEAPEAVElementProvider@3@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ::DirectUI::ElementProvider * *);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 4 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class InputSwitchRoot {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@InputSwitchRoot@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementProviderImpl@InputSwitchRoot@@UEAAJPEAVInvokeHelper@DirectUI@@PEAPEAVElementProvider@3@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ::DirectUI::ElementProvider * *);
};

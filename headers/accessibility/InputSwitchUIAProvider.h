#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 6 member(s).
class InputSwitchUIAProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireModeChangeEvent@InputSwitchUIAProvider@@QEAAXAEAPEAUHINSTANCE__@@H@Z
    void FireModeChangeEvent(HINSTANCE__* &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireSwitchEvent@InputSwitchUIAProvider@@QEAAXPEBG0@Z
    void FireSwitchEvent(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternProvider@InputSwitchUIAProvider@@UEAAJHPEAPEAUIUnknown@@@Z
    virtual long GetPatternProvider(int, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@InputSwitchUIAProvider@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostRawElementProvider@InputSwitchUIAProvider@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderOptions@InputSwitchUIAProvider@@UEAAJPEAW4ProviderOptions@@@Z
    virtual long get_ProviderOptions(int *);
};

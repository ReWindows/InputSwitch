#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 7 member(s).
class CUIAOverlayWindow {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternProvider@CUIAOverlayWindow@@UEAAJHPEAPEAUIUnknown@@@Z
    virtual long GetPatternProvider(int, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@CUIAOverlayWindow@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CUIAOverlayWindow@@UEAAJXZ
    virtual long Invoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostRawElementProvider@CUIAOverlayWindow@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderOptions@CUIAOverlayWindow@@UEAAJPEAW4ProviderOptions@@@Z
    virtual long get_ProviderOptions(int *);
};

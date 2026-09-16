#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 7 member(s).
class ImeContextMenuManagerAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dismiss@ImeContextMenuManagerAdapter@@QEAAJXZ
    long Dismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissed@ImeContextMenuManagerAdapter@@UEAAJXZ
    virtual long OnDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShown@ImeContextMenuManagerAdapter@@UEAAJXZ
    virtual long OnShown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ImeContextMenuManagerAdapter@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImeContextMenuManagerAdapter@@UEAA@XZ
    virtual ~ImeContextMenuManagerAdapter();
};

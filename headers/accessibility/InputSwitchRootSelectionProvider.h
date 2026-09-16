#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 6 member(s).
class InputSwitchRootSelectionProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@InputSwitchRootSelectionProvider@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetSelection(tagSAFEARRAY * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputSwitchRootSelectionProvider@@QEAA@XZ
    InputSwitchRootSelectionProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanSelectMultiple@InputSwitchRootSelectionProvider@@UEAAJPEAH@Z
    virtual long get_CanSelectMultiple(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelectionRequired@InputSwitchRootSelectionProvider@@UEAAJPEAH@Z
    virtual long get_IsSelectionRequired(int *);
};

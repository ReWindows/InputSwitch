#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 3 member(s).
class ImePrivateMode {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAutomaticPrivateModeEnabled@ImePrivateMode@@YA_NXZ
    bool IsAutomaticPrivateModeEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExplicitPrivateModeEnabled@ImePrivateMode@@YA_NXZ
    bool IsExplicitPrivateModeEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExplicitPrivateMode@ImePrivateMode@@YAX_NW4PrivateModeSetTrigger@1@@Z
    void SetExplicitPrivateMode(bool, int);
};

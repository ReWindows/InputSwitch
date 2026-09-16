#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 4 member(s).
namespace Windows::Internal::Shell::InputSwitcher {
class InputSwitchShellViewManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?report_visibility@InputSwitchShellViewManager@InputSwitcher@Shell@Internal@Windows@@QEAAX_NPEBG@Z
    void report_visibility(bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?subscribe_to_coordinator@InputSwitchShellViewManager@InputSwitcher@Shell@Internal@Windows@@QEAAXPEAVCTsfHandler@@@Z
    void subscribe_to_coordinator(CTsfHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?unsubscribe_from_coordinator@InputSwitchShellViewManager@InputSwitcher@Shell@Internal@Windows@@QEAAXXZ
    void unsubscribe_from_coordinator();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputSwitchShellViewManager@InputSwitcher@Shell@Internal@Windows@@UEAA@XZ
    virtual ~InputSwitchShellViewManager();
};
} // namespace Windows::Internal::Shell::InputSwitcher

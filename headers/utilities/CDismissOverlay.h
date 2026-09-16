#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 7 member(s).
class CDismissOverlay {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disable@CDismissOverlay@@QEAAJXZ
    long Disable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enable@CDismissOverlay@@QEAAJXZ
    long Enable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CDismissOverlay@@QEAAJPEAUHWND__@@0_N@Z
    long Init(HWND__*, HWND__*, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TriggerDismiss@CDismissOverlay@@AEAAXXZ
    void _TriggerDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_WndProc@CDismissOverlay@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t _s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};

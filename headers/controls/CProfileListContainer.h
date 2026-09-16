#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 3 member(s).
class CProfileListContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitFrom@CProfileListContainer@@QEAAJPEBQEBVCInputProfileInfo@@_K@Z
    long InitFrom(CInputProfileInfo const * const *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProfileListContainer@@QEAA@XZ
    ~CProfileListContainer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Cleanup@CProfileListContainer@@AEAAXXZ
    void _Cleanup();
};

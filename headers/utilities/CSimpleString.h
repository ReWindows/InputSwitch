#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 4 member(s).
class CSimpleString {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Format@CSimpleString@@QEAAJPEAUHINSTANCE__@@IZZ
    long Format(HINSTANCE__*, unsigned int, ...);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadResource@CSimpleString@@QEAAJPEAUHINSTANCE__@@I@Z
    long LoadResource(HINSTANCE__*, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSimpleString@@QEAA@XZ
    ~CSimpleString();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@CSimpleString@@AEAAXXZ
    void Free();
};

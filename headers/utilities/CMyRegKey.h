#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 4 member(s).
class CMyRegKey {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CMyRegKey@@QEAAJXZ
    long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CMyRegKey@@QEAAJPEAUHKEY__@@PEBGK@Z
    long Open(HKEY__*, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryValue@CMyRegKey@@UEAAJAEAKPEBG@Z
    virtual long QueryValue(unsigned long &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryValueCch@CMyRegKey@@UEAAJPEAGPEBGK@Z
    virtual long QueryValueCch(unsigned short *, unsigned short const *, unsigned long);
};

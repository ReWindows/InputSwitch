#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 7 member(s).
class CUACIndicatorHWND {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUACIndicatorHWND@@SAJPEAKPEAPEAV1@@Z
    static long Create(unsigned long *, CUACIndicatorHWND * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHostWindow@CUACIndicatorHWND@@UEAAPEAUHWND__@@KPEBG0KHHHHPEAU2@PEAUHMENU__@@PEAUHINSTANCE__@@PEAX@Z
    virtual HWND__* CreateHostWindow(unsigned long, unsigned short const *, unsigned short const *, unsigned long, int, int, int, int, HWND__*, HMENU__*, HINSTANCE__*, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CUACIndicatorHWND@@QEAAJXZ
    long Show();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CUACIndicatorHWND@@EEAAJI_K_JPEA_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CUACIndicatorHWND@@AEAAJPEAK@Z
    long _Initialize(unsigned long *);
};

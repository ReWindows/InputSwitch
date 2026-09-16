#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 3 member(s).
class GDIHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z
    long AddBackgroundForIcon(HBITMAP__*, unsigned long const &, tagSIZE const &, tagSIZE const &, tagSIZE const &, HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z
    void FillRectARGB(HDC__*, tagRECT const *, unsigned char, unsigned long, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z
    HBITMAP__* PremultiplyAlphaChannel(HBITMAP__*, bool);
};

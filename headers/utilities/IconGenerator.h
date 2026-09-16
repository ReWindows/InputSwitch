#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 2 member(s).
class IconGenerator {
public:
    class CBitmapBits;
    class CBitmapDC;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIconFromTextAndFont@IconGenerator@@YAPEAUHICON__@@PEBGPEAUHFONT__@@KKHH_NH@Z
    HICON__* CreateIconFromTextAndFont(unsigned short const *, HFONT__*, unsigned long, unsigned long, int, int, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrintTextOnIcon@IconGenerator@@YAXPEAUHDC__@@PEBGPEAUHFONT__@@KKHH_NH@Z
    void PrintTextOnIcon(HDC__*, unsigned short const *, HFONT__*, unsigned long, unsigned long, int, int, bool, int);
};

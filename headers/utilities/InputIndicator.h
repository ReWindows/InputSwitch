#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 2 member(s).
namespace Windows {
class InputIndicator {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreDefaultFont@InputIndicator@Windows@@YAXPEAVElement@DirectUI@@_N@Z
    void RestoreDefaultFont(::DirectUI::Element *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLanguageName@InputIndicator@Windows@@YAJPEAVElement@DirectUI@@0PEBU__MIDL___MIDL_itf_inputswitchserver_0000_0000_0002@@_N@Z
    long SetLanguageName(::DirectUI::Element *, ::DirectUI::Element *, __MIDL___MIDL_itf_inputswitchserver_0000_0000_0002const *, bool);
};
} // namespace Windows

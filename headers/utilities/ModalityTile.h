#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 8 member(s).
// Base evidence: DirectUI::TouchButton (likely; classinfo-template-instantiation).
class ModalityTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndInitialize@ModalityTile@@SAJPEAVCInputSwitchUI@@PEAVElement@DirectUI@@W4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0005@@_NPEAPEAV34@@Z
    static long CreateAndInitialize(CInputSwitchUI *, ::DirectUI::Element *, int, bool, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSpacer@ModalityTile@@SAJPEAVCInputSwitchUI@@PEAVElement@DirectUI@@PEAPEAV34@@Z
    static long CreateSpacer(CInputSwitchUI *, ::DirectUI::Element *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@ModalityTile@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementProviderImpl@ModalityTile@@UEAAJPEAVInvokeHelper@DirectUI@@PEAPEAVElementProvider@3@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ::DirectUI::ElementProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ModalityTile@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelected@ModalityTile@@QEAAJ_N@Z
    long SetSelected(bool);
};

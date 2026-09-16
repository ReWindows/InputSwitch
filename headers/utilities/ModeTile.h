#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 10 member(s).
// Base evidence: DirectUI::TouchButton (likely; classinfo-template-instantiation).
class ModeTile {
public:
    class CLanguageAbbreviationElementListener;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndInitialize@ModeTile@@SAJPEAVCInputSwitchUI@@PEAVElement@DirectUI@@PEBGI2222_NPEBUCFontOverride@@PEAPEAV34@@Z
    static long CreateAndInitialize(CInputSwitchUI *, ::DirectUI::Element *, unsigned short const *, unsigned int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, bool, CFontOverride const *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@ModeTile@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementProviderImpl@ModeTile@@UEAAJPEAVInvokeHelper@DirectUI@@PEAPEAVElementProvider@3@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ::DirectUI::ElementProvider * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ModeTile@@QEAA@XZ
    ModeTile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ModeTile@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelected@ModeTile@@QEAAJ_N@Z
    long SetSelected(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ModeTile@@UEAA@XZ
    virtual ~ModeTile();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetLangAbbreviationWithFontOverride@ModeTile@@AEAAJPEBGPEBUCFontOverride@@@Z
    long _SetLangAbbreviationWithFontOverride(unsigned short const *, CFontOverride const *);
};

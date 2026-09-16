#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 7 member(s).
class CLangBarItemProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLangBarItemProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Click@CLangBarItemProxy@@QEAAJW4__MIDL___MIDL_itf_ctfutb_0000_0010_0001@@UtagPOINT@@PEBUtagRECT@@@Z
    long Click(int, tagPOINT, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpdate@CLangBarItemProxy@@UEAAJK@Z
    virtual long OnUpdate(unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLangBarItemProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLangBarItemProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninit@CLangBarItemProxy@@QEAAXXZ
    void Uninit();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemType@CLangBarItemProxy@@AEAAXXZ
    void GetItemType();
};

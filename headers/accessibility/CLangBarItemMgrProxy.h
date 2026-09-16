#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 16 member(s).
class CLangBarItemMgrProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddItem@CLangBarItemMgrProxy@@UEAAJPEAUITfLangBarItem@@@Z
    virtual long AddItem(ITfLangBarItem *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLangBarItemMgrProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseItemSink@CLangBarItemMgrProxy@@UEAAJPEAUITfLangBarItemSink@@PEAKAEBU_GUID@@@Z
    virtual long AdviseItemSink(ITfLangBarItemSink *, unsigned long *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseItemsSink@CLangBarItemMgrProxy@@UEAAJKPEAPEAUITfLangBarItemSink@@PEBU_GUID@@PEAK@Z
    virtual long AdviseItemsSink(unsigned long, ITfLangBarItemSink * *, _GUID const *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumItems@CLangBarItemMgrProxy@@UEAAJPEAPEAUIEnumTfLangBarItems@@@Z
    virtual long EnumItems(IEnumTfLangBarItems * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeImeModeIconResources@CLangBarItemMgrProxy@@QEAAXXZ
    void FreeImeModeIconResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CLangBarItemMgrProxy@@UEAAJAEBU_GUID@@PEAPEAUITfLangBarItem@@@Z
    virtual long GetItem(_GUID const &, ITfLangBarItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemFloatingRect@CLangBarItemMgrProxy@@UEAAJKAEBU_GUID@@PEAUtagRECT@@@Z
    virtual long GetItemFloatingRect(unsigned long, _GUID const &, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemNum@CLangBarItemMgrProxy@@UEAAJPEAK@Z
    virtual long GetItemNum(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItems@CLangBarItemMgrProxy@@UEAAJKPEAPEAUITfLangBarItem@@PEAUTF_LANGBARITEMINFO@@PEAK2@Z
    virtual long GetItems(unsigned long, ITfLangBarItem * *, TF_LANGBARITEMINFO *, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsStatus@CLangBarItemMgrProxy@@UEAAJKPEBU_GUID@@PEAK@Z
    virtual long GetItemsStatus(unsigned long, _GUID const *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLangBarItemMgrProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLangBarItemMgrProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveItem@CLangBarItemMgrProxy@@UEAAJPEAUITfLangBarItem@@@Z
    virtual long RemoveItem(ITfLangBarItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnadviseItemSink@CLangBarItemMgrProxy@@UEAAJK@Z
    virtual long UnadviseItemSink(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnadviseItemsSink@CLangBarItemMgrProxy@@UEAAJKPEAK@Z
    virtual long UnadviseItemsSink(unsigned long, unsigned long *);
};

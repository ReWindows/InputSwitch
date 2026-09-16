#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 8 member(s).
class ModeTileSelectionItemProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToSelection@ModeTileSelectionItemProvider@@UEAAJXZ
    virtual long AddToSelection();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ModeTileSelectionItemProvider@@QEAA@XZ
    ModeTileSelectionItemProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromSelection@ModeTileSelectionItemProvider@@UEAAJXZ
    virtual long RemoveFromSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@ModeTileSelectionItemProvider@@UEAAJXZ
    virtual long Select();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelected@ModeTileSelectionItemProvider@@UEAAJPEAH@Z
    virtual long get_IsSelected(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionContainer@ModeTileSelectionItemProvider@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_SelectionContainer(IRawElementProviderSimple * *);
};

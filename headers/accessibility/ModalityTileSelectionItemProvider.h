#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 8 member(s).
class ModalityTileSelectionItemProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToSelection@ModalityTileSelectionItemProvider@@UEAAJXZ
    virtual long AddToSelection();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ModalityTileSelectionItemProvider@@QEAA@XZ
    ModalityTileSelectionItemProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromSelection@ModalityTileSelectionItemProvider@@UEAAJXZ
    virtual long RemoveFromSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@ModalityTileSelectionItemProvider@@UEAAJXZ
    virtual long Select();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelected@ModalityTileSelectionItemProvider@@UEAAJPEAH@Z
    virtual long get_IsSelected(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionContainer@ModalityTileSelectionItemProvider@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_SelectionContainer(IRawElementProviderSimple * *);
};

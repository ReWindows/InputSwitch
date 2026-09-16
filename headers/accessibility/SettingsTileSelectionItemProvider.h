#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 8 member(s).
class SettingsTileSelectionItemProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToSelection@SettingsTileSelectionItemProvider@@UEAAJXZ
    virtual long AddToSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromSelection@SettingsTileSelectionItemProvider@@UEAAJXZ
    virtual long RemoveFromSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@SettingsTileSelectionItemProvider@@UEAAJXZ
    virtual long Select();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SettingsTileSelectionItemProvider@@QEAA@XZ
    SettingsTileSelectionItemProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelected@SettingsTileSelectionItemProvider@@UEAAJPEAH@Z
    virtual long get_IsSelected(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionContainer@SettingsTileSelectionItemProvider@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_SelectionContainer(IRawElementProviderSimple * *);
};

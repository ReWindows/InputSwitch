#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 18 member(s).
class IsUtil {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupIdlProfile@IsUtil@@YAXPEAU__MIDL___MIDL_itf_inputswitchserver_0000_0000_0002@@@Z
    void CleanupIdlProfile(__MIDL___MIDL_itf_inputswitchserver_0000_0000_0002*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyImeModeItemData@IsUtil@@YAJPEAU__MIDL___MIDL_itf_inputswitchserver_0000_0000_0003@@PEBU2@@Z
    long CopyImeModeItemData(__MIDL___MIDL_itf_inputswitchserver_0000_0000_0003*, __MIDL___MIDL_itf_inputswitchserver_0000_0000_0003const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyInternalProfileToIdlProfile@IsUtil@@YAJPEAU__MIDL___MIDL_itf_inputswitchserver_0000_0000_0002@@PEBVCInputProfileInfo@@@Z
    long CopyInternalProfileToIdlProfile(__MIDL___MIDL_itf_inputswitchserver_0000_0000_0002*, CInputProfileInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceRectWithinRect@IsUtil@@YA_NPEBUtagRECT@@PEAU2@@Z
    bool ForceRectWithinRect(tagRECT const *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementRpIntProperty@IsUtil@@YAHPEAVElement@DirectUI@@PEBUPropertyInfo@3@@Z
    int GetElementRpIntProperty(::DirectUI::Element *, ::DirectUI::PropertyInfo const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHotkeyShowDelay@IsUtil@@YAKXZ
    unsigned long GetHotkeyShowDelay();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHotkeyShowUIOnMultiPress@IsUtil@@YA_NXZ
    bool GetHotkeyShowUIOnMultiPress();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveMonitor@IsUtil@@YAPEAUHMONITOR__@@XZ
    HMONITOR__* GetImmersiveMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputSwitcherAnimationTime@IsUtil@@YAKXZ
    unsigned long GetInputSwitcherAnimationTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLanguageChangeHotKeyConfiguration@IsUtil@@YAHXZ
    int GetLanguageChangeHotKeyConfiguration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemFontScale@IsUtil@@YANXZ
    double GetSystemFontScale();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayStuckPlace@IsUtil@@YAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z
    long GetTrayStuckPlace(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHotkeyToastDisplayed@IsUtil@@YA_NXZ
    bool HasHotkeyToastDisplayed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopClientType@IsUtil@@YA_NW4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0001@@@Z
    bool IsDesktopClientType(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRtlOS@IsUtil@@YA_NW4UILANGUAGECHOSEN@1@@Z
    bool IsRtlOS(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapClientTypeToString@IsUtil@@YAPEBGW4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0001@@@Z
    unsigned short const * MapClientTypeToString(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementRpIntProperty@IsUtil@@YAJPEAVElement@DirectUI@@PEBUPropertyInfo@3@H@Z
    long SetElementRpIntProperty(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHotkeyToastDisplayed@IsUtil@@YAXXZ
    void SetHotkeyToastDisplayed();
};

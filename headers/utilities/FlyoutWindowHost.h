#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 15 member(s).
class FlyoutWindowHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@FlyoutWindowHost@@SAJ_N00PEAUIInputSwitchFlyout@@PEAKPEAPEAV1@@Z
    static long Create(bool, bool, bool, IInputSwitchFlyout *, unsigned long *, FlyoutWindowHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHostWindow@FlyoutWindowHost@@UEAAPEAUHWND__@@KPEBG0KHHHHPEAU2@PEAUHMENU__@@PEAUHINSTANCE__@@PEAX@Z
    virtual HWND__* CreateHostWindow(unsigned long, unsigned short const *, unsigned short const *, unsigned long, int, int, int, int, HWND__*, HMENU__*, HINSTANCE__*, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateXamlHost@FlyoutWindowHost@@SAJ_N00PEAUIInputSwitchFlyout@@PEAPEAV1@HHHH@Z
    static long CreateXamlHost(bool, bool, bool, IInputSwitchFlyout *, FlyoutWindowHost * *, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@FlyoutWindowHost@@UEAAJI_K_JPEA_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowPosition@FlyoutWindowHost@@QEAA_NHH@Z
    bool SetWindowPosition(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowSize@FlyoutWindowHost@@QEAA_NHH@Z
    bool SetWindowSize(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@FlyoutWindowHost@@QEAAJXZ
    long Show();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWithDwmAnimation@FlyoutWindowHost@@QEAAJPEBUtagRECT@@_N@Z
    long ShowWithDwmAnimation(tagRECT const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FlyoutWindowHost@@UEAA@XZ
    virtual ~FlyoutWindowHost();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@FlyoutWindowHost@@AEAAJPEAK@Z
    long _Initialize(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeXamlHost@FlyoutWindowHost@@AEAAJHHHH@Z
    long _InitializeXamlHost(int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetWindowShadowAndBlurAttributes@FlyoutWindowHost@@AEAAXXZ
    void _SetWindowShadowAndBlurAttributes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_TopLevelWndProc@FlyoutWindowHost@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t _s_TopLevelWndProc(HWND__*, unsigned int, uint64_t, int64_t);
};

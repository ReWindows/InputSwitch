#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 58 member(s).
class CInputSwitchUI {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInputSwitchUI@@QEAA@XZ
    CInputSwitchUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CInputSwitchUI@@SAJPEAPEAV1@W4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0001@@@Z
    static long Create(CInputSwitchUI * *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApartmentThreadId@CInputSwitchUI@@UEAAKXZ
    virtual unsigned long GetApartmentThreadId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlyoutHwnd@CInputSwitchUI@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetFlyoutHwnd();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlyoutThreadId@CInputSwitchUI@@UEAAKXZ
    virtual unsigned long GetFlyoutThreadId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorkerHwnd@CInputSwitchUI@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetWorkerHwnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideFlyout@CInputSwitchUI@@UEAAJ_N0@Z
    virtual long HideFlyout(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitWorkerWindow@CInputSwitchUI@@QEAAJPEAUIInputSwitchFlyoutEvents@@@Z
    long InitWorkerWindow(IInputSwitchFlyoutEvents *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHideTransitionComplete@CInputSwitchUI@@UEAAJXZ
    virtual long OnHideTransitionComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@CInputSwitchUI@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedInput@CInputSwitchUI@@UEAAXPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@CInputSwitchUI@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowTransitionComplete@CInputSwitchUI@@UEAAJXZ
    virtual long OnShowTransitionComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUiThreadMessage@CInputSwitchUI@@UEAAJI_K_JPEA_J@Z
    virtual long OnUiThreadMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostModeSwitchNotifyMessageToAllOtherInputSwitchWorkerWindows@CInputSwitchUI@@UEAAXII@Z
    virtual void PostModeSwitchNotifyMessageToAllOtherInputSwitchWorkerWindows(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostOpenCplMessage@CInputSwitchUI@@UEAA_NXZ
    virtual bool PostOpenCplMessage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostPrivateMessage@CInputSwitchUI@@UEAA_NHPEAX@Z
    virtual bool PostPrivateMessage(int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterHotkeys@CInputSwitchUI@@QEAAJXZ
    long RegisterHotkeys();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendWindowMessage@CInputSwitchUI@@UEAA_JI_K_J@Z
    virtual int64_t SendWindowMessage(unsigned int, uint64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentTile@CInputSwitchUI@@UEAAJI@Z
    virtual long SetCurrentTile(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProfiles@CInputSwitchUI@@UEAAJPEAPEAVCInputProfileInfo@@I@Z
    virtual long SetProfiles(CInputProfileInfo * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFlyout@CInputSwitchUI@@UEAAJKW4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0005@@PEBUtagRECT@@W4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0006@@_N333@Z
    virtual long ShowFlyout(unsigned long, int, tagRECT const *, int, bool, bool, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInputSwitchUI@@UEAA@XZ
    virtual ~CInputSwitchUI();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustModalityTileLayouts@CInputSwitchUI@@AEAAXXZ
    void _AdjustModalityTileLayouts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AnimateHideFlyout@CInputSwitchUI@@AEAAJXZ
    long _AnimateHideFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateWindowPosition@CInputSwitchUI@@AEAAJUtagSIZE@@PEAUtagPOINT@@@Z
    long _CalculateWindowPosition(tagSIZE, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateHWnd@CInputSwitchUI@@AEAAPEAUHWND__@@XZ
    HWND__* _CreateHWnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateParserAndDuiParts@CInputSwitchUI@@AEAAJM@Z
    long _CreateParserAndDuiParts(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyFlyout@CInputSwitchUI@@AEAAXXZ
    void _DestroyFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindUsableMonitorRect@CInputSwitchUI@@AEAAJPEAUtagRECT@@PEAPEAUHMONITOR__@@PEAM@Z
    long _FindUsableMonitorRect(tagRECT *, HMONITOR__* *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetColorTheme@CInputSwitchUI@@CA?AW4ColorTheme@1@W4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0001@@@Z
    static int _GetColorTheme(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideFlyoutInternal@CInputSwitchUI@@AEAAJ_N@Z
    long _HideFlyoutInternal(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitHost@CInputSwitchUI@@AEAAJXZ
    long _InitHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeFlyout@CInputSwitchUI@@AEAAJXZ
    long _InitializeFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeModalityTiles@CInputSwitchUI@@AEAAJXZ
    long _InitializeModalityTiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeModeTiles@CInputSwitchUI@@AEAAJXZ
    long _InitializeModeTiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeUI@CInputSwitchUI@@AEAAJXZ
    long _InitializeUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeXamlFlyout@CInputSwitchUI@@AEAAJXZ
    long _InitializeXamlFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OpenSettingsCpl@CInputSwitchUI@@CAXXZ
    static void _OpenSettingsCpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PostDismissMessageToAllOtherInputSwitchWorkerWindows@CInputSwitchUI@@AEAAXXZ
    void _PostDismissMessageToAllOtherInputSwitchWorkerWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PostOnCloseMessage@CInputSwitchUI@@AEAA_NXZ
    bool _PostOnCloseMessage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PostOnTilePressedMessage@CInputSwitchUI@@AEAA_NXZ
    bool _PostOnTilePressedMessage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterClass@CInputSwitchUI@@CAGXZ
    static unsigned short _RegisterClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetKeyFocus@CInputSwitchUI@@AEAAXXZ
    void _ResetKeyFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResizeWindow@CInputSwitchUI@@AEAAJXZ
    long _ResizeWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RunMessageLoop@CInputSwitchUI@@AEAAXXZ
    void _RunMessageLoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCurrentTileInternal@CInputSwitchUI@@AEAAJI@Z
    long _SetCurrentTileInternal(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFocusOnFirstTsvItem@CInputSwitchUI@@AEAAXXZ
    void _SetFocusOnFirstTsvItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldSystemUseLightMode@CInputSwitchUI@@CA_NXZ
    static bool _ShouldSystemUseLightMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartThread@CInputSwitchUI@@AEAAJXZ
    long _StartThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopThread@CInputSwitchUI@@AEAAJ_N@Z
    long _StopThread(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TrySetFocusBelowTsv@CInputSwitchUI@@AEAA_NXZ
    bool _TrySetFocusBelowTsv();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_FlyoutThreadCreateCallback@CInputSwitchUI@@CAKPEAX@Z
    static unsigned long _s_FlyoutThreadCreateCallback(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_FlyoutThreadProc@CInputSwitchUI@@CAKPEAX@Z
    static unsigned long _s_FlyoutThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_WndProc@CInputSwitchUI@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t _s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_v_WndProc@CInputSwitchUI@@EEAA_JI_K_J@Z
    virtual int64_t _v_WndProc(unsigned int, uint64_t, int64_t);
};

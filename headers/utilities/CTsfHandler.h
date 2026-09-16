#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 88 member(s).
class CTsfHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTsfHandler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTsfHandler@@QEAA@PEAUIInputSwitchFlyout@@W4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0001@@@Z
    CTsfHandler(IInputSwitchFlyout *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClickImeItem@CTsfHandler@@QEAAJUtagPOINT@@PEBUtagRECT@@W4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0004@@@Z
    long ClickImeItem(tagPOINT, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClickImeItemWithAnchor@CTsfHandler@@QEAAJPEAUIUnknown@@W4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0004@@@Z
    long ClickImeItemWithAnchor(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@CTsfHandler@@QEAAJXZ
    long Connect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissOverlayWindow@CTsfHandler@@QEAAXXZ
    void DismissOverlayWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureImeContextMenu@CTsfHandler@@QEAAX_N@Z
    void EnsureImeContextMenu(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextFlagsForIdl@CTsfHandler@@QEAAKXZ
    unsigned long GetContextFlagsForIdl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemFloatingRect@CTsfHandler@@UEAAJKAEBU_GUID@@PEAUtagRECT@@@Z
    virtual long GetItemFloatingRect(unsigned long, _GUID const &, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleShellDismiss@CTsfHandler@@QEAAXXZ
    void HandleShellDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookupModalAndShow@CTsfHandler@@QEAAJPEBUHOTKEY_INFO@@PEBUtagRECT@@W4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0006@@_NKW4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0005@@@Z
    long HookupModalAndShow(HOTKEY_INFO const *, tagRECT const *, int, bool, unsigned long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImmersiveContext@CTsfHandler@@QEAA_NXZ
    bool IsImmersiveContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOutOfProcessIme@CTsfHandler@@QEBA_NXZ
    bool IsOutOfProcessIme() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActiveProfileChange@CTsfHandler@@UEAAJXZ
    virtual long OnActiveProfileChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClose@CTsfHandler@@UEAAJXZ
    virtual long OnClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissEvent@CTsfHandler@@UEAAJXZ
    virtual long OnDismissEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnabledProfileChange@CTsfHandler@@UEAAJXZ
    virtual long OnEnabledProfileChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExternalInputSwitchNotification@CTsfHandler@@UEAAJII@Z
    virtual long OnExternalInputSwitchNotification(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChange@CTsfHandler@@UEAAJKPEAUHWND__@@K@Z
    virtual long OnFocusChange(unsigned long, HWND__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHotkeyShellHookMessage@CTsfHandler@@UEAA_J_J@Z
    virtual int64_t OnHotkeyShellHookMessage(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputContextEvent@CTsfHandler@@UEAAJGGK@Z
    virtual long OnInputContextEvent(unsigned short, unsigned short, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeImeContextMenu@CTsfHandler@@UEAA_J_K_J@Z
    virtual int64_t OnInvokeImeContextMenu(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnModalInput@CTsfHandler@@UEAAJKI_K_J@Z
    virtual long OnModalInput(unsigned long, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOverlayWindowCreated@CTsfHandler@@UEAAJXZ
    virtual long OnOverlayWindowCreated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrivateMessage@CTsfHandler@@UEAA_JHPEAX@Z
    virtual int64_t OnPrivateMessage(int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetFocus@CTsfHandler@@UEAAJK@Z
    virtual long OnSetFocus(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThreadItemChange@CTsfHandler@@UEAAJK@Z
    virtual long OnThreadItemChange(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThreadTerminate@CTsfHandler@@UEAAJK@Z
    virtual long OnThreadTerminate(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTilePressed@CTsfHandler@@UEAAJIW4PressedTileType@@@Z
    virtual long OnTilePressed(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUiHide@CTsfHandler@@UEAAJ_N0@Z
    virtual long OnUiHide(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWmTimer@CTsfHandler@@UEAA_J_K_J@Z
    virtual int64_t OnWmTimer(uint64_t, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTsfHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterLegacyInputSwitchHotkeyWnf@CTsfHandler@@QEAAJXZ
    long RegisterLegacyInputSwitchHotkeyWnf();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTsfHandler@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetUiProfileIndex@CTsfHandler@@QEAAXXZ
    void ResetUiProfileIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveCurrentTsfData@CTsfHandler@@QEAAJXZ
    long RetrieveCurrentTsfData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleActivateInputProfile@CTsfHandler@@QEAAJPEBG@Z
    long ScheduleActivateInputProfile(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFloating@CTsfHandler@@UEAAJK@Z
    virtual long ShowFloating(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowToast@CTsfHandler@@QEAAJXZ
    long ShowToast();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnadviseAll@CTsfHandler@@QEAAXXZ
    void UnadviseAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookModalAndHide@CTsfHandler@@QEAAJ_N@Z
    long UnhookModalAndHide(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActiveProfileFromTsf@CTsfHandler@@QEAAJPEA_N@Z
    long UpdateActiveProfileFromTsf(bool *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckHotkeyReleaseTrigger@CTsfHandler@@AEAA_NXZ
    bool CheckHotkeyReleaseTrigger();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureImeContextMenuManagerAdapter@CTsfHandler@@AEAAJXZ
    long EnsureImeContextMenuManagerAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLightDismissProvider@CTsfHandler@@AEAAJXZ
    long EnsureLightDismissProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureShellSwitchingManager@CTsfHandler@@AEAAXXZ
    void EnsureShellSwitchingManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleShellShowImplementation@CTsfHandler@@AEAAXXZ
    void HandleShellShowImplementation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LowLevelKeyboardProc_DismissAndQuickKeys@CTsfHandler@@AEAA_JH_K_J@Z
    int64_t LowLevelKeyboardProc_DismissAndQuickKeys(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopDelayedShow@CTsfHandler@@AEAAXXZ
    void StopDelayedShow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ActivatePostponedInputProfileFromApi@CTsfHandler@@AEAAXXZ
    void _ActivatePostponedInputProfileFromApi();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ActivateUiProfile@CTsfHandler@@AEAAJXZ
    long _ActivateUiProfile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureImeStatusNotificationExperienceManager@CTsfHandler@@AEAAJXZ
    long _EnsureImeStatusNotificationExperienceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsurePrivateModeMonitor@CTsfHandler@@AEAAJXZ
    long _EnsurePrivateModeMonitor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteDelayedCommand@CTsfHandler@@AEAAXXZ
    void _ExecuteDelayedCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FileTelemetrySwitchEvent@CTsfHandler@@AEAAXW4SWITCH_SOURCE_ID@@_NII@Z
    void _FileTelemetrySwitchEvent(int, bool, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetActiveInputProfiles@CTsfHandler@@AEAAJXZ
    long _GetActiveInputProfiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAsyncKeyStateWithFallback@CTsfHandler@@CAFH@Z
    static short _GetAsyncKeyStateWithFallback(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDpi@CTsfHandler@@AEBAIXZ
    unsigned int _GetDpi() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIconSize@CTsfHandler@@AEBA?AUtagSIZE@@XZ
    tagSIZE _GetIconSize() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextProfileIndex@CTsfHandler@@AEAAII_N0@Z
    unsigned int _GetNextProfileIndex(unsigned int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleLegacyShortcutPressed@CTsfHandler@@AEAAJK@Z
    long _HandleLegacyShortcutPressed(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MapInputSwitchEnumToString@CTsfHandler@@CAPEBGW4SWITCH_SOURCE_ID@@W4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0001@@@Z
    static unsigned short const * _MapInputSwitchEnumToString(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnHotkey@CTsfHandler@@AEAAJH@Z
    long _OnHotkey(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnOopImeContextMenu@CTsfHandler@@AEAAJUtagPOINT@@@Z
    long _OnOopImeContextMenu(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OverrideOopImeContextMenu@CTsfHandler@@AEAAJGU_GUID@@PEAUHMENU__@@PEAUHBITMAP__@@@Z
    long _OverrideOopImeContextMenu(unsigned short, _GUID, HMENU__*, HBITMAP__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessNewTsfContextFlags@CTsfHandler@@AEAAJK_N@Z
    long _ProcessNewTsfContextFlags(unsigned long, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshOopImeModeIcon@CTsfHandler@@AEAAJXZ
    long _RefreshOopImeModeIcon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterWindowClass@CTsfHandler@@AEAAXXZ
    void _RegisterWindowClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveOopImeModeIcon@CTsfHandler@@AEAAXXZ
    void _RemoveOopImeModeIcon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResolveShortNameCollisionsWithLayoutAbbreviations@CTsfHandler@@AEAAJXZ
    long _ResolveShortNameCollisionsWithLayoutAbbreviations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetGetListRetryTimer@CTsfHandler@@AEAAXXZ
    void _SetGetListRetryTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetMenuItemText@CTsfHandler@@AEAAJPEAUHMENU__@@IPEBG@Z
    long _SetMenuItemText(HMENU__*, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowImeStatusNotificationWorker@CTsfHandler@@AEAAXW4ImeMode@Experience@Shell@Internal@Windows@@@Z
    void _ShowImeStatusNotificationWorker(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StaticLowLevelKeyboardProc_DismissAndQuickKeys@CTsfHandler@@CA_JH_K_J@Z
    static int64_t _StaticLowLevelKeyboardProc_DismissAndQuickKeys(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToggleOopImeModeIcon@CTsfHandler@@AEAAJXZ
    long _ToggleOopImeModeIcon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateFocusEventSinkState@CTsfHandler@@AEAAJXZ
    long _UpdateFocusEventSinkState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateInputIndicatorCurrentProfile@CTsfHandler@@AEAAJXZ
    long _UpdateInputIndicatorCurrentProfile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateInputIndicatorImeItemWorker@CTsfHandler@@AEAAXXZ
    void _UpdateInputIndicatorImeItemWorker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WndProc@CTsfHandler@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t _WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTsfHandler@@EEAA@XZ
    virtual ~CTsfHandler();
};

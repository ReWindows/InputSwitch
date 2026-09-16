#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 43 member(s).
class CUACIndicatorUI {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUACIndicatorUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIndicatorUI@CUACIndicatorUI@@SAJPEAUHINSTANCE__@@PEAUHWND__@@PEAPEAVElement@DirectUI@@@Z
    static long CreateIndicatorUI(HINSTANCE__*, HWND__*, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextFlagsChange@CUACIndicatorUI@@UEAAJK@Z
    virtual long OnContextFlagsChange(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImeModeItemUpdate@CUACIndicatorUI@@UEAAJPEBU__MIDL___MIDL_itf_inputswitchserver_0000_0000_0003@@@Z
    virtual long OnImeModeItemUpdate(__MIDL___MIDL_itf_inputswitchserver_0000_0000_0003const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@CUACIndicatorUI@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenerDetach@CUACIndicatorUI@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnModalitySelected@CUACIndicatorUI@@UEAAJW4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0005@@@Z
    virtual long OnModalitySelected(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProfileCountChange@CUACIndicatorUI@@UEAAJIH@Z
    virtual long OnProfileCountChange(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowHide@CUACIndicatorUI@@UEAAJHHH@Z
    virtual long OnShowHide(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTouchKeyboardManualInvoke@CUACIndicatorUI@@UEAAJXZ
    virtual long OnTouchKeyboardManualInvoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpdateProfile@CUACIndicatorUI@@UEAAJPEBU__MIDL___MIDL_itf_inputswitchserver_0000_0000_0002@@@Z
    virtual long OnUpdateProfile(__MIDL___MIDL_itf_inputswitchserver_0000_0000_0002const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpdateTsfFloatingFlags@CUACIndicatorUI@@UEAAJK@Z
    virtual long OnUpdateTsfFloatingFlags(unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUACIndicatorUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUACIndicatorUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUACIndicatorUI@@QEAA@XZ
    ~CUACIndicatorUI();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ChangeHostWindowPositon@CUACIndicatorUI@@AEAAXXZ
    void _ChangeHostWindowPositon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ChangeOverlayWndSize@CUACIndicatorUI@@AEAAJXZ
    long _ChangeOverlayWndSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConvertButtonToScreenCoordinates@CUACIndicatorUI@@AEAAJPEAVElement@DirectUI@@PEAUtagRECT@@@Z
    long _ConvertButtonToScreenCoordinates(::DirectUI::Element *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateOverlayWindow@CUACIndicatorUI@@AEAAJXZ
    long _CreateOverlayWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateTooltip@CUACIndicatorUI@@AEAAJXZ
    long _CreateTooltip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FormatTooltipText@CUACIndicatorUI@@AEAAJPEBG0PEAGH@Z
    long _FormatTooltipText(unsigned short const *, unsigned short const *, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetShowTimeout@CUACIndicatorUI@@AEAAIXZ
    unsigned int _GetShowTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUIAOverlayWindow@CUACIndicatorUI@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _GetUIAOverlayWindow(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideTooltip@CUACIndicatorUI@@AEAAXXZ
    void _HideTooltip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitElementsContent@CUACIndicatorUI@@AEAAJPEAVElement@DirectUI@@PEAUHWND__@@PEAUHINSTANCE__@@@Z
    long _InitElementsContent(::DirectUI::Element *, HWND__*, HINSTANCE__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeFlyOut@CUACIndicatorUI@@AEAAJXZ
    long _InvokeFlyOut();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCursorOnLangIndicator@CUACIndicatorUI@@AEAA_NUtagPOINT@@@Z
    bool _IsCursorOnLangIndicator(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCursorWithinIndicator@CUACIndicatorUI@@AEAAHUtagPOINT@@@Z
    int _IsCursorWithinIndicator(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnClickIMEModeIndicator@CUACIndicatorUI@@AEAAXW4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0004@@@Z
    void _OnClickIMEModeIndicator(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnLButtonDown@CUACIndicatorUI@@AEAA_JPEAUHWND__@@_K_J@Z
    int64_t _OnLButtonDown(HWND__*, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnLButtonUp@CUACIndicatorUI@@AEAA_JPEAUHWND__@@_K_J@Z
    int64_t _OnLButtonUp(HWND__*, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMouseMove@CUACIndicatorUI@@AEAA_JPEAUHWND__@@_K_J@Z
    int64_t _OnMouseMove(HWND__*, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterInputSwitch@CUACIndicatorUI@@AEAAJXZ
    long _RegisterInputSwitch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetIndicatorUIState@CUACIndicatorUI@@AEAAXXZ
    void _ResetIndicatorUIState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetIMEIconAccName@CUACIndicatorUI@@AEAAXPEAVElement@DirectUI@@PEBG1@Z
    void _SetIMEIconAccName(::DirectUI::Element *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetIMEModeIconTooltipText@CUACIndicatorUI@@AEAAXPEAVElement@DirectUI@@PEBG_N@Z
    void _SetIMEModeIconTooltipText(::DirectUI::Element *, unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowLangOrIMEModeIndicator@CUACIndicatorUI@@AEAAXW4INDICATORTYPE@1@@Z
    void _ShowLangOrIMEModeIndicator(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowTooltip@CUACIndicatorUI@@AEAAXXZ
    void _ShowTooltip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateIMEModeIndicator@CUACIndicatorUI@@AEAAJPEBU__MIDL___MIDL_itf_inputswitchserver_0000_0000_0003@@@Z
    long _UpdateIMEModeIndicator(__MIDL___MIDL_itf_inputswitchserver_0000_0000_0003const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateIndicatorUIState@CUACIndicatorUI@@AEAAXPEAVElement@DirectUI@@W4UISTATE@1@@Z
    void _UpdateIndicatorUIState(::DirectUI::Element *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateLangIndicator@CUACIndicatorUI@@AEAAJPEBU__MIDL___MIDL_itf_inputswitchserver_0000_0000_0002@@@Z
    long _UpdateLangIndicator(__MIDL___MIDL_itf_inputswitchserver_0000_0000_0002const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndOverlayProc@CUACIndicatorUI@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndOverlayProc(HWND__*, unsigned int, uint64_t, int64_t);
};

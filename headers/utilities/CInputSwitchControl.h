#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 22 member(s).
class CInputSwitchControl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInputProfile@CInputSwitchControl@@UEAAJPEBG@Z
    virtual long ActivateInputProfile(unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInputSwitchControl@@QEAA@XZ
    CInputSwitchControl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClickImeModeItem@CInputSwitchControl@@UEAAJW4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0004@@UtagPOINT@@PEBUtagRECT@@@Z
    virtual long ClickImeModeItem(int, tagPOINT, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClickImeModeItemWithAnchor@CInputSwitchControl@@UEAAJW4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0004@@PEAUIUnknown@@@Z
    virtual long ClickImeModeItemWithAnchor(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceHide@CInputSwitchControl@@UEAAJXZ
    virtual long ForceHide();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextFlags@CInputSwitchControl@@UEAAJPEAK@Z
    virtual long GetContextFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentImeModeItem@CInputSwitchControl@@UEAAJPEAU__MIDL___MIDL_itf_inputswitchserver_0000_0000_0003@@@Z
    virtual long GetCurrentImeModeItem(__MIDL___MIDL_itf_inputswitchserver_0000_0000_0003*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentProfile@CInputSwitchControl@@UEAAJPEAU__MIDL___MIDL_itf_inputswitchserver_0000_0000_0002@@@Z
    virtual long GetCurrentProfile(__MIDL___MIDL_itf_inputswitchserver_0000_0000_0002*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProfileCount@CInputSwitchControl@@UEAAJPEAIPEAH@Z
    virtual long GetProfileCount(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CInputSwitchControl@@UEAAJW4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0001@@@Z
    virtual long Init(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterHotkeys@CInputSwitchControl@@UEAAJXZ
    virtual long RegisterHotkeys();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCallback@CInputSwitchControl@@UEAAJPEAUIInputSwitchCallback@@@Z
    virtual long SetCallback(IInputSwitchCallback *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContextOverrideMode@CInputSwitchControl@@UEAAJW4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0008@@@Z
    virtual long SetContextOverrideMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserSid@CInputSwitchControl@@UEAAJPEBG@Z
    virtual long SetUserSid(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowInputSwitch@CInputSwitchControl@@UEAAJPEBUtagRECT@@@Z
    virtual long ShowInputSwitch(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTouchKeyboardInputSwitch@CInputSwitchControl@@UEAAJPEBUtagRECT@@W4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0006@@HKW4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0005@@@Z
    virtual long ShowTouchKeyboardInputSwitch(tagRECT const *, int, int, unsigned long, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CInputSwitchControl@@AEAAJW4__MIDL___MIDL_itf_inputswitchserver_0000_0000_0001@@@Z
    long _Init(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsInitCompletedAndSucceeded@CInputSwitchControl@@AEAA_NXZ
    bool _IsInitCompletedAndSucceeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Shutdown@CInputSwitchControl@@AEAAJXZ
    long _Shutdown();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInputSwitchControl@@EEAA@XZ
    virtual ~CInputSwitchControl();
};

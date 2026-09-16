#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 14 member(s).
class JapaneseImeModeNotificationHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExplicitOpenStatusChange@JapaneseImeModeNotificationHandler@@UEAAJXZ
    virtual long OnExplicitOpenStatusChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChange@JapaneseImeModeNotificationHandler@@UEAAJKPEAUHWND__@@K@Z
    virtual long OnFocusChange(unsigned long, HWND__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusContextChange@JapaneseImeModeNotificationHandler@@UEAAJG@Z
    virtual long OnFocusContextChange(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImmStatusChange@JapaneseImeModeNotificationHandler@@UEAAJXZ
    virtual long OnImmStatusChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpdateInputIndicatorImeItem@JapaneseImeModeNotificationHandler@@UEAAJAEBU__MIDL___MIDL_itf_inputswitchserver_0000_0000_0003@@@Z
    virtual long OnUpdateInputIndicatorImeItem(__MIDL___MIDL_itf_inputswitchserver_0000_0000_0003const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JapaneseImeModeNotificationHandler@@UEAA@XZ
    virtual ~JapaneseImeModeNotificationHandler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendStringInXmlNode@JapaneseImeModeNotificationHandler@@AEAAJPEAUIXmlDocument@Dom@Xml@Data@Windows@@PEBGI@Z
    long AppendStringInXmlNode(::Windows::Data::Xml::Dom::IXmlDocument *, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoShowToastGuidance@JapaneseImeModeNotificationHandler@@AEAAJXZ
    long DoShowToastGuidance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeImeStatusNotificationIfNeeded@JapaneseImeModeNotificationHandler@@AEAAJ_N@Z
    long InvokeImeStatusNotificationIfNeeded(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshSetting@JapaneseImeModeNotificationHandler@@AEAAJXZ
    long RefreshSetting();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetXmlElementAttribute@JapaneseImeModeNotificationHandler@@AEAAJPEAUIXmlDocument@Dom@Xml@Data@Windows@@PEBGI11@Z
    long SetXmlElementAttribute(::Windows::Data::Xml::Dom::IXmlDocument *, unsigned short const *, unsigned int, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowToastGuidanceIfNeeded@JapaneseImeModeNotificationHandler@@AEAAJXZ
    long ShowToastGuidanceIfNeeded();
};

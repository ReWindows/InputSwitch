#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 32 member(s).
class CIMEConsentUX {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CIMEConsentUX@@QEAA@XZ
    CIMEConsentUX();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroyEvent@CIMEConsentUX@@QEAAJPEAUIPopupWindow@@@Z
    long OnDestroyEvent(IPopupWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissCommand@CIMEConsentUX@@QEAAJPEAUIPopupWindow@@@Z
    long OnDismissCommand(IPopupWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@CIMEConsentUX@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedInput@CIMEConsentUX@@UEAAXPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowToast@CIMEConsentUX@@UEAAJG@Z
    virtual long ShowToast(unsigned short);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIMEConsentUX@@UEAA@XZ
    virtual ~CIMEConsentUX();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddHeadText@CIMEConsentUX@@AEAAJXZ
    long _AddHeadText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddInputMethodsList@CIMEConsentUX@@AEAAJXZ
    long _AddInputMethodsList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateFlyoutPosition@CIMEConsentUX@@AEAAJPEAUtagPOINT@@@Z
    long _CalculateFlyoutPosition(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupProfileInfo@CIMEConsentUX@@AEAAXPEAUIMEPROFILEINFO@1@@Z
    void _CleanupProfileInfo(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndShowFlyout@CIMEConsentUX@@AEAAJG@Z
    long _CreateAndShowFlyout(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFlyout@CIMEConsentUX@@AEAAJXZ
    long _CreateFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateShortLangNameFont@CIMEConsentUX@@AEBAPEAUHFONT__@@PEBUCFontOverride@@@Z
    HFONT__* _CreateShortLangNameFont(CFontOverride const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateShortLangNameIcon@CIMEConsentUX@@AEBAJPEAPEAUHICON__@@@Z
    long _CreateShortLangNameIcon(HICON__* *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateTile@CIMEConsentUX@@AEBAJPEBG0I0PEAPEAVElement@DirectUI@@@Z
    long _CreateTile(unsigned short const *, unsigned short const *, unsigned int, unsigned short const *, ::DirectUI::Element * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindFontOverride@CIMEConsentUX@@AEBA_NAEAVString@Internal@Windows@@PEBGPEAPEAUCFontOverride@@@Z
    bool _FindFontOverride(::Windows::Internal::String &, unsigned short const *, CFontOverride * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFontOverride@CIMEConsentUX@@AEBAXPEAPEAUCFontOverride@@@Z
    void _GetFontOverride(CFontOverride * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIMEIcon@CIMEConsentUX@@AEBAJPEBGIPEAPEAUHICON__@@@Z
    long _GetIMEIcon(unsigned short const *, unsigned int, HICON__* *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInputMethodsList@CIMEConsentUX@@AEAAJG@Z
    long _GetInputMethodsList(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLanguageName@CIMEConsentUX@@AEBAJPEAG_K@Z
    long _GetLanguageName(unsigned short *, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetShortLangName@CIMEConsentUX@@AEBAXPEAG_K@Z
    void _GetShortLangName(unsigned short *, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CIMEConsentUX@@AEAAJXZ
    long _Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnClose@CIMEConsentUX@@AEAAXXZ
    void _OnClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDefaultInputMethod@CIMEConsentUX@@AEBAXPEAVElement@DirectUI@@@Z
    void _SetDefaultInputMethod(::DirectUI::Element *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFlyoutContent@CIMEConsentUX@@AEAAJXZ
    long _SetFlyoutContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetLayout@CIMEConsentUX@@AEAAXXZ
    void _SetLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetScroller@CIMEConsentUX@@AEAAXH@Z
    void _SetScroller(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StoreDefaultInputMethod@CIMEConsentUX@@AEBAJAEBU_GUID@@@Z
    long _StoreDefaultInputMethod(_GUID const &) const;
};

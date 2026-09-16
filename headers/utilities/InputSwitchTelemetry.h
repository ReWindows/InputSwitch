#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 17 member(s).
class InputSwitchTelemetry {
public:
    class ActivatePostponedProfile;
    class ActivateProfile;
    class ConnectToTsf;
    class GetActiveProfile;
    class GetEnabledInputProfiles;
    class HideUI;
    class InputSwitchNotificationShown;
    class RetryAfterZeroInputProfilesFromTsf;
    class ShowInputSwitchApiCall;
    class ShowRejuvenatedInputSwitchApiCall;
    class ShowUI;
    class Startup;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculatePosition@InputSwitchTelemetry@@SAXAEBUtagRECT@@0AEBUtagPOINT@@_N@Z
    static void CalculatePosition(tagRECT const &, tagRECT const &, tagPOINT const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIMEConversionModeString@InputSwitchTelemetry@@SAPEBDK@Z
    static char const * GetIMEConversionModeString(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@InputSwitchTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDisabledImeModeIconClick@InputSwitchTelemetry@@SAXPEAUHWND__@@AEAV?$CLocalSimpleArray@PEAVCInputProfileInfo@@$0PPPPPPPO@@@I@Z
    static void LogDisabledImeModeIconClick(HWND__*, WindissectOpaque &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogImeModeIconClick_@InputSwitchTelemetry@@QEBAX_N@Z
    void LogImeModeIconClick_(bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogInputSwitched_@InputSwitchTelemetry@@QEBAXHPEBG00000000_N1111111@Z
    void LogInputSwitched_(int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, bool, bool, bool, bool, bool, bool, bool, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOpenSettingsCpl_@InputSwitchTelemetry@@QEBAXXZ
    void LogOpenSettingsCpl_() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTsfActiveInputModeChanged_@InputSwitchTelemetry@@QEBAXPEBG@Z
    void LogTsfActiveInputModeChanged_(unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTsfInputModeListChanged_@InputSwitchTelemetry@@QEBAXPEBG@Z
    void LogTsfInputModeListChanged_(unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogZeroInputProfilesFromTsf_@InputSwitchTelemetry@@QEBAXXZ
    void LogZeroInputProfilesFromTsf_() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Instance@InputSwitchTelemetry@@KAPEAV1@XZ
    static InputSwitchTelemetry * Instance();
};

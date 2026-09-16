#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 5 member(s).
namespace InputSwitchTelemetry {
class HideUI {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@HideUI@InputSwitchTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HideUI@InputSwitchTelemetry@@QEAA@XZ
    ~HideUI();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@HideUI@InputSwitchTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@HideUI@InputSwitchTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputSwitchTelemetry

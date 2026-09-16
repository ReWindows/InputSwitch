#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 5 member(s).
namespace InputSwitchTelemetry {
class ActivateProfile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostponedActivate@ActivateProfile@InputSwitchTelemetry@@QEAAXXZ
    void PostponedActivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ActivateProfile@InputSwitchTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivateProfile@InputSwitchTelemetry@@QEAA@XZ
    ~ActivateProfile();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ActivateProfile@InputSwitchTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ActivateProfile@InputSwitchTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputSwitchTelemetry

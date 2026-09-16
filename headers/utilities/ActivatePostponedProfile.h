#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 3 member(s).
namespace InputSwitchTelemetry {
class ActivatePostponedProfile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ActivatePostponedProfile@InputSwitchTelemetry@@QEAAXXZ
    void StartActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ActivatePostponedProfile@InputSwitchTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ActivatePostponedProfile@InputSwitchTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputSwitchTelemetry

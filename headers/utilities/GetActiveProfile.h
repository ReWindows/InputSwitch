#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 4 member(s).
namespace InputSwitchTelemetry {
class GetActiveProfile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetActiveProfile@InputSwitchTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetActiveProfile@InputSwitchTelemetry@@QEAA@XZ
    ~GetActiveProfile();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetActiveProfile@InputSwitchTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetActiveProfile@InputSwitchTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputSwitchTelemetry

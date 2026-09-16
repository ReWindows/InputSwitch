#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 7 member(s).
namespace InputSwitchTelemetry {
class GetEnabledInputProfiles {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetEnabledInputProfiles@InputSwitchTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetEnabledInputProfiles@InputSwitchTelemetry@@QEAA@XZ
    ~GetEnabledInputProfiles();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetEnabledInputProfiles@InputSwitchTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetEnabledInputProfiles@InputSwitchTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputSwitchTelemetry

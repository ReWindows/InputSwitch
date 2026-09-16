#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 5 member(s).
namespace InputSwitchTelemetry {
class RetryAfterZeroInputProfilesFromTsf {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RetryAfterZeroInputProfilesFromTsf@InputSwitchTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RetryAfterZeroInputProfilesFromTsf@InputSwitchTelemetry@@QEAA@XZ
    ~RetryAfterZeroInputProfilesFromTsf();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RetryAfterZeroInputProfilesFromTsf@InputSwitchTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RetryAfterZeroInputProfilesFromTsf@InputSwitchTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputSwitchTelemetry

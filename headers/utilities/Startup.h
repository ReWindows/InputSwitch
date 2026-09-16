#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 4 member(s).
namespace InputSwitchTelemetry {
class Startup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Startup@InputSwitchTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Startup@InputSwitchTelemetry@@QEAA@XZ
    ~Startup();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Startup@InputSwitchTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Startup@InputSwitchTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputSwitchTelemetry

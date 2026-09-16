#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 5 member(s).
namespace InputSwitchTelemetry {
class ConnectToTsf {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ConnectToTsf@InputSwitchTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ConnectToTsf@InputSwitchTelemetry@@QEAAXJH@Z
    void Stop(long, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConnectToTsf@InputSwitchTelemetry@@QEAA@XZ
    ~ConnectToTsf();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ConnectToTsf@InputSwitchTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ConnectToTsf@InputSwitchTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputSwitchTelemetry

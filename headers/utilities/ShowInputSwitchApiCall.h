#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 5 member(s).
namespace InputSwitchTelemetry {
class ShowInputSwitchApiCall {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ShowInputSwitchApiCall@InputSwitchTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShowInputSwitchApiCall@InputSwitchTelemetry@@QEAA@XZ
    ~ShowInputSwitchApiCall();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ShowInputSwitchApiCall@InputSwitchTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ShowInputSwitchApiCall@InputSwitchTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputSwitchTelemetry

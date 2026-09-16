#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 4 member(s).
namespace InputSwitchTelemetry {
class ShowRejuvenatedInputSwitchApiCall {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ShowRejuvenatedInputSwitchApiCall@InputSwitchTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShowRejuvenatedInputSwitchApiCall@InputSwitchTelemetry@@QEAA@XZ
    ~ShowRejuvenatedInputSwitchApiCall();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ShowRejuvenatedInputSwitchApiCall@InputSwitchTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ShowRejuvenatedInputSwitchApiCall@InputSwitchTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputSwitchTelemetry

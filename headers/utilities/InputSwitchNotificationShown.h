#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 4 member(s).
namespace InputSwitchTelemetry {
class InputSwitchNotificationShown {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InputSwitchNotificationShown@InputSwitchTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputSwitchNotificationShown@InputSwitchTelemetry@@QEAA@XZ
    ~InputSwitchNotificationShown();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InputSwitchNotificationShown@InputSwitchTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InputSwitchNotificationShown@InputSwitchTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputSwitchTelemetry

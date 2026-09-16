#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 5 member(s).
namespace InputSwitchTelemetry {
class ShowUI {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ShowUI@InputSwitchTelemetry@@QEAAXPEBGPEBUtagRECT@@@Z
    void StartActivity(unsigned short const *, tagRECT const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShowUI@InputSwitchTelemetry@@QEAA@XZ
    ~ShowUI();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ShowUI@InputSwitchTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ShowUI@InputSwitchTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputSwitchTelemetry

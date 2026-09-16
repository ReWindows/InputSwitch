#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 20 member(s).
namespace Windows::Internal::Shell::InputSwitcher {
class XamlInputSwitchHost {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlInputSwitchHost@InputSwitcher@Shell@Internal@Windows@@QEAA@XZ
    XamlInputSwitchHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?active_profile_index@XamlInputSwitchHost@InputSwitcher@Shell@Internal@Windows@@QEAAXI@Z
    void active_profile_index(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dispose@XamlInputSwitchHost@InputSwitcher@Shell@Internal@Windows@@QEAAXXZ
    void dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?filter_message@XamlInputSwitchHost@InputSwitcher@Shell@Internal@Windows@@QEAA_NPEBUtagMSG@@@Z
    bool filter_message(tagMSG const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?hide@XamlInputSwitchHost@InputSwitcher@Shell@Internal@Windows@@QEAAXXZ
    void hide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?init_host@XamlInputSwitchHost@InputSwitcher@Shell@Internal@Windows@@QEAAXXZ
    void init_host();
    // Category: Method | Source: PDB Internal
    // Symbol: ?model@XamlInputSwitchHost@InputSwitcher@Shell@Internal@Windows@@QEAA?AUInputExperienceHostModel@3UI@WindowsUdk@winrt@@XZ
    WindissectOpaque model();
    // Category: Method | Source: PDB Internal
    // Symbol: ?selected_profile_index@XamlInputSwitchHost@InputSwitcher@Shell@Internal@Windows@@QEAAXI@Z
    void selected_profile_index(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_theme@XamlInputSwitchHost@InputSwitcher@Shell@Internal@Windows@@QEAAXW4COLORTHEME@@@Z
    void set_theme(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?start_host@XamlInputSwitchHost@InputSwitcher@Shell@Internal@Windows@@QEAA_NXZ
    bool start_host();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlInputSwitchHost@InputSwitcher@Shell@Internal@Windows@@QEAA@XZ
    ~XamlInputSwitchHost();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?active_profile_change_request@XamlInputSwitchHost@InputSwitcher@Shell@Internal@Windows@@AEAAXUInputExperienceHostModel@3UI@WindowsUdk@winrt@@UIInspectable@Foundation@59@@Z
    void active_profile_change_request(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?calculate_window_position@XamlInputSwitchHost@InputSwitcher@Shell@Internal@Windows@@AEAA?AUtagPOINT@@XZ
    tagPOINT calculate_window_position();
    // Category: Method | Source: PDB Internal
    // Symbol: ?convert_profiles@XamlInputSwitchHost@InputSwitcher@Shell@Internal@Windows@@AEAAXXZ
    void convert_profiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?is_shown_changed@XamlInputSwitchHost@InputSwitcher@Shell@Internal@Windows@@AEAAXAEBUInputSwitcherExtension@3UI@WindowsUdk@winrt@@AEBUIInspectable@Foundation@59@@Z
    void is_shown_changed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?load_xaml_content@XamlInputSwitchHost@InputSwitcher@Shell@Internal@Windows@@AEAA_NXZ
    bool load_xaml_content();
    // Category: Method | Source: PDB Internal
    // Symbol: ?populate_settings@XamlInputSwitchHost@InputSwitcher@Shell@Internal@Windows@@AEAAXXZ
    void populate_settings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?send_active_profile_changed_message@XamlInputSwitchHost@InputSwitcher@Shell@Internal@Windows@@AEAA_NXZ
    bool send_active_profile_changed_message();
    // Category: Method | Source: PDB Internal
    // Symbol: ?show_island@XamlInputSwitchHost@InputSwitcher@Shell@Internal@Windows@@AEAA_NXZ
    bool show_island();
    // Category: Method | Source: PDB Internal
    // Symbol: ?update_bounds@XamlInputSwitchHost@InputSwitcher@Shell@Internal@Windows@@AEAAXXZ
    void update_bounds();
};
} // namespace Windows::Internal::Shell::InputSwitcher

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputSwitch.dll by Windissect. 9 member(s).
class input_profile_settings {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomStringFromReg@input_profile_settings@@YA_NGPEAGI@Z
    bool GetCustomStringFromReg(unsigned short, unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSessionUserSid@input_profile_settings@@YA_NAEAV?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z
    bool GetSessionUserSid(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTsfImeDefaultLayout@input_profile_settings@@YAIG@Z
    unsigned int GetTsfImeDefaultLayout(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HKEY_SESSION_USER@input_profile_settings@@YAPEAUHKEY__@@XZ
    HKEY__* HKEY_SESSION_USER();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HexStringToUint@input_profile_settings@@YA_NPEBGPEAI1@Z
    bool HexStringToUint(unsigned short const *, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCJKLangId@input_profile_settings@@YA_NG@Z
    bool IsCJKLangId(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KlidFromHkl@input_profile_settings@@YAIPEAUHKL__@@@Z
    unsigned int KlidFromHkl(HKL__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseCustomString@input_profile_settings@@YAJPEBGPEA_KPEAU_GUID@@2PEAI@Z
    long ParseCustomString(unsigned short const *, uint64_t *, _GUID *, _GUID *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegOpenSessionDataKey@input_profile_settings@@YAJKKPEAPEAUHKEY__@@@Z
    long RegOpenSessionDataKey(unsigned long, unsigned long, HKEY__* *);
};

#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"kolmiSFCM_main", "CIUSMC_Uniforms", "rhsusf_c_troops", "A3_Characters_F", "CIUSMC_MAW_Vests", "CIUSMC_Vests", "rhsusf_main_loadorder", "ibc_main"};
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"

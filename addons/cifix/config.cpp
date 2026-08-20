#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"kolmiSFCM_main", "26th_USMC_Uniforms", "rhsusf_c_troops", "A3_Characters_F", "26th_USMC_MAW_Vests", "26th_USMC_Vests", "rhsusf_main_loadorder", "ibc_main"};
        author = "kolmipilot";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"

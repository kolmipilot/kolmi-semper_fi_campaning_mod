#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"kolmiSFCM_ArsenalAddModule","kolmiSFCM_ArsenalLoaderModule","kolmiSFCM_TeleportModule", "kolmiSFCM_VehicleLoadout", "kolmiSFCM_mrzr4_d_inf"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "kolmiSFCM_main",
            "ace_interact_menu",
            "ace_main"
        };
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgAmmo.hpp"

class CfgVehicles {
class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Default;
            class GVAR(codeBig): Default {
                control = "EditCodeMulti5";
                typeName = "STRING";
                expression = "_this setVariable ['%s', compileFinal _value];";
                validate = "none";
                // these seem buggy, _this is a control during validation and breaks it
                // validate = "expression";
                // validate = "condition";
            };
            class GVAR(codeSmall): GVAR(codeBig) {
                control = "EditCodeMulti3";
            };
        };
        class ModuleDescription;
    };

    class kolmiSFCM_ArsenalAddModule: Module_F {
        scope = 2;
        side=7;
        displayName = CSTRING(ArsenalAddModule_Displayname);
        category = QEGVAR(main,CATSFCM);
        function = QFUNC(ArsenalAddModule);
        isTriggerActivated = 0;
        functionPriority = 1;
        isGlobal = 0;

        class ModuleDescription: ModuleDescription {
            description = CSTRING(ArsenalAddModule_description);
            sync[] = {"LocationArea_F"};

            class LocationArea_F {
                description[] = {
					"Sync with units that loadout will be added to arsenal",
					"Can be synced with many units, it is recommended to sync with only uniqe units"
				};
                position = 0;
                optional = 0;
                duplicate = 1;
                synced[] = {"AnyPerson"};
            };
        };
    };
    class kolmiSFCM_TeleportModule: Module_F {
        scope = 2;
        side=7;
        displayName = CSTRING(TeleportModule_Displayname);
        category = QEGVAR(main,CATSFCM);
        function = QFUNC(TeleportModule);
        isTriggerActivated = 0;
        functionPriority = 1;
        isGlobal = 0;

        class ModuleDescription: ModuleDescription {
            description = CSTRING(TeleportModule_description);
            sync[] = {"LocationArea_F"};

            class LocationArea_F {
                description[] = {
					"Sync with objects (e.g. a flag) that will get the Teleport to commander action"
				};
                position = 0;
                optional = 0;
                duplicate = 1;
                synced[] = {"Anything"};
            };
        };
    };
    class kolmiSFCM_ArsenalLoaderModule: Module_F {
        scope = 2;
        side=7;
        displayName = CSTRING(ArsenalLoaderModule_Displayname);
        category = QEGVAR(main,CATSFCM);
        function = QFUNC(ArsenalLoaderModule);
        isTriggerActivated = 0;
        functionPriority = 2;
        isGlobal = 0;

        class ModuleDescription: ModuleDescription {
            description = CSTRING(ArsenalLoaderModule_description);
            sync[] = {"LocationArea_F"};

            class LocationArea_F {
                description[] = {
					"Sync with objects that acts as arsenal"
				};
                position = 0;
                optional = 0;
                duplicate = 1;
                synced[] = {"Anything"};
            };
        };
    };
    class kolmiSFCM_VehicleLoadout: Module_F {
        scope = 2;
        side=7;
        displayName = CSTRING(VehicleLoadoutModule_Displayname);
        category = QEGVAR(main,CATSFCM);
        function = QFUNC(VehicleLoadoutModule);
        isTriggerActivated = 0;
        functionPriority = 2;
        isGlobal = 0;

        class ModuleDescription: ModuleDescription {
            description = CSTRING(VehicleLoadoutModule_description);
            sync[] = {"LocationArea_F"};

            class LocationArea_F {
                description[] = {
					"Sync with vehicles that will get the loadout added to them"
				};
                position = 0;
                optional = 0;
                duplicate = 1;
                synced[] = {"AnyVehicle"};
            };
        };
    };
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class GVAR(ScopeSelector) {
                displayName = CSTRING(ScopeSelectorActions);
                icon = "";
                class GVAR(ScopeSelectorEotech) {
                    displayName = CSTRING(ScopeEotech);
                    condition = "[_player] call kolmiSFCM_arsenal_fnc_canSwitchScope";
                    exceptions[] = {"isNotSwimming"};
                    statement = "[_player, ""CIUSMC_EXPS""] call kolmiSFCM_arsenal_fnc_SwitchScope";
                    showDisabled = 0;
                    icon = "";
                };
                class GVAR(ScopeSelectorEotechMagnifier) {
                    displayName = CSTRING(ScopeEotechMaginifier);
                    condition = "[_player] call kolmiSFCM_arsenal_fnc_canSwitchScope";
                    exceptions[] = {"isNotSwimming"};
                    statement = "[_player, ""CIUSMC_G33_EXPS_UP""] call kolmiSFCM_arsenal_fnc_SwitchScope";
                    showDisabled = 0;
                    icon = "";
                };
                class GVAR(ScopeSelectorVcog) {
                    displayName = CSTRING(ScopeVcog);
                    condition = "[_player] call kolmiSFCM_arsenal_fnc_canSwitchScope";
                    exceptions[] = {"isNotSwimming"};
                    statement = "[_player, ""CIUSMC_optic_VCOG""] call kolmiSFCM_arsenal_fnc_SwitchScope";
                    showDisabled = 0;
                    icon = "";
                };
                class GVAR(ScopeSelectorAcog) {
                    displayName = CSTRING(ScopeAcog);
                    condition = "[_player] call kolmiSFCM_arsenal_fnc_canSwitchScope";
                    exceptions[] = {"isNotSwimming"};
                    statement = "[_player, ""rhsusf_acc_ACOG_RMR""] call kolmiSFCM_arsenal_fnc_SwitchScope";
                    showDisabled = 0;
                    icon = "";
                };
                class GVAR(ScopeSelectorLeupoldTS30A2) {
                    displayName = CSTRING(ScopeLeupoldTS30A2);
                    condition = "([_player] call kolmiSFCM_arsenal_fnc_canSwitchScope) && _player isKindOf ""B_soldier_M_F""";
                    exceptions[] = {"isNotSwimming"};
                    statement = "[_player, ""CIUSMC_Optic_TS30A2""] call kolmiSFCM_arsenal_fnc_SwitchScope";
                    showDisabled = 0;
                    icon = "";
                };
            };
    };
};
    class All;
    class AllVehicles: All {};
    class Land: AllVehicles {};
    class LandVehicle: Land {};
    class Car: LandVehicle {};
    class Car_F: Car {};
    class MRAP_01_base_F: Car_F {};
    class rhsusf_mrzr_base: MRAP_01_base_F {
        maximumLoad = 4000;
    };
    class rhsusf_mrzr4_d: rhsusf_mrzr_base {};
    class rhsusf_mrzr4_d_mud: rhsusf_mrzr4_d {};
    class rhsusf_mrzr4_w_mud: rhsusf_mrzr4_d_mud {};
    class kolmiSFCM_mrzr4_d_inf: rhsusf_mrzr4_d {};
};

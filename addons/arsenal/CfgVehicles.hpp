class CfgVehicles {
class Logic;
    class Module_F: Logic
    {
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
};

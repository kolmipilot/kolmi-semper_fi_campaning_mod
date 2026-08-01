class CfgVehicles {
class Logic;
    class Module_F: Logic
    {
        class AttributesBase {};
        class ModuleDescription;
    };

    class kolmiSFCM_respawnConfModule: Module_F {
        scope = 2;
        side=7;
        displayName = CSTRING(RespawnConfModule_Displayname);
        category = QEGVAR(main,CATSFCM);
        function = QFUNC(respawnConfModule);
        isTriggerActivated = 0;
        functionPriority = 1;
        isGlobal = 0;

        class Arguments: AttributesBase{

            class Times
            {
                displayName = CSTRING(respTime);
                tooltip = CSTRING(respTime_dcs);
                typeName = "NUMBER";
                defaultValue = 300;
            };
            class Tickets
            {
                displayName = CSTRING(repTickets);
                tooltip = CSTRING(repTickets_dcs);
                typeName = "NUMBER";
                defaultValue = 2;
            };
            };

            class ModuleDescription: ModuleDescription {
            description = CSTRING(RespawnConfModule_description);
            sync[] = {"LocationArea_F"};

            class LocationArea_F {
                position = 0;
                optional = 0;
                duplicate = 1;
                synced[] = {"Anything"};
            };
        };
    };
};

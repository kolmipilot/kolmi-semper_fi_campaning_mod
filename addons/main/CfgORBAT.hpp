class CfgORBAT
{
    class MLR_Regiment
    {
        id = 1;
        idType = 0;
        type = "Infantry";
        side = "West";
        size = "Regiment";
        commander = "Smith";
        commanderRank = "Colonel";
        text = "Marine Littoral Regiment";
        textShort = "MLR";
        description = "Flexible littoral force with combat, AA, and logistics components.";
        color = "ColorWEST";
        texture = "a3\ui_f_orange\data\displays\rscdisplayorangechoice\faction_nato_ca.paa";
        class LCT
        {
            id = 2;
            idType = 0;
            type = "Infantry";
            side = "West";
            size = "Battalion";
            commander = "Reyes";
            commanderRank = "Major";
            text = "Littoral Combat Team";
            textShort = "LCT";
            description = "Core combat team: infantry companies and a missile battery.";
            texture = "a3\ui_f_orange\data\displays\rscdisplayorangechoice\faction_nato_ca.paa";

            class HQ
            {
                id = 21;
                idType = 0;
                type = "HQ";
                side = "West";
                size = "Company";
                commander = "Morgan";
                commanderRank = "Captain";
                text = "HQ Company";
                textShort = "HQ";
                description = "Command, communications, recon, UAVs.";
            };

            class Infantry_A
            {
                id = 22;
                idType = 0;
                type = "Infantry";
                side = "West";
                size = "Company";
                commander = "Adams";
                commanderRank = "Captain";
                text = "Infantry Company A";
                textShort = "A Co.";
                description = "Light infantry company for littoral operations.";

                class Platoon_1
                {
                    id = 221;
                    idType = 0;
                    type = "Infantry";
                    side = "West";
                    size = "Platoon";
                    commander = "Carter";
                    commanderRank = "Lieutenant";
                    text = "Platoon 1";
                    textShort = "Plt 1";
                    description = "First platoon of Infantry Company A.";
                };
                class Platoon_2
                {
                    id = 222;
                    idType = 0;
                    type = "Infantry";
                    side = "West";
                    size = "Platoon";
                    commander = "Thompson";
                    commanderRank = "Lieutenant";
                    text = "Platoon 2";
                    textShort = "Plt 2";
                    description = "Second platoon of Infantry Company A.";
                };
                class Platoon_3
                {
                    id = 223;
                    idType = 0;
                    type = "Infantry";
                    side = "West";
                    size = "Platoon";
                    commander = "Garcia";
                    commanderRank = "Lieutenant";
                    text = "Platoon 3";
                    textShort = "Plt 3";
                    description = "Third platoon of Infantry Company A.";
                };
            };

            class Infantry_B
            {
                id = 23;
                idType = 0;
                type = "Infantry";
                side = "West";
                size = "Company";
                commander = "Johnson";
                commanderRank = "Captain";
                text = "Infantry Company B";
                textShort = "B Co.";
                description = "Light infantry company for littoral operations.";
            };

            class Infantry_C
            {
                id = 24;
                idType = 0;
                type = "Infantry";
                side = "West";
                size = "Company";
                commander = "Lee";
                commanderRank = "Captain";
                text = "Infantry Company C";
                textShort = "C Co.";
                description = "Light infantry company for littoral operations.";
            };

            class Missile_Battery
            {
                id = 25;
                idType = 0;
                type = "Artillery";
                side = "West";
                size = "Company";
                commander = "Williams";
                commanderRank = "Captain";
                text = "Missile Battery (NMESIS)";
                textShort = "Missile Btry.";
                description = "Naval Strike Missile battery providing anti-ship firepower.";
            };
            class Combat_Engineer
            {
                id = 25;
                idType = 0;
                type = "Infantry";
                side = "West";
                size = "Platoon";
                commander = "Davis";
                commanderRank = "Lieutenant";
                text = "Combat Engineer Platoon";
                textShort = "Engr. Plt.";
                description = "Combat engineers for fortifications, demolitions, and obstacle breaching.";
            };
        };

    class LAAB{
        id = 3;
        idType = 0;
        type = "Artillery";
        side = "West";
        size = "Battalion";
        commander = "Brown";
        commanderRank = "Colonel";
        text = "Littoral Anti-Air Battalion";
        textShort = "LAAB";
        description = "Provides air defense coverage for the MLR with Stinger and NASAMS systems.";
        color = "ColorWEST";
        texture = "a3\ui_f_orange\data\displays\rscdisplayorangechoice\faction_nato_ca.paa";
        class HQ{
            id = 31;
            idType = 0;
            type = "HQ";
            side = "West";
            size = "Company";
            commander = "Wilson";
            commanderRank = "Captain";
            text = "HQ Company";
            textShort = "HQ";
            description = "Hedquarters and service company.";
        };
        class MADIS_Battery{
            id = 32;
            idType = 0;
            type = "Artillery";
            side = "West";
            size = "Company";
            commander = "Martinez";
            commanderRank = "Captain";
            text = "MADIS Battery";
            textShort = "MADIS Btry.";
            description = "The Marine Air Defense Integrated System (MADIS) is a modern USMC ground-based air defense system. It consists of two vehicles: Mk1 (for engaging aircraft) and Mk2 (for countering drones, radar, and command). The LMADIS version on a Polaris MRZR serves as a mobile C-UAS set and remains in operational use.";
            texture = "\A3\ui_f\data\map\markers\nato\b_antiair.paa";
        };
        class ATC{
            id = 33;
            idType = 0;
            type = "Support";
            side = "West";
            size = "Company";
            commander = "Anderson";
            commanderRank = "Captain";
            text = "Air Control Company";
            textShort = "ATC";
            description = "Provides radar and control for air defense operations.";
        };
        class FARP{
            id = 34;
            idType = 0;
            type = "Service";
            side = "West";
            size = "Company";
            commander = "Taylor";
            commanderRank = "Captain";
            text = "FARP Company";
            textShort = "FARP Co.";
            description = "Forward Arming and Refueling Point company for helicopter support.";
        };
        class MRIC_Battery{
            id = 35;
            idType = 0;
            type = "Artillery";
            side = "West";
            size = "Company";
            commander = "Thomas";
            commanderRank = "Captain";
            text = "MRIC Battery (Iron Dome)";
            textShort = "MRIC Btry.";
            description = "Medium Range Interceptor Company equipped with the Iron Dome air defense system.";
            texture = "\A3\ui_f\data\map\markers\nato\b_antiair.paa";
        };
    }; 
    class LLB{
    id = 4;
    idType = 0;
    type = "Support";
    side = "West";
    size = "Battalion";
    commander = "Jackson";
    commanderRank = "Colonel";
    text = "Littoral Logistics Battalion";
    textShort = "LLB";
    description = "Provides logistics, maintenance, and medical support for the MLR.";
    color = "ColorWEST";
    texture = "\A3\ui_f\data\map\markers\nato\b_maint.paa";
    class HQ{
        id = 41;
        idType = 0;
        type = "HQ";
        side = "West";
        size = "Company";
        commander = "White";
        commanderRank = "Captain";
        text = "HQ Company";
        textShort = "HQ";
        description = "Headquarters and service company.";
    };
    class Logistic_Company_A{
        id = 42;
        idType = 0;
        type = "Support";
        side = "West";
        size = "Company";
        commander = "Harris";
        commanderRank = "Captain";
        text = "Logistic Company A";
        textShort = "Log A";
        description = "Logistics company providing supply and transport support.";
        texture = "\A3\ui_f\data\map\markers\nato\b_maint.paa";
    };
    class Logistic_Company_B{
        id = 42;
        idType = 0;
        type = "Support";
        side = "West";
        size = "Company";
        commander = "Davis";
        commanderRank = "Captain";
        text = "Logistic Company B";
        textShort = "Log B";
        description = "Logistics company providing supply and transport support.";
        texture = "\A3\ui_f\data\map\markers\nato\b_maint.paa";
    };
    class Logistic_Company_C{
        id = 42;
        idType = 0;
        type = "Support";
        side = "West";
        size = "Company";
        commander = "Moore";
        commanderRank = "Captain";
        text = "Logistic Company C";
        textShort = "Log C";
        description = "Logistics company providing supply and transport support.";
        texture = "\A3\ui_f\data\map\markers\nato\b_maint.paa";
    };
};
};
};

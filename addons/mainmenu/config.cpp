#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"kolmiSFCM_main", "A3_Data_F_Enoch_Loadorder","A3_Map_Stratis","A3_Map_Altis","A3_Map_Stratis_Scenes_F","A3_Map_Altis_Scenes_F","A3_Map_VR_Scenes_F","A3_Map_Malden_Scenes_F","A3_Missions_F_Orange","A3_Map_Tanoa_Scenes_F"};
        author = "kolmipilot";
        authors[] = {""};
        VERSION_CONFIG;
    };
};
class RscStandardDisplay;
class RscPicture;
class RscText;
class RscActivePicture;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscActivePictureKeepAspect;

// Main Menu
class RscMainMenuSpotlight: RscControlsGroupNoScrollbars
{
	show = 0;
	onLoad = "";
};
class RscDisplayMain:RscStandardDisplay {
    enableDisplay = 0;
    delete Spotlight;
    class controls {
        class BackgroundSpotlight:RscPicture {
            show=0;
            onload="";
        };
        class BackgroundSpotlightLeft:BackgroundSpotlight {
            show=0;
            onload="";
        };
        class BackgroundSpotlightRight:BackgroundSpotlightLeft {
            show=0;
            onload="";
        };
        class Spotlight1:RscMainMenuSpotlight {
            idc=1021;
            show=0;
            onload="";
        };
        class Spotlight2:RscText {
            idc=1020;
            show=0;
            onload="";
        };
        class Spotlight3:RscMainMenuSpotlight {
            idc=1022;
            show=0;
            onload="";
        };
        class SpotlightPrev:RscActivePictureKeepAspect {
            idc=1060;
            show=0;
            onload="";
        };
        class SpotlightNext:SpotlightPrev {
            show=0;
            onload="";
        };
        class Logo:RscActivePicture {
            text="\z\kolmiSFCM\addons\mainmenu\USMClogo.paa";
            url="";
            tooltip="Join Server";
            onButtonClick=QUOTE(ARR_3([_this,'94.130.68.96',2302]) call (uiNamespace getVariable QQFUNC(join)));
            onload="";
        };
        class LogoApex:Logo {
            show=0;
            onload="";
            text="";
        };
        class infomods:RscControlsGroupNoHScrollbars {
            show=0;
        };
        class infoDLCsOwned:infomods {
            show=0;
        };
        class infoDLCs:infoDLCsOwned {
            show=0;
        };
        class infoNews:infomods {
            show=0;
        };
        class infoVersion:infoNews {
            show=0;
        };
        delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
    };
};


class CfgWorlds {
    
	class CAWorld;	// External class reference
	class Altis : CAWorld {
		cutscenes[] = {"kolmimainmenu"};
	};

	class Stratis : CAWorld {
		cutscenes[] = {"kolmimainmenu"};
	};
    
	class Enoch : CAWorld {
		cutscenes[] = {"kolmimainmenu"};
	};

	class hellanmaa : CAWorld {
		cutscenes[] = {"kolmimainmenu"};
	};
	
	class hellanmaaw : CAWorld {
		cutscenes[] = {"kolmimainmenu"};
	};

	class VR : CAWorld {
		cutscenes[] = {"kolmimainmenu"};
	};
    
	initWorld = "VR";
	demoWorld = "VR";
};

class CfgMissions
{
	class Cutscenes
	{
        
		class kolmimainmenu // Class referenced in 'cutscenes' property in CfgWorlds
		{
			directory = "z\kolmiSFCM\addons\mainmenu\kolmimenu.vr"; // Path to scenario with the scene
		};
	};
};

#include "CfgEventHandlers.hpp"

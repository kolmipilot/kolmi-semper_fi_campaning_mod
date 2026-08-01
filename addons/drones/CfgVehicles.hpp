class CfgVehicles {
	class Helicopter;
	class Helicopter_Base_F: Helicopter {};
	class UAV_01_base_F: Helicopter_Base_F{
		class EventHandlers;
	};

	class UAV_06_base_F: Helicopter_Base_F {
		class EventHandlers;
	};

	class B_UAV_06_F: UAV_06_base_F {
		class EventHandlers: EventHandlers {
			class lethalDarter {
				init = "[_this select 0, 4] spawn kolmiSFCM_drones_fnc_makeGrenadeDrone;";
			};
		};
	};
	
	class B_UAV_01_F: UAV_01_base_F {
		class EventHandlers:EventHandlers {
			class lethalDarter {
				init = "[_this select 0] spawn kolmiSFCM_drones_fnc_makeGrenadeDrone;";
			};
		};
	};

	class O_UAV_01_F: UAV_01_base_F {};
	class I_UAV_01_F: UAV_01_base_F {};
	class O_UAV_06_F: UAV_06_base_F {
		class EventHandlers: EventHandlers {
			class lethalDarter {
				init = "[_this select 0, 4] spawn kolmiSFCM_drones_fnc_makeGrenadeDrone;";
			};
		};
	};
	class I_UAV_06_F: UAV_06_base_F {
		class EventHandlers: EventHandlers {
			class lethalDarter {
				init = "[_this select 0, 4] spawn kolmiSFCM_drones_fnc_makeGrenadeDrone;";
			};
		};
	};

	class B_UAV_01_F_Armed: B_UAV_01_F {
		author = "Dankan37";
		displayName = "AR-2 Darter (Grenade)";

		class EventHandlers:EventHandlers {
			class lethalDarter {
				init = "[_this select 0] spawn kolmiSFCM_drones_fnc_initDrone;";
			};
		};
	};
};

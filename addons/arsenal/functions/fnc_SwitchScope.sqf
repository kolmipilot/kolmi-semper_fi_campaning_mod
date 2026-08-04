#include "..\script_component.hpp"
/*
 *	Author: kolmipilot
 *	switches scope
 *	
 *	Arguments:
 *	None
 *	
 *	Return Value:
 *	None
 *	
 *	Example:
 *	[player] call kolmiSFCM_arsenal_fnc_SwitchScope
 *	
 * 	Public: No
 */

params ["_player", "_scope"];

private _currentOptic = (primaryWeaponItems _player) select 2;
if (_currentOptic != "") then {
    _player removePrimaryWeaponItem _currentOptic;
};
_player addPrimaryWeaponItem _scope;

#include "..\script_component.hpp"
/*
 *	Author: kolmipilot
 *	check if player can switch scope
 *	
 *	Arguments:
 *	None
 *	
 *	Return Value:
 *	None
 *	
 *	Example:
 *	[player] call kolmiSFCM_arsenal_fnc_canSwitchScope
 *	
 * 	Public: No
 */

params ["_player"];

private _currentOptic = (primaryWeaponItems _player) select 2;
(_currentOptic != "" && _player distance getMarkerPos "respawn" < 100) 

  

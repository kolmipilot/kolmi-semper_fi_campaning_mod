#include "..\script_component.hpp"
/*
 *	Author: kolmipilot
 *	scope selector module
 *	
 *	Arguments:
 *	None
 *	
 *	Return Value:
 *	None
 *	
 *	Example:
 *	[player] call kolmiSFCM_arsenal_fnc_ScopeSelectorModule
 *	
 * 	Public: No
 */

params [["_logic", objNull, [objNull]], ["_units", [], [[]]], ["_activated", true, [true]]];

if (!isServer) exitWith {};
private _unit = _units select 0;
private _class = typeOf _unit;
private _filter = _logic getVariable QGVAR(ScopesClasses);
private _action = ["Scope Selector", "Scope Selector", "", {
    params ["_target", "_unit"];
    hint format ["Scope Selector module activated for %1", _unit];
}, {true}] call ace_interact_menu_fnc_createAction;
[_class, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToClass;

{
    _action = [getText(configFile >> "CfgWeapons" >> _x >> "displayName"), getText(configFile >> "CfgWeapons" >> _x >> "displayName"), "", {
        params ["_target", "_unit", "_class"];
        hint format ["klasy kurwa jego max %1", _class];
        private _currentOptic = (primaryWeaponItems _unit) select 2;
        if (_currentOptic != "") then {
            _unit removePrimaryWeaponItem _currentOptic;
        };
    }, {true}, {}, [_x]] call ace_interact_menu_fnc_createAction;
    [_class, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToClass;
} forEach _filter;

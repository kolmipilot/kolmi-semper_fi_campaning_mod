#include "..\script_component.hpp"
/*
 * Author: kolmipilot
 * Adds equipment from synchronized objects to the arsenal.
 * Initiates Custom Wave Respawn System.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Nothing
 *
 * Public: Yes/No ?
 */


params [["_logic", objNull, [objNull]], ["_units", [], [[]]], ["_activated", true, [true]]];

if (!isServer) exitWith {};

private _roles = missionNamespace getVariable [QGVAR(role), []];
private _arsenal = missionNamespace getVariable [QGVAR(arsenal), []];
{
    if (isNull _x) exitWith {};
    private _loadout = getUnitLoadout [_x, true];
    private _role = roleDescription _x;
    _role = _role splitString "@";
    _role = _role select 0;
    _arsenal pushBack [_role, _loadout];
    _roles pushBack _role;
} forEach (_units);
_arsenal = _arsenal arrayIntersect _arsenal;
_roles = _roles arrayIntersect _roles;
missionNamespace setVariable [QGVAR(arsenal), _arsenal];

missionNamespace setVariable [QGVAR(role), _roles];

// Broadcast for any clients/JIP players that read missionNamespace
publicVariable QGVAR(arsenal);
publicVariable QGVAR(role);

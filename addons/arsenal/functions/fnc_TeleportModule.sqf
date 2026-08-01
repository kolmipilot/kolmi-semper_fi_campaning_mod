#include "..\script_component.hpp"
/*
 * Author: kolmipilot
 * Adds a "Teleport to commander" action to synced objects (e.g. a flag).
 * Uses fnc_safeReinforcment to teleport the caller to a safe position
 * near their group leader (commander), away from nearby enemies.
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

{
    _x call FUNC(safeReinforcment);
} forEach (_units);

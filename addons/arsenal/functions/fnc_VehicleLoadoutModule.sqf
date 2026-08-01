#include "..\script_component.hpp"
/*
 * Author: kolmipilot
 * Adds class based event handler for every vehicle to add configured loadouts to every vehicle of given synced class
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Nothing
 *
 * Public: No
 */


params [["_logic", objNull, [objNull]], ["_units", [], [[]]], ["_activated", true, [true]]];

if (!isServer) exitWith {};

// Capture cargo from synced vehicles, once per unique class
private _vehicleLoadouts = [];
private _seenClasses = [];
{
    private _veh = _x;
    private _class = typeOf _veh;

    if (!(_class in _seenClasses)) then {
        _seenClasses pushBack _class;

        // get*Cargo returns [classnames, counts]
        _vehicleLoadouts pushBack [
            _class,
            getItemCargo _veh,
            getMagazineCargo _veh,
            getWeaponCargo _veh,
            getBackpackCargo _veh
        ];
    };
} forEach (_units);

missionNamespace setVariable [QGVAR(VehicleLoadouts), _vehicleLoadouts];
publicVariable QGVAR(VehicleLoadouts);

// Register a class-based init event handler per captured class
{
    _x params ["_class"];

    [_class, "init", {
        params ["_veh"];
        if (!local _veh) exitWith {};

        private _loadouts = missionNamespace getVariable [QGVAR(VehicleLoadouts), []];
        private _matching = _loadouts select {(_x select 0) == (typeOf _veh)};

        if (_matching isEqualTo []) exitWith {};
        private _loadout = _matching select 0;

        // Reset the vehicle to a clean state before applying the configured loadout
        clearWeaponCargoGlobal _veh;
        clearMagazineCargoGlobal _veh;
        clearItemCargoGlobal _veh;
        clearBackpackCargoGlobal _veh;

        // Entry layout: [class, items, magazines, weapons, backpacks]
        // Each cargo slot is [classnames, counts]; apply per item with its count.
        {
            _veh addItemCargoGlobal [_x, ((_loadout select 1) select 1) select _forEachIndex];
        } forEach ((_loadout select 1) select 0);

        {
            _veh addMagazineCargoGlobal [_x, ((_loadout select 2) select 1) select _forEachIndex];
        } forEach ((_loadout select 2) select 0);

        {
            _veh addWeaponCargoGlobal [_x, ((_loadout select 3) select 1) select _forEachIndex];
        } forEach ((_loadout select 3) select 0);

        {
            _veh addBackpackCargoGlobal [_x, ((_loadout select 4) select 1) select _forEachIndex];
        } forEach ((_loadout select 4) select 0);
    }, true, [], true] call CBA_fnc_addClassEventHandler;
} forEach _vehicleLoadouts;
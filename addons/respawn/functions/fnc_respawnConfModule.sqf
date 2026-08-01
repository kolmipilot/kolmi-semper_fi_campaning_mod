#include "..\script_component.hpp"
/*
 * Author: D.Anderson
 * Moidfied by: kolmipilot
 * Executed only on server when mission is started. 
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

 params ["_logic", "_units", "_activated"];

private _times = _logic getVariable ["Times", 60];
private _tickets = _logic getVariable ["Tickets", 2];

if (count _units == 0) then {_units pushBack _logic;};

if (!_activated) exitWith {};
if (isServer) then {

    missionNamespace setVariable [QGVAR(Tickets), _tickets];
    missionNamespace setVariable [QGVAR(Times), _times];

};

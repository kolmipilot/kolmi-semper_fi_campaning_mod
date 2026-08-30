#include "..\script_component.hpp"
/*
 * Author: D.Anderson
 * Moidfied by: kolmipilot
 * Executed locally on Player Killed Event
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Nothing
 *
 * Public: No
 */

    /* 
    * Save Loadout, Handle Tickets, Set respawn time, Send state upd > Killed at HH:MM
    */
    params ["_unit", "_killer"];
    private _uid = getPlayerUID _unit;
    private _playerVariable = format ["dAn_Respawn_%1", _uid];
    _playerData = missionNamespace getVariable _playerVariable;

    [[west], [east, resistance, civilian]] call ace_spectator_fnc_updateSides;
    [[1, 2], [0]] call ace_spectator_fnc_updateCameraModes;
    [[-2, -1], [0, 1, 2, 3, 4, 5, 6, 7]] call ace_spectator_fnc_updateVisionModes;

    _respawnTickets = _playerData select 1;

    
        // tickets
        private _startTime = missionNamespace getVariable "dAn_Respawn_MissionStartTime";
        private _killedTime = serverTime - _startTime;
        private _respawnInterval = missionNamespace getVariable [QGVAR(Times), 60];

        _playerData set [5, (alive _unit)];
        missionNamespace setVariable [_playerVariable, _playerData, true];

        //calculate time to respawn
        // TODO: Add have array on missionNamespace to be broadcasted once and then do estimation here
        private _waveNumber = floor(_killedTime / _respawnInterval) + 1;
        private _toRespawn = (_startTime + (_waveNumber * _respawnInterval)) - serverTime;

        if (_respawnTickets > 0) then {
        setPlayerRespawnTime _toRespawn;

        private _msg = format ["[RESPAWN] (Client) INFO: UID: %1, %2 Wave number: %3, Killed time: %4, Time to respawn: %5", _uid, (name _unit), _waveNumber , _killedTime, _toRespawn];
        if(missionNamespace getVariable ["dAn_debug", false]) then {
            _msg remoteExec ["systemChat", 0];
        };
        _msg remoteExec ["diag_log", 2];
    } else {
        // no tickets
        setPlayerRespawnTime 1e10;
        private _msg = format ["[RESPAWN] (Client) INFO: UID: %1, %2 Wave number: %3, Killed time: %4, Player will not respawn", _uid, (name _unit), _waveNumber , _killedTime];
        if(missionNamespace getVariable ["dAn_debug", false]) then {
            _msg remoteExec ["systemChat", 0];
        };
        _msg remoteExec ["diag_log", 2];
    };
